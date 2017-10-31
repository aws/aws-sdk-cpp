package com.amazonaws.util.awssdkgeneratorlambda;

import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jServiceModel;
import com.amazonaws.util.awssdkgeneratorlambda.CodeGenerator;
import com.amazonaws.util.awssdkgeneratorlambda.SdkGeneratorInputWrapper;
import com.amazonaws.util.awssdkgeneratorlambda.exceptions.InternalGenerationException;
import com.amazonaws.util.awssdkgeneratorlambda.exceptions.ModelLoadException;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import org.apache.commons.io.IOUtils;
import java.io.IOException;
import java.nio.charset.StandardCharsets;

import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Mock;
import org.mockito.runners.MockitoJUnitRunner;

import static org.mockito.Mockito.when;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.assertFalse;

@RunWith(MockitoJUnitRunner.class)
public class CodeGeneratorTest {

    private static final String SERVICE_NAME = "petstore";
    private static final String CPP_NAMESPACE = "petStore";
    private static final String VALID_MODEL_RESOURCE = "/com/amazonaws/util/awssdkgeneratorlambda/service-2.json";
    private static final String INCOMPLETE_MODEL_RESOURCE = "/com/amazonaws/util/awssdkgeneratorlambda/service-2_incomplete.json";

    @Mock
    private SdkGeneratorInputWrapper inputWrapper;
    private Workspace workspace;

    @Test
    public void testCodeGeneratorValidModel() throws Exception {
        workspace = new Workspace();
        when(inputWrapper.getServiceName()).thenReturn(SERVICE_NAME);
        when(inputWrapper.getCppNamespace()).thenReturn(CPP_NAMESPACE);

        new CodeGenerator(inputWrapper, workspace).generateCode(loadServiceModel(VALID_MODEL_RESOURCE));

        assertTrue(workspace.getGeneratedSourceZipFile().exists());
        workspace.delete();
    }

    @Test(expected = InternalGenerationException.class)
    public void testCodeGeneratorIncompleteModel() throws Exception {
        workspace = new Workspace();
        when(inputWrapper.getServiceName()).thenReturn(SERVICE_NAME);
        when(inputWrapper.getCppNamespace()).thenReturn(CPP_NAMESPACE);

        try {
            new CodeGenerator(inputWrapper, workspace).generateCode(loadServiceModel(INCOMPLETE_MODEL_RESOURCE));
        }
        finally {
            assertFalse(workspace.getGeneratedSourceZipFile().exists());
            workspace.delete();
        }
    }

    @Test(expected = InternalGenerationException.class)
    public void testCodeGeneratorNullModel() throws Exception {
        workspace = new Workspace();
        when(inputWrapper.getServiceName()).thenReturn(SERVICE_NAME);
        when(inputWrapper.getCppNamespace()).thenReturn(CPP_NAMESPACE);

        try {
            new CodeGenerator(inputWrapper, workspace).generateCode(null);
        }
        finally {
            assertFalse(workspace.getGeneratedSourceZipFile().exists());
            workspace.delete();
        }
    }

    private C2jServiceModel loadServiceModel(String modelFilename) throws IOException {
        String rawJson = IOUtils.toString(SdkGeneratorInputWrapperTest.class.getResourceAsStream(modelFilename), StandardCharsets.UTF_8);

        GsonBuilder gsonBuilder = new GsonBuilder();
        Gson gson = gsonBuilder.create();

        C2jServiceModel c2jServiceModel = gson.fromJson(rawJson, C2jServiceModel.class);
        c2jServiceModel.setServiceName(SERVICE_NAME);
        return c2jServiceModel;
    }

}
