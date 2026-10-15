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
#include <aws/rest-json-protocol/model/JsonListsRequest.h>
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

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace {
class JsonListsRequest_StructureListMemberSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonListsRequest_StructureListMemberSchemaSerdeSer(const StructureListMember& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const StructureListMember& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class JsonListsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonListsRequestSerializable(const JsonListsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const JsonListsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void JsonListsRequest_StructureListMemberSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("a").value();
    serializer.WriteString(memberSchema, m_obj.GetA());
  }
  if (m_obj.BHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("b").value();
    serializer.WriteString(memberSchema, m_obj.GetB());
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonListsRequest_StructureListMemberSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("StructureListMember")
      .PutMember("a", smithy::schema::Schema::CreateString("a"),
                 {{smithy::schema::JsonNameTrait::KEY(), Aws::MakeShared<smithy::schema::JsonNameTrait>("SchemaSerdeTrait", "value")}})
      .PutMember("b", smithy::schema::Schema::CreateString("b"),
                 {{smithy::schema::JsonNameTrait::KEY(), Aws::MakeShared<smithy::schema::JsonNameTrait>("SchemaSerdeTrait", "other")}})
      .Build();
}

void JsonListsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.StringListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("stringList").value();
    serializer.WriteList(memberSchema, m_obj.GetStringList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetStringList()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.StringSetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("stringSet").value();
    serializer.WriteList(memberSchema, m_obj.GetStringSet().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetStringSet()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.IntegerListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("integerList").value();
    serializer.WriteList(memberSchema, m_obj.GetIntegerList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetIntegerList()) {
        listSerializer0.WriteInteger(itemSchema0, item0);
      }
    });
  }
  if (m_obj.BooleanListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("booleanList").value();
    serializer.WriteList(memberSchema, m_obj.GetBooleanList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetBooleanList()) {
        listSerializer0.WriteBoolean(itemSchema0, item0);
      }
    });
  }
  if (m_obj.TimestampListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("timestampList").value();
    serializer.WriteList(memberSchema, m_obj.GetTimestampList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetTimestampList()) {
        listSerializer0.WriteTimestamp(itemSchema0, item0);
      }
    });
  }
  if (m_obj.EnumListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("enumList").value();
    serializer.WriteList(memberSchema, m_obj.GetEnumList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetEnumList()) {
        listSerializer0.WriteString(itemSchema0, FooEnumMapper::GetNameForFooEnum(item0));
      }
    });
  }
  if (m_obj.IntEnumListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("intEnumList").value();
    serializer.WriteList(memberSchema, m_obj.GetIntEnumList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetIntEnumList()) {
        listSerializer0.WriteInteger(itemSchema0, item0);
      }
    });
  }
  if (m_obj.NestedStringListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("nestedStringList").value();
    serializer.WriteList(memberSchema, m_obj.GetNestedStringList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetNestedStringList()) {
        listSerializer0.WriteList(itemSchema0, item0.size(), [&](smithy::schema::ShapeSerializer& listSerializer1) {
          const smithy::schema::Schema& itemSchema1 = *itemSchema0.GetMemberTarget().value()->GetMember("member").value();
          for (const auto& item1 : item0) {
            listSerializer1.WriteString(itemSchema1, item1);
          }
        });
      }
    });
  }
  if (m_obj.StructureListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("structureList").value();
    serializer.WriteList(memberSchema, m_obj.GetStructureList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetStructureList()) {
        JsonListsRequest_StructureListMemberSchemaSerdeSer nested1(item0);
        listSerializer0.WriteStruct(itemSchema0, nested1);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonListsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("JsonListsRequest")
      .PutMember(
          "stringList",
          smithy::schema::Schema::ListBuilder("StringList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .PutMember(
          "stringSet",
          smithy::schema::Schema::ListBuilder("StringSet").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .PutMember(
          "integerList",
          smithy::schema::Schema::ListBuilder("IntegerList").PutMember("member", smithy::schema::Schema::CreateInteger("member")).Build())
      .PutMember(
          "booleanList",
          smithy::schema::Schema::ListBuilder("BooleanList").PutMember("member", smithy::schema::Schema::CreateBoolean("member")).Build())
      .PutMember("timestampList", smithy::schema::Schema::ListBuilder("TimestampList")
                                      .PutMember("member", smithy::schema::Schema::CreateTimestamp("member"))
                                      .Build())
      .PutMember(
          "enumList",
          smithy::schema::Schema::ListBuilder("FooEnumList").PutMember("member", smithy::schema::Schema::CreateEnum("member")).Build())
      .PutMember("intEnumList", smithy::schema::Schema::ListBuilder("IntegerEnumList")
                                    .PutMember("member", smithy::schema::Schema::CreateIntEnum("member"))
                                    .Build())
      .PutMember("nestedStringList", smithy::schema::Schema::ListBuilder("NestedStringList")
                                         .PutMember("member", smithy::schema::Schema::ListBuilder("StringList")
                                                                  .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                                                  .Build())
                                         .Build())
      .PutMember(
          "structureList",
          smithy::schema::Schema::ListBuilder("StructureList")
              .PutMember("member", JsonListsRequest_StructureListMemberSchemaSerdeSer::BuildSchema())
              .Build(),
          {{smithy::schema::JsonNameTrait::KEY(), Aws::MakeShared<smithy::schema::JsonNameTrait>("SchemaSerdeTrait", "myStructureList")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> JsonListsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<JsonListsRequestSerializable>("JsonListsRequestSerializable", *this);
}

Aws::String JsonListsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext JsonListsRequest::GetSchemaSerdeContext() const {
  return {"JsonLists", "2019-12-16", "/JsonLists", ""};
}
