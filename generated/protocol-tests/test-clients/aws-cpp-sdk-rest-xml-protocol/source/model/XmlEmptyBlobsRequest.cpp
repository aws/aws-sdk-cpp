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
#include <aws/rest-xml-protocol/model/XmlEmptyBlobsRequest.h>
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
class XmlEmptyBlobsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlEmptyBlobsRequestSerializable(const XmlEmptyBlobsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlEmptyBlobsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlEmptyBlobsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.DataHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("data").value();
    serializer.WriteBlob(memberSchema, m_obj.GetData());
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlEmptyBlobsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlEmptyBlobsRequest")
      .PutMember("data", smithy::schema::Schema::CreateBlob("data"))
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlEmptyBlobsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<XmlEmptyBlobsRequestSerializable>("XmlEmptyBlobsRequestSerializable", *this);
}

Aws::String XmlEmptyBlobsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext XmlEmptyBlobsRequest::GetSchemaSerdeContext() const {
  return {"XmlEmptyBlobs", "2019-12-16", "/XmlEmptyBlobs", ""};
}
