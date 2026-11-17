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
#include <aws/rest-xml-protocol/model/FractionalSecondsRequest.h>
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
class FractionalSecondsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit FractionalSecondsRequestSerializable(const FractionalSecondsRequest&) : m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void FractionalSecondsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer&) const {}

std::shared_ptr<const smithy::schema::Schema> FractionalSecondsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("FractionalSecondsRequest").Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> FractionalSecondsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<FractionalSecondsRequestSerializable>("FractionalSecondsRequestSerializable", *this);
}

Aws::String FractionalSecondsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext FractionalSecondsRequest::GetSchemaSerdeContext() const {
  return {"FractionalSeconds", "2019-12-16", "/FractionalSeconds", ""};
}
