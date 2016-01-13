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

package com.amazonaws.util.awsclientgenerator.regions;

import java.util.LinkedHashMap;
import java.util.Map;

/**
 * Brute force Mapper for Services to their Regions and endpoints.
 */
public class RegionEndpointMapper {
    static final Map<String, String> REGION_MAPPING_ENDPOINT_MAPPING = new LinkedHashMap<>();


    static {
        REGION_MAPPING_ENDPOINT_MAPPING.put("US_EAST_1", "us-east-1.amazonaws.com");
        REGION_MAPPING_ENDPOINT_MAPPING.put("US_WEST_1", "us-west-1.amazonaws.com");
        REGION_MAPPING_ENDPOINT_MAPPING.put("US_WEST_2", "us-west-2.amazonaws.com");
        REGION_MAPPING_ENDPOINT_MAPPING.put("EU_WEST_1", "eu-west-1.amazonaws.com");
        REGION_MAPPING_ENDPOINT_MAPPING.put("EU_CENTRAL_1", "eu-central-1.amazonaws.com");
        REGION_MAPPING_ENDPOINT_MAPPING.put("AP_SOUTHEAST_1", "ap-southeast-1.amazonaws.com");
        REGION_MAPPING_ENDPOINT_MAPPING.put("AP_SOUTHEAST_2", "ap-southeast-2.amazonaws.com");
        REGION_MAPPING_ENDPOINT_MAPPING.put("AP_NORTHEAST_1", "ap-northeast-1.amazonaws.com");
        REGION_MAPPING_ENDPOINT_MAPPING.put("AP_NORTHEAST_2", "ap-northeast-2.amazonaws.com");
        REGION_MAPPING_ENDPOINT_MAPPING.put("SA_EAST_1", "sa-east-1.amazonaws.com");
    }

    /**
     * Gets region and endpoint mapping for a service.
     */
    public static Map<String, String> GetRegionMappingForService(String serviceEndpointPrefix) {
        return GetRegionMappingForService(serviceEndpointPrefix, "%s.%s");
    }

    /**
     * Gets region and endpoint mapping for a service.
     */
    public static Map<String, String> GetRegionMappingForService(String serviceEndpointPrefix, String serviceUrlConcatPattern) {
        Map<String, String> regionMappingCopy = new LinkedHashMap<>(REGION_MAPPING_ENDPOINT_MAPPING);

        for(String key : regionMappingCopy.keySet()) {
            regionMappingCopy.put(key, String.format(serviceUrlConcatPattern, serviceEndpointPrefix, regionMappingCopy.get(key)));
        }

        return regionMappingCopy;
    }
}
