/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/AllQueryStringTypesRequest.h>
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
#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

namespace {
class AllQueryStringTypesRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit AllQueryStringTypesRequestSerializable(const AllQueryStringTypesRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AllQueryStringTypesRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void AllQueryStringTypesRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.QueryStringHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryString").value();
    serializer.WriteString(memberSchema, m_obj.GetQueryString());
  }
  if (m_obj.QueryStringListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryStringList").value();
    serializer.WriteList(memberSchema, m_obj.GetQueryStringList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetQueryStringList()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.QueryStringSetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryStringSet").value();
    serializer.WriteList(memberSchema, m_obj.GetQueryStringSet().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetQueryStringSet()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
  if (m_obj.QueryByteHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryByte").value();
    serializer.WriteInteger(memberSchema, m_obj.GetQueryByte());
  }
  if (m_obj.QueryShortHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryShort").value();
    serializer.WriteInteger(memberSchema, m_obj.GetQueryShort());
  }
  if (m_obj.QueryIntegerHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryInteger").value();
    serializer.WriteInteger(memberSchema, m_obj.GetQueryInteger());
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
  if (m_obj.QueryIntegerSetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryIntegerSet").value();
    serializer.WriteList(memberSchema, m_obj.GetQueryIntegerSet().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetQueryIntegerSet()) {
        listSerializer0.WriteInteger(itemSchema0, item0);
      }
    });
  }
  if (m_obj.QueryLongHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryLong").value();
    serializer.WriteLong(memberSchema, m_obj.GetQueryLong());
  }
  if (m_obj.QueryFloatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryFloat").value();
    serializer.WriteDouble(memberSchema, m_obj.GetQueryFloat());
  }
  if (m_obj.QueryDoubleHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryDouble").value();
    serializer.WriteDouble(memberSchema, m_obj.GetQueryDouble());
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
  if (m_obj.QueryBooleanHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryBoolean").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetQueryBoolean());
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
  if (m_obj.QueryTimestampHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryTimestamp").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetQueryTimestamp());
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
  if (m_obj.QueryEnumHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryEnum").value();
    serializer.WriteString(memberSchema, FooEnumMapper::GetNameForFooEnum(m_obj.GetQueryEnum()));
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
  if (m_obj.QueryIntegerEnumHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryIntegerEnum").value();
    serializer.WriteInteger(memberSchema, m_obj.GetQueryIntegerEnum());
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
  if (m_obj.QueryParamsMapOfStringsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("queryParamsMapOfStrings").value();
    serializer.WriteMap(memberSchema, m_obj.GetQueryParamsMapOfStrings().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetQueryParamsMapOfStrings()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> AllQueryStringTypesRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AllQueryStringTypesRequest")
      .PutMember("queryString", smithy::schema::Schema::CreateString("queryString"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "String")}})
      .PutMember(
          "queryStringList",
          smithy::schema::Schema::ListBuilder("StringList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "StringList")}})
      .PutMember(
          "queryStringSet",
          smithy::schema::Schema::ListBuilder("StringSet").PutMember("member", smithy::schema::Schema::CreateString("member")).Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "StringSet")}})
      .PutMember("queryByte", smithy::schema::Schema::CreateInteger("queryByte"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "Byte")}})
      .PutMember("queryShort", smithy::schema::Schema::CreateInteger("queryShort"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "Short")}})
      .PutMember("queryInteger", smithy::schema::Schema::CreateInteger("queryInteger"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "Integer")}})
      .PutMember(
          "queryIntegerList",
          smithy::schema::Schema::ListBuilder("IntegerList").PutMember("member", smithy::schema::Schema::CreateInteger("member")).Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "IntegerList")}})
      .PutMember(
          "queryIntegerSet",
          smithy::schema::Schema::ListBuilder("IntegerSet").PutMember("member", smithy::schema::Schema::CreateInteger("member")).Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "IntegerSet")}})
      .PutMember("queryLong", smithy::schema::Schema::CreateLong("queryLong"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "Long")}})
      .PutMember("queryFloat", smithy::schema::Schema::CreateDouble("queryFloat"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "Float")}})
      .PutMember("queryDouble", smithy::schema::Schema::CreateDouble("queryDouble"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "Double")}})
      .PutMember(
          "queryDoubleList",
          smithy::schema::Schema::ListBuilder("DoubleList").PutMember("member", smithy::schema::Schema::CreateDouble("member")).Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "DoubleList")}})
      .PutMember("queryBoolean", smithy::schema::Schema::CreateBoolean("queryBoolean"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "Boolean")}})
      .PutMember(
          "queryBooleanList",
          smithy::schema::Schema::ListBuilder("BooleanList").PutMember("member", smithy::schema::Schema::CreateBoolean("member")).Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "BooleanList")}})
      .PutMember(
          "queryTimestamp", smithy::schema::Schema::CreateTimestamp("queryTimestamp"),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "Timestamp")}})
      .PutMember(
          "queryTimestampList",
          smithy::schema::Schema::ListBuilder("TimestampList")
              .PutMember("member", smithy::schema::Schema::CreateTimestamp("member"))
              .Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "TimestampList")}})
      .PutMember("queryEnum", smithy::schema::Schema::CreateEnum("queryEnum"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "Enum")}})
      .PutMember(
          "queryEnumList",
          smithy::schema::Schema::ListBuilder("FooEnumList").PutMember("member", smithy::schema::Schema::CreateEnum("member")).Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "EnumList")}})
      .PutMember(
          "queryIntegerEnum", smithy::schema::Schema::CreateIntEnum("queryIntegerEnum"),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "IntegerEnum")}})
      .PutMember(
          "queryIntegerEnumList",
          smithy::schema::Schema::ListBuilder("IntegerEnumList")
              .PutMember("member", smithy::schema::Schema::CreateIntEnum("member"))
              .Build(),
          {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "IntegerEnumList")}})
      .PutMember("queryParamsMapOfStrings",
                 smithy::schema::Schema::MapBuilder("StringMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                     .Build(),
                 {{smithy::schema::HttpQueryParamsTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryParamsTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> AllQueryStringTypesRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<AllQueryStringTypesRequestSerializable>("AllQueryStringTypesRequestSerializable", *this);
}

Aws::String AllQueryStringTypesRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext AllQueryStringTypesRequest::GetSchemaSerdeContext() const {
  return {"AllQueryStringTypes", "2019-12-16", "/AllQueryStringTypesInput", ""};
}

void AllQueryStringTypesRequest::AddQueryStringParameters(Aws::Http::URI&) const {}
