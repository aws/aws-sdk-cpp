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
#include <aws/rest-xml-protocol/model/HttpEmptyPrefixHeadersResult.h>
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

HttpEmptyPrefixHeadersResult::HttpEmptyPrefixHeadersResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

HttpEmptyPrefixHeadersResult& HttpEmptyPrefixHeadersResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class HttpEmptyPrefixHeadersResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpEmptyPrefixHeadersResultDeserializable(HttpEmptyPrefixHeadersResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  HttpEmptyPrefixHeadersResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpEmptyPrefixHeadersResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                      smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "prefixHeaders") {
    Aws::Map<Aws::String, Aws::String> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadString(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = *value1;
      }
    });
    m_obj.SetPrefixHeaders(std::move(map0));
    return;
  }
  if (memberName == "specificHeader") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSpecificHeader(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpEmptyPrefixHeadersResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpEmptyPrefixHeadersResult")
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

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpEmptyPrefixHeadersResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<HttpEmptyPrefixHeadersResultDeserializable>("HttpEmptyPrefixHeadersResultDeserializable", *this);
}
