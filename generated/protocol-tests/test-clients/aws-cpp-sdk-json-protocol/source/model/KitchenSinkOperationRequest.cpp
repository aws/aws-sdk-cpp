/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/KitchenSinkOperationRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeSerializer.h>

#include <numeric>
#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace {
class KitchenSinkOperationRequest_EmptyStructSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit KitchenSinkOperationRequest_EmptyStructSchemaSerdeSer(const EmptyStruct&) : m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer(const SimpleStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SimpleStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class KitchenSinkOperationRequest_KitchenSinkSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit KitchenSinkOperationRequest_KitchenSinkSchemaSerdeSer(const KitchenSink& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const KitchenSink& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class KitchenSinkOperationRequest_StructWithJsonNameSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit KitchenSinkOperationRequest_StructWithJsonNameSchemaSerdeSer(const StructWithJsonName& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const StructWithJsonName& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class KitchenSinkOperationRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit KitchenSinkOperationRequestSerializable(const KitchenSinkOperationRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const KitchenSinkOperationRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void KitchenSinkOperationRequest_EmptyStructSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer&) const {}

std::shared_ptr<const smithy::schema::Schema> KitchenSinkOperationRequest_EmptyStructSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("EmptyStruct").Build();
}

void KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Value").value();
    serializer.WriteString(memberSchema, m_obj.GetValue());
  }
}

std::shared_ptr<const smithy::schema::Schema> KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SimpleStruct").PutMember("Value", smithy::schema::Schema::CreateString("Value")).Build();
}

void KitchenSinkOperationRequest_KitchenSinkSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.BlobHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Blob").value();
    serializer.WriteBlob(memberSchema, m_obj.GetBlob());
  }
  if (m_obj.BooleanHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Boolean").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetBoolean());
  }
  if (m_obj.DoubleHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Double").value();
    serializer.WriteDouble(memberSchema, m_obj.GetDouble());
  }
  if (m_obj.EmptyStructHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("EmptyStruct").value();
    KitchenSinkOperationRequest_EmptyStructSchemaSerdeSer nested0(m_obj.GetEmptyStruct());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.FloatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Float").value();
    serializer.WriteDouble(memberSchema, m_obj.GetFloat());
  }
  if (m_obj.HttpdateTimestampHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("HttpdateTimestamp").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetHttpdateTimestamp());
  }
  if (m_obj.IntegerHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Integer").value();
    serializer.WriteInteger(memberSchema, m_obj.GetInteger());
  }
  if (m_obj.Iso8601TimestampHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Iso8601Timestamp").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetIso8601Timestamp());
  }
  if (m_obj.JsonValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("JsonValue").value();
    serializer.WriteString(memberSchema, m_obj.GetJsonValue());
  }
  if (m_obj.ListOfListsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ListOfLists").value();
    serializer.WriteList(memberSchema, m_obj.GetListOfLists().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetListOfLists()) {
        listSerializer0.WriteList(itemSchema0, item0.size(), [&](smithy::schema::ShapeSerializer& listSerializer1) {
          const smithy::schema::Schema& itemSchema1 = *itemSchema0.GetMemberTarget().value()->GetMember("member").value();
          for (const auto& item1 : item0) {
            listSerializer1.WriteString(itemSchema1, item1);
          }
        });
      }
    });
  }
  if (m_obj.ListOfMapsOfStringsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ListOfMapsOfStrings").value();
    serializer.WriteList(memberSchema, m_obj.GetListOfMapsOfStrings().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetListOfMapsOfStrings()) {
        listSerializer0.WriteMap(itemSchema0, item0.size(), [&](smithy::schema::MapSerializer& mapSerializer1) {
          const smithy::schema::Schema& valueSchema1 = *itemSchema0.GetMemberTarget().value()->GetMember("value").value();
          for (const auto& entry1 : item0) {
            mapSerializer1.WriteEntry(entry1.first, [&](smithy::schema::ShapeSerializer& valueSerializer1) {
              valueSerializer1.WriteString(valueSchema1, entry1.second);
            });
          }
        });
      }
    });
  }
  if (m_obj.ListOfStringsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ListOfStrings").value();
    serializer.WriteList(memberSchema, m_obj.GetListOfStrings().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetListOfStrings()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.ListOfStructsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ListOfStructs").value();
    serializer.WriteList(memberSchema, m_obj.GetListOfStructs().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetListOfStructs()) {
        KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.LongHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Long").value();
    serializer.WriteLong(memberSchema, m_obj.GetLong());
  }
  if (m_obj.MapOfListsOfStringsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MapOfListsOfStrings").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapOfListsOfStrings().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapOfListsOfStrings()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteList(valueSchema0, entry0.second.size(), [&](smithy::schema::ShapeSerializer& listSerializer1) {
            const smithy::schema::Schema& itemSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("member").value();
            for (const auto& item1 : entry0.second) {
              listSerializer1.WriteString(itemSchema1, item1);
            }
          });
        });
      }
    });
  }
  if (m_obj.MapOfMapsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MapOfMaps").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapOfMaps().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapOfMaps()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteMap(valueSchema0, entry0.second.size(), [&](smithy::schema::MapSerializer& mapSerializer1) {
            const smithy::schema::Schema& valueSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("value").value();
            for (const auto& entry1 : entry0.second) {
              mapSerializer1.WriteEntry(entry1.first, [&](smithy::schema::ShapeSerializer& valueSerializer1) {
                valueSerializer1.WriteString(valueSchema1, entry1.second);
              });
            }
          });
        });
      }
    });
  }
  if (m_obj.MapOfStringsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MapOfStrings").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapOfStrings().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapOfStrings()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.MapOfStructsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MapOfStructs").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapOfStructs().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapOfStructs()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.RecursiveListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RecursiveList").value();
    serializer.WriteList(memberSchema, m_obj.GetRecursiveList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetRecursiveList()) {
        KitchenSinkOperationRequest_KitchenSinkSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.RecursiveMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RecursiveMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetRecursiveMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetRecursiveMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          KitchenSinkOperationRequest_KitchenSinkSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.RecursiveStructHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RecursiveStruct").value();
    KitchenSinkOperationRequest_KitchenSinkSchemaSerdeSer nested0(m_obj.GetRecursiveStruct());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.SimpleStructHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SimpleStruct").value();
    KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer nested0(m_obj.GetSimpleStruct());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.StringHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("String").value();
    serializer.WriteString(memberSchema, m_obj.GetString());
  }
  if (m_obj.StructWithJsonNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("StructWithJsonName").value();
    KitchenSinkOperationRequest_StructWithJsonNameSchemaSerdeSer nested0(m_obj.GetStructWithJsonName());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.TimestampHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Timestamp").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetTimestamp());
  }
  if (m_obj.UnixTimestampHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("UnixTimestamp").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetUnixTimestamp());
  }
}

