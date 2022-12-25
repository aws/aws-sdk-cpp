/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Metadata;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import com.amazonaws.util.awsclientgenerator.transform.CoreErrors;
import com.google.common.base.CaseFormat;
import com.google.common.collect.ImmutableSet;

import java.lang.RuntimeException;

import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.LinkedList;
import java.util.Map;
import java.util.Optional;
import java.util.Queue;
import java.util.Set;
import java.util.stream.Collectors;

public class CppViewHelper {
    private static final Map<String, String> CORAL_TYPE_TO_CPP_TYPE_MAPPING = new HashMap<>();
    private static final Map<String, String> CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING = new HashMap<>();
    private static final Map<String, String> CORAL_TYPE_TO_XML_CONVERSION_MAPPING = new HashMap<>();
    private static final Map<String, String> CORAL_TYPE_TO_DEFAULT_VALUES = new HashMap<>();
    private static final Map<String, String> CORAL_PROTOCOL_TO_CONTENT_TYPE_MAPPING = new HashMap<>();
    private static final Map<String, String> CORAL_PROTOCOL_TO_PAYLOAD_TYPE_MAPPING = new HashMap<>();
    private static final Map<String, String> C2J_TIMESTAMP_FORMAT_TO_CPP_DATE_TIME_FORMAT = new HashMap<>();

    private static final Set<String> FORBIDDEN_FUNCTION_NAMES =
            ImmutableSet.<String>builder()
                    .add("GetBody")
                    .build();

