/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithStructureResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

HttpPayloadWithStructureResult::HttpPayloadWithStructureResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

HttpPayloadWithStructureResult& HttpPayloadWithStructureResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class HttpPayloadWithStructureResult_NestedPayloadSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithStructureResult_NestedPayloadSchemaSerdeDeser(NestedPayload& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  NestedPayload& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class HttpPayloadWithStructureResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithStructureResultDeserializable(HttpPayloadWithStructureResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  HttpPayloadWithStructureResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpPayloadWithStructureResult_NestedPayloadSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                        smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "greeting") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetGreeting(*value0);
    }
    return;
  }
  if (memberName == "name") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetName(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpPayloadWithStructureResult_NestedPayloadSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("NestedPayload")
      .PutMember("greeting", smithy::schema::Schema::CreateString("greeting"))
      .PutMember("name", smithy::schema::Schema::CreateString("name"))
      .Build();
}

void HttpPayloadWithStructureResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                        smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "nested") {
    NestedPayload nested0;
    HttpPayloadWithStructureResult_NestedPayloadSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetNested(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpPayloadWithStructureResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpPayloadWithStructureResult")
      .PutMember("nested", HttpPayloadWithStructureResult_NestedPayloadSchemaSerdeDeser::BuildSchema(),
                 {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "NestedPayload")},
                  {smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpPayloadWithStructureResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<HttpPayloadWithStructureResultDeserializable>("HttpPayloadWithStructureResultDeserializable", *this);
}
