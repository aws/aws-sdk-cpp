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

package com.amazonaws.util.awssdkgeneratorlambda;

import com.amazonaws.util.awssdkgeneratorlambda.SdkGeneratorInputWrapper;

import com.amazonaws.services.lambda.runtime.Context;
import com.amazonaws.services.lambda.runtime.RequestHandler;

public class SdkGeneratorRequestHandler implements RequestHandler<SdkGeneratorInput, SdkGeneratorOutput> {

    private SdkGeneratorInputWrapper input;
    private Context context;

    // Entry point for the Lambda function
    public SdkGeneratorOutput handleRequest(SdkGeneratorInput input, Context context) {

        try {
            this.input = new SdkGeneratorInputWrapper(input);
            this.context = context;

// These following steps will come with future PR.
//            setup();
//            String arbitraryJson = getArbitraryJson();
//            File sdkZip = generateCode(arbitraryJson);
//            uploadSdkArtifact(sdkZip);
//            cleanup();

            return new SdkGeneratorOutput(true ,null);
        } catch (Exception e) {
            e.printStackTrace();
            String errorMessage = String.format("%s exception encountered. Message: %s", e.getClass().getSimpleName(), e.getMessage());

            return new SdkGeneratorOutput(false, errorMessage);
        }
    }
}
