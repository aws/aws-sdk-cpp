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
#include <aws/json-protocol/model/KitchenSinkOperationResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

KitchenSinkOperationResult::KitchenSinkOperationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

KitchenSinkOperationResult& KitchenSinkOperationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
class KitchenSinkOperationResult_EmptyStructSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit KitchenSinkOperationResult_EmptyStructSchemaSerdeDeser(EmptyStruct&) : m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser(SimpleStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SimpleStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class KitchenSinkOperationResult_KitchenSinkSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit KitchenSinkOperationResult_KitchenSinkSchemaSerdeDeser(KitchenSink& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  KitchenSink& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class KitchenSinkOperationResult_StructWithJsonNameSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit KitchenSinkOperationResult_StructWithJsonNameSchemaSerdeDeser(StructWithJsonName& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  StructWithJsonName& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class KitchenSinkOperationResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit KitchenSinkOperationResultDeserializable(KitchenSinkOperationResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  KitchenSinkOperationResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void KitchenSinkOperationResult_EmptyStructSchemaSerdeDeser::From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) {}

std::shared_ptr<const smithy::schema::Schema> KitchenSinkOperationResult_EmptyStructSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("EmptyStruct").Build();
}

void KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                   smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Value") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetValue(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SimpleStruct").PutMember("Value", smithy::schema::Schema::CreateString("Value")).Build();
}

