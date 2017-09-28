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

import com.amazonaws.util.awssdkgeneratorlambda.exceptions.InternalGenerationException;
import org.apache.commons.io.FileUtils;

import java.io.File;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

/**
 * Creates a temporary workspace and provides file paths for the various steps needed in code
 * generation.
 */
public class Workspace {

    private final File workspaceDirectory;

    public Workspace() throws InternalGenerationException {
        try {
            workspaceDirectory = Files.createTempDirectory("cpp-sdk-workspace-")
                    .toAbsolutePath().toFile();
        } catch (IOException e) {
            // Wrap it in an InternalGenerationException
            throw new InternalGenerationException(GenerationStage.SETUP,
                    "Unable to create temporary workspace", e);
        }
    }

    /**
     * @return File to write the decoded model zip file to.
     */
    public File getModelZipFile() {
        return new File(workspaceDirectory, "model.zip");
    }

    /**
     * @return Directory to unzip the model into.
     */
    public File getUnzippedModelDirectory() {
        return new File(workspaceDirectory, "unzipped-model");
    }

    /**
     * @return Output file of zipped SDK code.
     */
    public File getGeneratedSourceZipFile() {
        return new File(workspaceDirectory, "sdk.zip");
    }

    /**
     * Cleanup the workspace and delete all files created.
     */
    public void delete() throws InternalGenerationException {
        try {
            FileUtils.deleteDirectory(workspaceDirectory);
        } catch (IOException e) {
            // Wrap it in an InternalGenerationException
            throw new InternalGenerationException(GenerationStage.CLEANUP,
                    "Unable to delete temporary workspace", e);
        }
    }
}
