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

import com.amazonaws.util.awssdkgeneratorlambda.exceptions.ApiGatewayCausedException;

import lombok.Getter;
import java.util.Base64;
import java.util.Map;

import static com.amazonaws.util.awssdkgeneratorlambda.ParameterValidationUtils.assertNotNull;
import static com.amazonaws.util.awssdkgeneratorlambda.ParameterValidationUtils.validateCustomerRequiredParameters;
import static com.amazonaws.util.awssdkgeneratorlambda.ParameterValidationUtils.validateApiGatewayRequiredParameters;

@Getter
public class SdkGeneratorInputWrapper {

    private final byte[] base64DecodedModelZip;
    private final String presignedUrl;
    private final SdkParametersWrapper sdkParameters;

    public SdkGeneratorInputWrapper(SdkGeneratorInput input) {
        assertNotNull(input, "Input");
        this.base64DecodedModelZip = decodeModel(validateApiGatewayRequiredParameters(input.getModel(), "model"));
        this.presignedUrl = validateApiGatewayRequiredParameters(input.getPresignedUrl(), "presignedUrl");
        this.sdkParameters = new SdkParametersWrapper(input.getSdkParameters());
    }

    private byte[] decodeModel(String model) {
        try {
            return Base64.getDecoder().decode(model);
        } catch (Exception e) {
            throw new ApiGatewayCausedException(GenerationStage.VALIDATION,
                    "Base64 encoded model is invalid: " + model, e);
        }
    }

    /**
     * @return Name of the service we are generating an API for.
     */
    public String getServiceName() {
        return sdkParameters.serviceName;
    }

    /**
     * @return CPP namespace for the generated SDK.
     */
    public String getCppNamespace() {
        return sdkParameters.cppNamespace;
    }

    /**
     * Simple wrapper around the raw SDK parameters map to provide convenient access to the parameters we care about.
     */
    private static class SdkParametersWrapper {

        private final Map<String, String> sdkParameters;
        private final String serviceName;
        private final String cppNamespace;

        public SdkParametersWrapper(Map<String, String> sdkParameters) {
            assertNotNull(sdkParameters, "SDK Parameters");
            this.sdkParameters = sdkParameters;
            this.serviceName = getRequiredParameters("service.name");
            this.cppNamespace = getRequiredParameters("cpp.namespace");
        }

        private String getRequiredParameters(String parameterName) {
            return validateCustomerRequiredParameters(sdkParameters.get(parameterName), parameterName);
        }
    }
}