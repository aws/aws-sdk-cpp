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
#include <aws/json-protocol/model/PutWithContentEncodingRequest.h>
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
class PutWithContentEncodingRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit PutWithContentEncodingRequestSerializable(const PutWithContentEncodingRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PutWithContentEncodingRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void PutWithContentEncodingRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.DataHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("data").value();
    serializer.WriteString(memberSchema, m_obj.GetData());
  }
}

std::shared_ptr<const smithy::schema::Schema> PutWithContentEncodingRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PutWithContentEncodingRequest")
      .PutMember("data", smithy::schema::Schema::CreateString("data"))
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> PutWithContentEncodingRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<PutWithContentEncodingRequestSerializable>("PutWithContentEncodingRequestSerializable", *this);
}

Aws::String PutWithContentEncodingRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext PutWithContentEncodingRequest::GetSchemaSerdeContext() const {
  return {"PutWithContentEncoding", "2018-01-01"};
}

Aws::Http::HeaderValueCollection PutWithContentEncodingRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.PutWithContentEncoding"));
  return headers;
}
#ifdef ENABLED_ZLIB_REQUEST_COMPRESSION
Aws::Client::CompressionAlgorithm PutWithContentEncodingRequest::GetSelectedCompressionAlgorithm(
    Aws::Client::RequestCompressionConfig config) const {
  if (config.useRequestCompression == Aws::Client::UseRequestCompression::DISABLE) {
    return Aws::Client::CompressionAlgorithm::NONE;
  }

  const auto& body = AmazonSerializableWebServiceRequest::GetBody();
  size_t bodySize = 0;
  if (body) {
    body->seekg(0, body->end);
    bodySize = body->tellg();
    body->seekg(0, body->beg);
  }
  if (bodySize < config.requestMinCompressionSizeBytes) {
    return Aws::Client::CompressionAlgorithm::NONE;
  } else {
    return Aws::Client::CompressionAlgorithm::GZIP;
  }
}
#endif
