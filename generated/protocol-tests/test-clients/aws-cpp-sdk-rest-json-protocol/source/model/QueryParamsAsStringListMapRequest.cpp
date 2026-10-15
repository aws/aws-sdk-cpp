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
#include <aws/rest-json-protocol/model/QueryParamsAsStringListMapRequest.h>
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
class QueryParamsAsStringListMapRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryParamsAsStringListMapRequestSerializable(const QueryParamsAsStringListMapRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const QueryParamsAsStringListMapRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void QueryParamsAsStringListMapRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.QuxHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("qux").value();
    serializer.WriteString(memberSchema, m_obj.GetQux());
  }
  if (m_obj.FooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("foo").value();
    serializer.WriteMap(memberSchema, m_obj.GetFoo().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetFoo()) {
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
}

std::shared_ptr<const smithy::schema::Schema> QueryParamsAsStringListMapRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("QueryParamsAsStringListMapRequest")
      .PutMember("qux", smithy::schema::Schema::CreateString("qux"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "corge")}})
      .PutMember("foo",
                 smithy::schema::Schema::MapBuilder("StringListMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::ListBuilder("StringList")
                                             .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                             .Build())
                     .Build(),
                 {{smithy::schema::HttpQueryParamsTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryParamsTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> QueryParamsAsStringListMapRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<QueryParamsAsStringListMapRequestSerializable>("QueryParamsAsStringListMapRequestSerializable", *this);
}

Aws::String QueryParamsAsStringListMapRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext QueryParamsAsStringListMapRequest::GetSchemaSerdeContext() const {
  return {"QueryParamsAsStringListMap", "2019-12-16", "/StringListMap", ""};
}

void QueryParamsAsStringListMapRequest::AddQueryStringParameters(Aws::Http::URI&) const {}