    static {
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("long", "long long");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("integer", "int");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("string", "Aws::String");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("timestamp", "Aws::Utils::DateTime");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("boolean", "bool");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("sensitive_boolean", "bool");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("double", "double");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("float", "double");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("blob", "Aws::Utils::ByteBuffer");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("sensitive_blob", "Aws::Utils::CryptoBuffer");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("sensitive_long", "long long");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("sensitive_integer", "int");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("sensitive_float", "double");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("sensitive_double", "double");
        CORAL_TYPE_TO_CPP_TYPE_MAPPING.put("sensitive_timestamp", "Aws::Utils::DateTime");

        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("long", "Int64");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("integer", "Integer");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("string", "String");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("boolean", "Bool");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("sensitive_boolean", "Bool");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("double", "Double");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("map", "Object");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("list", "Array");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("structure", "Object");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("blob", "String");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("float", "Double");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("timestamp", "Double");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("unixtimestamp", "Double");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("rfc822", "String");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("iso8601", "String");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("sensitive_long", "Int64");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("sensitive_integer", "Integer");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("sensitive_float", "Double");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("sensitive_double", "Double");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("sensitive_timestamp", "Double");
        CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.put("sensitive_unixtimestamp", "Double");

        CORAL_TYPE_TO_XML_CONVERSION_MAPPING.put("long", "StringUtils::ConvertToInt64");
        CORAL_TYPE_TO_XML_CONVERSION_MAPPING.put("integer", "StringUtils::ConvertToInt32");
        CORAL_TYPE_TO_XML_CONVERSION_MAPPING.put("boolean", "StringUtils::ConvertToBool");
        CORAL_TYPE_TO_XML_CONVERSION_MAPPING.put("sensitive_boolean", "StringUtils::ConvertToBool");
        CORAL_TYPE_TO_XML_CONVERSION_MAPPING.put("double", "StringUtils::ConvertToDouble");
        CORAL_TYPE_TO_XML_CONVERSION_MAPPING.put("float", "StringUtils::ConvertToDouble");
        CORAL_TYPE_TO_XML_CONVERSION_MAPPING.put("sensitive_long", "StringUtils::ConvertToInt64");
        CORAL_TYPE_TO_XML_CONVERSION_MAPPING.put("sensitive_integer", "StringUtils::ConvertToInt32");
        CORAL_TYPE_TO_XML_CONVERSION_MAPPING.put("sensitive_float", "StringUtils::ConvertToDouble");
        CORAL_TYPE_TO_XML_CONVERSION_MAPPING.put("sensitive_double", "StringUtils::ConvertToDouble");

        CORAL_TYPE_TO_DEFAULT_VALUES.put("long", "0");
        CORAL_TYPE_TO_DEFAULT_VALUES.put("integer", "0");
        CORAL_TYPE_TO_DEFAULT_VALUES.put("boolean", "false");
        CORAL_TYPE_TO_DEFAULT_VALUES.put("sensitive_boolean", "false");
        CORAL_TYPE_TO_DEFAULT_VALUES.put("double", "0.0");
        CORAL_TYPE_TO_DEFAULT_VALUES.put("float", "0.0");
        CORAL_TYPE_TO_DEFAULT_VALUES.put("sensitive_long", "0");
        CORAL_TYPE_TO_DEFAULT_VALUES.put("sensitive_integer", "0");
        CORAL_TYPE_TO_DEFAULT_VALUES.put("sensitive_float", "0.0");
        CORAL_TYPE_TO_DEFAULT_VALUES.put("sensitive_double", "0.0");

        CORAL_PROTOCOL_TO_CONTENT_TYPE_MAPPING.put("json", "Aws::AMZN_JSON_CONTENT_TYPE_1_1");
        CORAL_PROTOCOL_TO_CONTENT_TYPE_MAPPING.put("json1.0", "Aws::AMZN_JSON_CONTENT_TYPE_1_0");
        CORAL_PROTOCOL_TO_CONTENT_TYPE_MAPPING.put("json1.1", "Aws::AMZN_JSON_CONTENT_TYPE_1_1");
        CORAL_PROTOCOL_TO_CONTENT_TYPE_MAPPING.put("rest-json", "Aws::JSON_CONTENT_TYPE");
        CORAL_PROTOCOL_TO_CONTENT_TYPE_MAPPING.put("rest-json1.0", "Aws::JSON_CONTENT_TYPE");
        CORAL_PROTOCOL_TO_CONTENT_TYPE_MAPPING.put("rest-json1.1", "Aws::JSON_CONTENT_TYPE");
        CORAL_PROTOCOL_TO_CONTENT_TYPE_MAPPING.put("rest-xml", "Aws::AMZN_XML_CONTENT_TYPE");
        CORAL_PROTOCOL_TO_CONTENT_TYPE_MAPPING.put("query", "Aws::FORM_CONTENT_TYPE");
        CORAL_PROTOCOL_TO_CONTENT_TYPE_MAPPING.put("ec2", "Aws::FORM_CONTENT_TYPE");
        CORAL_PROTOCOL_TO_CONTENT_TYPE_MAPPING.put("application-json", "Aws::JSON_CONTENT_TYPE");

        CORAL_PROTOCOL_TO_PAYLOAD_TYPE_MAPPING.put("json", "json");
        CORAL_PROTOCOL_TO_PAYLOAD_TYPE_MAPPING.put("rest-json", "json");
        CORAL_PROTOCOL_TO_PAYLOAD_TYPE_MAPPING.put("rest-xml", "xml");
        CORAL_PROTOCOL_TO_PAYLOAD_TYPE_MAPPING.put("query", "xml");
        CORAL_PROTOCOL_TO_PAYLOAD_TYPE_MAPPING.put("ec2", "xml");
        CORAL_PROTOCOL_TO_PAYLOAD_TYPE_MAPPING.put("application-json", "json");
        CORAL_PROTOCOL_TO_PAYLOAD_TYPE_MAPPING.put("api-gateway", "json");

        C2J_TIMESTAMP_FORMAT_TO_CPP_DATE_TIME_FORMAT.put("rfc822", "RFC822");
        C2J_TIMESTAMP_FORMAT_TO_CPP_DATE_TIME_FORMAT.put("iso8601", "ISO_8601");
    }

    public static String computeExportValue(String classNamePrefix) {
        return String.format("AWS_%s_API", classNamePrefix.toUpperCase());
    }

    public static String computeBaseClass(String classNamePrefix, Shape shape) {
        String streamingName = shape.hasStreamMembers() ? "Streaming" : "";
        return String.format("%s%sRequest", streamingName, classNamePrefix);
    }

    public static String computeMemberVariableName(String memberName) {
        String varName = memberName.substring(0, 1).toLowerCase() + memberName.substring(1);
        return String.format("m_%s", varName);
    }

    public static String computeDefaultValue(Shape shape) {
        return CORAL_TYPE_TO_DEFAULT_VALUES.get(shape.getType());
    }

    public static String computeVariableName(String memberName) {
        return memberName.substring(0, 1).toLowerCase() + memberName.substring(1);
    }

