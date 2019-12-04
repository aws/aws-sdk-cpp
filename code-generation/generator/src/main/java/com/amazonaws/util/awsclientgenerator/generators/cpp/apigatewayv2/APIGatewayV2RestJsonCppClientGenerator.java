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

package com.amazonaws.util.awsclientgenerator.generators.cpp.apigatewayv2;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;

import java.util.Map;

public class APIGatewayV2RestJsonCppClientGenerator extends JsonCppClientGenerator {

    public APIGatewayV2RestJsonCppClientGenerator() throws Exception {
        super();
    }

    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {

        Shape importApiRequest = serviceModel.getShapes().get("ImportApiRequest");
        Map<String, ShapeMember> members = importApiRequest.getMembers();

        //rename body
        ShapeMember bodyMember = members.get("Body");
        members.put("requestBody", bodyMember);
        members.remove("Body");

        Shape reimportApiRequest = serviceModel.getShapes().get("ReimportApiRequest");
        members = reimportApiRequest.getMembers();

        //rename body
        bodyMember = members.get("Body");
        members.put("requestBody", bodyMember);
        members.remove("Body");

        return super.generateSourceFiles(serviceModel);
    }
}
