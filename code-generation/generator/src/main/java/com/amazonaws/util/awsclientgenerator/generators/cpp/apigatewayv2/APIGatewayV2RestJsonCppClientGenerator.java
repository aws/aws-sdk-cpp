/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
