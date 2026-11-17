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
#include <aws/rest-json-protocol/model/HttpPrefixHeadersInResponseRequest.h>
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
class HttpPrefixHeadersInResponseRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPrefixHeadersInResponseRequestSerializable(const HttpPrefixHeadersInResponseRequest&) : m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpPrefixHeadersInResponseRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer&) const {}

std::shared_ptr<const smithy::schema::Schema> HttpPrefixHeadersInResponseRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpPrefixHeadersInResponseRequest").Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpPrefixHeadersInResponseRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpPrefixHeadersInResponseRequestSerializable>("HttpPrefixHeadersInResponseRequestSerializable", *this);
}

Aws::String HttpPrefixHeadersInResponseRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpPrefixHeadersInResponseRequest::GetSchemaSerdeContext() const {
  return {"HttpPrefixHeadersInResponse", "2019-12-16", "/HttpPrefixHeadersResponse", ""};
}
