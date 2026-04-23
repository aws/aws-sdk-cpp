/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

package com.amazonaws.util.awsclientgenerator.generators.cpp.rdsdata;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppShapeInformation;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import java.nio.charset.StandardCharsets;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class RDSDataJsonCppClientGenerator extends JsonCppClientGenerator {

    public RDSDataJsonCppClientGenerator() throws Exception {
        super();
    }

    @Override
    protected SdkFileEntry generateModelHeaderFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {
        switch(shapeEntry.getKey()) {
            case "StructValue": {
                VelocityContext context = createContext(serviceModel);
                Shape shape = shapeEntry.getValue();
                context.put("shape", shape);
                context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
                context.put("CppViewHelper", CppViewHelper.class);
                Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/rdsdata/StructValueHeader.vm", StandardCharsets.UTF_8.name());
                return makeFile(template, context, "include/aws/rds-data/model/StructValue.h", true);
            }
            default:
                return super.generateModelHeaderFile(serviceModel, shapeEntry);
        }
    }

    @Override
    protected SdkFileEntry generateModelSourceFile(ServiceModel serviceModel, Map.Entry<String, Shape> shapeEntry) throws Exception {
        switch(shapeEntry.getKey()) {
            case "StructValue": {
                VelocityContext context = createContext(serviceModel);
                Shape shape = shapeEntry.getValue();
                context.put("shape", shape);
                context.put("typeInfo", new CppShapeInformation(shape, serviceModel));
                context.put("CppViewHelper", CppViewHelper.class);
                Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/rdsdata/StructValueSource.vm");
                return makeFile(template, context, "source/model/StructValue.cpp", true);
            }
            default:
                return super.generateModelSourceFile(serviceModel, shapeEntry);
        }
    }
}
