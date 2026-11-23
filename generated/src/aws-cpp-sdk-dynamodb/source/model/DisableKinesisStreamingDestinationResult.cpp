/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/DisableKinesisStreamingDestinationResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisableKinesisStreamingDestinationResult::DisableKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  *this = result;
}

DisableKinesisStreamingDestinationResult& DisableKinesisStreamingDestinationResult::operator=(
    const Aws::AmazonWebServiceResult<Aws::String>& result) {
  m_HttpResponseCode = result.GetResponseCode();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace {
class DisableKinesisStreamingDestinationResult_EnableKinesisStreamingConfigurationSchemaSerdeDeser final
    : public smithy::schema::SerializableStruct {
 public:
  explicit DisableKinesisStreamingDestinationResult_EnableKinesisStreamingConfigurationSchemaSerdeDeser(
      EnableKinesisStreamingConfiguration& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  EnableKinesisStreamingConfiguration& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DisableKinesisStreamingDestinationResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DisableKinesisStreamingDestinationResultDeserializable(DisableKinesisStreamingDestinationResult& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DisableKinesisStreamingDestinationResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DisableKinesisStreamingDestinationResult_EnableKinesisStreamingConfigurationSchemaSerdeDeser::From(
    const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ApproximateCreationDateTimePrecision") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetApproximateCreationDateTimePrecision(
          ApproximateCreationDateTimePrecisionMapper::GetApproximateCreationDateTimePrecisionForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema>
DisableKinesisStreamingDestinationResult_EnableKinesisStreamingConfigurationSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("EnableKinesisStreamingConfiguration")
      .PutMember("ApproximateCreationDateTimePrecision", smithy::schema::Schema::CreateEnum("ApproximateCreationDateTimePrecision"))
      .Build();
}

void DisableKinesisStreamingDestinationResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                                  smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableName(*value0);
    }
    return;
  }
  if (memberName == "StreamArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStreamArn(*value0);
    }
    return;
  }
  if (memberName == "DestinationStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDestinationStatus(DestinationStatusMapper::GetDestinationStatusForName(*value0));
    }
    return;
  }
  if (memberName == "EnableKinesisStreamingConfiguration") {
    EnableKinesisStreamingConfiguration nested0;
    DisableKinesisStreamingDestinationResult_EnableKinesisStreamingConfigurationSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetEnableKinesisStreamingConfiguration(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DisableKinesisStreamingDestinationResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DisableKinesisStreamingDestinationResult")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("StreamArn", smithy::schema::Schema::CreateString("StreamArn"))
      .PutMember("DestinationStatus", smithy::schema::Schema::CreateEnum("DestinationStatus"))
      .PutMember("EnableKinesisStreamingConfiguration",
                 DisableKinesisStreamingDestinationResult_EnableKinesisStreamingConfigurationSchemaSerdeDeser::BuildSchema())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DisableKinesisStreamingDestinationResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DisableKinesisStreamingDestinationResultDeserializable>("DisableKinesisStreamingDestinationResultDeserializable",
                                                                                 *this);
}
