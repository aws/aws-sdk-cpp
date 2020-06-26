/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp;

import lombok.Data;

import java.util.*;

@Data
public class EnumModel {
    private String name;
    private List<EnumMemberModel> members;

    public EnumModel(String enumName, Collection<String> enumMembers) {
        name = enumName;
        members = new ArrayList<>(enumMembers.size());
        for (String enumMember : enumMembers) {
           members.add(new EnumMemberModel(PlatformAndKeywordSanitizer.fixEnumValue(enumMember), enumMember));
        }
    }

}

