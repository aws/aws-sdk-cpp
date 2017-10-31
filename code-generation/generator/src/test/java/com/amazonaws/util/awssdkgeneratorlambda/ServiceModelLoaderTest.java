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

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jServiceModel;
import com.amazonaws.util.awssdkgeneratorlambda.exceptions.ModelLoadException;

import org.apache.commons.io.IOUtils;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Mock;
import org.mockito.runners.MockitoJUnitRunner;

import java.io.IOException;
import java.io.File;

import static org.junit.Assert.assertFalse;
import static org.mockito.Mockito.when;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;

@RunWith(MockitoJUnitRunner.class)
public class ServiceModelLoaderTest {

    private static final String SERVICE_NAME = "petstore";
    private static final String MODEL_FILENAME = "service-2.json";
    private static final String VALID_MODEL_RESOURCE = "/com/amazonaws/util/awssdkgeneratorlambda/model.zip";
    private static final String UNRECOGNIZED_FORMAT_MODEL_RESOURCE = "/com/amazonaws/util/awssdkgeneratorlambda/service-2.json";
    private static final String UNRECOGNIZED_FILENAME_MODEL_RESOURCE = "/com/amazonaws/util/awssdkgeneratorlambda/model_unrecognized_filename.zip";

    @Mock
    private SdkGeneratorInputWrapper inputWrapper;
    private Workspace workspace;

    @Test
    public void testServiceModelLoaderWithValidModel() throws Exception {
        workspace = new Workspace();
        // Mock an inputWrapper with valid service model
        when(inputWrapper.getBase64DecodedModelZip()).thenReturn(getResourceAsBytes(VALID_MODEL_RESOURCE));
        when(inputWrapper.getServiceName()).thenReturn(SERVICE_NAME);

        C2jServiceModel c2jServiceModel = new ServiceModelLoader(inputWrapper, workspace).loadServiceModel();

        assertTrue(workspace.getModelZipFile().exists());
        assertTrue(workspace.getUnzippedModelDirectory().exists());
        assertTrue(new File(workspace.getUnzippedModelDirectory(), MODEL_FILENAME).exists());
        assertEquals(SERVICE_NAME, c2jServiceModel.getServiceName());

        workspace.delete();
    }

    @Test(expected = ModelLoadException.class)
    public void invalidModelUnrecognizedFormat() throws Exception {
        workspace = new Workspace();
        // Mock an inputWrapper with invalid service model in unrecognized format, will meet problems when extracting it.
        when(inputWrapper.getBase64DecodedModelZip()).thenReturn(getResourceAsBytes(UNRECOGNIZED_FORMAT_MODEL_RESOURCE));
        when(inputWrapper.getCppNamespace()).thenReturn(SERVICE_NAME);

        try {
            new ServiceModelLoader(inputWrapper, workspace).loadServiceModel();
        }
        finally {
            assertTrue(workspace.getModelZipFile().exists());
            assertTrue(workspace.getUnzippedModelDirectory().exists());
            assertFalse(new File(workspace.getUnzippedModelDirectory(), MODEL_FILENAME).exists());

            workspace.delete();
        }
    }

    @Test(expected = ModelLoadException.class)
    public void invalidModelUnrecognizedFilename() throws Exception {
        workspace = new Workspace();
        // Mock an inputWrapper with invalid service model with unrecognized filename (neither service-2.json nor api-2.json) wrapped in the the ZIP file.
        when(inputWrapper.getBase64DecodedModelZip()).thenReturn(getResourceAsBytes(UNRECOGNIZED_FILENAME_MODEL_RESOURCE));
        when(inputWrapper.getCppNamespace()).thenReturn(SERVICE_NAME);

        try {
            new ServiceModelLoader(inputWrapper, workspace).loadServiceModel();
        }
        finally {
            assertTrue(workspace.getModelZipFile().exists());
            assertTrue(workspace.getUnzippedModelDirectory().exists());
            assertFalse(new File(workspace.getUnzippedModelDirectory(), MODEL_FILENAME).exists());

            workspace.delete();
        }
    }

    private byte[] getResourceAsBytes(String resourcePath) throws IOException {
        return IOUtils.toByteArray(SdkGeneratorInputWrapperTest.class.getResourceAsStream(resourcePath));
    }
}
