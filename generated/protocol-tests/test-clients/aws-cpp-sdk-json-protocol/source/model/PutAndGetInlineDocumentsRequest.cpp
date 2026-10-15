/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/PutAndGetInlineDocumentsRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeSerializer.h>

#include <numeric>
#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace {
class PutAndGetInlineDocumentsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit PutAndGetInlineDocumentsRequestSerializable(const PutAndGetInlineDocumentsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PutAndGetInlineDocumentsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void PutAndGetInlineDocumentsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.InlineDocumentHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("inlineDocument").value();
    serializer.WriteDocument(memberSchema, *smithy::schema::ToSchemaDocument(m_obj.GetInlineDocument()));
  }
}

std::shared_ptr<const smithy::schema::Schema> PutAndGetInlineDocumentsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PutAndGetInlineDocumentsRequest")
      .PutMember("inlineDocument", smithy::schema::Schema::CreateDocument("inlineDocument"))
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> PutAndGetInlineDocumentsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<PutAndGetInlineDocumentsRequestSerializable>("PutAndGetInlineDocumentsRequestSerializable", *this);
}

Aws::String PutAndGetInlineDocumentsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext PutAndGetInlineDocumentsRequest::GetSchemaSerdeContext() const {
  return {"PutAndGetInlineDocuments", "2018-01-01"};
}

Aws::Http::HeaderValueCollection PutAndGetInlineDocumentsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.PutAndGetInlineDocuments"));
  return headers;
}