    public static String convertToUpperCamel(String lowerCamel) {
        return CaseFormat.LOWER_CAMEL.to(CaseFormat.UPPER_CAMEL, lowerCamel);
    }

    public static String computeVariableHasBeenSetName(String memberName) {
        return String.format("%sHasBeenSet", computeMemberVariableName(memberName));
    }

    public static String computeJsonizeString(Shape shape, boolean isPointer) {
        String memberAccessOp = isPointer ? "->" : ".";

	if (shape.isDocument()) {
            return memberAccessOp + "View()";
        }

        if(shape.isStructure()) {
            return memberAccessOp + "Jsonize()";
        }

        if(shape.isTimeStamp()) {
            if(shape.getTimestampFormat() == null || CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.get(shape.getTimestampFormat().toLowerCase()).equalsIgnoreCase("Double")) {
                return memberAccessOp + "SecondsWithMSPrecision()";
            }

            if(shape.getTimestampFormat().toLowerCase().equalsIgnoreCase("rfc822")) {
                return memberAccessOp + "ToGmtString(Aws::Utils::DateFormat::RFC822)";
            }

            if(shape.getTimestampFormat().toLowerCase().equalsIgnoreCase("iso8601")) {
                return memberAccessOp + "ToGmtString(Aws::Utils::DateFormat::ISO_8601)";
            }
        }

        return "";
    }

    public static String computeJsonizeString(Shape shape) {
        return computeJsonizeString(shape, false);
    }

    public static String computeCppType(Shape shape) {
        String sensitivePrefix = shape.isSensitive() ? "sensitive_" : "";
        String cppType =  CORAL_TYPE_TO_CPP_TYPE_MAPPING.get(sensitivePrefix + shape.getType());

        //enum types show up as string
        if(cppType != null && !shape.isEnum()) {
            return cppType;
        }

        else if(shape.isDocument())
        {
            return "Aws::Utils::Document";
        }

        else if(shape.isStructure() || shape.isEnum())
        {
            return shape.getName();
        }

        else if(shape.isList()) {
            String type = computeCppType(shape.getListMember().getShape());
            return String.format("Aws::Vector<%s>", type);
        }

        else if(shape.isMap()) {
            String key = computeCppType(shape.getMapKey().getShape());
            String value = computeCppType(shape.getMapValue().getShape());
            return String.format("Aws::Map<%s, %s>", key, value);
        }

        else {
            return "Aws::String";
        }
    }

    public static String computeJsonCppType(Shape shape) {
        if(shape.isTimeStamp() && shape.getTimestampFormat() != null) {
            return CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.get(shape.getTimestampFormat().toLowerCase());
        }
        return CORAL_TYPE_TO_JSON_CPP_TYPE_MAPPING.get(shape.getType());
    }

    public static String computeXmlConversionMethodName(Shape shape) {
        return CORAL_TYPE_TO_XML_CONVERSION_MAPPING.get(shape.getType());
    }

    public static String computeRequestContentType(Metadata metadata) {
        String protocolAndVersion = metadata.getProtocol();

        if(metadata.getJsonVersion() != null) {
            protocolAndVersion += metadata.getJsonVersion();
        }

        // Customization for request content-type
        if (metadata.getServiceId().equals("WellArchitected")) {
            return "Aws::JSON_CONTENT_TYPE";
        } else if (metadata.getServiceId().equals("savingsplans")) {
            return "Aws::JSON_CONTENT_TYPE";
        } else {
            return CORAL_PROTOCOL_TO_CONTENT_TYPE_MAPPING.get(protocolAndVersion);
        }
    }

    public static String computeServicePayloadType(String protocol) {
        return CORAL_PROTOCOL_TO_PAYLOAD_TYPE_MAPPING.get(protocol);
    }

    public static String computeTimestampFormatInHeader(Shape shape) {
        if (shape.getTimestampFormat() != null) {
            return C2J_TIMESTAMP_FORMAT_TO_CPP_DATE_TIME_FORMAT.get(shape.getTimestampFormat().toLowerCase());
        }
        return C2J_TIMESTAMP_FORMAT_TO_CPP_DATE_TIME_FORMAT.get("rfc822");
    }

    public static String computeTimestampFormatInQueryString(Shape shape) {
        if (shape.getTimestampFormat() != null) {
            return C2J_TIMESTAMP_FORMAT_TO_CPP_DATE_TIME_FORMAT.get(shape.getTimestampFormat().toLowerCase());
        }
        return C2J_TIMESTAMP_FORMAT_TO_CPP_DATE_TIME_FORMAT.get("iso8601");
    }

