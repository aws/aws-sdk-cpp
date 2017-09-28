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

import com.amazonaws.util.awssdkgeneratorlambda.exceptions.InvalidSdkParametersException;
import com.amazonaws.util.awssdkgeneratorlambda.exceptions.ApiGatewayCausedException;

import org.junit.Test;
import static org.junit.Assert.assertEquals;

import static com.amazonaws.util.awssdkgeneratorlambda.ParameterValidationUtils.validateCustomerRequiredParameters;
import static com.amazonaws.util.awssdkgeneratorlambda.ParameterValidationUtils.validateApiGatewayRequiredParameters;

public class ParameterValidationUtilsTest {

    @Test
    public void testValidateCustomerRequiredParameters() {
        assertEquals("parameterName", validateCustomerRequiredParameters("parameterName", "Parameter name"));
    }

    @Test(expected = InvalidSdkParametersException.class)
    public void testValidateCustomerRequiredParametersMissingParameter() {
        validateCustomerRequiredParameters(null, "Parameter name");
    }

    @Test(expected = InvalidSdkParametersException.class)
    public void testValidateCustomerRequiredParametersEmptyParameter() {
        validateCustomerRequiredParameters("", "Parameter name");
    }

    @Test
    public void testValidateApiGatewayRequiredParameters() {
        assertEquals("parameterName", validateApiGatewayRequiredParameters("parameterName", "Parameter name"));
    }

    @Test(expected = ApiGatewayCausedException.class)
    public void testValidateApiGatewayRequiredParametersMissingParameter() {
        validateApiGatewayRequiredParameters(null, "Parameter name");
    }

    @Test(expected = ApiGatewayCausedException.class)
    public void testValidateApiGatewayRequiredParametersEmptyParameter() {
        validateApiGatewayRequiredParameters("", "Parameter name");
    }

}