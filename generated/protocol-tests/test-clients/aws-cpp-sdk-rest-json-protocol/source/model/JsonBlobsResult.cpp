/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/JsonBlobsResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

JsonBlobsResult::JsonBlobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

JsonBlobsResult& JsonBlobsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

namespace {
class JsonBlobsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit JsonBlobsResultDeserializable(JsonBlobsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  JsonBlobsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void JsonBlobsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "data") {
    auto value0 = deserializer.ReadBlob(memberSchema);
    if (value0.has_value()) {
      m_obj.SetData(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> JsonBlobsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("JsonBlobsResult").PutMember("data", smithy::schema::Schema::CreateBlob("data")).Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> JsonBlobsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<JsonBlobsResultDeserializable>("JsonBlobsResultDeserializable", *this);
}
