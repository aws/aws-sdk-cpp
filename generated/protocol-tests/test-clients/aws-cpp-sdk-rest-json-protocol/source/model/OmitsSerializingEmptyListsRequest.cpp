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
#include <aws/rest-json-protocol/model/OmitsSerializingEmptyListsRequest.h>
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
class OmitsSerializingEmptyListsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit OmitsSerializingEmptyListsRequestSerializable(const OmitsSerializingEmptyListsRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const OmitsSerializingEmptyListsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void OmitsSerializingEmptyListsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.QueryStringListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryStringList").value();
    serializer.WriteList(memberSchema, m_obj.GetQueryStringList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetQueryStringList()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.QueryIntegerListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryIntegerList").value();
    serializer.WriteList(memberSchema, m_obj.GetQueryIntegerList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetQueryIntegerList()) {
        listSerializer0.WriteInteger(itemSchema0, item0);
      }
    });
  }
  if (m_obj.QueryDoubleListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryDoubleList").value();
    serializer.WriteList(memberSchema, m_obj.GetQueryDoubleList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetQueryDoubleList()) {
        listSerializer0.WriteDouble(itemSchema0, item0);
      }
    });
  }
  if (m_obj.QueryBooleanListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryBooleanList").value();
    serializer.WriteList(memberSchema, m_obj.GetQueryBooleanList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetQueryBooleanList()) {
        listSerializer0.WriteBoolean(itemSchema0, item0);
      }
    });
  }
  if (m_obj.QueryTimestampListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryTimestampList").value();
    serializer.WriteList(memberSchema, m_obj.GetQueryTimestampList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetQueryTimestampList()) {
        listSerializer0.WriteTimestamp(itemSchema0, item0);
      }
    });
  }
  if (m_obj.QueryEnumListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryEnumList").value();
    serializer.WriteList(memberSchema, m_obj.GetQueryEnumList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetQueryEnumList()) {
        listSerializer0.WriteString(itemSchema0, FooEnumMapper::GetNameForFooEnum(item0));
      }
    });
  }
  if (m_obj.QueryIntegerEnumListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryIntegerEnumList").value();
    serializer.WriteList(memberSchema, m_obj.GetQueryIntegerEnumList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetQueryIntegerEnumList()) {
        listSerializer0.WriteInteger(itemSchema0, item0);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> OmitsSerializingEmptyListsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OmitsSerializingEmptyListsRequest")
      .PutMember(
          "queryStringList",
          smithy::schema::Schema::ListBuilder("StringList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "StringList")}})
      .PutMember(
          "queryIntegerList",
          smithy::schema::Schema::ListBuilder("IntegerList").PutMember("member", smithy::schema::Schema::CreateInteger("member")).Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "IntegerList")}})
      .PutMember(
          "queryDoubleList",
          smithy::schema::Schema::ListBuilder("DoubleList").PutMember("member", smithy::schema::Schema::CreateDouble("member")).Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "DoubleList")}})
      .PutMember(
          "queryBooleanList",
          smithy::schema::Schema::ListBuilder("BooleanList").PutMember("member", smithy::schema::Schema::CreateBoolean("member")).Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "BooleanList")}})
      .PutMember(
          "queryTimestampList",
          smithy::schema::Schema::ListBuilder("TimestampList")
              .PutMember("member", smithy::schema::Schema::CreateTimestamp("member"))
              .Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "TimestampList")}})
      .PutMember(
          "queryEnumList",
          smithy::schema::Schema::ListBuilder("FooEnumList").PutMember("member", smithy::schema::Schema::CreateEnum("member")).Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "EnumList")}})
      .PutMember(
          "queryIntegerEnumList",
          smithy::schema::Schema::ListBuilder("IntegerEnumList")
              .PutMember("member", smithy::schema::Schema::CreateIntEnum("member"))
              .Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "IntegerEnumList")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> OmitsSerializingEmptyListsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<OmitsSerializingEmptyListsRequestSerializable>("OmitsSerializingEmptyListsRequestSerializable", *this);
}

Aws::String OmitsSerializingEmptyListsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext OmitsSerializingEmptyListsRequest::GetSchemaSerdeContext() const {
  return {"OmitsSerializingEmptyLists", "2019-12-16", "/OmitsSerializingEmptyLists", ""};
}

void OmitsSerializingEmptyListsRequest::AddQueryStringParameters(Aws::Http::URI&) const {}
