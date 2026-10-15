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
#include <aws/rest-json-protocol/model/DocumentTypeRequest.h>
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

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace {
class DocumentTypeRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DocumentTypeRequestSerializable(const DocumentTypeRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const DocumentTypeRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DocumentTypeRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.StringValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("stringValue").value();
    serializer.WriteString(memberSchema, m_obj.GetStringValue());
  }
  if (m_obj.DocumentValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("documentValue").value();
    serializer.WriteDocument(memberSchema, *smithy::schema::ToSchemaDocument(m_obj.GetDocumentValue()));
  }
}

std::shared_ptr<const smithy::schema::Schema> DocumentTypeRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DocumentTypeRequest")
      .PutMember("stringValue", smithy::schema::Schema::CreateString("stringValue"))
      .PutMember("documentValue", smithy::schema::Schema::CreateDocument("documentValue"))
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> DocumentTypeRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<DocumentTypeRequestSerializable>("DocumentTypeRequestSerializable", *this);
}

Aws::String DocumentTypeRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext DocumentTypeRequest::GetSchemaSerdeContext() const {
  return {"DocumentType", "2019-12-16", "/DocumentType", ""};
}
