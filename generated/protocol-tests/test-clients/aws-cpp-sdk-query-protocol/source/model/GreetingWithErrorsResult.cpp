/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/GreetingWithErrorsResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <utility>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GreetingWithErrorsResult::GreetingWithErrorsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

GreetingWithErrorsResult& GreetingWithErrorsResult::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::GreetingWithErrorsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}

namespace {
class GreetingWithErrorsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit GreetingWithErrorsResultDeserializable(GreetingWithErrorsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GreetingWithErrorsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void GreetingWithErrorsResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                  smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "greeting") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetGreeting(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> GreetingWithErrorsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingWithErrorsResult")
      .PutMember("greeting", smithy::schema::Schema::CreateString("greeting"))
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> GreetingWithErrorsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<GreetingWithErrorsResultDeserializable>("GreetingWithErrorsResultDeserializable", *this);
}
