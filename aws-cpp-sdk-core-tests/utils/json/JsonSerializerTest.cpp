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
        auto view = value.View();
        ASSERT_STREQ("testStringValue", view.GetString("testStringKey").c_str());
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
        auto view = value.View();
        ASSERT_EQ(10, view.GetInteger("testIntKey"));
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
        auto view = value.View();
        ASSERT_FALSE(view.GetBool("testBoolKey"));
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
        auto view = value.View();
        ASSERT_STREQ("stringArrayEntry1", view.GetArray("array")[0].AsString().c_str());
        ASSERT_STREQ("stringArrayEntry2", view.GetArray("array")[1].AsString().c_str());
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
        auto view = value.View();
        ASSERT_TRUE(value.GetErrorMessage().empty());
        ASSERT_STREQ("testStringValue", view.GetString("testStringKey").c_str());
        ASSERT_EQ(10, view.GetInteger("testIntKey"));
        ASSERT_FALSE(view.GetBool("testBoolKey"));
        ASSERT_TRUE(view.GetObject("object").AsString().empty());
        ASSERT_STREQ("stringArrayEntry1", view.GetArray("array")[0].AsString().c_str());
        ASSERT_STREQ("stringArrayEntry2", view.GetArray("array")[1].AsString().c_str());
        ASSERT_STREQ("testObjectStringValue", view.GetObject("object").GetString("testObjectStringKey").c_str());
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
        auto view = value.View();
        ASSERT_TRUE(value.GetErrorMessage().empty());
        ASSERT_STREQ("testStringValue", view.GetString("testStringKey").c_str());
        ASSERT_EQ(10, view.GetInteger("testIntKey"));
        ASSERT_FALSE(view.GetBool("testBoolKey"));
        ASSERT_STREQ("stringArrayEntry1", view.GetArray("array")[0].AsString().c_str());
        ASSERT_STREQ("stringArrayEntry2", view.GetArray("array")[1].AsString().c_str());
        ASSERT_STREQ("testObjectStringValue", view.GetObject("object").GetString("testObjectStringKey").c_str());
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
    ss << "{\"bla\" : blah blah";
    JsonValue value(ss);
    ASSERT_FALSE(value.WasParseSuccessful());
    ASSERT_STREQ("Failed to parse JSON. Invalid input at: blah blah", value.GetErrorMessage().c_str());
}

TEST(JsonSerializerTest, TestJsonStringValue)
{
    JsonValue value;
    value.WithString("testKey", "testValue");
    ASSERT_STREQ("testValue", value.View().GetString("testKey").c_str());

    value.AsString("anotherTestValue");
    ASSERT_STREQ("anotherTestValue", value.View().AsString().c_str());
}

TEST(JsonSerializerTest, TestJsonIntegerValue)
{
    JsonValue value;
    value.WithInteger("testKey", 10);
    ASSERT_EQ(10, value.View().GetInteger("testKey"));

    value.AsInteger(15);
    ASSERT_EQ(15, value.View().AsInteger());
}

TEST(JsonSerializerTest, TestJsonBoolValue)
{
    JsonValue value;
    value.WithBool("testKey", false);
    ASSERT_FALSE(value.View().GetBool("testKey"));

    value.AsBool(true);
    ASSERT_TRUE(value.View().AsBool());
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
    Array<JsonView> returnedValues = value.View().GetArray("testArray");

    ASSERT_EQ(2uL, returnedValues.GetLength());
    ASSERT_EQ("testValue1", returnedValues[0].AsString());
    ASSERT_EQ("testValue2", returnedValues[1].AsString());

    arrayValue[0] = value1.AsString("testValue3");
    arrayValue[1] = value2.AsString("testValue4");

    value.AsArray(arrayValue);
    returnedValues = value.View().AsArray();

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
    auto objectView = object.View();

    ASSERT_EQ(2uL, objectView.GetObject("testObjectKey").GetArray("testArray").GetLength());
    ASSERT_EQ("testValue1", objectView.GetObject("testObjectKey").GetArray("testArray")[0].AsString());
    ASSERT_EQ("testValue2", objectView.GetObject("testObjectKey").GetArray("testArray")[1].AsString());
    ASSERT_EQ(10, objectView.GetObject("testObjectKey").GetInteger("testIntegerKey"));
    ASSERT_FALSE(objectView.GetObject("testObjectKey").GetBool("testBoolKey"));

    object.AsObject(value);
    objectView = object.View();
    ASSERT_EQ(2uL, objectView.AsObject().GetArray("testArray").GetLength());
    ASSERT_EQ("testValue1", objectView.AsObject().GetArray("testArray")[0].AsString());
    ASSERT_EQ("testValue2", objectView.AsObject().GetArray("testArray")[1].AsString());
    ASSERT_EQ(10, objectView.AsObject().GetInteger("testIntegerKey"));
    ASSERT_FALSE(objectView.AsObject().GetBool("testBoolKey"));
}

