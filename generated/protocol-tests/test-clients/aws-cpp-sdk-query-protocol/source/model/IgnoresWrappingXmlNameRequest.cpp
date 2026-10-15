/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/IgnoresWrappingXmlNameRequest.h>
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

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

namespace {
class IgnoresWrappingXmlNameRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit IgnoresWrappingXmlNameRequestSerializable(const IgnoresWrappingXmlNameRequest&) : m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void IgnoresWrappingXmlNameRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer&) const {}

std::shared_ptr<const smithy::schema::Schema> IgnoresWrappingXmlNameRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("IgnoresWrappingXmlNameRequest").Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> IgnoresWrappingXmlNameRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<IgnoresWrappingXmlNameRequestSerializable>("IgnoresWrappingXmlNameRequestSerializable", *this);
}

Aws::String IgnoresWrappingXmlNameRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext IgnoresWrappingXmlNameRequest::GetSchemaSerdeContext() const {
  return {"IgnoresWrappingXmlName", "2020-01-08"};
}

void IgnoresWrappingXmlNameRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
