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
#include <aws/dynamodb/model/EnableKinesisStreamingDestinationRequest.h>
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
class EnableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer final
    : public smithy::schema::SerializableStruct {
 public:
  explicit EnableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer(
      const EnableKinesisStreamingConfiguration& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const EnableKinesisStreamingConfiguration& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class EnableKinesisStreamingDestinationRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit EnableKinesisStreamingDestinationRequestSerializable(const EnableKinesisStreamingDestinationRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const EnableKinesisStreamingDestinationRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void EnableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ApproximateCreationDateTimePrecisionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ApproximateCreationDateTimePrecision").value();
    serializer.WriteString(memberSchema, ApproximateCreationDateTimePrecisionMapper::GetNameForApproximateCreationDateTimePrecision(
                                             m_obj.GetApproximateCreationDateTimePrecision()));
  }
}

std::shared_ptr<const smithy::schema::Schema>
EnableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("EnableKinesisStreamingConfiguration")
      .PutMember("ApproximateCreationDateTimePrecision", smithy::schema::Schema::CreateEnum("ApproximateCreationDateTimePrecision"))
      .Build();
}

void EnableKinesisStreamingDestinationRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.StreamArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("StreamArn").value();
    serializer.WriteString(memberSchema, m_obj.GetStreamArn());
  }
  if (m_obj.EnableKinesisStreamingConfigurationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("EnableKinesisStreamingConfiguration").value();
    EnableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer nested0(
        m_obj.GetEnableKinesisStreamingConfiguration());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> EnableKinesisStreamingDestinationRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("EnableKinesisStreamingDestinationRequest")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("StreamArn", smithy::schema::Schema::CreateString("StreamArn"))
      .PutMember("EnableKinesisStreamingConfiguration",
                 EnableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer::BuildSchema())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> EnableKinesisStreamingDestinationRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<EnableKinesisStreamingDestinationRequestSerializable>("EnableKinesisStreamingDestinationRequestSerializable",
                                                                               *this);
}

Aws::String EnableKinesisStreamingDestinationRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext EnableKinesisStreamingDestinationRequest::GetSchemaSerdeContext() const {
  return {"EnableKinesisStreamingDestination", "2012-08-10"};
}

Aws::Http::HeaderValueCollection EnableKinesisStreamingDestinationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.EnableKinesisStreamingDestination"));
  return headers;
}

EnableKinesisStreamingDestinationRequest::EndpointParameters EnableKinesisStreamingDestinationRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