TEST(JsonSerializerTest, TestJsonCompactSerializeObject)
{
    JsonValue value(jsonValue);
    Aws::String outputString = value.View().WriteCompact();
    JsonValue reparsedValue(outputString);
    if (reparsedValue.WasParseSuccessful())
    {
        auto view = reparsedValue.View();
        ASSERT_EQ("testStringValue", view.GetString("testStringKey"));
        ASSERT_EQ(10, view.GetInteger("testIntKey"));
        ASSERT_FALSE(view.GetBool("testBoolKey"));
        ASSERT_EQ("stringArrayEntry1", view.GetArray("array")[0].AsString());
        ASSERT_EQ("stringArrayEntry2", view.GetArray("array")[1].AsString());
        ASSERT_EQ("testObjectStringValue", view.GetObject("object").GetString("testObjectStringKey"));
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(reparsedValue.GetErrorMessage().c_str());
    }
}

TEST(JsonSerializerTest, TestJsonStyledSerializeObject)
{
    JsonValue value(jsonValue);

    Aws::String outputString = value.View().WriteReadable();

    JsonValue reparsedValue(outputString);

    if (reparsedValue.WasParseSuccessful())
    {
        auto view = reparsedValue.View();
        ASSERT_EQ("testStringValue", view.GetString("testStringKey"));
        ASSERT_EQ(10, view.GetInteger("testIntKey"));
        ASSERT_FALSE(view.GetBool("testBoolKey"));
        ASSERT_EQ("stringArrayEntry1", view.GetArray("array")[0].AsString());
        ASSERT_EQ("stringArrayEntry2", view.GetArray("array")[1].AsString());
        ASSERT_EQ("testObjectStringValue", view.GetObject("object").GetString("testObjectStringKey"));
    }
    else
    {
        GTEST_NONFATAL_FAILURE_(reparsedValue.GetErrorMessage().c_str());
    }
}

TEST(JsonSerializerTest, TestNullSanity)
{
    JsonValue value;
    JsonView view = value.View();
    Aws::String nullStrValue = view.WriteReadable(false);
    ASSERT_STREQ("", nullStrValue.c_str());
    auto map = view.GetAllObjects();
    ASSERT_TRUE(map.empty());
    ASSERT_FALSE(view.ValueExists("null"));
}

TEST(JsonSerializerTest, TestKeyValueExists)
{
    auto input = R"({"AWS" : {
    "Key1" : "value1",
    "Key2" : null
    }})";
    JsonValue doc(input);
    auto json = doc.View().GetObject("AWS");

    ASSERT_TRUE(json.ValueExists("Key1"));
    ASSERT_FALSE(json.ValueExists("Key2"));
    ASSERT_FALSE(json.ValueExists("Key3"));

    ASSERT_TRUE(json.KeyExists("Key1"));
    ASSERT_TRUE(json.KeyExists("Key2"));
    ASSERT_FALSE(json.KeyExists("Key3"));
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

TEST(JsonSerializer, TestBuilderPatternReplacesKeys)
{
    auto input = R"({"AWS" : {
    "Key1" : "value1",
    "Key2" : 42
    }})";

    JsonValue doc(input);
    auto modified = doc.View().GetObject("AWS")
        .Materialize()
        .WithString("Key1", "another")
        .WithInteger("Key2", 43);
    const auto output = doc.WithObject("AWS", modified).View().WriteCompact();
    const auto expected = R"({"AWS":{"Key1":"another","Key2":43}})";
    ASSERT_STREQ(expected, output.c_str());
}

TEST(JsonSerializer, TestGetAllObjects)
{
    auto input = R"({"AWS" : {
    "Key1" : "value1",
    "Key2" : 42
    }})";

    JsonValue doc(input);
    auto docView = doc.View();
    ASSERT_EQ(1u, docView.GetAllObjects().size());
    auto all = docView.GetObject("AWS").GetAllObjects();
    ASSERT_EQ(2u, all.size());
    ASSERT_STREQ("value1", all["Key1"].AsString().c_str());
    ASSERT_EQ(42, all["Key2"].AsInteger());
}

TEST(JsonSerializer, TestEquality)
{
    auto input = R"({"AWS" : {
    "Key1" : "value1",
    "Key2" : 42
    }})";

    JsonValue parsed(input);
    JsonValue keys;
    keys.WithString("Key1", "value1").WithInteger("Key2", 42);

    JsonValue built;
    built.WithObject("AWS", keys);
    ASSERT_EQ(parsed, built);
    built.WithString("AWS", "Amazon Web Services");
    ASSERT_NE(parsed, built);
}