std::shared_ptr<const smithy::schema::Schema> KitchenSinkOperationRequest_KitchenSinkSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KitchenSink")
      .PutMember("Blob", smithy::schema::Schema::CreateBlob("Blob"))
      .PutMember("Boolean", smithy::schema::Schema::CreateBoolean("Boolean"))
      .PutMember("Double", smithy::schema::Schema::CreateDouble("Double"))
      .PutMember("EmptyStruct", KitchenSinkOperationRequest_EmptyStructSchemaSerdeSer::BuildSchema())
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
                                      .PutMember("member", KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer::BuildSchema())
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
                                     .PutMember("value", KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer::BuildSchema())
                                     .Build())
      .PutMember("RecursiveList", smithy::schema::Schema::ListBuilder("ListOfKitchenSinks")
                                      .PutMember("member", smithy::schema::Schema::StructureBuilder("KitchenSink").Build())
                                      .Build())
      .PutMember("RecursiveMap", smithy::schema::Schema::MapBuilder("MapOfKitchenSinks")
                                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                     .PutMember("value", smithy::schema::Schema::StructureBuilder("KitchenSink").Build())
                                     .Build())
      .PutMember("RecursiveStruct", smithy::schema::Schema::StructureBuilder("KitchenSink").Build())
      .PutMember("SimpleStruct", KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer::BuildSchema())
      .PutMember("String", smithy::schema::Schema::CreateString("String"))
      .PutMember("StructWithJsonName", KitchenSinkOperationRequest_StructWithJsonNameSchemaSerdeSer::BuildSchema())
      .PutMember("Timestamp", smithy::schema::Schema::CreateTimestamp("Timestamp"))
      .PutMember("UnixTimestamp", smithy::schema::Schema::CreateTimestamp("UnixTimestamp"),
                 {{smithy::schema::TimestampFormatTrait::KEY(),
                   Aws::MakeShared<smithy::schema::TimestampFormatTrait>("SchemaSerdeTrait",
                                                                         smithy::schema::TimestampFormatTrait::Format::EPOCH_SECONDS)}})
      .Build();
}

