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
#include <aws/json-protocol/model/ContentTypeParametersRequest.h>
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
class ContentTypeParametersRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ContentTypeParametersRequestSerializable(const ContentTypeParametersRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ContentTypeParametersRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ContentTypeParametersRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("value").value();
    serializer.WriteInteger(memberSchema, m_obj.GetValue());
  }
}

std::shared_ptr<const smithy::schema::Schema> ContentTypeParametersRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ContentTypeParametersRequest")
      .PutMember("value", smithy::schema::Schema::CreateInteger("value"))
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> ContentTypeParametersRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<ContentTypeParametersRequestSerializable>("ContentTypeParametersRequestSerializable", *this);
}

Aws::String ContentTypeParametersRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext ContentTypeParametersRequest::GetSchemaSerdeContext() const {
  return {"ContentTypeParameters", "2018-01-01"};
}

Aws::Http::HeaderValueCollection ContentTypeParametersRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.ContentTypeParameters"));
  return headers;
}
