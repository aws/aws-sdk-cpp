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

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Data;

import java.util.Map;

@Data
public class Metadata {
    private String apiVersion;
    private String concatAPIVersion;
    private String endpointPrefix;
    private String globalEndpoint;
    private String jsonVersion;
    private String namespace;
    private String serviceFullName;
    private String signatureVersion;
    private String signingName;
    private String targetPrefix;
    private String protocol;
    private String projectName;
    private String classNamePrefix;
    private String acceptHeader;
    private String timestampFormat;
    private Map<String, String> additionalHeaders;
    private boolean standalone;
    private String serviceId;
}