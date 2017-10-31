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

import java.io.File;
import java.nio.file.Files;

import com.amazonaws.util.awssdkgeneratorlambda.GenerationStage;
import com.amazonaws.util.awssdkgeneratorlambda.exceptions.InternalGenerationException;
import com.amazonaws.util.awsclientgenerator.generators.MainClientGenerator;
import com.amazonaws.util.awsclientgenerator.domainmodels.c2j.C2jServiceModel;

import static java.nio.file.StandardCopyOption.REPLACE_EXISTING;


public class CodeGenerator {

    private final SdkGeneratorInputWrapper input;
    private final Workspace workspace;

    public CodeGenerator(SdkGeneratorInputWrapper input, Workspace workspace) {
        this.input = input;
        this.workspace = workspace;
    }

    /**
     * Generate the code and write to {@link Workspace#getGeneratedSourceZipFile()}
     *
     * @param model The c2j service model.
     * @return Generated ZIP file of the source code.
     * @throws Exception Wrapped in an InternalGenerationException.
     */
    public File generateCode(C2jServiceModel model) throws Exception{
        try {
            File outputLib = new MainClientGenerator().generateSourceFromC2jModel(
                    model,
                    input.getServiceName(),
                    "cpp",
                    input.getCppNamespace(),
                    true);
            Files.move(outputLib.toPath(), workspace.getGeneratedSourceZipFile().toPath(), REPLACE_EXISTING);
            return workspace.getGeneratedSourceZipFile();
        } catch (Exception e) {
            throw new InternalGenerationException(GenerationStage.CODE_GEN,
                    "Unable to generate code with the service model", e);
        }
    }
}
