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
#include <aws/dynamodb/model/UpdateKinesisStreamingDestinationRequest.h>
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
class UpdateKinesisStreamingDestinationRequest_UpdateKinesisStreamingConfigurationSchemaSerdeSer final
    : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateKinesisStreamingDestinationRequest_UpdateKinesisStreamingConfigurationSchemaSerdeSer(
      const UpdateKinesisStreamingConfiguration& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const UpdateKinesisStreamingConfiguration& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class UpdateKinesisStreamingDestinationRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit UpdateKinesisStreamingDestinationRequestSerializable(const UpdateKinesisStreamingDestinationRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const UpdateKinesisStreamingDestinationRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void UpdateKinesisStreamingDestinationRequest_UpdateKinesisStreamingConfigurationSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ApproximateCreationDateTimePrecisionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ApproximateCreationDateTimePrecision").value();
    serializer.WriteString(memberSchema, ApproximateCreationDateTimePrecisionMapper::GetNameForApproximateCreationDateTimePrecision(
                                             m_obj.GetApproximateCreationDateTimePrecision()));
  }
}

std::shared_ptr<const smithy::schema::Schema>
UpdateKinesisStreamingDestinationRequest_UpdateKinesisStreamingConfigurationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateKinesisStreamingConfiguration")
      .PutMember("ApproximateCreationDateTimePrecision", smithy::schema::Schema::CreateEnum("ApproximateCreationDateTimePrecision"))
      .Build();
}

void UpdateKinesisStreamingDestinationRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.StreamArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("StreamArn").value();
    serializer.WriteString(memberSchema, m_obj.GetStreamArn());
  }
  if (m_obj.UpdateKinesisStreamingConfigurationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("UpdateKinesisStreamingConfiguration").value();
    UpdateKinesisStreamingDestinationRequest_UpdateKinesisStreamingConfigurationSchemaSerdeSer nested0(
        m_obj.GetUpdateKinesisStreamingConfiguration());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> UpdateKinesisStreamingDestinationRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("UpdateKinesisStreamingDestinationRequest")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("StreamArn", smithy::schema::Schema::CreateString("StreamArn"))
      .PutMember("UpdateKinesisStreamingConfiguration",
                 UpdateKinesisStreamingDestinationRequest_UpdateKinesisStreamingConfigurationSchemaSerdeSer::BuildSchema())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> UpdateKinesisStreamingDestinationRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<UpdateKinesisStreamingDestinationRequestSerializable>("UpdateKinesisStreamingDestinationRequestSerializable",
                                                                               *this);
}

Aws::String UpdateKinesisStreamingDestinationRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext UpdateKinesisStreamingDestinationRequest::GetSchemaSerdeContext() const {
  return {"UpdateKinesisStreamingDestination", "2012-08-10"};
}

Aws::Http::HeaderValueCollection UpdateKinesisStreamingDestinationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateKinesisStreamingDestination"));
  return headers;
}

UpdateKinesisStreamingDestinationRequest::EndpointParameters UpdateKinesisStreamingDestinationRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