void KitchenSinkOperationResult_KitchenSinkSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                  smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Blob") {
    auto value0 = deserializer.ReadBlob(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBlob(*value0);
    }
    return;
  }
  if (memberName == "Boolean") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBoolean(*value0);
    }
    return;
  }
  if (memberName == "Double") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDouble(*value0);
    }
    return;
  }
  if (memberName == "EmptyStruct") {
    EmptyStruct nested0;
    KitchenSinkOperationResult_EmptyStructSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetEmptyStruct(std::move(nested0));
    return;
  }
  if (memberName == "Float") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFloat(*value0);
    }
    return;
  }
  if (memberName == "HttpdateTimestamp") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHttpdateTimestamp(*value0);
    }
    return;
  }
  if (memberName == "Integer") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetInteger(*value0);
    }
    return;
  }
  if (memberName == "Iso8601Timestamp") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIso8601Timestamp(*value0);
    }
    return;
  }
  if (memberName == "JsonValue") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetJsonValue(*value0);
    }
    return;
  }
  if (memberName == "ListOfLists") {
    Aws::Vector<Aws::Vector<Aws::String>> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      Aws::Vector<Aws::String> list1;
      itemDeserializer0.ReadList(itemSchema0, [&](smithy::schema::ShapeDeserializer& itemDeserializer1) {
        const smithy::schema::Schema& itemSchema1 = *itemSchema0.GetMemberTarget().value()->GetMember("member").value();
        auto value2 = itemDeserializer1.ReadString(itemSchema1);
        if (value2.has_value()) {
          list1.push_back(*value2);
        }
      });
      list0.push_back(std::move(list1));
    });
    m_obj.SetListOfLists(std::move(list0));
    return;
  }
  if (memberName == "ListOfMapsOfStrings") {
    Aws::Vector<Aws::Map<Aws::String, Aws::String>> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      Aws::Map<Aws::String, Aws::String> map1;
      itemDeserializer0.ReadMap(itemSchema0, [&](const Aws::String& key1, smithy::schema::ShapeDeserializer& valueDeserializer1) {
        const smithy::schema::Schema& valueSchema1 = *itemSchema0.GetMemberTarget().value()->GetMember("value").value();
        auto value2 = valueDeserializer1.ReadString(valueSchema1);
        if (value2.has_value()) {
          map1[key1] = *value2;
        }
      });
      list0.push_back(std::move(map1));
    });
    m_obj.SetListOfMapsOfStrings(std::move(list0));
    return;
  }
  if (memberName == "ListOfStrings") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetListOfStrings(std::move(list0));
    return;
  }
  if (memberName == "ListOfStructs") {
    Aws::Vector<SimpleStruct> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      SimpleStruct nested1;
      KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetListOfStructs(std::move(list0));
    return;
  }
  if (memberName == "Long") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLong(*value0);
    }
    return;
  }
  if (memberName == "MapOfListsOfStrings") {
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      Aws::Vector<Aws::String> list1;
      valueDeserializer0.ReadList(valueSchema0, [&](smithy::schema::ShapeDeserializer& itemDeserializer1) {
        const smithy::schema::Schema& itemSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("member").value();
        auto value2 = itemDeserializer1.ReadString(itemSchema1);
        if (value2.has_value()) {
          list1.push_back(*value2);
        }
      });
      map0[key0] = std::move(list1);
    });
    m_obj.SetMapOfListsOfStrings(std::move(map0));
    return;
  }
  if (memberName == "MapOfMaps") {
    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      Aws::Map<Aws::String, Aws::String> map1;
      valueDeserializer0.ReadMap(valueSchema0, [&](const Aws::String& key1, smithy::schema::ShapeDeserializer& valueDeserializer1) {
        const smithy::schema::Schema& valueSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("value").value();
        auto value2 = valueDeserializer1.ReadString(valueSchema1);
        if (value2.has_value()) {
          map1[key1] = *value2;
        }
      });
      map0[key0] = std::move(map1);
    });
    m_obj.SetMapOfMaps(std::move(map0));
    return;
  }
  if (memberName == "MapOfStrings") {
    Aws::Map<Aws::String, Aws::String> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadString(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = *value1;
      }
    });
    m_obj.SetMapOfStrings(std::move(map0));
    return;
  }
  if (memberName == "MapOfStructs") {
    Aws::Map<Aws::String, SimpleStruct> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      SimpleStruct nested1;
      KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetMapOfStructs(std::move(map0));
    return;
  }
  if (memberName == "RecursiveList") {
    Aws::Vector<KitchenSink> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      KitchenSink nested1;
      KitchenSinkOperationResult_KitchenSinkSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetRecursiveList(std::move(list0));
    return;
  }
  if (memberName == "RecursiveMap") {
    Aws::Map<Aws::String, KitchenSink> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      KitchenSink nested1;
      KitchenSinkOperationResult_KitchenSinkSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetRecursiveMap(std::move(map0));
    return;
  }
  if (memberName == "RecursiveStruct") {
    KitchenSink nested0;
    KitchenSinkOperationResult_KitchenSinkSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetRecursiveStruct(std::move(nested0));
    return;
  }
  if (memberName == "SimpleStruct") {
    SimpleStruct nested0;
    KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetSimpleStruct(std::move(nested0));
    return;
  }
  if (memberName == "String") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetString(*value0);
    }
    return;
  }
  if (memberName == "StructWithJsonName") {
    StructWithJsonName nested0;
    KitchenSinkOperationResult_StructWithJsonNameSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetStructWithJsonName(std::move(nested0));
    return;
  }
  if (memberName == "Timestamp") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTimestamp(*value0);
    }
    return;
  }
  if (memberName == "UnixTimestamp") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetUnixTimestamp(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> KitchenSinkOperationResult_KitchenSinkSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KitchenSink")
      .PutMember("Blob", smithy::schema::Schema::CreateBlob("Blob"))
      .PutMember("Boolean", smithy::schema::Schema::CreateBoolean("Boolean"))
      .PutMember("Double", smithy::schema::Schema::CreateDouble("Double"))
      .PutMember("EmptyStruct", KitchenSinkOperationResult_EmptyStructSchemaSerdeDeser::BuildSchema())
      .PutMember("Float", smithy::schema::Schema::CreateDouble("Float"))
      .PutMember(
          "HttpdateTimestamp", smithy::schema::Schema::CreateTimestamp("HttpdateTimestamp"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::HTTP_DATE)}})
      .PutMember("Integer", smithy::schema::Schema::CreateInteger("Integer"))
      .PutMember(
          "Iso8601Timestamp", smithy::schema::Schema::CreateTimestamp("Iso8601Timestamp"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::DATE_TIME)}})
      .PutMember("JsonValue", smithy::schema::Schema::CreateString("JsonValue"),
                 {{smithy::schema::MediaTypeTrait::KEY(),
                   Aws::MakeShared<smithy::schema::MediaTypeTrait>("SchemaSerdeTrait", "application/json")}})
      .PutMember("ListOfLists", smithy::schema::Schema::ListBuilder("ListOfListOfStrings")
                                    .PutMember("member", smithy::schema::Schema::ListBuilder("ListOfStrings")
                                                             .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                                             .Build())
                                    .Build())
      .PutMember("ListOfMapsOfStrings", smithy::schema::Schema::ListBuilder("ListOfMapsOfStrings")
                                            .PutMember("member", smithy::schema::Schema::MapBuilder("MapOfStrings")
                                                                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                                                     .Build())
                                            .Build())
      .PutMember(
          "ListOfStrings",
          smithy::schema::Schema::ListBuilder("ListOfStrings").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .PutMember("ListOfStructs", smithy::schema::Schema::ListBuilder("ListOfStructs")
                                      .PutMember("member", KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser::BuildSchema())
                                      .Build())
      .PutMember("Long", smithy::schema::Schema::CreateLong("Long"))
      .PutMember("MapOfListsOfStrings", smithy::schema::Schema::MapBuilder("MapOfListsOfStrings")
                                            .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                            .PutMember("value", smithy::schema::Schema::ListBuilder("ListOfStrings")
                                                                    .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                                                    .Build())
                                            .Build())
      .PutMember("MapOfMaps", smithy::schema::Schema::MapBuilder("MapOfMapOfStrings")
                                  .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                  .PutMember("value", smithy::schema::Schema::MapBuilder("MapOfStrings")
                                                          .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                          .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                                          .Build())
                                  .Build())
      .PutMember("MapOfStrings", smithy::schema::Schema::MapBuilder("MapOfStrings")
                                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                     .Build())
      .PutMember("MapOfStructs", smithy::schema::Schema::MapBuilder("MapOfStructs")
                                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                     .PutMember("value", KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser::BuildSchema())
                                     .Build())
      .PutMember("RecursiveList", smithy::schema::Schema::ListBuilder("ListOfKitchenSinks")
                                      .PutMember("member", smithy::schema::Schema::StructureBuilder("KitchenSink").Build())
                                      .Build())
      .PutMember("RecursiveMap", smithy::schema::Schema::MapBuilder("MapOfKitchenSinks")
                                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                     .PutMember("value", smithy::schema::Schema::StructureBuilder("KitchenSink").Build())
                                     .Build())
      .PutMember("RecursiveStruct", smithy::schema::Schema::StructureBuilder("KitchenSink").Build())
      .PutMember("SimpleStruct", KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser::BuildSchema())
      .PutMember("String", smithy::schema::Schema::CreateString("String"))
      .PutMember("StructWithJsonName", KitchenSinkOperationResult_StructWithJsonNameSchemaSerdeDeser::BuildSchema())
      .PutMember("Timestamp", smithy::schema::Schema::CreateTimestamp("Timestamp"))
      .PutMember("UnixTimestamp", smithy::schema::Schema::CreateTimestamp("UnixTimestamp"),
                 {{smithy::schema::TimestampFormatTrait::KEY(),
                   Aws::MakeShared<smithy::schema::TimestampFormatTrait>("SchemaSerdeTrait",
                                                                         smithy::schema::TimestampFormatTrait::Format::EPOCH_SECONDS)}})
      .Build();
}

