/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration;

import lombok.Data;

import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.HashSet;
import java.util.Optional;

@Data
public class Shape {
    private String name;
    private String type;
    private List<String> enumValues;
    private HashSet<String> referencedBy;
    private Map<String, ShapeMember> members;
    private ShapeMember listMember;
    private ShapeMember mapKey;
    private ShapeMember mapValue;
    private ShapeMember customizedQuery;
    private String max;
    private String min;
    private String documentation;
    private String locationName;
    private String payload;
    private XmlNamespace xmlNamespace;
    private boolean isRequest;
    private boolean isResult;
    private boolean isReferenced;
    private boolean flattened;
    private boolean computeContentMd5;
    private boolean supportsPresigning;
    private boolean signBody;
    private String signerName;
    private String timestampFormat;
    private boolean eventStream;
    private boolean event;
    private String eventPayloadMemberName;
    private String eventPayloadType;
    private boolean isOutgoingEventStream;
    private boolean exception;
    private boolean sensitive;

    public boolean isMap() {
        return "map".equals(type.toLowerCase());
    }

    public boolean isList() {
        return "list".equals(type.toLowerCase());
    }

    public boolean isStructure() {
        return "structure".equals(type.toLowerCase());
    }

    public boolean isDouble() { return "double".equals(type.toLowerCase()); }

    public boolean isString() {
        return "string".equals(type.toLowerCase()) && !isEnum();
    }

    public boolean isTimeStamp() {
        return "timestamp".equals(type.toLowerCase());
    }

    public boolean isEnum() {
        return enumValues != null && enumValues.size() > 0;
    }

    public boolean isBlob() {
        return "blob".equals(type.toLowerCase());
    }

    public boolean isBoolean() {
        return "boolean".equals(type.toLowerCase());
    }

    public boolean isPrimitive() {
        return !isMap() && !isList() && !isStructure() && !isString() && !isEnum() && !isBlob() && !isTimeStamp();
    }

    public boolean isXmlModeledException() {
        if (!exception) return false;
        return members.keySet().parallelStream().anyMatch(key -> !key.equals("Message") && !key.equals("message") && !key.equals("Code") && !key.equals("code"));
    }

    public boolean isJsonModeledException() {
        if (!exception) return false;
        return members.keySet().parallelStream().anyMatch(key -> !key.equals("Message") && !key.equals("message"));
    }

    public boolean isMemberRequired(String member) {
        ShapeMember shapeMember = members.get(member);
        return shapeMember != null && members.get(member).isRequired();
    }

    public boolean hasHeaderMembers() {
      if (members == null) return false;
      return members.values().parallelStream().anyMatch(member -> member.isUsedForHeader());
    }

    public boolean hasStatusCodeMembers() {
      if (members == null) return false;
      return members.values().parallelStream().anyMatch(member -> member.isUsedForHttpStatusCode());
    }

    public boolean hasStreamMembers() {
      if (members == null) return false;
      return members.values().parallelStream()
              .anyMatch(member -> member.isStreaming()) || (payload != null && members.get(payload) != null && !members.get(payload).getShape().isStructure() && !members.get(payload).getShape().isList());
    }

    public boolean hasPayloadMembers() {
        if (members == null) return false;
        return members.values().parallelStream().anyMatch(member -> !member.isUsedForHttpStatusCode() && !member.isUsedForHeader()
               && !member.isStreaming() && !member.isUsedForUri() && !member.isUsedForQueryString());
    }

    public boolean hasQueryStringMembers() {
        if (members == null) return false;
        return members.values().parallelStream().anyMatch(member -> member.getLocation() != null && member.getLocation().equalsIgnoreCase("querystring"));
    }

    public boolean hasBlobMembers() {
        if (members == null) return false;
        return members.values().parallelStream().anyMatch(member -> member.getShape().isBlob());
    }

    public boolean hasEventStreamMembers() {
        if (members == null) return false;
        return members.values().parallelStream().anyMatch(member -> member.getShape().isEventStream());
    }

    public boolean hasEventPayloadMembers() {
        if (members == null) return false;
        return members.values().parallelStream().anyMatch(member -> member.isEventPayload());
    }

    public boolean hasMember(String member) {
        return members.keySet().stream().anyMatch(key -> key.equals(member));
    }

    public ShapeMember getMemberByLocationName(String locationName) {
        Optional<ShapeMember> found =
                members.values().parallelStream().filter(member -> member.getLocationName() != null && locationName.equals(member.getLocationName())).findFirst();

        if(found.isPresent()) {
            return found.get();
        }

        return null;

    }

    public String getMemberNameByLocationName(String locationName) {
        Optional<Map.Entry<String, ShapeMember>> found =
                members.entrySet().parallelStream().filter(member ->
                        locationName.equals(member.getValue().getLocationName())).findFirst();

        if(found.isPresent()) {
            return found.get().getKey();
        }

        return null;
    }

    public Map<String, ShapeMember> getQueryStringMembers() {
        Map<String, ShapeMember> queryStringMembers = new LinkedHashMap<>();
        for(Map.Entry<String, ShapeMember> entry : members.entrySet()) {
            if(entry.getValue().getLocation() != null && entry.getValue().getLocation().equalsIgnoreCase("querystring")){
               queryStringMembers.put(entry.getKey(), entry.getValue());
            }
        }

        return queryStringMembers;
    }

    public void RemoveMember(String memberName) {
        members.remove(memberName);
    }

    @Override
    public String toString() {
      if(name != null && type != null) {
        return String.format("Shape: Name %s Type %s, flattened %b", name, type, flattened);
      }

      return "null";
    }

    // Some shapes are mutually referenced with each other, e.g. Statement and NotStatement in wafv2.
    public boolean isMutuallyReferencedWith(Shape shape) {
        if (shape == null || shape.members == null || members == null || !isStructure() || !shape.isStructure() || name.equals(shape.getName())) return false;
        return members.values().parallelStream().anyMatch(member -> member.getShape().getName().equals(shape.getName()))
            && shape.getMembers().values().parallelStream().anyMatch(member -> member.getShape().getName().equals(name));
    }

    // e.g. "StructValue" has a list of "Value"s as its member, and "StructValue" itself is a member of "Value".
    // Then "Value".isListMemberAndMutuallyReferencedWith("StructValue") = true
    public boolean isListMemberAndMutuallyReferencedWith(Shape shape) {
        if (shape == null || shape.members == null || members == null || !isStructure() || !shape.isStructure() || name.equals(shape.getName())) return false;
        return members.values().parallelStream().anyMatch(member -> member.getShape().getName().equals(shape.getName()))
            && shape.getMembers().values().parallelStream().anyMatch(member -> member.getShape().isList() && member.getShape().getListMember().getShape().getName().equals(name));
    }
}
