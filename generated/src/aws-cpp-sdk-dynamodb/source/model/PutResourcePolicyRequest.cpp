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
#include <aws/dynamodb/model/PutResourcePolicyRequest.h>
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

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace {
class PutResourcePolicyRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit PutResourcePolicyRequestSerializable(const PutResourcePolicyRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PutResourcePolicyRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void PutResourcePolicyRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ResourceArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ResourceArn").value();
    serializer.WriteString(memberSchema, m_obj.GetResourceArn());
  }
  if (m_obj.PolicyHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("Policy").value();
    serializer.WriteString(memberSchema, m_obj.GetPolicy());
  }
  if (m_obj.ExpectedRevisionIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExpectedRevisionId").value();
    serializer.WriteString(memberSchema, m_obj.GetExpectedRevisionId());
  }
}

std::shared_ptr<const smithy::schema::Schema> PutResourcePolicyRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PutResourcePolicyRequest")
      .PutMember("ResourceArn", smithy::schema::Schema::CreateString("ResourceArn"))
      .PutMember("Policy", smithy::schema::Schema::CreateString("Policy"))
      .PutMember("ExpectedRevisionId", smithy::schema::Schema::CreateString("ExpectedRevisionId"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> PutResourcePolicyRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<PutResourcePolicyRequestSerializable>("PutResourcePolicyRequestSerializable", *this);
}

Aws::String PutResourcePolicyRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext PutResourcePolicyRequest::GetSchemaSerdeContext() const {
  return {"PutResourcePolicy", "2012-08-10"};
}

Aws::Http::HeaderValueCollection PutResourcePolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.PutResourcePolicy"));
  return headers;
}

PutResourcePolicyRequest::EndpointParameters PutResourcePolicyRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (ResourceArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetResourceArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
