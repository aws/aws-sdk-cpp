/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

@Data
public class ShapeMember {
    Shape shape;
    boolean idempotencyToken;
    boolean isRequired;
    boolean streaming;
    String documentation;
    String location;
    String locationName;
    String queryName;
    String xmlnsUri;
    boolean isFlattened;

    public boolean isUsedForHeader() {
        return "header".equals(location) || "headers".equals(location);
    }

    public boolean isUsedForUri() {
        return "uri".equals(location);
    }

    public boolean isUsedForHttpStatusCode() {
        return "statusCode".equals(location);
    }

    public boolean isUsedForQueryString() {
        return "querystring".equals(location);
    }

    public boolean isUsedForPayload() {
        return !isUsedForHeader() && !isUsedForUri() && !isUsedForHttpStatusCode() && !isUsedForQueryString() && !streaming;
    }
}
