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
import com.amazonaws.util.awssdkgeneratorlambda.exceptions.SdkGenerationException;
import com.amazonaws.util.awssdkgeneratorlambda.exceptions.ModelLoadException;
import com.amazonaws.util.awssdkgeneratorlambda.exceptions.InternalGenerationException;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import net.lingala.zip4j.core.ZipFile;
import org.apache.commons.io.FileUtils;

import java.io.File;
import java.io.FileOutputStream;
import java.io.OutputStream;
import java.nio.charset.StandardCharsets;

/**
 * Service model is passed to the Lambda function as a Base64 encoded ZIP file of all model files.
 * We have to decode it, unzip and deserialize the service model.
 */
public class ServiceModelLoader {

    private final SdkGeneratorInputWrapper input;
    private final Workspace workspace;


    public ServiceModelLoader(SdkGeneratorInputWrapper input, Workspace workspace) {
        this.input = input;
        this.workspace = workspace;
    }

    public C2jServiceModel loadServiceModel() throws SdkGenerationException {
        File unzippedModelDirectory = unzipModel(writeModelZip());

        File unzippedModel = new File(unzippedModelDirectory, "service-2.json");
        if (!unzippedModel.exists()) {
            unzippedModel = new File(unzippedModelDirectory, "api-2.json");
            if (!unzippedModel.exists()) {
                throw new ModelLoadException(
                        "Unable to load the service model from input. Didn't find model at service-2.json or api-2.json");
            }
        }

        return deserializeModel(unzippedModel);
    }

    /**
     * Unzip the model into a temporary directory.
     *
     * @return Directory created
     */
    private File unzipModel(File modelZipFile) throws ModelLoadException {
        try {
            ZipFile zipFile = new ZipFile(modelZipFile);
            final File unzippedDirectory = workspace.getUnzippedModelDirectory();
            zipFile.extractAll(unzippedDirectory.getAbsolutePath());
            return unzippedDirectory;
        } catch (Exception e) {
            throw new ModelLoadException("Unable to decode and unzip the service model", e);
        }
    }

    /**
     * Write the decoded model ZIP string to a file so we can unzip it.
     *
     * @return File that was created.
     */
    private File writeModelZip() throws SdkGenerationException {
        final File outputFile = workspace.getModelZipFile();
        try (OutputStream out = new FileOutputStream(outputFile)) {
            out.write(input.getBase64DecodedModelZip());
            return outputFile;
        } catch (Exception e) {
            throw new InternalGenerationException(GenerationStage.MODEL_LOAD,
                    "Unable to write model ZIP to the filesystem", e);
        }
    }

    /**
     * Deserialize the contents of the service model.
     *
     * @param modelFile Location of config file to load.
     * @return C2jServierModel instance.
     */
    private C2jServiceModel deserializeModel(File modelFile) throws ModelLoadException {
        try {
            String rawJson = FileUtils.readFileToString(modelFile, StandardCharsets.UTF_8);

            GsonBuilder gsonBuilder = new GsonBuilder();
            Gson gson = gsonBuilder.create();

            C2jServiceModel c2jServiceModel = gson.fromJson(rawJson, C2jServiceModel.class);
            c2jServiceModel.setServiceName(input.getServiceName());
            return c2jServiceModel;
        } catch (Exception e) {
            throw new ModelLoadException("Unable to load the service model from input", e);
        }
    }
}