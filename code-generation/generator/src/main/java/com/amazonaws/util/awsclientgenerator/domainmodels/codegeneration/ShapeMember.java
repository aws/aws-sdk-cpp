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

@Data
public class ShapeMember {
    Shape shape;
    boolean idempotencyToken;
    //This field has be set to false for all shape members for serialization purposes to do HasBeenSet.
    //Right now we need the real value of this field to do parameter validation before sending out the request.
    //It's prefered to use this value but it appears in multiple places. Change current value 'false' to it's 'real value' is risky.
    //It's safer to copy it's value to another varaible (now isValidationNeeded) and validate based on that.
    boolean isRequired; 
    boolean isValidationNeeded;
    boolean streaming;
    String documentation;
    String location;
    String locationName;
    String queryName;
    XmlNamespace xmlNamespace;
    boolean isFlattened;
    boolean isCustomizedQuery;
    boolean isEventPayload;
    boolean hostLabel;
    boolean endpointDiscoveryId;
    boolean xmlAttribute;

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

    public boolean requiresHeaderEncoding() {
        return isUsedForHeader() && "x-amz-copy-source".equals(locationName);
    }
}
