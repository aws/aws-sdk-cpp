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
#include <aws/query-protocol/model/XmlEmptyListsRequest.h>
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
class XmlEmptyListsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlEmptyListsRequestSerializable(const XmlEmptyListsRequest&) : m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlEmptyListsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer&) const {}

std::shared_ptr<const smithy::schema::Schema> XmlEmptyListsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlEmptyListsRequest").Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlEmptyListsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<XmlEmptyListsRequestSerializable>("XmlEmptyListsRequestSerializable", *this);
}

Aws::String XmlEmptyListsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext XmlEmptyListsRequest::GetSchemaSerdeContext() const { return {"XmlEmptyLists", "2020-01-08"}; }

void XmlEmptyListsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
