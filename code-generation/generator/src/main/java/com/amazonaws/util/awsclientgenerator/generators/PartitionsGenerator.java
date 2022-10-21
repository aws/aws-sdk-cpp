/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.PartitionsModel;


public interface PartitionsGenerator {

    /**
     * Generates all source files for a defaults model
     *
     * @param serviceModel Partitions Model to use in generation.
     * @return
     */
    SdkFileEntry[] generateSourceFiles(final PartitionsModel serviceModel) throws Exception;

}
