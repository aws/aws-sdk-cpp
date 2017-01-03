/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

package com.amazonaws.util.awsclientgenerator.transform;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.*;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Error;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.*;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import org.apache.commons.lang.WordUtils;

import java.util.*;
import java.util.stream.Collectors;

public class C2jModelToGeneratorModelTransformer {

    private final C2jServiceModel c2jServiceModel;
    Map<String, Shape> shapes;
    Map<String, Operation> operations;
    Set<Error> allErrors;

    public C2jModelToGeneratorModelTransformer(C2jServiceModel c2jServiceModel) {
        this.c2jServiceModel = c2jServiceModel;
    }

    public ServiceModel convert() {
        ServiceModel serviceModel = new ServiceModel();
        serviceModel.setMetadata(convertMetadata());
        serviceModel.setVersion(c2jServiceModel.getVersion());
        serviceModel.setDocumentation(formatDocumentation(c2jServiceModel.getDocumentation(), 3));

        convertShapes();
        convertOperations();
        removeUnreferencedShapes();
        postProcessShapes();

        serviceModel.setShapes(shapes);
        serviceModel.setOperations(operations);
        serviceModel.setServiceErrors(filterOutCoreErrors(allErrors));
        return serviceModel;
    }

    String formatDocumentation(String documentation, int indentDepth) {
        if(documentation != null) {
            String tabString = "";
            for(int i = 0; i < indentDepth; ++i) {
                tabString += " ";
            }
            String wrappedString = WordUtils.wrap(documentation, 80, System.lineSeparator() + tabString + "* ", false);
            return wrappedString.replace("/*", "/ *").replace("*/", "* /");
        }
        return null;
    }

    String addDocCrossLinks(final String documentation, final String uid, final String shapeOrOperationName) {
        if(documentation != null && uid != null) {
            String seeAlsoRef = String.format("<p><h3>See Also:</h3>   <a href=\"http://docs.aws.amazon.com/goto/WebAPI/%s/%s\">AWS API Reference</a></p>",
                     uid, shapeOrOperationName);

            return documentation + seeAlsoRef;
        }
        return documentation;
    }

    void removeUnreferencedShapes() {
        Iterator<String> iterator = shapes.keySet().iterator();
        while (iterator.hasNext()) {
            String key = iterator.next();
            if (!shapes.get(key).isReferenced()) {
                iterator.remove();
            }
        }
    }

    Metadata convertMetadata() {
        C2jMetadata c2jMetadata = c2jServiceModel.getMetadata();

        Metadata metadata = new Metadata();
        metadata.setApiVersion(c2jMetadata.getApiVersion());
        metadata.setConcatAPIVersion(c2jMetadata.getApiVersion().replace("-", ""));
        metadata.setEndpointPrefix(c2jMetadata.getEndpointPrefix());
        metadata.setSigningName(c2jMetadata.getSigningName() != null ? c2jMetadata.getSigningName() : c2jMetadata.getEndpointPrefix());
        metadata.setJsonVersion(c2jMetadata.getJsonVersion());
        metadata.setProtocol(c2jMetadata.getProtocol());
        metadata.setNamespace(c2jMetadata.getServiceAbbreviation());
        metadata.setServiceFullName(c2jMetadata.getServiceFullName());
        metadata.setSignatureVersion(c2jMetadata.getSignatureVersion());
        metadata.setTargetPrefix(c2jMetadata.getTargetPrefix());
        metadata.setGlobalEndpoint(c2jMetadata.getGlobalEndpoint());

        if (metadata.getNamespace() == null || metadata.getNamespace().isEmpty()) {
            metadata.setNamespace(sanitizeServiceAbbreviation(metadata.getServiceFullName()));
        } else {
            metadata.setNamespace(sanitizeServiceAbbreviation(metadata.getNamespace()));
        }

        metadata.setClassNamePrefix(CppViewHelper.convertToUpperCamel(ifNotNullOrEmpty(c2jMetadata.getClientClassNamePrefix(), metadata.getNamespace())));

        c2jServiceModel.setServiceName(ifNotNullOrEmpty(c2jServiceModel.getServiceName(), c2jMetadata.getEndpointPrefix()));
        metadata.setProjectName(ifNotNullOrEmpty(c2jMetadata.getClientProjectName(), c2jServiceModel.getServiceName()));

        if(metadata.getProjectName().contains("."))
        {
            metadata.setProjectName(metadata.getProjectName().replace(".", ""));
        }

        return metadata;
    }

    static String ifNotNullOrEmpty(final String target, final String fallback) {
        if (target != null && !target.isEmpty()){
            return target;
        } else {
            return fallback;
        }
    }

    void postProcessShapes() {
        for(Map.Entry<String, Shape> entry : shapes.entrySet()) {
            Shape shape = entry.getValue();

            /*
            If this shape ends up deriving from AmazonStreamingWebServiceRequest, then we already have implemented accessors for ContentType and the
            header insertion there.  So strip this out of the model (affects S3's PutObjectRequest).
            */
            if (shape.hasStreamMembers() && shape.isRequest()) {
                shape.RemoveMember("contentType");
                shape.RemoveMember("ContentType");
            }
        }
    }

