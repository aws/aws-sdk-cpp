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
#include <aws/json-protocol/model/NullOperationRequest.h>
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
class NullOperationRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit NullOperationRequestSerializable(const NullOperationRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const NullOperationRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void NullOperationRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.StringHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("string").value();
    serializer.WriteString(memberSchema, m_obj.GetString());
  }
}

std::shared_ptr<const smithy::schema::Schema> NullOperationRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("NullOperationRequest")
      .PutMember("string", smithy::schema::Schema::CreateString("string"))
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> NullOperationRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<NullOperationRequestSerializable>("NullOperationRequestSerializable", *this);
}

Aws::String NullOperationRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext NullOperationRequest::GetSchemaSerdeContext() const { return {"NullOperation", "2018-01-01"}; }

Aws::Http::HeaderValueCollection NullOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.NullOperation"));
  return headers;
}
