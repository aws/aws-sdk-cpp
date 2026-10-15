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
#include <aws/ec2-protocol/model/XmlBlobsResponse.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <utility>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

XmlBlobsResponse::XmlBlobsResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result) { *this = result; }

XmlBlobsResponse& XmlBlobsResponse::operator=(const Aws::AmazonWebServiceResult<XmlDocument>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull()) {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
  }
  return *this;
}

namespace {
class XmlBlobsResponseDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlBlobsResponseDeserializable(XmlBlobsResponse& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlBlobsResponse& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlBlobsResponseDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "data") {
    auto value0 = deserializer.ReadBlob(memberSchema);
    if (value0.has_value()) {
      m_obj.SetData(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlBlobsResponseDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlBlobsResponse").PutMember("data", smithy::schema::Schema::CreateBlob("data")).Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlBlobsResponse::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<XmlBlobsResponseDeserializable>("XmlBlobsResponseDeserializable", *this);
}
