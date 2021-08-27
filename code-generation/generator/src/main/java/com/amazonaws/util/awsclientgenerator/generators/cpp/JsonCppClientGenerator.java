/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Operation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppShapeInformation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import java.nio.charset.StandardCharsets;
import java.util.HashMap;
import java.util.Map;;

public class JsonCppClientGenerator extends CppClientGenerator {

    public JsonCppClientGenerator() throws Exception {
        super();
    }

    @Override
    protected SdkFileEntry generateErrorMarshallerHeaderFile(ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonErrorMarshallerHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sErrorMarshaller.h",
                serviceModel.getMetadata().getProjectName(), serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateModelHeaderFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {

        Shape shape = shapeEntry.getValue();
        if (shape.isException() && !shape.isJsonModeledException())
            return null;

        if (shape.isResult() && shape.hasEventStreamMembers())
            return null;

        //we only want to override json related stuff.
        if (shape.isRequest() || shape.isEnum() || shape.hasEventPayloadMembers() && shape.hasBlobMembers()) {
            return super.generateModelHeaderFile(serviceModel, shapeEntry);
        }

        if (shape.isStructure() && shape.isReferenced()) {
            Template template = null;
            VelocityContext context = createContext(serviceModel);

            if (shape.isResult()) {
                if (shape.hasStreamMembers()) {
                    template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/StreamResultHeader.vm", StandardCharsets.UTF_8.name());
                } else {
                    template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonResultHeader.vm", StandardCharsets.UTF_8.name());
                }
            } else if (shape.isEventStream() && shape.isOutgoingEventStream()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/EventStreamHeader.vm", StandardCharsets.UTF_8.name());
            } else if (shape.isStructure()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonSubObjectHeader.vm", StandardCharsets.UTF_8.name());
            }

            context.put("shape", shape);
            context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
            context.put("CppViewHelper", CppViewHelper.class);

            String fileName = String.format("include/aws/%s/model/%s.h", serviceModel.getMetadata().getProjectName(),
                    shapeEntry.getKey());
            return makeFile(template, context, fileName, true);
        }
        return null;
    }

    @Override
    protected SdkFileEntry generateModelSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {
        Shape shape = shapeEntry.getValue();
        if (shape.isResult() && shape.hasEventStreamMembers())
            return null;

        // if the shape is an event and its content type is "blob" then we don't need a source file, because the whole
        // class is implemented in the header file. See EventHeader.vm
        if (shape.isEvent() && shape.getEventPayloadType().equals("blob"))
            return null;

        if (shape.isException() && !shape.isJsonModeledException())
            return null;

        if (shape.isEventStream())
            return null;

        if (shape.isEnum()) {
            // event-stream input shapes do their serialization via the encoder; So skip generating code for those.
            return super.generateModelSourceFile(serviceModel, shapeEntry);
        }

        if (shape.isStructure() && shape.isReferenced()) {
            Template template;
            VelocityContext context = createContext(serviceModel);

            if (shape.isRequest() && (shape.hasStreamMembers() || shape.hasEventStreamMembers())) {
                if (shape.hasEventStreamMembers()) {
                    HashMap<String, String> headersMap = new HashMap<>(10);
                    headersMap.put("Aws::Http::CONTENT_TYPE_HEADER", "Aws::AMZN_EVENTSTREAM_CONTENT_TYPE");
                    context.put("requestSpecificHeaders", headersMap);
                }
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/StreamRequestSource.vm", StandardCharsets.UTF_8.name());
            }
            else if (shape.isRequest()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonRequestSource.vm", StandardCharsets.UTF_8.name());
            }
            else if (shape.isResult() && shape.hasStreamMembers()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/StreamResultSource.vm", StandardCharsets.UTF_8.name());
            }
            else if (shape.isResult()) {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonResultSource.vm", StandardCharsets.UTF_8.name());
            } else {
                template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonSubObjectSource.vm", StandardCharsets.UTF_8.name());
            }

            for (Map.Entry<String, Operation> opEntry : serviceModel.getOperations().entrySet()) {
                Operation op = opEntry.getValue();
                if (op.getRequest() != null && op.getRequest().getShape().getName() == shape.getName()) {
                    context.put("operation", op);
                    break;
                }
            }

            context.put("shape", shape);
            context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
            context.put("CppViewHelper", CppViewHelper.class);
            context.put("presignerTemplate", "/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonDumpBodyToUrl.vm");

            String fileName = String.format("source/model/%s.cpp", shapeEntry.getKey());

            return makeFile(template, context, fileName, true);
        }
        return null;
    }

    @Override
    protected SdkFileEntry generateClientHeaderFile(final ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonServiceClientHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sClient.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateClientSourceFile(final ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonServiceClientSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("source/%sClient.cpp", serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateEventStreamHandlerSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {
        Shape shape = shapeEntry.getValue();
        if (shape.isRequest()) {
            Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/json/JsonEventStreamHandlerSource.vm", StandardCharsets.UTF_8.name());
            VelocityContext context = createContext(serviceModel);

            for (Map.Entry<String, Operation> opEntry : serviceModel.getOperations().entrySet()) {
                String key = opEntry.getKey();
                Operation op = opEntry.getValue();
                if (op.getRequest() != null && op.getRequest().getShape().getName() == shape.getName() && op.getResult() != null) {
                    if (op.getResult().getShape().hasEventStreamMembers()) {
                        for (Map.Entry<String, ShapeMember> shapeMemberEntry : op.getResult().getShape().getMembers().entrySet()) {
                            if (shapeMemberEntry.getValue().getShape().isEventStream()) {
                                context.put("eventStreamShape", shapeMemberEntry.getValue().getShape());
                                context.put("operation", op);
                                context.put("shape", shape);
                                context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
                                context.put("CppViewHelper", CppViewHelper.class);

                                String fileName = String.format("source/model/%sHandler.cpp", key);
                                return makeFile(template, context, fileName, true);
                            }
                        }
                    }
                }
            }
        }

        return null;
    }
}