    void convertShapes() {
        shapes = new LinkedHashMap<>(c2jServiceModel.getShapes().size());

        // First pass adds basic information
        for (Map.Entry<String, C2jShape> entry : c2jServiceModel.getShapes().entrySet()) {
            Shape shape = convertShapeBasics(entry.getValue(), entry.getKey());
            shapes.put(CppViewHelper.convertToUpperCamel(entry.getKey()), shape);
        }

        // Second Pass adds references to other shapes
        for (Map.Entry<String, C2jShape> entry : c2jServiceModel.getShapes().entrySet()) {
            Shape shape = shapes.get(CppViewHelper.convertToUpperCamel(entry.getKey()));
            convertShapeReferences(entry.getValue(), shape);
        }
    }

    Shape convertShapeBasics(C2jShape c2jShape, String shapeName) {

        Shape shape = new Shape();
        shape.setName(CppViewHelper.convertToUpperCamel(shapeName));
        String crossLinkedShapeDocs = addDocCrossLinks(c2jShape.getDocumentation(), c2jServiceModel.getMetadata().getUid(), shape.getName());
        shape.setDocumentation(formatDocumentation(crossLinkedShapeDocs, 3));

        if (c2jShape.getEnums() != null) {
            shape.setEnumValues(new ArrayList<>(c2jShape.getEnums()));
        } else {
            shape.setEnumValues(Collections.emptyList());
        }

        shape.setMax(c2jShape.getMax());
        shape.setMin(c2jShape.getMin());
        shape.setType(c2jShape.getType());
        shape.setLocationName(c2jShape.getLocationName());
        shape.setPayload(c2jShape.getPayload());
        shape.setFlattened(c2jShape.isFlattened());

        return shape;
    }

    void convertShapeReferences(C2jShape c2jShape, Shape shape) {

        Map<String, ShapeMember> shapeMemberMap = new LinkedHashMap<>();

        Set<String> required;
        if (c2jShape.getRequired() != null) {
            required = new LinkedHashSet<>(c2jShape.getRequired());
        } else {
            required = Collections.emptySet();
        }

        if (c2jShape.getMembers() != null) {
            c2jShape.getMembers().entrySet().stream().filter(entry -> !entry.getValue().isDeprecated()).forEach(entry -> {
                ShapeMember shapeMember = convertMember(entry.getValue(), required.contains(entry.getKey()));
                shapeMemberMap.put(entry.getKey(), shapeMember);
            });
        }

        shape.setMembers(shapeMemberMap);

        // Shape is a List
        if (c2jShape.getMember() != null && !c2jShape.getMember().isDeprecated()) {
            shape.setListMember(convertMember(c2jShape.getMember(), false));
        }

        if (c2jShape.getKey() != null && !c2jShape.getKey().isDeprecated()) {
            shape.setMapKey(convertMember(c2jShape.getKey(), false));
        }

        if (c2jShape.getValue() != null && !c2jShape.getValue().isDeprecated()) {
            shape.setMapValue(convertMember(c2jShape.getValue(), false));
        }
    }

    ShapeMember convertMember(C2jShapeMember c2jShapeMember, boolean required) {
        ShapeMember shapeMember = new ShapeMember();
        shapeMember.setRequired(required);
        shapeMember.setDocumentation(formatDocumentation(c2jShapeMember.getDocumentation(), 5));
        shapeMember.setFlattened(c2jShapeMember.isFlattened());
        Shape referencedShape = shapes.get(CppViewHelper.convertToUpperCamel(c2jShapeMember.getShape()));
        referencedShape.setReferenced(true);
        shapeMember.setShape(referencedShape);
        shapeMember.setLocationName(c2jShapeMember.getLocationName());
        shapeMember.setLocation(c2jShapeMember.getLocation());
        shapeMember.setStreaming(c2jShapeMember.isStreaming());
        shapeMember.setIdempotencyToken(c2jShapeMember.isIdempotencyToken());
        if(shapeMember.isStreaming()) {
            shapeMember.setRequired(true);
        }

        if(shapeMember.isUsedForHeader()) {
           shapeMember.setLocationName(shapeMember.getLocationName().toLowerCase());
        }

        if(c2jShapeMember.getXmlNamespace() != null) {
            shapeMember.setXmlnsUri(c2jShapeMember.getXmlNamespace().getUri());
        }

        return shapeMember;
    }

    void convertOperations() {
        allErrors = new HashSet<>();
        operations = new LinkedHashMap<>(c2jServiceModel.getOperations().size());
        for (Map.Entry<String, C2jOperation> entry : c2jServiceModel.getOperations().entrySet()) {
            if(!entry.getValue().isDeprecated()) {
              operations.put(entry.getKey(), convertOperation(entry.getValue()));
            }
        }
    }

