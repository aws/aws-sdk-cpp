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
#include <aws/dynamodb/model/DescribeBulkOperationResult.h>
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

DescribeBulkOperationResult::DescribeBulkOperationResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

DescribeBulkOperationResult& DescribeBulkOperationResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class DescribeBulkOperationResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("DescribeBulkOperationResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("DescribeBulkOperationResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> DescribeBulkOperationResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex DescribeBulkOperationResultSchemaCache<Adapter>::s_mutex;

class DescribeBulkOperationResult_BulkOperationDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeBulkOperationResult_BulkOperationDescriptionSchemaSerdeDeser(BulkOperationDescription& obj)
      : m_obj(obj),
        m_schema(DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_BulkOperationDescriptionSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BulkOperationDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeBulkOperationResult_BulkOperationTableDetailSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeBulkOperationResult_BulkOperationTableDetailSchemaSerdeDeser(BulkOperationTableDetail& obj)
      : m_obj(obj),
        m_schema(DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_BulkOperationTableDetailSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BulkOperationTableDetail& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeBulkOperationResult_InputS3ConfigurationSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeBulkOperationResult_InputS3ConfigurationSchemaSerdeDeser(InputS3Configuration& obj)
      : m_obj(obj),
        m_schema(DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_InputS3ConfigurationSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  InputS3Configuration& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeBulkOperationResult_OutputS3ConfigurationSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeBulkOperationResult_OutputS3ConfigurationSchemaSerdeDeser(OutputS3Configuration& obj)
      : m_obj(obj),
        m_schema(DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_OutputS3ConfigurationSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  OutputS3Configuration& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeBulkOperationResult_BulkOperationUsageSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeBulkOperationResult_BulkOperationUsageSchemaSerdeDeser(BulkOperationUsage& obj)
      : m_obj(obj),
        m_schema(DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_BulkOperationUsageSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BulkOperationUsage& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeBulkOperationResult_BulkOperationBytesSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeBulkOperationResult_BulkOperationBytesSchemaSerdeDeser(BulkOperationBytes& obj)
      : m_obj(obj),
        m_schema(DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_BulkOperationBytesSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BulkOperationBytes& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeBulkOperationResult_BulkOperationVectorBytesSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeBulkOperationResult_BulkOperationVectorBytesSchemaSerdeDeser(BulkOperationVectorBytes& obj)
      : m_obj(obj),
        m_schema(DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_BulkOperationVectorBytesSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  BulkOperationVectorBytes& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeBulkOperationResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeBulkOperationResultDeserializable(DescribeBulkOperationResult& obj)
      : m_obj(obj), m_schema(DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DescribeBulkOperationResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DescribeBulkOperationResult_BulkOperationDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "BulkOperationArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBulkOperationArn(*value0);
    }
    return;
  }
  if (memberName == "BulkOperationStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBulkOperationStatus(BulkOperationStatusMapper::GetBulkOperationStatusForName(*value0));
    }
    return;
  }
  if (memberName == "TableDetails") {
    Aws::Vector<BulkOperationTableDetail> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      BulkOperationTableDetail nested1;
      DescribeBulkOperationResult_BulkOperationTableDetailSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetTableDetails(std::move(list0));
    return;
  }
  if (memberName == "ClientToken") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetClientToken(*value0);
    }
    return;
  }
  if (memberName == "InputS3Configuration") {
    InputS3Configuration nested0;
    DescribeBulkOperationResult_InputS3ConfigurationSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetInputS3Configuration(std::move(nested0));
    return;
  }
  if (memberName == "OutputS3Configuration") {
    OutputS3Configuration nested0;
    DescribeBulkOperationResult_OutputS3ConfigurationSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOutputS3Configuration(std::move(nested0));
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
  if (memberName == "ProcessedItemCount") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetProcessedItemCount(*value0);
    }
    return;
  }
  if (memberName == "ProcessedInputBytes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetProcessedInputBytes(*value0);
    }
    return;
  }
  if (memberName == "TotalInputBytes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTotalInputBytes(*value0);
    }
    return;
  }
  if (memberName == "BulkOperationUsage") {
    Aws::Vector<BulkOperationUsage> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      BulkOperationUsage nested1;
      DescribeBulkOperationResult_BulkOperationUsageSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetBulkOperationUsage(std::move(list0));
    return;
  }
  if (memberName == "FailedItemCount") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFailedItemCount(*value0);
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
  if (memberName == "MaxWriteRequestUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetMaxWriteRequestUnits(*value0);
    }
    return;
  }
  if (memberName == "PerformanceTier") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetPerformanceTier(BulkOperationPerformanceTierMapper::GetBulkOperationPerformanceTierForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeBulkOperationResult_BulkOperationDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BulkOperationDescription")
      .PutMember("BulkOperationArn", smithy::schema::Schema::CreateString("BulkOperationArn"))
      .PutMember("BulkOperationStatus", smithy::schema::Schema::CreateEnum("BulkOperationStatus"))
      .PutMember(
          "TableDetails",
          smithy::schema::Schema::ListBuilder("BulkOperationTableDetails")
              .PutMember(
                  "member",
                  DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_BulkOperationTableDetailSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("ClientToken", smithy::schema::Schema::CreateString("ClientToken"))
      .PutMember("InputS3Configuration",
                 DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_InputS3ConfigurationSchemaSerdeDeser>::Get())
      .PutMember("OutputS3Configuration",
                 DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_OutputS3ConfigurationSchemaSerdeDeser>::Get())
      .PutMember("StartTime", smithy::schema::Schema::CreateTimestamp("StartTime"))
      .PutMember("EndTime", smithy::schema::Schema::CreateTimestamp("EndTime"))
      .PutMember("ProcessedItemCount", smithy::schema::Schema::CreateLong("ProcessedItemCount"))
      .PutMember("ProcessedInputBytes", smithy::schema::Schema::CreateLong("ProcessedInputBytes"))
      .PutMember("TotalInputBytes", smithy::schema::Schema::CreateLong("TotalInputBytes"))
      .PutMember(
          "BulkOperationUsage",
          smithy::schema::Schema::ListBuilder("BulkOperationUsageMultiple")
              .PutMember("member",
                         DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_BulkOperationUsageSchemaSerdeDeser>::Get())
              .Build())
      .PutMember("FailedItemCount", smithy::schema::Schema::CreateLong("FailedItemCount"))
      .PutMember("FailureCode", smithy::schema::Schema::CreateString("FailureCode"))
      .PutMember("FailureMessage", smithy::schema::Schema::CreateString("FailureMessage"))
      .PutMember("MaxWriteRequestUnits", smithy::schema::Schema::CreateLong("MaxWriteRequestUnits"))
      .PutMember("PerformanceTier", smithy::schema::Schema::CreateEnum("PerformanceTier"))
      .Build();
}

void DescribeBulkOperationResult_BulkOperationTableDetailSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableName(*value0);
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
}

std::shared_ptr<const smithy::schema::Schema> DescribeBulkOperationResult_BulkOperationTableDetailSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BulkOperationTableDetail")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("TableId", smithy::schema::Schema::CreateString("TableId"))
      .Build();
}

