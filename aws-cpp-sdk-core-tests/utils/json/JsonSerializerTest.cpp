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

#include <aws/external/gtest.h>

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

const Aws::String simpleValue = "{\"testStringKey\":\"testStringValue\"}";

TEST(JsonSerializerTest, TestParseSimpleJsonString)
{
    JsonValue value(simpleValue);
    if (value.WasParseSuccessful())
    {
        ASSERT_TRUE(value.GetErrorMessage().empty());
        ASSERT_STREQ("testStringValue", value.GetString("testStringKey").c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(value.GetErrorMessage().c_str());
    }
}

const Aws::String simpleValue2 = "{\"testIntKey\":10}";

TEST(JsonSerializerTest, TestParseSimpleJsonString2)
{
    JsonValue value(simpleValue2);
    if (value.WasParseSuccessful())
    {
        ASSERT_TRUE(value.GetErrorMessage().empty());
        ASSERT_EQ(10, value.GetInteger("testIntKey"));
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(value.GetErrorMessage().c_str());
    }
}

const Aws::String simpleValue3 = "{\"testBoolKey\":false}";

TEST(JsonSerializerTest, TestParseSimpleJsonString3)
{
    JsonValue value(simpleValue3);
    if (value.WasParseSuccessful())
    {
        ASSERT_TRUE(value.GetErrorMessage().empty());
        ASSERT_FALSE(value.GetBool("testBoolKey"));
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(value.GetErrorMessage().c_str());
    }
}

const Aws::String jsonArrayValue =
    "{\"array\": [\"stringArrayEntry1\", \"stringArrayEntry2\"]}";

TEST(JsonSerializerTest, TestParseJsonArrayString)
{
    JsonValue value(jsonArrayValue);
    if (value.WasParseSuccessful())
    {
        ASSERT_TRUE(value.GetErrorMessage().empty());
        ASSERT_STREQ("stringArrayEntry1", value.GetArray("array")[0].AsString().c_str());
        ASSERT_STREQ("stringArrayEntry2", value.GetArray("array")[1].AsString().c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(value.GetErrorMessage().c_str());
    }
}

const Aws::String jsonValue =
    "{\"testStringKey\":\"testStringValue\", \"testIntKey\":10, "
    "\"testBoolKey\":false, \"array\": [\"stringArrayEntry1\", \"stringArrayEntry2\"], "
    "\"object\": {\"testObjectStringKey\":\"testObjectStringValue\"}}";

TEST(JsonSerializerTest, TestParseJsonString)
{
    JsonValue value(jsonValue);
    if (value.WasParseSuccessful())
    {
        ASSERT_TRUE(value.GetErrorMessage().empty());
        ASSERT_STREQ("testStringValue", value.GetString("testStringKey").c_str());
        ASSERT_EQ(10, value.GetInteger("testIntKey"));
        ASSERT_FALSE(value.GetBool("testBoolKey"));
        ASSERT_STREQ("stringArrayEntry1", value.GetArray("array")[0].AsString().c_str());
        ASSERT_STREQ("stringArrayEntry2", value.GetArray("array")[1].AsString().c_str());
        ASSERT_STREQ("testObjectStringValue", value.GetObject("object").GetString("testObjectStringKey").c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(value.GetErrorMessage().c_str());
    }
}

TEST(JsonSerializerTest, TestParseJsonStream)
{
    Aws::StringStream inputAsStream(jsonValue);
    JsonValue value(inputAsStream);

    if (value.WasParseSuccessful())
    {
        ASSERT_TRUE(value.GetErrorMessage().empty());
        ASSERT_STREQ("testStringValue", value.GetString("testStringKey").c_str());
        ASSERT_EQ(10, value.GetInteger("testIntKey"));
        ASSERT_FALSE(value.GetBool("testBoolKey"));
        ASSERT_STREQ("stringArrayEntry1", value.GetArray("array")[0].AsString().c_str());
        ASSERT_STREQ("stringArrayEntry2", value.GetArray("array")[1].AsString().c_str());
        ASSERT_STREQ("testObjectStringValue", value.GetObject("object").GetString("testObjectStringKey").c_str());
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(value.GetErrorMessage().c_str());
    }
}

TEST(JsonSerializerTest, TestParseJsonStringFailed)
{
	JsonValue value(Aws::String("blah blah blah"));
	ASSERT_FALSE(value.WasParseSuccessful());
	ASSERT_FALSE(value.GetErrorMessage().empty());
}

TEST(JsonSerializerTest, TestParseJsonStreamFailed)
{
    Aws::StringStream ss;
    ss << "blah blah blah";
    JsonValue value(ss);
    ASSERT_FALSE(value.WasParseSuccessful());
    ASSERT_FALSE(value.GetErrorMessage().empty());
}

TEST(JsonSerializerTest, TestJsonStringValue)
{
    JsonValue value;
    value.WithString("testKey", "testValue");
    ASSERT_STREQ("testValue", value.GetString("testKey").c_str());

    value.AsString("anotherTestValue");
    ASSERT_STREQ("anotherTestValue", value.AsString().c_str());
}

TEST(JsonSerializerTest, TestJsonIntegerValue)
{
    JsonValue value;
    value.WithInteger("testKey", 10);
    ASSERT_EQ(10, value.GetInteger("testKey"));

    value.AsInteger(15);
    ASSERT_EQ(15, value.AsInteger());
}

TEST(JsonSerializerTest, TestJsonBoolValue)
{
    JsonValue value;
    value.WithBool("testKey", false);
    ASSERT_FALSE(value.GetBool("testKey"));

    value.AsBool(true);
    ASSERT_TRUE(value.AsBool());
}

TEST(JsonSerializerTest, TestJsonArrayValue)
{
    JsonValue value;
    Array<JsonValue> arrayValue(2);
    JsonValue value1;
    JsonValue value2;
    arrayValue[0] = value1.AsString("testValue1");
    arrayValue[1] = value2.AsString("testValue2");

    value.WithArray("testArray", arrayValue);
    Array<JsonValue> returnedValues = value.GetArray("testArray");

    ASSERT_EQ(2uL, returnedValues.GetLength());
    ASSERT_EQ("testValue1", returnedValues[0].AsString());
    ASSERT_EQ("testValue2", returnedValues[1].AsString());

    arrayValue[0] = value1.AsString("testValue3");
    arrayValue[1] = value2.AsString("testValue4");

    value.AsArray(arrayValue);
    returnedValues = value.AsArray();

    ASSERT_EQ(2uL, returnedValues.GetLength());
    ASSERT_EQ("testValue3", returnedValues[0].AsString());
    ASSERT_EQ("testValue4", returnedValues[1].AsString());
}

TEST(JsonSerializerTest, TestJsonObjectValue)
{
    JsonValue value;
    Array<JsonValue> arrayValue(2);
    JsonValue value1;
    JsonValue value2;
    arrayValue[0] = value1.AsString("testValue1");
    arrayValue[1] = value2.AsString("testValue2");

    value.WithArray("testArray", arrayValue);
    value.WithString("testStringKey", "testStringValue");
    value.WithInteger("testIntegerKey", 10);
    value.WithBool("testBoolKey", false);

    JsonValue object;
    object.WithObject("testObjectKey", value);

    ASSERT_EQ(2uL, object.GetObject("testObjectKey").GetArray("testArray").GetLength());
    ASSERT_EQ("testValue1", object.GetObject("testObjectKey").GetArray("testArray")[0].AsString());
    ASSERT_EQ("testValue2", object.GetObject("testObjectKey").GetArray("testArray")[1].AsString());
    ASSERT_EQ(10, object.GetObject("testObjectKey").GetInteger("testIntegerKey"));
    ASSERT_FALSE(object.GetObject("testObjectKey").GetBool("testBoolKey"));

    object.AsObject(value);
    ASSERT_EQ(2uL, object.AsObject().GetArray("testArray").GetLength());
    ASSERT_EQ("testValue1", object.AsObject().GetArray("testArray")[0].AsString());
    ASSERT_EQ("testValue2", object.AsObject().GetArray("testArray")[1].AsString());
    ASSERT_EQ(10, object.AsObject().GetInteger("testIntegerKey"));
    ASSERT_FALSE(object.AsObject().GetBool("testBoolKey"));    
}

TEST(JsonSerializerTest, TestJsonCompactSerializeObject)
{
    JsonValue value(jsonValue);

    Aws::String outputString = value.WriteCompact();

    JsonValue reparsedValue(outputString);

    if (reparsedValue.WasParseSuccessful())
    {
        ASSERT_EQ("testStringValue", reparsedValue.GetString("testStringKey"));
        ASSERT_EQ(10, reparsedValue.GetInteger("testIntKey"));
        ASSERT_FALSE(reparsedValue.GetBool("testBoolKey"));
        ASSERT_EQ("stringArrayEntry1", reparsedValue.GetArray("array")[0].AsString());
        ASSERT_EQ("stringArrayEntry2", reparsedValue.GetArray("array")[1].AsString());
        ASSERT_EQ("testObjectStringValue", reparsedValue.GetObject("object").GetString("testObjectStringKey"));
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(reparsedValue.GetErrorMessage().c_str());
    }    
}

TEST(JsonSerializerTest, TestJsonStyledSerializeObject)
{
    JsonValue value(jsonValue);

    Aws::String outputString = value.WriteReadable();

    JsonValue reparsedValue(outputString);

    if (reparsedValue.WasParseSuccessful())
    {
        ASSERT_EQ("testStringValue", reparsedValue.GetString("testStringKey"));
        ASSERT_EQ(10, reparsedValue.GetInteger("testIntKey"));
        ASSERT_FALSE(reparsedValue.GetBool("testBoolKey"));
        ASSERT_EQ("stringArrayEntry1", reparsedValue.GetArray("array")[0].AsString());
        ASSERT_EQ("stringArrayEntry2", reparsedValue.GetArray("array")[1].AsString());
        ASSERT_EQ("testObjectStringValue", reparsedValue.GetObject("object").GetString("testObjectStringKey"));
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(reparsedValue.GetErrorMessage().c_str());
    }
}

TEST(JsonSerializerTest, TestNullSanity)
{
    JsonValue value;
    Aws::String nullStrValue = value.WriteReadable(false);
    ASSERT_EQ("null\n", nullStrValue);
    ASSERT_TRUE(value.AsString().empty());
    ASSERT_EQ(0, value.AsInteger());
    ASSERT_EQ(0uL, value.AsArray().GetLength());
    Aws::String emptyObjValue = value.AsObject().WriteReadable();
    ASSERT_EQ("{\n}\n", emptyObjValue);
}

TEST(JsonSerializerTest, TestCopy)
{
    JsonValue value;
    ASSERT_TRUE(value.WasParseSuccessful());
    JsonValue copiedValue(value);
    ASSERT_TRUE(copiedValue.WasParseSuccessful());
    JsonValue copiedValue2;
    copiedValue2 = value;
    ASSERT_TRUE(copiedValue2.WasParseSuccessful());
    JsonValue bad(Aws::String("not valid json"));
    ASSERT_FALSE(bad.WasParseSuccessful());
    copiedValue = bad;
    ASSERT_FALSE(copiedValue.WasParseSuccessful());
    
}