    public static String computeTimestampFormatInXml(Shape shape) {
        if (shape.getTimestampFormat() != null) {
            return C2J_TIMESTAMP_FORMAT_TO_CPP_DATE_TIME_FORMAT.get(shape.getTimestampFormat().toLowerCase());
        }
        return C2J_TIMESTAMP_FORMAT_TO_CPP_DATE_TIME_FORMAT.get("iso8601");
    }

    public static Set<String> computeHeaderIncludes(String projectName, Shape shape) {
        Set<String> headers = new LinkedHashSet<>();
        Set<String> visited = new LinkedHashSet<>();
        Queue<Shape> toVisit = shape.getMembers().values().stream().map(ShapeMember::getShape).collect(Collectors.toCollection(() -> new LinkedList<>()));
        boolean includeUtilityHeader = false;
        boolean includeMemoryHeader = false;

        while(!toVisit.isEmpty()) {
            Shape next = toVisit.remove();
            visited.add(next.getName());
            if(next.isMap()) {
                if(!visited.contains(next.getMapKey().getShape().getName())) {
                    toVisit.add(next.getMapKey().getShape());
                }
                if(!visited.contains(next.getMapValue().getShape().getName())) {
                    toVisit.add(next.getMapValue().getShape());
                }
            }
            if(next.isList())
            {
                Shape shapeInList = next.getListMember().getShape();
                if(!visited.contains(shapeInList.getName())) {
                    toVisit.add(shapeInList);
                }
                if (!shapeInList.isPrimitive() && shapeInList.isMutuallyReferencedWith(shape)) {
                    // C++ requires both forward declaration AND include in the case of mutual reference
                    // and if compile-time member object info required
                    headers.add(formatModelIncludeName(projectName, shapeInList));
                }
            }
            if(!next.isPrimitive()) {
                // if `next` is a direct member of a `shape` and they are mutually referenced
                if(next.isMutuallyReferencedWith(shape) &&
                        shape.getMembers().values().parallelStream().anyMatch(member -> member.getShape().getName().equals(next.getName()))) {
                    // Historically in this SDK, a single mutually referenced member is included as a shared_ptr,
                    // forward declaration and include shared_ptr header in the model header file is enough
                    includeMemoryHeader = true;
                } else if (!shape.getName().equals(next.getName())) {
                    // non-ptr and non-ref objects require object info at compile time (so header is required)
                    // forward declaration may be required OR not depending on the mutual reference
                    headers.add(formatModelIncludeName(projectName, next));
                }
                includeUtilityHeader = true;
            }
        }

        if(includeUtilityHeader) {
            headers.add("<utility>");
        }
        if(includeMemoryHeader) {
            headers.add("<memory>");
        }

        headers.addAll(shape.getMembers().values().stream().filter(member -> member.isIdempotencyToken()).map(member -> "<aws/core/utils/UUID.h>").collect(Collectors.toList()));
        return headers;
    }

    public static Set<String> computeForwardDeclarations(Shape shape) {
        Set<String> forwardDeclarations = new LinkedHashSet<>();
        Set<String> visited = new LinkedHashSet<>();
        Queue<Shape> toVisit = shape.getMembers().values().stream().map(ShapeMember::getShape).collect(Collectors.toCollection(() -> new LinkedList<>()));

        while(!toVisit.isEmpty()) {
            Shape next = toVisit.remove();
            visited.add(next.getName());
            if(next.isMap()) {
                if(!visited.contains(next.getMapKey().getShape().getName())) {
                    toVisit.add(next.getMapKey().getShape());
                }
                if(!visited.contains(next.getMapValue().getShape().getName())) {
                    toVisit.add(next.getMapValue().getShape());
                }
            }
            if(next.isList())
            {
                Shape shapeInList = next.getListMember().getShape();
                if(!visited.contains(shapeInList.getName())) {
                    toVisit.add(shapeInList);
                }
            }
            if(!next.isPrimitive() && !next.isMap() && !next.isList() && !next.isBlob()) {
                if(!next.getName().equals(shape.getName()) && next.isMutuallyReferencedWith(shape)) {
                    forwardDeclarations.add(next.getName());
                }
            }
        }
        return forwardDeclarations;
    }

