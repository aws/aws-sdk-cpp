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
#include <aws/rest-json-protocol/model/HttpEmptyPrefixHeadersRequest.h>
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
class HttpEmptyPrefixHeadersRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpEmptyPrefixHeadersRequestSerializable(const HttpEmptyPrefixHeadersRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpEmptyPrefixHeadersRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpEmptyPrefixHeadersRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.PrefixHeadersHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("prefixHeaders").value();
    serializer.WriteMap(memberSchema, m_obj.GetPrefixHeaders().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetPrefixHeaders()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.SpecificHeaderHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("specificHeader").value();
    serializer.WriteString(memberSchema, m_obj.GetSpecificHeader());
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpEmptyPrefixHeadersRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpEmptyPrefixHeadersRequest")
      .PutMember("prefixHeaders",
                 smithy::schema::Schema::MapBuilder("StringMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                     .Build(),
                 {{smithy::schema::HttpPrefixHeadersTrait::KEY(),
                   Aws::MakeShared<smithy::schema::HttpPrefixHeadersTrait>("SchemaSerdeTrait", "")}})
      .PutMember("specificHeader", smithy::schema::Schema::CreateString("specificHeader"),
                 {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "hello")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpEmptyPrefixHeadersRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpEmptyPrefixHeadersRequestSerializable>("HttpEmptyPrefixHeadersRequestSerializable", *this);
}

Aws::String HttpEmptyPrefixHeadersRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpEmptyPrefixHeadersRequest::GetSchemaSerdeContext() const {
  return {"HttpEmptyPrefixHeaders", "2019-12-16", "/HttpEmptyPrefixHeaders", ""};
}

Aws::Http::HeaderValueCollection HttpEmptyPrefixHeadersRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
