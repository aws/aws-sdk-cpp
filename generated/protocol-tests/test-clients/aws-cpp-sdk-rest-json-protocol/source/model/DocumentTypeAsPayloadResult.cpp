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
#include <aws/rest-json-protocol/model/DocumentTypeAsPayloadResult.h>
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

DocumentTypeAsPayloadResult::DocumentTypeAsPayloadResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DocumentTypeAsPayloadResult& DocumentTypeAsPayloadResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
class DocumentTypeAsPayloadResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DocumentTypeAsPayloadResultDeserializable(DocumentTypeAsPayloadResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DocumentTypeAsPayloadResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DocumentTypeAsPayloadResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                     smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "documentValue") {
    auto value0 = deserializer.ReadDocument(memberSchema);
    if (value0) {
      m_obj.SetDocumentValue(smithy::schema::ToUtilsDocument(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DocumentTypeAsPayloadResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DocumentTypeAsPayloadResult")
      .PutMember("documentValue", smithy::schema::Schema::CreateDocument("documentValue"),
                 {{smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> DocumentTypeAsPayloadResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DocumentTypeAsPayloadResultDeserializable>("DocumentTypeAsPayloadResultDeserializable", *this);
}