    public static String formatModelIncludeName(String projectName, Shape shape) {

        if(shape.isMap()) {
            return "<aws/core/utils/memory/stl/AWSMap.h>";
        }
        else if(shape.isList()) {
            return "<aws/core/utils/memory/stl/AWSVector.h>";
        }
        else if(shape.isDocument()) {
            return "<aws/core/utils/Document.h>";
        }
        else if(shape.isEnum() || shape.isStructure()) {
            return String.format("<aws/%s/model/%s.h>", projectName, shape.getName());
        }
        else if(shape.isString()) {
            return "<aws/core/utils/memory/stl/AWSString.h>";
        }
        else if(shape.isTimeStamp()) {
            return "<aws/core/utils/DateTime.h>";
        }
        else if(shape.isBlob()) {
            return "<aws/core/utils/Array.h>";
        }
        else {
            throw new RuntimeException("Unexpected shape:" + shape.toString());
        }
    }

    public static Set<String> computeSourceIncludes(String projectName, Shape shape) {
        Set<String> headers = new LinkedHashSet<>();
        Set<String> visited = new LinkedHashSet<>();
        Queue<Shape> toVisit = shape.getMembers().values().stream().map(ShapeMember::getShape).collect(Collectors.toCollection(() -> new LinkedList<>()));

        while(!toVisit.isEmpty()) {
            Shape next = toVisit.remove();
            visited.add(next.getName());
            if(next.isMap()) {
                if(!visited.contains(next.getMapKey().getShape().getName())) {
                    toVisit.add(next.getMapKey().getShape());
                }
                if(!visited.contains(next.getMapValue().getShape().getName())) {
                    toVisit.add(next.getMapValue().getShape());
                }
            }
            if(next.isList())
            {
                if(!visited.contains(next.getListMember().getShape().getName()))
                {
                    toVisit.add(next.getListMember().getShape());
                }
            }
            if(!next.isPrimitive() && next.isMutuallyReferencedWith(shape)) {
                headers.add(formatModelIncludeName(projectName, next));
            }
        }

        for(Map.Entry<String, ShapeMember> entry : shape.getMembers().entrySet()) {
            Shape innerShape = entry.getValue().getShape();
            // if the shape is a blob, list of blobs or a map with a value blob. It's very unlikely that a blob would be
            // the key in a map, but we check it anyways.
            if (innerShape.isBlob() ||
                (innerShape.isList() && innerShape.getListMember().getShape().isBlob()) ||
                (innerShape.isMap() && innerShape.getMapValue().getShape().isBlob()) ||
                (innerShape.isMap() && innerShape.getMapKey().getShape().isBlob())) {
                headers.add("<aws/core/utils/HashingUtils.h>");
            }
            else if(entry.getValue().isUsedForHeader() || entry.getValue().isUsedForQueryString()) {
                headers.add("<aws/core/utils/memory/stl/AWSStringStream.h>");
            }
        }
        return headers;
    }

    public static String computeOperationNameFromInputOutputShape(String shapeName) {
        String requestString = "Request";
        String resultString = "Result";
        int length = shapeName.length();
        int suffixIndex = length;

        if(shapeName.endsWith(requestString)) {
            suffixIndex = length - requestString.length();
        } else if (shapeName.endsWith(resultString)) {
            suffixIndex = length - resultString.length();
        }

        return shapeName.substring(0, suffixIndex);
    }

    public static String computeCoreErrorConstName(String errorName) {
        return CoreErrors.VARIANTS.get(errorName);
    }

    public static String capitalizeFirstChar(final String str) {
        if (str.length() > 1) {
            return str.substring(0,1).toUpperCase() + str.substring(1);
        }
        else {
            return str.toUpperCase();
        }
    }

    public static String computeChecksumAlgorithm(String algorithm)
    {
        return "Aws::Checksum::Algorithm::" + algorithm.toUpperCase();
    }

    public static String computeChecksumLocation(String location)
    {
        return "Aws::Checksum::Location::" + location.toUpperCase();
    }

    public static String checkForCollision(
            final String functionName,
            final String prefix,
            final String cppType
    ) {
        return Optional.of(functionName)
                .filter(FORBIDDEN_FUNCTION_NAMES::contains)
                .map(__ -> prefix + cppType)
                .orElse(functionName);
    }
}
