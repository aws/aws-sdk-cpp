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
#include <aws/dynamodb/model/StartBulkPutItemsRequest.h>
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
class StartBulkPutItemsRequest_InputS3ConfigurationSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit StartBulkPutItemsRequest_InputS3ConfigurationSchemaSerdeSer(const InputS3Configuration& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const InputS3Configuration& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class StartBulkPutItemsRequest_OutputS3ConfigurationSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit StartBulkPutItemsRequest_OutputS3ConfigurationSchemaSerdeSer(const OutputS3Configuration& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const OutputS3Configuration& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class StartBulkPutItemsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit StartBulkPutItemsRequestSerializable(const StartBulkPutItemsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const StartBulkPutItemsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void StartBulkPutItemsRequest_InputS3ConfigurationSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.S3BucketOwnerHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3BucketOwner").value();
    serializer.WriteString(memberSchema, m_obj.GetS3BucketOwner());
  }
  if (m_obj.S3BucketHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3Bucket").value();
    serializer.WriteString(memberSchema, m_obj.GetS3Bucket());
  }
  if (m_obj.S3KeyPrefixHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3KeyPrefix").value();
    serializer.WriteString(memberSchema, m_obj.GetS3KeyPrefix());
  }
  if (m_obj.InputFormatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("InputFormat").value();
    serializer.WriteString(memberSchema, BulkOperationInputFormatMapper::GetNameForBulkOperationInputFormat(m_obj.GetInputFormat()));
  }
  if (m_obj.InputCompressionTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("InputCompressionType").value();
    serializer.WriteString(memberSchema, InputCompressionTypeMapper::GetNameForInputCompressionType(m_obj.GetInputCompressionType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> StartBulkPutItemsRequest_InputS3ConfigurationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("InputS3Configuration")
      .PutMember("S3BucketOwner", smithy::schema::Schema::CreateString("S3BucketOwner"))
      .PutMember("S3Bucket", smithy::schema::Schema::CreateString("S3Bucket"))
      .PutMember("S3KeyPrefix", smithy::schema::Schema::CreateString("S3KeyPrefix"))
      .PutMember("InputFormat", smithy::schema::Schema::CreateEnum("InputFormat"))
      .PutMember("InputCompressionType", smithy::schema::Schema::CreateEnum("InputCompressionType"))
      .Build();
}

void StartBulkPutItemsRequest_OutputS3ConfigurationSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.S3BucketOwnerHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3BucketOwner").value();
    serializer.WriteString(memberSchema, m_obj.GetS3BucketOwner());
  }
  if (m_obj.S3BucketHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3Bucket").value();
    serializer.WriteString(memberSchema, m_obj.GetS3Bucket());
  }
  if (m_obj.S3KeyPrefixHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3KeyPrefix").value();
    serializer.WriteString(memberSchema, m_obj.GetS3KeyPrefix());
  }
  if (m_obj.S3SseAlgorithmHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3SseAlgorithm").value();
    serializer.WriteString(memberSchema, S3SseAlgorithmMapper::GetNameForS3SseAlgorithm(m_obj.GetS3SseAlgorithm()));
  }
  if (m_obj.S3SseKmsKeyIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3SseKmsKeyId").value();
    serializer.WriteString(memberSchema, m_obj.GetS3SseKmsKeyId());
  }
  if (m_obj.OutputTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OutputType").value();
    serializer.WriteList(memberSchema, m_obj.GetOutputType().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetOutputType()) {
        listSerializer0.WriteString(itemSchema0, OutputTypeEnumMapper::GetNameForOutputTypeEnum(item0));
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> StartBulkPutItemsRequest_OutputS3ConfigurationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OutputS3Configuration")
      .PutMember("S3BucketOwner", smithy::schema::Schema::CreateString("S3BucketOwner"))
      .PutMember("S3Bucket", smithy::schema::Schema::CreateString("S3Bucket"))
      .PutMember("S3KeyPrefix", smithy::schema::Schema::CreateString("S3KeyPrefix"))
      .PutMember("S3SseAlgorithm", smithy::schema::Schema::CreateEnum("S3SseAlgorithm"))
      .PutMember("S3SseKmsKeyId", smithy::schema::Schema::CreateString("S3SseKmsKeyId"))
      .PutMember(
          "OutputType",
          smithy::schema::Schema::ListBuilder("OutputTypeList").PutMember("member", smithy::schema::Schema::CreateEnum("member")).Build())
      .Build();
}

void StartBulkPutItemsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ClientTokenHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ClientToken").value();
    serializer.WriteString(memberSchema, m_obj.GetClientToken());
  }
  if (m_obj.InputS3ConfigurationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("InputS3Configuration").value();
    StartBulkPutItemsRequest_InputS3ConfigurationSchemaSerdeSer nested0(m_obj.GetInputS3Configuration());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.OutputS3ConfigurationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("OutputS3Configuration").value();
    StartBulkPutItemsRequest_OutputS3ConfigurationSchemaSerdeSer nested0(m_obj.GetOutputS3Configuration());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.TableNameHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableName").value();
    serializer.WriteString(memberSchema, m_obj.GetTableName());
  }
  if (m_obj.MaxWriteRequestUnitsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("MaxWriteRequestUnits").value();
    serializer.WriteLong(memberSchema, m_obj.GetMaxWriteRequestUnits());
  }
  if (m_obj.PerformanceTierHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("PerformanceTier").value();
    serializer.WriteString(memberSchema,
                           BulkOperationPerformanceTierMapper::GetNameForBulkOperationPerformanceTier(m_obj.GetPerformanceTier()));
  }
}

std::shared_ptr<const smithy::schema::Schema> StartBulkPutItemsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("StartBulkPutItemsRequest")
      .PutMember("ClientToken", smithy::schema::Schema::CreateString("ClientToken"))
      .PutMember("InputS3Configuration", StartBulkPutItemsRequest_InputS3ConfigurationSchemaSerdeSer::BuildSchema())
      .PutMember("OutputS3Configuration", StartBulkPutItemsRequest_OutputS3ConfigurationSchemaSerdeSer::BuildSchema())
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("MaxWriteRequestUnits", smithy::schema::Schema::CreateLong("MaxWriteRequestUnits"))
      .PutMember("PerformanceTier", smithy::schema::Schema::CreateEnum("PerformanceTier"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> StartBulkPutItemsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<StartBulkPutItemsRequestSerializable>("StartBulkPutItemsRequestSerializable", *this);
}

Aws::String StartBulkPutItemsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext StartBulkPutItemsRequest::GetSchemaSerdeContext() const {
  return {"StartBulkPutItems", "2012-08-10"};
}

Aws::Http::HeaderValueCollection StartBulkPutItemsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.StartBulkPutItems"));
  return headers;
}

StartBulkPutItemsRequest::EndpointParameters StartBulkPutItemsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
