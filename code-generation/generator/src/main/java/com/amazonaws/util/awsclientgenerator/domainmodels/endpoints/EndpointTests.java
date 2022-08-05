/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.endpoints;

import lombok.Data;
import java.util.List;
import java.util.Map;


@Data
public class EndpointTests {
    public class TestCase {
        public class Expect {
            public class Property {
                Map<String, String> properties;
            }

            String url;
            Map<String, List<Property>> properties;
            Map<String, List<String>> headers;
            String error;
        }

        String documentation;
        Map<String, String> params;
        Expect expect;
    }

    String version;
    List<TestCase> testCases;
}