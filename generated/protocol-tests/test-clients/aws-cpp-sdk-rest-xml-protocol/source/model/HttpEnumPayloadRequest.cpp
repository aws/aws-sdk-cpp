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
#include <aws/rest-xml-protocol/model/HttpEnumPayloadRequest.h>
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
class HttpEnumPayloadRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpEnumPayloadRequestSerializable(const HttpEnumPayloadRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpEnumPayloadRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpEnumPayloadRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.PayloadHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("payload").value();
    serializer.WriteString(memberSchema, StringEnumMapper::GetNameForStringEnum(m_obj.GetPayload()));
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpEnumPayloadRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpEnumPayloadRequest")
      .PutMember("payload", smithy::schema::Schema::CreateEnum("payload"),
                 {{smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpEnumPayloadRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpEnumPayloadRequestSerializable>("HttpEnumPayloadRequestSerializable", *this);
}

Aws::String HttpEnumPayloadRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpEnumPayloadRequest::GetSchemaSerdeContext() const {
  return {"HttpEnumPayload", "2019-12-16", "/EnumPayload", ""};
}
