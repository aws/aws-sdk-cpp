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
#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNamespaceRequest.h>
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
class FlattenedXmlMapWithXmlNamespaceRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit FlattenedXmlMapWithXmlNamespaceRequestSerializable(const FlattenedXmlMapWithXmlNamespaceRequest&) : m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void FlattenedXmlMapWithXmlNamespaceRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer&) const {}

std::shared_ptr<const smithy::schema::Schema> FlattenedXmlMapWithXmlNamespaceRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("FlattenedXmlMapWithXmlNamespaceRequest").Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> FlattenedXmlMapWithXmlNamespaceRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<FlattenedXmlMapWithXmlNamespaceRequestSerializable>("FlattenedXmlMapWithXmlNamespaceRequestSerializable", *this);
}

Aws::String FlattenedXmlMapWithXmlNamespaceRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext FlattenedXmlMapWithXmlNamespaceRequest::GetSchemaSerdeContext() const {
  return {"FlattenedXmlMapWithXmlNamespace", "2020-01-08"};
}

void FlattenedXmlMapWithXmlNamespaceRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