    Operation convertOperation(C2jOperation c2jOperation) {
        Operation operation = new Operation();

        // Documentation
        String crossLinkedShapeDocs =
                addDocCrossLinks(c2jOperation.getDocumentation(), c2jServiceModel.getMetadata().getUid(), c2jOperation.getName());

        operation.setDocumentation(formatDocumentation(crossLinkedShapeDocs, 9));

        // input
        if (c2jOperation.getInput() != null) {
            String requestName = c2jOperation.getName() + "Request";
            Shape requestShape = renameShape(shapes.get(c2jOperation.getInput().getShape()), requestName);
            requestShape.setRequest(true);
            requestShape.setReferenced(true);
            requestShape.setLocationName(c2jOperation.getInput().getLocationName());
            requestShape.setXmlNamespace(c2jOperation.getInput().getXmlNamespace() != null ? c2jOperation.getInput().getXmlNamespace().getUri() : null);

            if(requestShape.getLocationName() != null && requestShape.getLocationName().length() > 0 &&
                    (requestShape.getPayload() == null || requestShape.getPayload().length() == 0) ) {
                requestShape.setPayload(requestName);
            }

            ShapeMember requestMember = new ShapeMember();
            requestMember.setShape(requestShape);
            requestMember.setDocumentation(formatDocumentation(c2jOperation.getInput().getDocumentation(), 3));

            operation.setRequest(requestMember);
        }

        // output
        if (c2jOperation.getOutput() != null) {
            String resultName = c2jOperation.getName() + "Result";
            Shape resultShape = renameShape(shapes.get(c2jOperation.getOutput().getShape()), resultName);
            resultShape.setResult(true);
            resultShape.setReferenced(true);
            ShapeMember resultMember = new ShapeMember();
            resultMember.setShape(resultShape);
            resultMember.setDocumentation(formatDocumentation(c2jOperation.getOutput().getDocumentation(), 3));
            operation.setResult(resultMember);
        }
        // http
        operation.setHttp(convertHttp(c2jOperation.getHttp()));

        // name
        operation.setName(c2jOperation.getName());

        // errors

        List<Error> operationErrors = new ArrayList<>();
        if (c2jOperation.getErrors() != null) {
            operationErrors.addAll(c2jOperation.getErrors().stream().map(this::convertError).collect(Collectors.toList()));
        }

        operation.setErrors(operationErrors);

        return operation;
    }

    Shape renameShape(Shape shape, String name) {
        if (shape.getName().equals(name)) {
            return shape;
        }
        if (shapes.containsKey(name)) {
            return shapes.get(name);
        }

        Shape cloned = cloneShape(shape);
        cloned.setName(name);
        shapes.put(name, cloned);
        return cloned;
    }

    Shape cloneShape(Shape shape) {
        Shape cloned = new Shape();
        cloned.setDocumentation(shape.getDocumentation());
        cloned.setEnumValues(shape.getEnumValues());
        cloned.setListMember(shape.getListMember());
        cloned.setMapKey(shape.getMapKey());
        cloned.setMapValue(shape.getMapValue());
        cloned.setMax(shape.getMax());
        cloned.setMin(shape.getMin());
        cloned.setMembers(shape.getMembers());
        cloned.setResult(shape.isResult());
        cloned.setRequest(shape.isRequest());
        cloned.setType(shape.getType());
        cloned.setPayload(shape.getPayload());
        cloned.setFlattened(shape.isFlattened());
        return cloned;
    }

    Http convertHttp(C2jHttp c2jHttp) {
        Http http = new Http();
        http.setMethod(c2jHttp.getMethod());
        http.setRequestUri(c2jHttp.getRequestUri());
        http.setResponseCode(c2jHttp.getResponseCode());
        return http;
    }

    Error convertError(C2jError c2jError) {
        if(c2jServiceModel.getShapes().get(c2jError.getShape()) != null) {
            C2jShape shape = c2jServiceModel.getShapes().get(c2jError.getShape());
            c2jError.setError(shape.getError());
            c2jError.setException(shape.isException());
        }

        Error error = new Error();
        error.setDocumentation(formatDocumentation(c2jError.getDocumentation(), 3));
        error.setName(c2jError.getShape());
        error.setText(c2jError.getShape());
        error.setException(c2jError.isException());
        error.setFault(c2jError.isFault());

        //query xml loads this inner structure to do this work.
        if (c2jError.getError() != null && c2jError.getError().getCode() != null) {
            if(c2jError.getError().getHttpStatusCode() >= 500 || !c2jError.getError().isSenderFault()) {
                error.setRetryable(true);
            }

            error.setText(c2jError.getError().getCode());
        }

        allErrors.add(error);
        return error;
    }

    Set<Error> filterOutCoreErrors(Set<Error> errors) {
        return errors.stream().filter(e -> !CoreErrors.VARIANTS.contains(e.getName())).collect(Collectors.toSet());
    }

    String sanitizeServiceAbbreviation(String serviceAbbreviation) {
        return serviceAbbreviation.replace(" ", "").replace("-", "").replace("_", "").replace("Amazon", "").replace("AWS", "").replace("/", "");
    }
}