void KitchenSinkOperationRequest_StructWithJsonNameSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Value").value();
    serializer.WriteString(memberSchema, m_obj.GetValue());
  }
}

std::shared_ptr<const smithy::schema::Schema> KitchenSinkOperationRequest_StructWithJsonNameSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("StructWithJsonName")
      .PutMember("Value", smithy::schema::Schema::CreateString("Value"))
      .Build();
}

void KitchenSinkOperationRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.BlobHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Blob").value();
    serializer.WriteBlob(memberSchema, m_obj.GetBlob());
  }
  if (m_obj.BooleanHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Boolean").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetBoolean());
  }
  if (m_obj.DoubleHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Double").value();
    serializer.WriteDouble(memberSchema, m_obj.GetDouble());
  }
  if (m_obj.EmptyStructHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("EmptyStruct").value();
    KitchenSinkOperationRequest_EmptyStructSchemaSerdeSer nested0(m_obj.GetEmptyStruct());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.FloatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Float").value();
    serializer.WriteDouble(memberSchema, m_obj.GetFloat());
  }
  if (m_obj.HttpdateTimestampHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("HttpdateTimestamp").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetHttpdateTimestamp());
  }
  if (m_obj.IntegerHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Integer").value();
    serializer.WriteInteger(memberSchema, m_obj.GetInteger());
  }
  if (m_obj.Iso8601TimestampHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Iso8601Timestamp").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetIso8601Timestamp());
  }
  if (m_obj.JsonValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("JsonValue").value();
    serializer.WriteString(memberSchema, m_obj.GetJsonValue());
  }
  if (m_obj.ListOfListsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ListOfLists").value();
    serializer.WriteList(memberSchema, m_obj.GetListOfLists().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetListOfLists()) {
        listSerializer0.WriteList(itemSchema0, item0.size(), [&](smithy::schema::ShapeSerializer& listSerializer1) {
          const smithy::schema::Schema& itemSchema1 = *itemSchema0.GetMemberTarget().value()->GetMember("member").value();
          for (const auto& item1 : item0) {
            listSerializer1.WriteString(itemSchema1, item1);
          }
        });
      }
    });
  }
  if (m_obj.ListOfMapsOfStringsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ListOfMapsOfStrings").value();
    serializer.WriteList(memberSchema, m_obj.GetListOfMapsOfStrings().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetListOfMapsOfStrings()) {
        listSerializer0.WriteMap(itemSchema0, item0.size(), [&](smithy::schema::MapSerializer& mapSerializer1) {
          const smithy::schema::Schema& valueSchema1 = *itemSchema0.GetMemberTarget().value()->GetMember("value").value();
          for (const auto& entry1 : item0) {
            mapSerializer1.WriteEntry(entry1.first, [&](smithy::schema::ShapeSerializer& valueSerializer1) {
              valueSerializer1.WriteString(valueSchema1, entry1.second);
            });
          }
        });
      }
    });
  }
  if (m_obj.ListOfStringsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ListOfStrings").value();
    serializer.WriteList(memberSchema, m_obj.GetListOfStrings().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetListOfStrings()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.ListOfStructsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ListOfStructs").value();
    serializer.WriteList(memberSchema, m_obj.GetListOfStructs().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetListOfStructs()) {
        KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.LongHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Long").value();
    serializer.WriteLong(memberSchema, m_obj.GetLong());
  }
  if (m_obj.MapOfListsOfStringsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MapOfListsOfStrings").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapOfListsOfStrings().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapOfListsOfStrings()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteList(valueSchema0, entry0.second.size(), [&](smithy::schema::ShapeSerializer& listSerializer1) {
            const smithy::schema::Schema& itemSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("member").value();
            for (const auto& item1 : entry0.second) {
              listSerializer1.WriteString(itemSchema1, item1);
            }
          });
        });
      }
    });
  }
  if (m_obj.MapOfMapsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MapOfMaps").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapOfMaps().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapOfMaps()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteMap(valueSchema0, entry0.second.size(), [&](smithy::schema::MapSerializer& mapSerializer1) {
            const smithy::schema::Schema& valueSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("value").value();
            for (const auto& entry1 : entry0.second) {
              mapSerializer1.WriteEntry(entry1.first, [&](smithy::schema::ShapeSerializer& valueSerializer1) {
                valueSerializer1.WriteString(valueSchema1, entry1.second);
              });
            }
          });
        });
      }
    });
  }
  if (m_obj.MapOfStringsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MapOfStrings").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapOfStrings().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapOfStrings()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.MapOfStructsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MapOfStructs").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapOfStructs().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapOfStructs()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.RecursiveListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RecursiveList").value();
    serializer.WriteList(memberSchema, m_obj.GetRecursiveList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetRecursiveList()) {
        KitchenSinkOperationRequest_KitchenSinkSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
  if (m_obj.RecursiveMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RecursiveMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetRecursiveMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetRecursiveMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          KitchenSinkOperationRequest_KitchenSinkSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.RecursiveStructHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RecursiveStruct").value();
    KitchenSinkOperationRequest_KitchenSinkSchemaSerdeSer nested0(m_obj.GetRecursiveStruct());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.SimpleStructHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("SimpleStruct").value();
    KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer nested0(m_obj.GetSimpleStruct());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.StringHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("String").value();
    serializer.WriteString(memberSchema, m_obj.GetString());
  }
  if (m_obj.StructWithJsonNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("StructWithJsonName").value();
    KitchenSinkOperationRequest_StructWithJsonNameSchemaSerdeSer nested0(m_obj.GetStructWithJsonName());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.TimestampHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Timestamp").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetTimestamp());
  }
  if (m_obj.UnixTimestampHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("UnixTimestamp").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetUnixTimestamp());
  }
}

