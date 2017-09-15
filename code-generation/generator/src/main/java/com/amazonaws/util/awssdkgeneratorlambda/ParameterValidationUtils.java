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

import com.amazonaws.util.awssdkgeneratorlambda.exceptions.SdkGenerationException;
import com.amazonaws.util.awssdkgeneratorlambda.exceptions.InvalidSdkParametersException;
import com.amazonaws.util.awssdkgeneratorlambda.exceptions.ApiGatewayCausedException;

public class ParameterValidationUtils {

    /**
     * Validates a parameter that must not be null.
     *
     * @param value         Parameter value.
     * @param parameterName Name of required parameter.
     * @return Parameter value if not null.
     * @throws SdkGenerationException If parameter value is null.
     */
    public static <T> T assertNotNull(T value, String parameterName) throws SdkGenerationException {
        if (value == null) {
            throw new ApiGatewayCausedException(GenerationStage.VALIDATION,
                    missingRequiredParameterMessage(parameterName));
        }
        return value;
    }

    /**
     * Validates a parameter that must be provided by the customer.
     *
     * @param value         Parameter value.
     * @param parameterName Name of required parameter.
     * @return Parameter value if not null.
     * @throws SdkGenerationException If parameter value is null.
     */
    public static String validateCustomerRequiredParameters(String value, String parameterName) throws SdkGenerationException {
        if (value == null || value.isEmpty()) {
            throw new InvalidSdkParametersException(missingRequiredParameterMessage(parameterName));
        }
        return value;
    }

    /**
     * Validates a parameter that must be provided by the API Gateway service.
     *
     * @param value         Parameter value.
     * @param parameterName Name of required parameter.
     * @return Parameter value if not null.
     * @throws SdkGenerationException If parameter value is null.
     */
    public static String validateApiGatewayRequiredParameters(String value, String parameterName) throws SdkGenerationException {
        if (value == null || value.isEmpty()) {
            throw new ApiGatewayCausedException(GenerationStage.VALIDATION, missingRequiredParameterMessage(parameterName));
        }
        return value;
    }

    private static String missingRequiredParameterMessage(String parameterName) {
        return String.format("Missing required parameter: '%s'", parameterName);
    }
}