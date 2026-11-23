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
#include <aws/dynamodb/model/ExportTableToPointInTimeRequest.h>
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
class ExportTableToPointInTimeRequest_IncrementalExportSpecificationSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ExportTableToPointInTimeRequest_IncrementalExportSpecificationSchemaSerdeSer(const IncrementalExportSpecification& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const IncrementalExportSpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ExportTableToPointInTimeRequest_FilterSpecificationSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ExportTableToPointInTimeRequest_FilterSpecificationSchemaSerdeSer(const FilterSpecification& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const FilterSpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ExportTableToPointInTimeRequest_AttributeValueSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit ExportTableToPointInTimeRequest_AttributeValueSchemaSerdeSer(const AttributeValue& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const AttributeValue& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ExportTableToPointInTimeRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ExportTableToPointInTimeRequestSerializable(const ExportTableToPointInTimeRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const ExportTableToPointInTimeRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ExportTableToPointInTimeRequest_IncrementalExportSpecificationSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ExportFromTimeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExportFromTime").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetExportFromTime());
  }
  if (m_obj.ExportToTimeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExportToTime").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetExportToTime());
  }
  if (m_obj.ExportViewTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExportViewType").value();
    serializer.WriteString(memberSchema, ExportViewTypeMapper::GetNameForExportViewType(m_obj.GetExportViewType()));
  }
}

std::shared_ptr<const smithy::schema::Schema> ExportTableToPointInTimeRequest_IncrementalExportSpecificationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("IncrementalExportSpecification")
      .PutMember("ExportFromTime", smithy::schema::Schema::CreateTimestamp("ExportFromTime"))
      .PutMember("ExportToTime", smithy::schema::Schema::CreateTimestamp("ExportToTime"))
      .PutMember("ExportViewType", smithy::schema::Schema::CreateEnum("ExportViewType"))
      .Build();
}

void ExportTableToPointInTimeRequest_FilterSpecificationSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FilterExpressionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("FilterExpression").value();
    serializer.WriteString(memberSchema, m_obj.GetFilterExpression());
  }
  if (m_obj.ProjectionExpressionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ProjectionExpression").value();
    serializer.WriteString(memberSchema, m_obj.GetProjectionExpression());
  }
  if (m_obj.KeyConditionExpressionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("KeyConditionExpression").value();
    serializer.WriteString(memberSchema, m_obj.GetKeyConditionExpression());
  }
  if (m_obj.ExpressionAttributeNamesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExpressionAttributeNames").value();
    serializer.WriteMap(memberSchema, m_obj.GetExpressionAttributeNames().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetExpressionAttributeNames()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteString(valueSchema0, entry0.second);
        });
      }
    });
  }
  if (m_obj.ExpressionAttributeValuesHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExpressionAttributeValues").value();
    serializer.WriteMap(memberSchema, m_obj.GetExpressionAttributeValues().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetExpressionAttributeValues()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          ExportTableToPointInTimeRequest_AttributeValueSchemaSerdeSer nested1(entry0.second);
          valueSerializer0.WriteStruct(valueSchema0, nested1);
        });
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> ExportTableToPointInTimeRequest_FilterSpecificationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("FilterSpecification")
      .PutMember("FilterExpression", smithy::schema::Schema::CreateString("FilterExpression"))
      .PutMember("ProjectionExpression", smithy::schema::Schema::CreateString("ProjectionExpression"))
      .PutMember("KeyConditionExpression", smithy::schema::Schema::CreateString("KeyConditionExpression"))
      .PutMember("ExpressionAttributeNames", smithy::schema::Schema::MapBuilder("ExpressionAttributeNameMap")
                                                 .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                 .PutMember("value", smithy::schema::Schema::CreateString("value"))
                                                 .Build())
      .PutMember("ExpressionAttributeValues", smithy::schema::Schema::MapBuilder("ExpressionAttributeValueMap")
                                                  .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                                  .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                                                  .Build())
      .Build();
}

