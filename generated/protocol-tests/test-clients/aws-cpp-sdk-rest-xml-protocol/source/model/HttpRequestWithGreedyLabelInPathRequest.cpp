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
#include <aws/rest-xml-protocol/model/HttpRequestWithGreedyLabelInPathRequest.h>
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
class HttpRequestWithGreedyLabelInPathRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpRequestWithGreedyLabelInPathRequestSerializable(const HttpRequestWithGreedyLabelInPathRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpRequestWithGreedyLabelInPathRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpRequestWithGreedyLabelInPathRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("foo").value();
    serializer.WriteString(memberSchema, m_obj.GetFoo());
  }
  if (m_obj.BazHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("baz").value();
    serializer.WriteString(memberSchema, m_obj.GetBaz());
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpRequestWithGreedyLabelInPathRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpRequestWithGreedyLabelInPathRequest")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("baz", smithy::schema::Schema::CreateString("baz"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpRequestWithGreedyLabelInPathRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpRequestWithGreedyLabelInPathRequestSerializable>("HttpRequestWithGreedyLabelInPathRequestSerializable", *this);
}

Aws::String HttpRequestWithGreedyLabelInPathRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpRequestWithGreedyLabelInPathRequest::GetSchemaSerdeContext() const {
  return {"HttpRequestWithGreedyLabelInPath", "2019-12-16", "/HttpRequestWithGreedyLabelInPath/foo/{foo}/baz/{baz+}", ""};
}
