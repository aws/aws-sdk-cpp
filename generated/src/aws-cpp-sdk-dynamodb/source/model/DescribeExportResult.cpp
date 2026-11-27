/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/DescribeExportResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include <atomic>
#include <mutex>
#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeExportResult::DescribeExportResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

DescribeExportResult& DescribeExportResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
template <typename Adapter>
class DescribeExportResultSchemaCache {
 public:
  static std::shared_ptr<const smithy::schema::Schema> Get() {
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_acquire)) {
      return *cached;
    }
    std::lock_guard<std::mutex> lock(s_mutex);
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_relaxed)) {
      return *cached;
    }
    std::shared_ptr<const smithy::schema::Schema>* built =
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("DescribeExportResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("DescribeExportResultSchemaCache", built, &Release);
    s_schema.store(built, std::memory_order_release);
    return *built;
  }

 private:
  static void Release(void* schema, int64_t) {
    s_schema.store(nullptr, std::memory_order_release);
    Aws::Delete(static_cast<std::shared_ptr<const smithy::schema::Schema>*>(schema));
  }

  static std::atomic<std::shared_ptr<const smithy::schema::Schema>*> s_schema;
  static std::mutex s_mutex;
};
template <typename Adapter>
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> DescribeExportResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex DescribeExportResultSchemaCache<Adapter>::s_mutex;

