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
#include <aws/rest-xml-protocol/model/IgnoreQueryParamsInResponseResult.h>
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

IgnoreQueryParamsInResponseResult::IgnoreQueryParamsInResponseResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  *this = result;
}

IgnoreQueryParamsInResponseResult& IgnoreQueryParamsInResponseResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
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
class IgnoreQueryParamsInResponseResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit IgnoreQueryParamsInResponseResultDeserializable(IgnoreQueryParamsInResponseResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  IgnoreQueryParamsInResponseResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void IgnoreQueryParamsInResponseResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                           smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "baz") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBaz(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> IgnoreQueryParamsInResponseResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("IgnoreQueryParamsInResponseResult")
      .PutMember("baz", smithy::schema::Schema::CreateString("baz"),
                 {{smithy::schema::HttpQueryTrait::KEY(), Aws::MakeShared<smithy::schema::HttpQueryTrait>("SchemaSerdeTrait", "baz")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> IgnoreQueryParamsInResponseResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<IgnoreQueryParamsInResponseResultDeserializable>("IgnoreQueryParamsInResponseResultDeserializable", *this);
}
