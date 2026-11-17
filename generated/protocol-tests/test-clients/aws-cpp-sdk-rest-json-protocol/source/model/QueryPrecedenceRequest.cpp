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
#include <aws/rest-json-protocol/model/QueryPrecedenceRequest.h>
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
class QueryPrecedenceRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryPrecedenceRequestSerializable(const QueryPrecedenceRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const QueryPrecedenceRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void QueryPrecedenceRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("foo").value();
    serializer.WriteString(memberSchema, m_obj.GetFoo());
  }
  if (m_obj.BazHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("baz").value();
    serializer.WriteMap(memberSchema, m_obj.GetBaz().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetBaz()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryPrecedenceRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("QueryPrecedenceRequest")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "bar")}})
      .PutMember("baz",
                 smithy::schema::Schema::MapBuilder("StringMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                     .Build(),
                 {{smithy::schema::HttpQueryParamsTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryParamsTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> QueryPrecedenceRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<QueryPrecedenceRequestSerializable>("QueryPrecedenceRequestSerializable", *this);
}

Aws::String QueryPrecedenceRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext QueryPrecedenceRequest::GetSchemaSerdeContext() const {
  return {"QueryPrecedence", "2019-12-16", "/Precedence", ""};
}

void QueryPrecedenceRequest::AddQueryStringParameters(Aws::Http::URI&) const {}
