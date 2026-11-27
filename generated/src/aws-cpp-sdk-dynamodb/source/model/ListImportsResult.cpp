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
#include <aws/dynamodb/model/ListImportsResult.h>
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

ListImportsResult::ListImportsResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

ListImportsResult& ListImportsResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class ListImportsResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("ListImportsResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("ListImportsResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> ListImportsResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex ListImportsResultSchemaCache<Adapter>::s_mutex;

class ListImportsResult_ImportSummarySchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ListImportsResult_ImportSummarySchemaSerdeDeser(ImportSummary& obj)
      : m_obj(obj), m_schema(ListImportsResultSchemaCache<ListImportsResult_ImportSummarySchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ImportSummary& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ListImportsResult_S3BucketSourceSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ListImportsResult_S3BucketSourceSchemaSerdeDeser(S3BucketSource& obj)
      : m_obj(obj), m_schema(ListImportsResultSchemaCache<ListImportsResult_S3BucketSourceSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  S3BucketSource& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ListImportsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ListImportsResultDeserializable(ListImportsResult& obj)
      : m_obj(obj), m_schema(ListImportsResultSchemaCache<ListImportsResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ListImportsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ListImportsResult_ImportSummarySchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                           smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ImportArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetImportArn(*value0);
    }
    return;
  }
  if (memberName == "ImportStatus") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetImportStatus(ImportStatusMapper::GetImportStatusForName(*value0));
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
  if (memberName == "S3BucketSource") {
    S3BucketSource nested0;
    ListImportsResult_S3BucketSourceSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetS3BucketSource(std::move(nested0));
    return;
  }
  if (memberName == "CloudWatchLogGroupArn") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetCloudWatchLogGroupArn(*value0);
    }
    return;
  }
  if (memberName == "InputFormat") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetInputFormat(InputFormatMapper::GetInputFormatForName(*value0));
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
}

std::shared_ptr<const smithy::schema::Schema> ListImportsResult_ImportSummarySchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ImportSummary")
      .PutMember("ImportArn", smithy::schema::Schema::CreateString("ImportArn"))
      .PutMember("ImportStatus", smithy::schema::Schema::CreateEnum("ImportStatus"))
      .PutMember("TableArn", smithy::schema::Schema::CreateString("TableArn"))
      .PutMember("S3BucketSource", ListImportsResultSchemaCache<ListImportsResult_S3BucketSourceSchemaSerdeDeser>::Get())
      .PutMember("CloudWatchLogGroupArn", smithy::schema::Schema::CreateString("CloudWatchLogGroupArn"))
      .PutMember("InputFormat", smithy::schema::Schema::CreateEnum("InputFormat"))
      .PutMember("StartTime", smithy::schema::Schema::CreateTimestamp("StartTime"))
      .PutMember("EndTime", smithy::schema::Schema::CreateTimestamp("EndTime"))
      .Build();
}

void ListImportsResult_S3BucketSourceSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
}

std::shared_ptr<const smithy::schema::Schema> ListImportsResult_S3BucketSourceSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("S3BucketSource")
      .PutMember("S3BucketOwner", smithy::schema::Schema::CreateString("S3BucketOwner"))
      .PutMember("S3Bucket", smithy::schema::Schema::CreateString("S3Bucket"))
      .PutMember("S3KeyPrefix", smithy::schema::Schema::CreateString("S3KeyPrefix"))
      .Build();
}

void ListImportsResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ImportSummaryList") {
    Aws::Vector<ImportSummary> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      ImportSummary nested1;
      ListImportsResult_ImportSummarySchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetImportSummaryList(std::move(list0));
    return;
  }
  if (memberName == "NextToken") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetNextToken(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ListImportsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ListImportsResult")
      .PutMember("ImportSummaryList",
                 smithy::schema::Schema::ListBuilder("ImportSummaryList")
                     .PutMember("member", ListImportsResultSchemaCache<ListImportsResult_ImportSummarySchemaSerdeDeser>::Get())
                     .Build())
      .PutMember("NextToken", smithy::schema::Schema::CreateString("NextToken"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ListImportsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<ListImportsResultDeserializable>("ListImportsResultDeserializable", *this);
}
