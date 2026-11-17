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
#include <aws/rest-json-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>
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
class QueryIdempotencyTokenAutoFillRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit QueryIdempotencyTokenAutoFillRequestSerializable(const QueryIdempotencyTokenAutoFillRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const QueryIdempotencyTokenAutoFillRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void QueryIdempotencyTokenAutoFillRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TokenHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("token").value();
    serializer.WriteString(memberSchema, m_obj.GetToken());
  }
}

std::shared_ptr<const smithy::schema::Schema> QueryIdempotencyTokenAutoFillRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("QueryIdempotencyTokenAutoFillRequest")
      .PutMember("token", smithy::schema::Schema::CreateString("token"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "token")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> QueryIdempotencyTokenAutoFillRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<QueryIdempotencyTokenAutoFillRequestSerializable>("QueryIdempotencyTokenAutoFillRequestSerializable", *this);
}

Aws::String QueryIdempotencyTokenAutoFillRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext QueryIdempotencyTokenAutoFillRequest::GetSchemaSerdeContext() const {
  return {"QueryIdempotencyTokenAutoFill", "2019-12-16", "/QueryIdempotencyTokenAutoFill", ""};
}

void QueryIdempotencyTokenAutoFillRequest::AddQueryStringParameters(Aws::Http::URI&) const {}