void DescribeBulkOperationResult_InputS3ConfigurationSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                            smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "S3BucketOwner") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetS3BucketOwner(*value0);
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
  if (memberName == "S3KeyPrefix") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetS3KeyPrefix(*value0);
    }
    return;
  }
  if (memberName == "InputFormat") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetInputFormat(BulkOperationInputFormatMapper::GetBulkOperationInputFormatForName(*value0));
    }
    return;
  }
  if (memberName == "InputCompressionType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetInputCompressionType(InputCompressionTypeMapper::GetInputCompressionTypeForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeBulkOperationResult_InputS3ConfigurationSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("InputS3Configuration")
      .PutMember("S3BucketOwner", smithy::schema::Schema::CreateString("S3BucketOwner"))
      .PutMember("S3Bucket", smithy::schema::Schema::CreateString("S3Bucket"))
      .PutMember("S3KeyPrefix", smithy::schema::Schema::CreateString("S3KeyPrefix"))
      .PutMember("InputFormat", smithy::schema::Schema::CreateEnum("InputFormat"))
      .PutMember("InputCompressionType", smithy::schema::Schema::CreateEnum("InputCompressionType"))
      .Build();
}

void DescribeBulkOperationResult_OutputS3ConfigurationSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                             smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "S3BucketOwner") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetS3BucketOwner(*value0);
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
  if (memberName == "S3KeyPrefix") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetS3KeyPrefix(*value0);
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
  if (memberName == "OutputType") {
    Aws::Vector<OutputTypeEnum> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(OutputTypeEnumMapper::GetOutputTypeEnumForName(*value1));
      }
    });
    m_obj.SetOutputType(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeBulkOperationResult_OutputS3ConfigurationSchemaSerdeDeser::BuildSchema() {
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

void DescribeBulkOperationResult_BulkOperationUsageSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                          smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableName(*value0);
    }
    return;
  }
  if (memberName == "BulkPutBytes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBulkPutBytes(*value0);
    }
    return;
  }
  if (memberName == "Table") {
    BulkOperationBytes nested0;
    DescribeBulkOperationResult_BulkOperationBytesSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetTable(std::move(nested0));
    return;
  }
  if (memberName == "LocalSecondaryIndexes") {
    Aws::Map<Aws::String, BulkOperationBytes> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      BulkOperationBytes nested1;
      DescribeBulkOperationResult_BulkOperationBytesSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetLocalSecondaryIndexes(std::move(map0));
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Map<Aws::String, BulkOperationBytes> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      BulkOperationBytes nested1;
      DescribeBulkOperationResult_BulkOperationBytesSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetGlobalSecondaryIndexes(std::move(map0));
    return;
  }
  if (memberName == "VectorIndexes") {
    Aws::Map<Aws::String, BulkOperationVectorBytes> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      BulkOperationVectorBytes nested1;
      DescribeBulkOperationResult_BulkOperationVectorBytesSchemaSerdeDeser{nested1}.Deserialize(valueDeserializer0);
      map0[key0] = std::move(nested1);
    });
    m_obj.SetVectorIndexes(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeBulkOperationResult_BulkOperationUsageSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BulkOperationUsage")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("BulkPutBytes", smithy::schema::Schema::CreateLong("BulkPutBytes"))
      .PutMember("Table", DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_BulkOperationBytesSchemaSerdeDeser>::Get())
      .PutMember(
          "LocalSecondaryIndexes",
          smithy::schema::Schema::MapBuilder("SecondaryIndexesBulkBytesMap")
              .PutMember("key", smithy::schema::Schema::CreateString("key"))
              .PutMember("value",
                         DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_BulkOperationBytesSchemaSerdeDeser>::Get())
              .Build())
      .PutMember(
          "GlobalSecondaryIndexes",
          smithy::schema::Schema::MapBuilder("SecondaryIndexesBulkBytesMap")
              .PutMember("key", smithy::schema::Schema::CreateString("key"))
              .PutMember("value",
                         DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_BulkOperationBytesSchemaSerdeDeser>::Get())
              .Build())
      .PutMember(
          "VectorIndexes",
          smithy::schema::Schema::MapBuilder("VectorIndexesBulkVectorBytesMap")
              .PutMember("key", smithy::schema::Schema::CreateString("key"))
              .PutMember(
                  "value",
                  DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_BulkOperationVectorBytesSchemaSerdeDeser>::Get())
              .Build())
      .Build();
}

