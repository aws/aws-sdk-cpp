/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp;

import org.junit.Test;

import static java.util.Arrays.asList;
import static org.junit.Assert.assertEquals;

public class EnumModelTest {

    @Test
    public void invalidChars() {

        EnumModel testEnum = new EnumModel("TESTENUM",
                asList("PACKAGE.NAME", "HYPHENS-ROCK", "OH:DARK:THIRTY"));

        assertEquals(3, testEnum.getMembers().size());
        assertEquals("PACKAGE_NAME", testEnum.getMembers().get(0).getMemberName());
        assertEquals("HYPHENS_ROCK", testEnum.getMembers().get(1).getMemberName());
        assertEquals("OH_DARK_THIRTY", testEnum.getMembers().get(2).getMemberName());
    }

    @Test
    public void invalidWord() {

        EnumModel testEnum = new EnumModel("TESTENUM", asList("DELETE"));

        assertEquals(1, testEnum.getMembers().size());
        assertEquals("DELETE_", testEnum.getMembers().get(0).getMemberName());
    }
}
