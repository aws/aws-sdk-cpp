/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithUnionRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <numeric>
#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

namespace {
class HttpPayloadWithUnionRequest_UnionPayloadSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithUnionRequest_UnionPayloadSchemaSerdeSer(const UnionPayload& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const UnionPayload& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class HttpPayloadWithUnionRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpPayloadWithUnionRequestSerializable(const HttpPayloadWithUnionRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpPayloadWithUnionRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpPayloadWithUnionRequest_UnionPayloadSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.GreetingHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("greeting").value();
    serializer.WriteString(memberSchema, m_obj.GetGreeting());
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpPayloadWithUnionRequest_UnionPayloadSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::UnionBuilder("UnionPayload")
      .PutMember("greeting", smithy::schema::Schema::CreateString("greeting"))
      .Build();
}

void HttpPayloadWithUnionRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NestedHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("nested").value();
    HttpPayloadWithUnionRequest_UnionPayloadSchemaSerdeSer nested0(m_obj.GetNested());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpPayloadWithUnionRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpPayloadWithUnionRequest")
      .PutMember("nested", HttpPayloadWithUnionRequest_UnionPayloadSchemaSerdeSer::BuildSchema(),
                 {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "UnionPayload")},
                  {smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpPayloadWithUnionRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpPayloadWithUnionRequestSerializable>("HttpPayloadWithUnionRequestSerializable", *this);
}

Aws::String HttpPayloadWithUnionRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpPayloadWithUnionRequest::GetSchemaSerdeContext() const {
  return {"HttpPayloadWithUnion", "2019-12-16", "/HttpPayloadWithUnion", ""};
}
