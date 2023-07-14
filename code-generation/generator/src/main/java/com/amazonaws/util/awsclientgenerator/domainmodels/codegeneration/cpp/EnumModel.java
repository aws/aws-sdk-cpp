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

    public EnumModel(String serviceNamespace, String enumName, Collection<String> enumMembers) {
        name = enumName;
        members = new ArrayList<>(enumMembers.size());
        for (String enumMember : enumMembers) {
            String fixedEnumValue = PlatformAndKeywordSanitizer.fixEnumValue(enumMember);
            boolean isPredefined = PlatformAndKeywordSanitizer.fixPredefinedSymbols(serviceNamespace, fixedEnumValue);
            members.add(new EnumMemberModel(fixedEnumValue, enumMember, isPredefined));
        }
    }

}

