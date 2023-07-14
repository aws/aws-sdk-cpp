/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;

/**
 * Abstract class for generating AWS Client Code. All generators should implement this interface
 */
public interface ClientGenerator {

    /**
     * Generates all source files for a service based on a filled in service model
     *
     * @param serviceModel Service Model to use in generation.
     * @return
     */
    SdkFileEntry[] generateSourceFiles(final ServiceModel serviceModel) throws Exception;

}