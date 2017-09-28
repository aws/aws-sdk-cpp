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

package com.amazonaws.util.awssdkgeneratorlambda.exceptions;

import com.amazonaws.util.awssdkgeneratorlambda.GenerationStage;

/**
 * Exception caused by invalid input provided by the API Gateway service. This may include missing a required parameter
 * (presignedUrl for example) or an invalid C2J model.
 */
public class ApiGatewayCausedException extends SdkGenerationException {

    private final GenerationStage stage;

    public ApiGatewayCausedException(GenerationStage stage, String message) {
        this(stage, message, null);
    }

    public ApiGatewayCausedException(GenerationStage stage, String message, Throwable cause) {
        super(message, cause);
        this.stage = stage;
    }

    @Override
    public Fault getFault() {
        return Fault.API_GATEWAY;
    }

    @Override
    public GenerationStage getFailedStage() {
        return stage;
    }
}