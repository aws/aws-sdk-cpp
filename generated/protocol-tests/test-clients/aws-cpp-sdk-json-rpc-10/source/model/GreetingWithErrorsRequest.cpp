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
#include <aws/json-rpc-10/model/GreetingWithErrorsRequest.h>
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

using namespace Aws::JSONRPC10::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace {
class GreetingWithErrorsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit GreetingWithErrorsRequestSerializable(const GreetingWithErrorsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GreetingWithErrorsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void GreetingWithErrorsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.GreetingHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("greeting").value();
    serializer.WriteString(memberSchema, m_obj.GetGreeting());
  }
}

std::shared_ptr<const smithy::schema::Schema> GreetingWithErrorsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingWithErrorsRequest")
      .PutMember("greeting", smithy::schema::Schema::CreateString("greeting"))
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> GreetingWithErrorsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<GreetingWithErrorsRequestSerializable>("GreetingWithErrorsRequestSerializable", *this);
}

Aws::String GreetingWithErrorsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext GreetingWithErrorsRequest::GetSchemaSerdeContext() const {
  return {"GreetingWithErrors", "2020-07-14"};
}

Aws::Http::HeaderValueCollection GreetingWithErrorsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonRpc10.GreetingWithErrors"));
  return headers;
}
