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
#include <aws/rest-json-protocol/model/DocumentTypeAsMapValueResult.h>
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

DocumentTypeAsMapValueResult::DocumentTypeAsMapValueResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DocumentTypeAsMapValueResult& DocumentTypeAsMapValueResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
class DocumentTypeAsMapValueResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DocumentTypeAsMapValueResultDeserializable(DocumentTypeAsMapValueResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DocumentTypeAsMapValueResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DocumentTypeAsMapValueResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "docValuedMap") {
    Aws::Map<Aws::String, Aws::Utils::Document> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadDocument(valueSchema0);
      if (value1) {
        map0[key0] = smithy::schema::ToUtilsDocument(*value1);
      }
    });
    m_obj.SetDocValuedMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DocumentTypeAsMapValueResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DocumentTypeAsMapValueResult")
      .PutMember("docValuedMap", smithy::schema::Schema::MapBuilder("DocumentValuedMap")
                                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                     .PutMember("value", smithy::schema::Schema::CreateDocument("value"))
                                     .Build())
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> DocumentTypeAsMapValueResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DocumentTypeAsMapValueResultDeserializable>("DocumentTypeAsMapValueResultDeserializable", *this);
}
