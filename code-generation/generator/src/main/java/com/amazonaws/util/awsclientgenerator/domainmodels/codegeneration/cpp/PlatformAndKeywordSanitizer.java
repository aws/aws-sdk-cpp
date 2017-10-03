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

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp;

import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class PlatformAndKeywordSanitizer {
    private static final Set<String> FORBIDDEN_WORDS;

    private static final Map<Character,Character> ENUM_CHARS_MAPPING;

    static {
        Set<String> words = new HashSet<>();
        words.add("DELETE");
        words.add("delete");
        words.add("NULL");
        words.add("NEW");
        words.add("new");
        words.add("GET");
        words.add("operator");
        words.add("export");
        words.add("and");
        words.add("and_eq");
        words.add("not");
        words.add("not_eq");
        words.add("or");
        words.add("or_eq");
        words.add("xor");
        words.add("xor_eq");
        words.add("switch");
        words.add("template");
        words.add("class");
        words.add("struct");
        words.add("concept");
        words.add("requires");
        words.add("asm");
        words.add("auto");
        words.add("bool");
        words.add("int");
        words.add("unsigned");
        words.add("break");
        words.add("case");
        words.add("try");
        words.add("catch");
        words.add("char");
        words.add("CHAR");
        words.add("T_CHAR");
        words.add("BOOL");
        words.add("const");
        words.add("continue");
        words.add("default");
        words.add("do");
        words.add("while");
        words.add("if");
        words.add("else");
        words.add("ERROR");
        words.add("private");
        words.add("PRIVATE");
        words.add("protected");
        words.add("protected");
        words.add("public");
        words.add("PUBLIC");
        words.add("static");
        words.add("STATIC");
        words.add("double");
        words.add("Double");
        words.add("ANDROID");
        words.add("DEBUG");
        words.add("*");
        //ok you get the idea... add them as you encounter them.
        FORBIDDEN_WORDS = Collections.unmodifiableSet(words);
    }

    static {
        Map<Character,Character> mapping = new HashMap<>();
        mapping.put('-', '_');
        mapping.put(':', '_');
        mapping.put('.', '_');
        mapping.put('*', '_');
        mapping.put('/', '_');
        mapping.put('(', '_');
        mapping.put(')', '_');
        mapping.put(' ', '_');
        ENUM_CHARS_MAPPING = Collections.unmodifiableMap(mapping);
    }

    // Converts C2J enum strings to a valid character set for c++.
    public static String fixEnumValue (String enumValue) {
        String enumMemberName = enumValue;

        for (Character invalid : ENUM_CHARS_MAPPING.keySet()) {
            enumMemberName = enumMemberName.replace(invalid, ENUM_CHARS_MAPPING.get(invalid));
        }

        enumMemberName = enumMemberName.replaceAll("_{2,}", "_").replaceAll("_$", "");

        if (FORBIDDEN_WORDS.contains(enumMemberName)) {
            enumMemberName += "_";
        }

        //replace starting number with underscore.
        char firstChar = enumMemberName.charAt(0);
        if(firstChar >= '0' && firstChar <= '9') {
            enumMemberName = "_" + enumMemberName;
        }

        return enumMemberName;
    }
}