class DescribeExportResult_ExportDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeExportResult_ExportDescriptionSchemaSerdeDeser(ExportDescription& obj)
      : m_obj(obj), m_schema(DescribeExportResultSchemaCache<DescribeExportResult_ExportDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ExportDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeExportResult_IncrementalExportSpecificationSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeExportResult_IncrementalExportSpecificationSchemaSerdeDeser(IncrementalExportSpecification& obj)
      : m_obj(obj), m_schema(DescribeExportResultSchemaCache<DescribeExportResult_IncrementalExportSpecificationSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  IncrementalExportSpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeExportResult_FilterSpecificationSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeExportResult_FilterSpecificationSchemaSerdeDeser(FilterSpecification& obj)
      : m_obj(obj), m_schema(DescribeExportResultSchemaCache<DescribeExportResult_FilterSpecificationSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  FilterSpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeExportResult_AttributeValueSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeExportResult_AttributeValueSchemaSerdeDeser(AttributeValue& obj)
      : m_obj(obj), m_schema(DescribeExportResultSchemaCache<DescribeExportResult_AttributeValueSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AttributeValue& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeExportResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeExportResultDeserializable(DescribeExportResult& obj)
      : m_obj(obj), m_schema(DescribeExportResultSchemaCache<DescribeExportResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DescribeExportResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DescribeExportResult_ExportDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                  smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ExportArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExportArn(*value0);
    }
    return;
  }
  if (memberName == "ExportStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExportStatus(ExportStatusMapper::GetExportStatusForName(*value0));
    }
    return;
  }
  if (memberName == "StartTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetStartTime(*value0);
    }
    return;
  }
  if (memberName == "EndTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetEndTime(*value0);
    }
    return;
  }
  if (memberName == "ExportManifest") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExportManifest(*value0);
    }
    return;
  }
  if (memberName == "TableArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableArn(*value0);
    }
    return;
  }
  if (memberName == "TableId") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableId(*value0);
    }
    return;
  }
  if (memberName == "ExportTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExportTime(*value0);
    }
    return;
  }
  if (memberName == "ClientToken") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetClientToken(*value0);
    }
    return;
  }
  if (memberName == "S3Bucket") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetS3Bucket(*value0);
    }
    return;
  }
  if (memberName == "S3BucketOwner") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetS3BucketOwner(*value0);
    }
    return;
  }
  if (memberName == "S3Prefix") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetS3Prefix(*value0);
    }
    return;
  }
  if (memberName == "S3SseAlgorithm") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetS3SseAlgorithm(S3SseAlgorithmMapper::GetS3SseAlgorithmForName(*value0));
    }
    return;
  }
  if (memberName == "S3SseKmsKeyId") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetS3SseKmsKeyId(*value0);
    }
    return;
  }
  if (memberName == "FailureCode") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFailureCode(*value0);
    }
    return;
  }
  if (memberName == "FailureMessage") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFailureMessage(*value0);
    }
    return;
  }
  if (memberName == "ExportFormat") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExportFormat(ExportFormatMapper::GetExportFormatForName(*value0));
    }
    return;
  }
  if (memberName == "BilledSizeBytes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBilledSizeBytes(*value0);
    }
    return;
  }
  if (memberName == "ItemCount") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetItemCount(*value0);
    }
    return;
  }
  if (memberName == "ExportType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExportType(ExportTypeMapper::GetExportTypeForName(*value0));
    }
    return;
  }
  if (memberName == "IncrementalExportSpecification") {
    IncrementalExportSpecification nested0;
    DescribeExportResult_IncrementalExportSpecificationSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetIncrementalExportSpecification(std::move(nested0));
    return;
  }
  if (memberName == "FilterSpecification") {
    FilterSpecification nested0;
    DescribeExportResult_FilterSpecificationSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetFilterSpecification(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeExportResult_ExportDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ExportDescription")
      .PutMember("ExportArn", smithy::schema::Schema::CreateString("ExportArn"))
      .PutMember("ExportStatus", smithy::schema::Schema::CreateEnum("ExportStatus"))
      .PutMember("StartTime", smithy::schema::Schema::CreateTimestamp("StartTime"))
      .PutMember("EndTime", smithy::schema::Schema::CreateTimestamp("EndTime"))
      .PutMember("ExportManifest", smithy::schema::Schema::CreateString("ExportManifest"))
      .PutMember("TableArn", smithy::schema::Schema::CreateString("TableArn"))
      .PutMember("TableId", smithy::schema::Schema::CreateString("TableId"))
      .PutMember("ExportTime", smithy::schema::Schema::CreateTimestamp("ExportTime"))
      .PutMember("ClientToken", smithy::schema::Schema::CreateString("ClientToken"))
      .PutMember("S3Bucket", smithy::schema::Schema::CreateString("S3Bucket"))
      .PutMember("S3BucketOwner", smithy::schema::Schema::CreateString("S3BucketOwner"))
      .PutMember("S3Prefix", smithy::schema::Schema::CreateString("S3Prefix"))
      .PutMember("S3SseAlgorithm", smithy::schema::Schema::CreateEnum("S3SseAlgorithm"))
      .PutMember("S3SseKmsKeyId", smithy::schema::Schema::CreateString("S3SseKmsKeyId"))
      .PutMember("FailureCode", smithy::schema::Schema::CreateString("FailureCode"))
      .PutMember("FailureMessage", smithy::schema::Schema::CreateString("FailureMessage"))
      .PutMember("ExportFormat", smithy::schema::Schema::CreateEnum("ExportFormat"))
      .PutMember("BilledSizeBytes", smithy::schema::Schema::CreateLong("BilledSizeBytes"))
      .PutMember("ItemCount", smithy::schema::Schema::CreateLong("ItemCount"))
      .PutMember("ExportType", smithy::schema::Schema::CreateEnum("ExportType"))
      .PutMember("IncrementalExportSpecification",
                 DescribeExportResultSchemaCache<DescribeExportResult_IncrementalExportSpecificationSchemaSerdeDeser>::Get())
      .PutMember("FilterSpecification", DescribeExportResultSchemaCache<DescribeExportResult_FilterSpecificationSchemaSerdeDeser>::Get())
      .Build();
}

void DescribeExportResult_IncrementalExportSpecificationSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                               smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ExportFromTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExportFromTime(*value0);
    }
    return;
  }
  if (memberName == "ExportToTime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExportToTime(*value0);
    }
    return;
  }
  if (memberName == "ExportViewType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetExportViewType(ExportViewTypeMapper::GetExportViewTypeForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeExportResult_IncrementalExportSpecificationSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("IncrementalExportSpecification")
      .PutMember("ExportFromTime", smithy::schema::Schema::CreateTimestamp("ExportFromTime"))
      .PutMember("ExportToTime", smithy::schema::Schema::CreateTimestamp("ExportToTime"))
      .PutMember("ExportViewType", smithy::schema::Schema::CreateEnum("ExportViewType"))
      .Build();
}