void ExportTableToPointInTimeRequest_AttributeValueSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (!m_obj.HasValue()) {
    return;
  }
  switch (m_obj.GetType()) {
    case ValueType::STRING:
      serializer.WriteString(*m_schema->GetMember("S").value(), m_obj.GetS());
      break;
    case ValueType::NUMBER:
      serializer.WriteString(*m_schema->GetMember("N").value(), m_obj.GetN());
      break;
    case ValueType::BYTEBUFFER:
      serializer.WriteBlob(*m_schema->GetMember("B").value(), m_obj.GetB());
      break;
    case ValueType::BOOL:
      serializer.WriteBoolean(*m_schema->GetMember("BOOL").value(), m_obj.GetBool());
      break;
    case ValueType::NULLVALUE:
      serializer.WriteBoolean(*m_schema->GetMember("NULL").value(), m_obj.GetNull());
      break;
    case ValueType::STRING_SET: {
      const smithy::schema::Schema& setSchema = *m_schema->GetMember("SS").value();
      const auto items = m_obj.GetSS();
      serializer.WriteList(setSchema, items.size(), [&](smithy::schema::ShapeSerializer& listSerializer) {
        const smithy::schema::Schema& itemSchema = *setSchema.GetMemberTarget().value()->GetMember("member").value();
        for (const auto& item : items) {
          listSerializer.WriteString(itemSchema, item);
        }
      });
      break;
    }
    case ValueType::NUMBER_SET: {
      const smithy::schema::Schema& setSchema = *m_schema->GetMember("NS").value();
      const auto items = m_obj.GetNS();
      serializer.WriteList(setSchema, items.size(), [&](smithy::schema::ShapeSerializer& listSerializer) {
        const smithy::schema::Schema& itemSchema = *setSchema.GetMemberTarget().value()->GetMember("member").value();
        for (const auto& item : items) {
          listSerializer.WriteString(itemSchema, item);
        }
      });
      break;
    }
    case ValueType::BYTEBUFFER_SET: {
      const smithy::schema::Schema& setSchema = *m_schema->GetMember("BS").value();
      const auto items = m_obj.GetBS();
      serializer.WriteList(setSchema, items.size(), [&](smithy::schema::ShapeSerializer& listSerializer) {
        const smithy::schema::Schema& itemSchema = *setSchema.GetMemberTarget().value()->GetMember("member").value();
        for (const auto& item : items) {
          listSerializer.WriteBlob(itemSchema, item);
        }
      });
      break;
    }
    case ValueType::ATTRIBUTE_MAP: {
      const smithy::schema::Schema& mapSchema = *m_schema->GetMember("M").value();
      const auto entries = m_obj.GetM();
      serializer.WriteMap(mapSchema, entries.size(), [&](smithy::schema::MapSerializer& mapSerializer) {
        const smithy::schema::Schema& valueSchema = *mapSchema.GetMemberTarget().value()->GetMember("value").value();
        for (const auto& entry : entries) {
          mapSerializer.WriteEntry(entry.first, [&](smithy::schema::ShapeSerializer& valueSerializer) {
            if (entry.second) {
              ExportTableToPointInTimeRequest_AttributeValueSchemaSerdeSer nested(*entry.second);
              valueSerializer.WriteStruct(valueSchema, nested);
            } else {
              valueSerializer.WriteNull(valueSchema);
            }
          });
        }
      });
      break;
    }
    case ValueType::ATTRIBUTE_LIST: {
      const smithy::schema::Schema& listSchema = *m_schema->GetMember("L").value();
      const auto items = m_obj.GetL();
      serializer.WriteList(listSchema, items.size(), [&](smithy::schema::ShapeSerializer& listSerializer) {
        const smithy::schema::Schema& itemSchema = *listSchema.GetMemberTarget().value()->GetMember("member").value();
        for (const auto& item : items) {
          if (item) {
            ExportTableToPointInTimeRequest_AttributeValueSchemaSerdeSer nested(*item);
            listSerializer.WriteStruct(itemSchema, nested);
          } else {
            listSerializer.WriteNull(itemSchema);
          }
        }
      });
      break;
    }
  }
}

std::shared_ptr<const smithy::schema::Schema> ExportTableToPointInTimeRequest_AttributeValueSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::UnionBuilder("AttributeValue")
      .PutMember("S", smithy::schema::Schema::CreateString("S"))
      .PutMember("N", smithy::schema::Schema::CreateString("N"))
      .PutMember("B", smithy::schema::Schema::CreateBlob("B"))
      .PutMember("SS", smithy::schema::Schema::ListBuilder("StringSetAttributeValue")
                           .PutMember("member", smithy::schema::Schema::CreateString("member"))
                           .Build())
      .PutMember("NS", smithy::schema::Schema::ListBuilder("NumberSetAttributeValue")
                           .PutMember("member", smithy::schema::Schema::CreateString("member"))
                           .Build())
      .PutMember("BS", smithy::schema::Schema::ListBuilder("BinarySetAttributeValue")
                           .PutMember("member", smithy::schema::Schema::CreateBlob("member"))
                           .Build())
      .PutMember("M", smithy::schema::Schema::MapBuilder("MapAttributeValue")
                          .PutMember("key", smithy::schema::Schema::CreateString("key"))
                          .PutMember("value", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                          .Build())
      .PutMember("L", smithy::schema::Schema::ListBuilder("ListAttributeValue")
                          .PutMember("member", smithy::schema::Schema::UnionBuilder("AttributeValue").Build())
                          .Build())
      .PutMember("NULL", smithy::schema::Schema::CreateBoolean("NULL"))
      .PutMember("BOOL", smithy::schema::Schema::CreateBoolean("BOOL"))
      .Build();
}

void ExportTableToPointInTimeRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TableArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("TableArn").value();
    serializer.WriteString(memberSchema, m_obj.GetTableArn());
  }
  if (m_obj.ExportTimeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExportTime").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetExportTime());
  }
  if (m_obj.ClientTokenHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ClientToken").value();
    serializer.WriteString(memberSchema, m_obj.GetClientToken());
  }
  if (m_obj.S3BucketHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3Bucket").value();
    serializer.WriteString(memberSchema, m_obj.GetS3Bucket());
  }
  if (m_obj.S3BucketOwnerHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3BucketOwner").value();
    serializer.WriteString(memberSchema, m_obj.GetS3BucketOwner());
  }
  if (m_obj.S3PrefixHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3Prefix").value();
    serializer.WriteString(memberSchema, m_obj.GetS3Prefix());
  }
  if (m_obj.S3SseAlgorithmHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3SseAlgorithm").value();
    serializer.WriteString(memberSchema, S3SseAlgorithmMapper::GetNameForS3SseAlgorithm(m_obj.GetS3SseAlgorithm()));
  }
  if (m_obj.S3SseKmsKeyIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("S3SseKmsKeyId").value();
    serializer.WriteString(memberSchema, m_obj.GetS3SseKmsKeyId());
  }
  if (m_obj.ExportFormatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExportFormat").value();
    serializer.WriteString(memberSchema, ExportFormatMapper::GetNameForExportFormat(m_obj.GetExportFormat()));
  }
  if (m_obj.ExportTypeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExportType").value();
    serializer.WriteString(memberSchema, ExportTypeMapper::GetNameForExportType(m_obj.GetExportType()));
  }
  if (m_obj.IncrementalExportSpecificationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("IncrementalExportSpecification").value();
    ExportTableToPointInTimeRequest_IncrementalExportSpecificationSchemaSerdeSer nested0(m_obj.GetIncrementalExportSpecification());
    serializer.WriteStruct(memberSchema, nested0);
  }
  if (m_obj.FilterSpecificationHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("FilterSpecification").value();
    ExportTableToPointInTimeRequest_FilterSpecificationSchemaSerdeSer nested0(m_obj.GetFilterSpecification());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> ExportTableToPointInTimeRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ExportTableToPointInTimeRequest")
      .PutMember("TableArn", smithy::schema::Schema::CreateString("TableArn"))
      .PutMember("ExportTime", smithy::schema::Schema::CreateTimestamp("ExportTime"))
      .PutMember("ClientToken", smithy::schema::Schema::CreateString("ClientToken"))
      .PutMember("S3Bucket", smithy::schema::Schema::CreateString("S3Bucket"))
      .PutMember("S3BucketOwner", smithy::schema::Schema::CreateString("S3BucketOwner"))
      .PutMember("S3Prefix", smithy::schema::Schema::CreateString("S3Prefix"))
      .PutMember("S3SseAlgorithm", smithy::schema::Schema::CreateEnum("S3SseAlgorithm"))
      .PutMember("S3SseKmsKeyId", smithy::schema::Schema::CreateString("S3SseKmsKeyId"))
      .PutMember("ExportFormat", smithy::schema::Schema::CreateEnum("ExportFormat"))
      .PutMember("ExportType", smithy::schema::Schema::CreateEnum("ExportType"))
      .PutMember("IncrementalExportSpecification",
                 ExportTableToPointInTimeRequest_IncrementalExportSpecificationSchemaSerdeSer::BuildSchema())
      .PutMember("FilterSpecification", ExportTableToPointInTimeRequest_FilterSpecificationSchemaSerdeSer::BuildSchema())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ExportTableToPointInTimeRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<ExportTableToPointInTimeRequestSerializable>("ExportTableToPointInTimeRequestSerializable", *this);
}

Aws::String ExportTableToPointInTimeRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext ExportTableToPointInTimeRequest::GetSchemaSerdeContext() const {
  return {"ExportTableToPointInTime", "2012-08-10"};
}

Aws::Http::HeaderValueCollection ExportTableToPointInTimeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ExportTableToPointInTime"));
  return headers;
}

ExportTableToPointInTimeRequest::EndpointParameters ExportTableToPointInTimeRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
