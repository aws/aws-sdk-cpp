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
#include <aws/rest-json-protocol/model/ResponseCodeRequiredResult.h>
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

ResponseCodeRequiredResult::ResponseCodeRequiredResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ResponseCodeRequiredResult& ResponseCodeRequiredResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
class ResponseCodeRequiredResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ResponseCodeRequiredResultDeserializable(ResponseCodeRequiredResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ResponseCodeRequiredResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ResponseCodeRequiredResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                    smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "responseCode") {
    auto value0 = deserializer.ReadInteger(memberSchema);
    if (value0.has_value()) {
      m_obj.SetResponseCode(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ResponseCodeRequiredResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ResponseCodeRequiredResult")
      .PutMember(
          "responseCode", smithy::schema::Schema::CreateInteger("responseCode"),
          {{smithy::schema::HttpResponseCodeTrait::KEY(), Aws::MakeShared<smithy::schema::HttpResponseCodeTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> ResponseCodeRequiredResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<ResponseCodeRequiredResultDeserializable>("ResponseCodeRequiredResultDeserializable", *this);
}
