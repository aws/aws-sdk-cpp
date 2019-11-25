/*
* Copyright 2010-2019 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.Shape;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ShapeMember;
import org.junit.Test;

import java.util.HashMap;

import static org.junit.Assert.assertTrue;

public class ShapeTest {

    @Test
    public void testIsMutuallyReferencedWith() {
        Shape shape1 = new Shape();
        shape1.setType("structure");
        shape1.setName("Value1");
        shape1.setMembers(new HashMap<>());
        Shape shape2 = new Shape();
        shape2.setType("structure");
        shape2.setName("Value2");
        shape2.setMembers(new HashMap<>());

        ShapeMember shapeMember1 = new ShapeMember();
        shapeMember1.setShape(shape2);
        shape1.getMembers().put("member", shapeMember1);
        ShapeMember shapeMember2 = new ShapeMember();
        shapeMember2.setShape(shape1);
        shape2.getMembers().put("member", shapeMember2);

        assertTrue(shape1.isMutuallyReferencedWith(shape2));
        assertTrue(shape2.isMutuallyReferencedWith(shape1));
    }

    public void testIsListMemberAndMutuallyReferencedWith() {
        Shape structValueShape = new Shape();
        structValueShape.setType("structure");
        structValueShape.setName("StructValue");
        structValueShape.setMembers(new HashMap<>());
        Shape valueListShape = new Shape();
        valueListShape.setType("list");
        valueListShape.setName("ValueList");
        Shape valueShape = new Shape();
        valueShape.setType("structure");
        valueShape.setName("Value");
        valueShape.setMembers(new HashMap<>());

        ShapeMember structValueShapeMember = new ShapeMember();
        structValueShapeMember.setShape(valueListShape);
        structValueShape.getMembers().put("valueList", structValueShapeMember);
        ShapeMember valueListShapeMember = new ShapeMember();
        valueListShapeMember.setShape(valueShape);
        valueListShape.setListMember(valueListShapeMember);
        ShapeMember valueShapeMember = new ShapeMember();
        valueShapeMember.setShape(structValueShape);
        valueShape.getMembers().put("structValue", valueShapeMember);

        assertTrue(valueShape.isListMemberAndMutuallyReferencedWith(structValueShape));
    }
}