void DescribeExportResult_FilterSpecificationSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                    smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "FilterExpression") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFilterExpression(*value0);
    }
    return;
  }
  if (memberName == "ProjectionExpression") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetProjectionExpression(*value0);
    }
    return;
  }
  if (memberName == "KeyConditionExpression") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetKeyConditionExpression(*value0);
    }
    return;
  }
  if (memberName == "ExpressionAttributeNames") {
    Aws::Map<Aws::String, Aws::String> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadString(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = *value1;
      }
    });
    m_obj.SetExpressionAttributeNames(std::move(map0));
    return;
  }
  if (memberName == "ExpressionAttributeValues") {
    Aws::Map<Aws::String, AttributeValue> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      AttributeValue nested1;
      DescribeExportResult_AttributeValueSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetExpressionAttributeValues(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeExportResult_FilterSpecificationSchemaSerdeDeser::BuildSchema() {
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

void DescribeExportResult_AttributeValueSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                               smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "S") {
    auto value = deserializer.ReadString(memberSchema);
    if (value.has_value()) {
      m_obj.SetS(*value);
    }
    return;
  }
  if (memberName == "N") {
    auto value = deserializer.ReadString(memberSchema);
    if (value.has_value()) {
      m_obj.SetN(*value);
    }
    return;
  }
  if (memberName == "B") {
    auto value = deserializer.ReadBlob(memberSchema);
    if (value.has_value()) {
      m_obj.SetB(*value);
    }
    return;
  }
  if (memberName == "BOOL") {
    auto value = deserializer.ReadBoolean(memberSchema);
    if (value.has_value()) {
      m_obj.SetBool(*value);
    }
    return;
  }
  if (memberName == "NULL") {
    auto value = deserializer.ReadBoolean(memberSchema);
    if (value.has_value()) {
      m_obj.SetNull(*value);
    }
    return;
  }
  if (memberName == "SS") {
    m_obj.SetSS({});
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer) {
      const smithy::schema::Schema& itemSchema = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto item = itemDeserializer.ReadString(itemSchema);
      if (item.has_value()) {
        m_obj.AddSItem(*item);
      }
    });
    return;
  }
  if (memberName == "NS") {
    m_obj.SetNS({});
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer) {
      const smithy::schema::Schema& itemSchema = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto item = itemDeserializer.ReadString(itemSchema);
      if (item.has_value()) {
        m_obj.AddNItem(*item);
      }
    });
    return;
  }
  if (memberName == "BS") {
    m_obj.SetBS({});
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer) {
      const smithy::schema::Schema& itemSchema = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto item = itemDeserializer.ReadBlob(itemSchema);
      if (item.has_value()) {
        m_obj.AddBItem(*item);
      }
    });
    return;
  }
  if (memberName == "M") {
    m_obj.SetM({});
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key, smithy::schema::ShapeDeserializer& valueDeserializer) {
      auto nested = Aws::MakeShared<AttributeValue>("AttributeValue");
      DescribeExportResult_AttributeValueSchemaSerdeDeser{*nested}.Deserialize(valueDeserializer);
      m_obj.AddMEntry(key, nested);
    });
    return;
  }
  if (memberName == "L") {
    m_obj.SetL({});
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer) {
      auto nested = Aws::MakeShared<AttributeValue>("AttributeValue");
      DescribeExportResult_AttributeValueSchemaSerdeDeser{*nested}.Deserialize(itemDeserializer);
      m_obj.AddLItem(nested);
    });
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeExportResult_AttributeValueSchemaSerdeDeser::BuildSchema() {
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

void DescribeExportResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ExportDescription") {
    ExportDescription nested0;
    DescribeExportResult_ExportDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetExportDescription(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeExportResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DescribeExportResult")
      .PutMember("ExportDescription", DescribeExportResultSchemaCache<DescribeExportResult_ExportDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DescribeExportResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DescribeExportResultDeserializable>("DescribeExportResultDeserializable", *this);
}
