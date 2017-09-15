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
import com.amazonaws.util.awssdkgeneratorlambda.exceptions.ApiGatewayCausedException;
import com.amazonaws.util.awssdkgeneratorlambda.exceptions.InvalidSdkParametersException;
import com.google.common.collect.ImmutableMap;
import org.junit.Test;
import org.apache.commons.io.IOUtils;
import java.util.Base64;
import java.io.IOException;

import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertArrayEquals;

public class SdkGeneratorInputWrapperTest {

    private static final String VALID_MODEL_RESOURCE = "/com/amazonaws/util/awssdkgeneratorlambda/model.zip";
    private static final String SERVICE_NAME = "petStoreService";
    private static final String CPP_NAMESAPCE = "petstore";
    private static final String PRE_SIGNED_URL = "some-pre-signed-url";

    @Test
    public void testSdkGeneratorInputWrapperWithValidInput() throws IOException {
        SdkGeneratorInput input = new SdkGeneratorInput();
        input.setModel(getBase64EncodedModel(VALID_MODEL_RESOURCE));
        input.setPresignedUrl(PRE_SIGNED_URL);
        input.setSdkParameters(ImmutableMap.<String, String>builder()
                .put("service.name", SERVICE_NAME)
                .put("cpp.namespace", CPP_NAMESAPCE)
                .build());

        final SdkGeneratorInputWrapper inputWrapper = new SdkGeneratorInputWrapper(input);
        assertArrayEquals(getResourceAsBytes(VALID_MODEL_RESOURCE), inputWrapper.getBase64DecodedModelZip());
        assertEquals(PRE_SIGNED_URL, inputWrapper.getPresignedUrl());
        assertEquals(SERVICE_NAME, inputWrapper.getServiceName());
        assertEquals(CPP_NAMESAPCE, inputWrapper.getCppNamespace());
    }

    @Test(expected = ApiGatewayCausedException.class)
    public void testSdkGeneratorInputWrapperMissingInput() throws IOException {
        final SdkGeneratorInputWrapper inputWrapper = new SdkGeneratorInputWrapper(null);
    }

    @Test(expected = InvalidSdkParametersException.class)
    public void testSdkGeneratorInputWrapperWithEmptyParameter() throws IOException {
        SdkGeneratorInput input = new SdkGeneratorInput();
        input.setModel(getBase64EncodedModel(VALID_MODEL_RESOURCE));
        input.setPresignedUrl(PRE_SIGNED_URL);
        input.setSdkParameters(ImmutableMap.<String, String>builder()
                .put("service.name", "")
                .put("cpp.namespace", CPP_NAMESAPCE)
                .build());

        new SdkGeneratorInputWrapper(input);
    }

    @Test(expected = InvalidSdkParametersException.class)
    public void testSdkGeneratorInputWrapperMissingParameter() throws IOException {
        SdkGeneratorInput input = new SdkGeneratorInput();
        input.setModel(getBase64EncodedModel(VALID_MODEL_RESOURCE));
        input.setPresignedUrl(PRE_SIGNED_URL);
        input.setSdkParameters(ImmutableMap.<String, String>builder()
                .put("cpp.namespace", CPP_NAMESAPCE)
                .build());

        new SdkGeneratorInputWrapper(input);
    }

    @Test(expected = ApiGatewayCausedException.class)
    public void testSdkGeneratorInputWrapperWithInvalidModel() throws IOException {
        SdkGeneratorInput input = new SdkGeneratorInput();
        input.setModel("Invalid Base64 encoded models");
        input.setPresignedUrl(PRE_SIGNED_URL);
        input.setSdkParameters(ImmutableMap.<String, String>builder()
                .put("service.name", SERVICE_NAME)
                .put("cpp.namespace", CPP_NAMESAPCE)
                .build());

        new SdkGeneratorInputWrapper(input);
    }

    @Test(expected = ApiGatewayCausedException.class)
    public void testSdkGeneratorInputWrapperMissingModel() throws IOException {
        SdkGeneratorInput input = new SdkGeneratorInput();
        input.setPresignedUrl(PRE_SIGNED_URL);
        input.setSdkParameters(ImmutableMap.<String, String>builder()
                .put("service.name", SERVICE_NAME)
                .put("cpp.namespace", CPP_NAMESAPCE)
                .build());

        new SdkGeneratorInputWrapper(input);
    }

    @Test(expected = ApiGatewayCausedException.class)
    public void testSdkGeneratorInputWrapperMissingUrl() throws IOException {
        SdkGeneratorInput input = new SdkGeneratorInput();
        input.setModel(getBase64EncodedModel(VALID_MODEL_RESOURCE));
        input.setSdkParameters(ImmutableMap.<String, String>builder()
                .put("service.name", SERVICE_NAME)
                .put("cpp.namespace", CPP_NAMESAPCE)
                .build());

        new SdkGeneratorInputWrapper(input);
    }

    private byte[] getResourceAsBytes(String resourcePath) throws IOException {
        return IOUtils.toByteArray(SdkGeneratorInputWrapperTest.class.getResourceAsStream(resourcePath));
    }

    private String getBase64EncodedModel(String resourcePath) throws IOException {
        return Base64.getEncoder().encodeToString(getResourceAsBytes(resourcePath));
    }
}
