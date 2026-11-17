/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/QueryMapsRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <numeric>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

namespace {
class QueryMapsRequest_GreetingStructSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryMapsRequest_GreetingStructSchemaSerdeSer(const GreetingStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GreetingStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class QueryMapsRequest_NestedStructWithMapSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryMapsRequest_NestedStructWithMapSchemaSerdeSer(const NestedStructWithMap& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const NestedStructWithMap& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class QueryMapsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryMapsRequestSerializable(const QueryMapsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const QueryMapsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void QueryMapsRequest_GreetingStructSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.HiHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("hi").value();
    serializer.WriteString(memberSchema, m_obj.GetHi());
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryMapsRequest_GreetingStructSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingStruct").PutMember("hi", smithy::schema::Schema::CreateString("hi")).Build();
}

void QueryMapsRequest_NestedStructWithMapSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.MapArgHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MapArg").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapArg().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapArg()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryMapsRequest_NestedStructWithMapSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("NestedStructWithMap")
      .PutMember("MapArg", smithy::schema::Schema::MapBuilder("StringMap")
                               .PutMember("key", smithy::schema::Schema::CreateString("key"))
                               .PutMember("value", smithy::schema::Schema::CreateString("value"))
                               .Build())
      .Build();
}

void QueryMapsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.MapArgHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MapArg").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapArg().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapArg()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.RenamedMapArgHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("RenamedMapArg").value();
    serializer.WriteMap(memberSchema, m_obj.GetRenamedMapArg().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetRenamedMapArg()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.ComplexMapArgHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ComplexMapArg").value();
    serializer.WriteMap(memberSchema, m_obj.GetComplexMapArg().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetComplexMapArg()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          QueryMapsRequest_GreetingStructSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
  if (m_obj.MapWithXmlMemberNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MapWithXmlMemberName").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapWithXmlMemberName().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapWithXmlMemberName()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.FlattenedMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("FlattenedMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetFlattenedMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetFlattenedMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.FlattenedMapWithXmlNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("FlattenedMapWithXmlName").value();
    serializer.WriteMap(memberSchema, m_obj.GetFlattenedMapWithXmlName().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetFlattenedMapWithXmlName()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.MapOfListsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MapOfLists").value();
    serializer.WriteMap(memberSchema, m_obj.GetMapOfLists().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetMapOfLists()) {
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
  if (m_obj.NestedStructWithMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("NestedStructWithMap").value();
    QueryMapsRequest_NestedStructWithMapSchemaSerdeSer nested0(m_obj.GetNestedStructWithMap());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryMapsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("QueryMapsRequest")
      .PutMember("MapArg", smithy::schema::Schema::MapBuilder("StringMap")
                               .PutMember("key", smithy::schema::Schema::CreateString("key"))
                               .PutMember("value", smithy::schema::Schema::CreateString("value"))
                               .Build())
      .PutMember("RenamedMapArg",
                 smithy::schema::Schema::MapBuilder("StringMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                     .Build(),
                 {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "Foo")}})
      .PutMember("ComplexMapArg", smithy::schema::Schema::MapBuilder("ComplexMap")
                                      .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                      .PutMember("value", QueryMapsRequest_GreetingStructSchemaSerdeSer::BuildSchema())
                                      .Build())
      .PutMember(
          "MapWithXmlMemberName",
          smithy::schema::Schema::MapBuilder("MapWithXmlName")
              .PutMember("key", smithy::schema::Schema::CreateString("key"),
                         {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "K")}})
              .PutMember("value", smithy::schema::Schema::CreateString("value"),
                         {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "V")}})
              .Build(),
          {{smithy::schema::XmlMapKeyNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlMapKeyNameTrait>("SchemaSerdeTrait", "K")},
           {smithy::schema::XmlMapValueNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlMapValueNameTrait>("SchemaSerdeTrait", "V")}})
      .PutMember("FlattenedMap",
                 smithy::schema::Schema::MapBuilder("StringMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                     .Build(),
                 {{smithy::schema::XmlFlattenedTrait::KEY(), Aws::MakeShared<smithy::schema::XmlFlattenedTrait>("SchemaSerdeTrait")}})
      .PutMember(
          "FlattenedMapWithXmlName",
          smithy::schema::Schema::MapBuilder("MapWithXmlName")
              .PutMember("key", smithy::schema::Schema::CreateString("key"),
                         {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "K")}})
              .PutMember("value", smithy::schema::Schema::CreateString("value"),
                         {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "V")}})
              .Build(),
          {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "Hi")},
           {smithy::schema::XmlFlattenedTrait::KEY(), Aws::MakeShared<smithy::schema::XmlFlattenedTrait>("SchemaSerdeTrait")},
           {smithy::schema::XmlMapKeyNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlMapKeyNameTrait>("SchemaSerdeTrait", "K")},
           {smithy::schema::XmlMapValueNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlMapValueNameTrait>("SchemaSerdeTrait", "V")}})
      .PutMember("MapOfLists", smithy::schema::Schema::MapBuilder("MapOfLists")
                                   .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                   .PutMember("value", smithy::schema::Schema::ListBuilder("StringList")
                                                           .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                                           .Build())
                                   .Build())
      .PutMember("NestedStructWithMap", QueryMapsRequest_NestedStructWithMapSchemaSerdeSer::BuildSchema())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> QueryMapsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<QueryMapsRequestSerializable>("QueryMapsRequestSerializable", *this);
}

Aws::String QueryMapsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext QueryMapsRequest::GetSchemaSerdeContext() const { return {"QueryMaps", "2020-01-08"}; }

void QueryMapsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