std::shared_ptr<const smithy::schema::Schema> KitchenSinkOperationRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KitchenSinkOperationRequest")
      .PutMember("Blob", smithy::schema::Schema::CreateBlob("Blob"))
      .PutMember("Boolean", smithy::schema::Schema::CreateBoolean("Boolean"))
      .PutMember("Double", smithy::schema::Schema::CreateDouble("Double"))
      .PutMember("EmptyStruct", KitchenSinkOperationRequest_EmptyStructSchemaSerdeSer::BuildSchema())
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
                                      .PutMember("member", KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer::BuildSchema())
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
                                     .PutMember("value", KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer::BuildSchema())
                                     .Build())
      .PutMember("RecursiveList", smithy::schema::Schema::ListBuilder("ListOfKitchenSinks")
                                      .PutMember("member", smithy::schema::Schema::StructureBuilder("KitchenSink").Build())
                                      .Build())
      .PutMember("RecursiveMap", smithy::schema::Schema::MapBuilder("MapOfKitchenSinks")
                                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                     .PutMember("value", smithy::schema::Schema::StructureBuilder("KitchenSink").Build())
                                     .Build())
      .PutMember("RecursiveStruct", smithy::schema::Schema::StructureBuilder("KitchenSink").Build())
      .PutMember("SimpleStruct", KitchenSinkOperationRequest_SimpleStructSchemaSerdeSer::BuildSchema())
      .PutMember("String", smithy::schema::Schema::CreateString("String"))
      .PutMember("StructWithJsonName", KitchenSinkOperationRequest_StructWithJsonNameSchemaSerdeSer::BuildSchema())
      .PutMember("Timestamp", smithy::schema::Schema::CreateTimestamp("Timestamp"))
      .PutMember("UnixTimestamp", smithy::schema::Schema::CreateTimestamp("UnixTimestamp"),
                 {{smithy::schema::TimestampFormatTrait::KEY(),
                   Aws::MakeShared<smithy::schema::TimestampFormatTrait>("SchemaSerdeTrait",
                                                                         smithy::schema::TimestampFormatTrait::Format::EPOCH_SECONDS)}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> KitchenSinkOperationRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<KitchenSinkOperationRequestSerializable>("KitchenSinkOperationRequestSerializable", *this);
}

Aws::String KitchenSinkOperationRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext KitchenSinkOperationRequest::GetSchemaSerdeContext() const {
  return {"KitchenSinkOperation", "2018-01-01"};
}

Aws::Http::HeaderValueCollection KitchenSinkOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.KitchenSinkOperation"));
  return headers;
}