void KitchenSinkOperationResult_StructWithJsonNameSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                         smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Value") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetValue(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> KitchenSinkOperationResult_StructWithJsonNameSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("StructWithJsonName")
      .PutMember("Value", smithy::schema::Schema::CreateString("Value"))
      .Build();
}

void KitchenSinkOperationResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                    smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Blob") {
    auto value0 = deserializer.ReadBlob(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBlob(*value0);
    }
    return;
  }
  if (memberName == "Boolean") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBoolean(*value0);
    }
    return;
  }
  if (memberName == "Double") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDouble(*value0);
    }
    return;
  }
  if (memberName == "EmptyStruct") {
    EmptyStruct nested0;
    KitchenSinkOperationResult_EmptyStructSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetEmptyStruct(std::move(nested0));
    return;
  }
  if (memberName == "Float") {
    auto value0 = deserializer.ReadDouble(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFloat(*value0);
    }
    return;
  }
  if (memberName == "HttpdateTimestamp") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetHttpdateTimestamp(*value0);
    }
    return;
  }
  if (memberName == "Integer") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetInteger(*value0);
    }
    return;
  }
  if (memberName == "Iso8601Timestamp") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIso8601Timestamp(*value0);
    }
    return;
  }
  if (memberName == "JsonValue") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetJsonValue(*value0);
    }
    return;
  }
  if (memberName == "ListOfLists") {
    Aws::Vector<Aws::Vector<Aws::String>> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      Aws::Vector<Aws::String> list1;
      itemDeserializer0.ReadList(itemSchema0, [&](smithy::schema::ShapeDeserializer& itemDeserializer1) {
        const smithy::schema::Schema& itemSchema1 = *itemSchema0.GetMemberTarget().value()->GetMember("member").value();
        auto value2 = itemDeserializer1.ReadString(itemSchema1);
        if (value2.has_value()) {
          list1.push_back(*value2);
        }
      });
      list0.push_back(std::move(list1));
    });
    m_obj.SetListOfLists(std::move(list0));
    return;
  }
  if (memberName == "ListOfMapsOfStrings") {
    Aws::Vector<Aws::Map<Aws::String, Aws::String>> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      Aws::Map<Aws::String, Aws::String> map1;
      itemDeserializer0.ReadMap(itemSchema0, [&](const Aws::String& key1, smithy::schema::ShapeDeserializer& valueDeserializer1) {
        const smithy::schema::Schema& valueSchema1 = *itemSchema0.GetMemberTarget().value()->GetMember("value").value();
        auto value2 = valueDeserializer1.ReadString(valueSchema1);
        if (value2.has_value()) {
          map1[key1] = *value2;
        }
      });
      list0.push_back(std::move(map1));
    });
    m_obj.SetListOfMapsOfStrings(std::move(list0));
    return;
  }
  if (memberName == "ListOfStrings") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetListOfStrings(std::move(list0));
    return;
  }
  if (memberName == "ListOfStructs") {
    Aws::Vector<SimpleStruct> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      SimpleStruct nested1;
      KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetListOfStructs(std::move(list0));
    return;
  }
  if (memberName == "Long") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetLong(*value0);
    }
    return;
  }
  if (memberName == "MapOfListsOfStrings") {
    Aws::Map<Aws::String, Aws::Vector<Aws::String>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      Aws::Vector<Aws::String> list1;
      valueDeserializer0.ReadList(valueSchema0, [&](smithy::schema::ShapeDeserializer& itemDeserializer1) {
        const smithy::schema::Schema& itemSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("member").value();
        auto value2 = itemDeserializer1.ReadString(itemSchema1);
        if (value2.has_value()) {
          list1.push_back(*value2);
        }
      });
      map0[key0] = std::move(list1);
    });
    m_obj.SetMapOfListsOfStrings(std::move(map0));
    return;
  }
  if (memberName == "MapOfMaps") {
    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      Aws::Map<Aws::String, Aws::String> map1;
      valueDeserializer0.ReadMap(valueSchema0, [&](const Aws::String& key1, smithy::schema::ShapeDeserializer& valueDeserializer1) {
        const smithy::schema::Schema& valueSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("value").value();
        auto value2 = valueDeserializer1.ReadString(valueSchema1);
        if (value2.has_value()) {
          map1[key1] = *value2;
        }
      });
      map0[key0] = std::move(map1);
    });
    m_obj.SetMapOfMaps(std::move(map0));
    return;
  }
  if (memberName == "MapOfStrings") {
    Aws::Map<Aws::String, Aws::String> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadString(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = *value1;
      }
    });
    m_obj.SetMapOfStrings(std::move(map0));
    return;
  }
  if (memberName == "MapOfStructs") {
    Aws::Map<Aws::String, SimpleStruct> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      SimpleStruct nested1;
      KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetMapOfStructs(std::move(map0));
    return;
  }
  if (memberName == "RecursiveList") {
    Aws::Vector<KitchenSink> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      KitchenSink nested1;
      KitchenSinkOperationResult_KitchenSinkSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetRecursiveList(std::move(list0));
    return;
  }
  if (memberName == "RecursiveMap") {
    Aws::Map<Aws::String, KitchenSink> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      KitchenSink nested1;
      KitchenSinkOperationResult_KitchenSinkSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetRecursiveMap(std::move(map0));
    return;
  }
  if (memberName == "RecursiveStruct") {
    KitchenSink nested0;
    KitchenSinkOperationResult_KitchenSinkSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetRecursiveStruct(std::move(nested0));
    return;
  }
  if (memberName == "SimpleStruct") {
    SimpleStruct nested0;
    KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetSimpleStruct(std::move(nested0));
    return;
  }
  if (memberName == "String") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetString(*value0);
    }
    return;
  }
  if (memberName == "StructWithJsonName") {
    StructWithJsonName nested0;
    KitchenSinkOperationResult_StructWithJsonNameSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetStructWithJsonName(std::move(nested0));
    return;
  }
  if (memberName == "Timestamp") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTimestamp(*value0);
    }
    return;
  }
  if (memberName == "UnixTimestamp") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetUnixTimestamp(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> KitchenSinkOperationResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KitchenSinkOperationResult")
      .PutMember("Blob", smithy::schema::Schema::CreateBlob("Blob"))
      .PutMember("Boolean", smithy::schema::Schema::CreateBoolean("Boolean"))
      .PutMember("Double", smithy::schema::Schema::CreateDouble("Double"))
      .PutMember("EmptyStruct", KitchenSinkOperationResult_EmptyStructSchemaSerdeDeser::BuildSchema())
      .PutMember("Float", smithy::schema::Schema::CreateDouble("Float"))
      .PutMember(
          "HttpdateTimestamp", smithy::schema::Schema::CreateTimestamp("HttpdateTimestamp"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::HTTP_DATE)}})
      .PutMember("Integer", smithy::schema::Schema::CreateInteger("Integer"))
      .PutMember(
          "Iso8601Timestamp", smithy::schema::Schema::CreateTimestamp("Iso8601Timestamp"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::DATE_TIME)}})
      .PutMember("JsonValue", smithy::schema::Schema::CreateString("JsonValue"),
                 {{smithy::schema::MediaTypeTrait::KEY(),
                   Aws::MakeShared<smithy::schema::MediaTypeTrait>("SchemaSerdeTrait", "application/json")}})
      .PutMember("ListOfLists", smithy::schema::Schema::ListBuilder("ListOfListOfStrings")
                                    .PutMember("member", smithy::schema::Schema::ListBuilder("ListOfStrings")
                                                             .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                                             .Build())
                                    .Build())
      .PutMember("ListOfMapsOfStrings", smithy::schema::Schema::ListBuilder("ListOfMapsOfStrings")
                                            .PutMember("member", smithy::schema::Schema::MapBuilder("MapOfStrings")
                                                                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                                                     .Build())
                                            .Build())
      .PutMember(
          "ListOfStrings",
          smithy::schema::Schema::ListBuilder("ListOfStrings").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .PutMember("ListOfStructs", smithy::schema::Schema::ListBuilder("ListOfStructs")
                                      .PutMember("member", KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser::BuildSchema())
                                      .Build())
      .PutMember("Long", smithy::schema::Schema::CreateLong("Long"))
      .PutMember("MapOfListsOfStrings", smithy::schema::Schema::MapBuilder("MapOfListsOfStrings")
                                            .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                            .PutMember("value", smithy::schema::Schema::ListBuilder("ListOfStrings")
                                                                    .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                                                    .Build())
                                            .Build())
      .PutMember("MapOfMaps", smithy::schema::Schema::MapBuilder("MapOfMapOfStrings")
                                  .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                  .PutMember("value", smithy::schema::Schema::MapBuilder("MapOfStrings")
                                                          .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                          .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                                          .Build())
                                  .Build())
      .PutMember("MapOfStrings", smithy::schema::Schema::MapBuilder("MapOfStrings")
                                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                     .Build())
      .PutMember("MapOfStructs", smithy::schema::Schema::MapBuilder("MapOfStructs")
                                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                     .PutMember("value", KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser::BuildSchema())
                                     .Build())
      .PutMember("RecursiveList", smithy::schema::Schema::ListBuilder("ListOfKitchenSinks")
                                      .PutMember("member", smithy::schema::Schema::StructureBuilder("KitchenSink").Build())
                                      .Build())
      .PutMember("RecursiveMap", smithy::schema::Schema::MapBuilder("MapOfKitchenSinks")
                                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                     .PutMember("value", smithy::schema::Schema::StructureBuilder("KitchenSink").Build())
                                     .Build())
      .PutMember("RecursiveStruct", smithy::schema::Schema::StructureBuilder("KitchenSink").Build())
      .PutMember("SimpleStruct", KitchenSinkOperationResult_SimpleStructSchemaSerdeDeser::BuildSchema())
      .PutMember("String", smithy::schema::Schema::CreateString("String"))
      .PutMember("StructWithJsonName", KitchenSinkOperationResult_StructWithJsonNameSchemaSerdeDeser::BuildSchema())
      .PutMember("Timestamp", smithy::schema::Schema::CreateTimestamp("Timestamp"))
      .PutMember("UnixTimestamp", smithy::schema::Schema::CreateTimestamp("UnixTimestamp"),
                 {{smithy::schema::TimestampFormatTrait::KEY(),
                   Aws::MakeShared<smithy::schema::TimestampFormatTrait>("SchemaSerdeTrait",
                                                                         smithy::schema::TimestampFormatTrait::Format::EPOCH_SECONDS)}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> KitchenSinkOperationResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<KitchenSinkOperationResultDeserializable>("KitchenSinkOperationResultDeserializable", *this);
}
