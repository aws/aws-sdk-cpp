/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/JsonUnionsResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

JsonUnionsResult::JsonUnionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

JsonUnionsResult& JsonUnionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

namespace {
class JsonUnionsResult_MyUnionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonUnionsResult_MyUnionSchemaSerdeDeser(MyUnion& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  MyUnion& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class JsonUnionsResult_GreetingStructSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonUnionsResult_GreetingStructSchemaSerdeDeser(GreetingStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GreetingStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class JsonUnionsResult_RenamedGreetingSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonUnionsResult_RenamedGreetingSchemaSerdeDeser(RenamedGreeting& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  RenamedGreeting& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class JsonUnionsResult_NestedUnionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonUnionsResult_NestedUnionSchemaSerdeDeser(NestedUnion& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  NestedUnion& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class JsonUnionsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonUnionsResultDeserializable(JsonUnionsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  JsonUnionsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void JsonUnionsResult_MyUnionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                    smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "stringValue") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStringValue(*value0);
    }
    return;
  }
  if (memberName == "booleanValue") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBooleanValue(*value0);
    }
    return;
  }
  if (memberName == "numberValue") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetNumberValue(*value0);
    }
    return;
  }
  if (memberName == "blobValue") {
    auto value0 = deserializer.ReadBlob(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBlobValue(*value0);
    }
    return;
  }
  if (memberName == "timestampValue") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTimestampValue(*value0);
    }
    return;
  }
  if (memberName == "enumValue") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetEnumValue(FooEnumMapper::GetFooEnumForName(*value0));
    }
    return;
  }
  if (memberName == "listValue") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetListValue(std::move(list0));
    return;
  }
  if (memberName == "mapValue") {
    Aws::Map<Aws::String, Aws::String> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadString(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = *value1;
      }
    });
    m_obj.SetMapValue(std::move(map0));
    return;
  }
  if (memberName == "structureValue") {
    GreetingStruct nested0;
    JsonUnionsResult_GreetingStructSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetStructureValue(std::move(nested0));
    return;
  }
  if (memberName == "renamedStructureValue") {
    RenamedGreeting nested0;
    JsonUnionsResult_RenamedGreetingSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetRenamedStructureValue(std::move(nested0));
    return;
  }
  if (memberName == "unionValue") {
    NestedUnion nested0;
    JsonUnionsResult_NestedUnionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetUnionValue(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonUnionsResult_MyUnionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::UnionBuilder("MyUnion")
      .PutMember("stringValue", smithy::schema::Schema::CreateString("stringValue"))
      .PutMember("booleanValue", smithy::schema::Schema::CreateBoolean("booleanValue"))
      .PutMember("numberValue", smithy::schema::Schema::CreateInteger("numberValue"))
      .PutMember("blobValue", smithy::schema::Schema::CreateBlob("blobValue"))
      .PutMember("timestampValue", smithy::schema::Schema::CreateTimestamp("timestampValue"))
      .PutMember("enumValue", smithy::schema::Schema::CreateEnum("enumValue"))
      .PutMember(
          "listValue",
          smithy::schema::Schema::ListBuilder("StringList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .PutMember("mapValue", smithy::schema::Schema::MapBuilder("StringMap")
                                 .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                 .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                 .Build())
      .PutMember("structureValue", JsonUnionsResult_GreetingStructSchemaSerdeDeser::BuildSchema())
      .PutMember("renamedStructureValue", JsonUnionsResult_RenamedGreetingSchemaSerdeDeser::BuildSchema())
      .PutMember("unionValue", JsonUnionsResult_NestedUnionSchemaSerdeDeser::BuildSchema())
      .Build();
}

void JsonUnionsResult_GreetingStructSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                           smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "hi") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHi(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonUnionsResult_GreetingStructSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingStruct").PutMember("hi", smithy::schema::Schema::CreateString("hi")).Build();
}

void JsonUnionsResult_RenamedGreetingSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                            smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "salutation") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSalutation(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonUnionsResult_RenamedGreetingSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("RenamedGreeting")
      .PutMember("salutation", smithy::schema::Schema::CreateString("salutation"))
      .Build();
}

void JsonUnionsResult_NestedUnionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                        smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "stringValue") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStringValue(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonUnionsResult_NestedUnionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::UnionBuilder("NestedUnion")
      .PutMember("stringValue", smithy::schema::Schema::CreateString("stringValue"))
      .Build();
}

void JsonUnionsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "contents") {
    MyUnion nested0;
    JsonUnionsResult_MyUnionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetContents(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonUnionsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("JsonUnionsResult")
      .PutMember("contents", JsonUnionsResult_MyUnionSchemaSerdeDeser::BuildSchema())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> JsonUnionsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<JsonUnionsResultDeserializable>("JsonUnionsResultDeserializable", *this);
}
