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

import com.amazonaws.util.awssdkgeneratorlambda.exceptions.SdkArtifactUploadException;
import org.apache.commons.io.IOUtils;

import java.io.File;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.net.URL;
import javax.net.ssl.HttpsURLConnection;

public class SdkArtifactUploader {

    private String presignedUrl;

    public SdkArtifactUploader(String presignedUrl) {
        this.presignedUrl = presignedUrl;
    }

    /**
     * Upload the artifact to S3 with pre-signed URL.
     *
     * @param sdkArtifact Artifact to upload.
     */
    public void upload(File sdkArtifact) {
        HttpsURLConnection uploadConnection = null;
        try {
            uploadConnection = (HttpsURLConnection) new URL(presignedUrl).openConnection();
            uploadConnection.setDoOutput(true);
            uploadConnection.setRequestMethod("PUT");
            Files.copy(sdkArtifact.toPath(), uploadConnection.getOutputStream());
            uploadConnection.getInputStream();
        } catch (Exception e) {
            throw new SdkArtifactUploadException("Unable to upload SDK artifact.\n" + dumpErrorStream(uploadConnection), e);
        } finally {
            uploadConnection.disconnect();
        }
    }

    /**
     * Dump the error stream in HTTP response from S3.
     *
     * @param uploadConnection Connection to S3.
     * @return String containing XML error response from S3 or empty string if it can't be read.
     */
    private String dumpErrorStream(HttpsURLConnection uploadConnection) {
        if (uploadConnection == null) {
            return "The connection should not be empty or null.";
        }
        try {
            return IOUtils.toString(uploadConnection.getErrorStream(), StandardCharsets.UTF_8);
        } catch (IOException e) {
            e.printStackTrace();
            return "Failed to dump error stream from the connection.";
        }
    }
}