void DescribeBulkOperationResult_BulkOperationBytesSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                          smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "BulkPutBytes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBulkPutBytes(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeBulkOperationResult_BulkOperationBytesSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BulkOperationBytes")
      .PutMember("BulkPutBytes", smithy::schema::Schema::CreateLong("BulkPutBytes"))
      .Build();
}

void DescribeBulkOperationResult_BulkOperationVectorBytesSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "BulkPutVectorBytes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBulkPutVectorBytes(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeBulkOperationResult_BulkOperationVectorBytesSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("BulkOperationVectorBytes")
      .PutMember("BulkPutVectorBytes", smithy::schema::Schema::CreateLong("BulkPutVectorBytes"))
      .Build();
}

void DescribeBulkOperationResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                     smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "BulkOperationDescription") {
    BulkOperationDescription nested0;
    DescribeBulkOperationResult_BulkOperationDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetBulkOperationDescription(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeBulkOperationResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DescribeBulkOperationResult")
      .PutMember("BulkOperationDescription",
                 DescribeBulkOperationResultSchemaCache<DescribeBulkOperationResult_BulkOperationDescriptionSchemaSerdeDeser>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DescribeBulkOperationResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DescribeBulkOperationResultDeserializable>("DescribeBulkOperationResultDeserializable", *this);
}
