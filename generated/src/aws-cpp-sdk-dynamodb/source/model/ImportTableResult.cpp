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
#include <aws/dynamodb/model/ImportTableResult.h>
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

ImportTableResult::ImportTableResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

ImportTableResult& ImportTableResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class ImportTableResult_ImportTableDescriptionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_ImportTableDescriptionSchemaSerdeDeser(ImportTableDescription& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ImportTableDescription& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_S3BucketSourceSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_S3BucketSourceSchemaSerdeDeser(S3BucketSource& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  S3BucketSource& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_InputFormatOptionsSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_InputFormatOptionsSchemaSerdeDeser(InputFormatOptions& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  InputFormatOptions& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_CsvOptionsSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_CsvOptionsSchemaSerdeDeser(CsvOptions& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  CsvOptions& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_TableCreationParametersSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_TableCreationParametersSchemaSerdeDeser(TableCreationParameters& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  TableCreationParameters& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_AttributeDefinitionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_AttributeDefinitionSchemaSerdeDeser(AttributeDefinition& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  AttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_KeySchemaElementSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_KeySchemaElementSchemaSerdeDeser(KeySchemaElement& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  KeySchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_ProvisionedThroughputSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_ProvisionedThroughputSchemaSerdeDeser(ProvisionedThroughput& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ProvisionedThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_OnDemandThroughputSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_OnDemandThroughputSchemaSerdeDeser(OnDemandThroughput& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  OnDemandThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_SSESpecificationSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_SSESpecificationSchemaSerdeDeser(SSESpecification& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SSESpecification& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_GlobalSecondaryIndexSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_GlobalSecondaryIndexSchemaSerdeDeser(GlobalSecondaryIndex& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  GlobalSecondaryIndex& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_ProjectionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_ProjectionSchemaSerdeDeser(Projection& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  Projection& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_WarmThroughputSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_WarmThroughputSchemaSerdeDeser(WarmThroughput& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  WarmThroughput& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_VectorIndexSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_VectorIndexSchemaSerdeDeser(VectorIndex& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  VectorIndex& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_VectorAttributeDefinitionSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_VectorAttributeDefinitionSchemaSerdeDeser(VectorAttributeDefinition& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  VectorAttributeDefinition& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResult_SearchSchemaElementSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResult_SearchSchemaElementSchemaSerdeDeser(SearchSchemaElement& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SearchSchemaElement& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class ImportTableResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit ImportTableResultDeserializable(ImportTableResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  ImportTableResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void ImportTableResult_ImportTableDescriptionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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
  if (memberName == "TableId") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableId(*value0);
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
  if (memberName == "S3BucketSource") {
    S3BucketSource nested0;
    ImportTableResult_S3BucketSourceSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetS3BucketSource(std::move(nested0));
    return;
  }
  if (memberName == "ErrorCount") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetErrorCount(*value0);
    }
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
  if (memberName == "InputFormatOptions") {
    InputFormatOptions nested0;
    ImportTableResult_InputFormatOptionsSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetInputFormatOptions(std::move(nested0));
    return;
  }
  if (memberName == "InputCompressionType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetInputCompressionType(InputCompressionTypeMapper::GetInputCompressionTypeForName(*value0));
    }
    return;
  }
  if (memberName == "TableCreationParameters") {
    TableCreationParameters nested0;
    ImportTableResult_TableCreationParametersSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetTableCreationParameters(std::move(nested0));
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
  if (memberName == "ProcessedSizeBytes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetProcessedSizeBytes(*value0);
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
  if (memberName == "ImportedItemCount") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetImportedItemCount(*value0);
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
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_ImportTableDescriptionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ImportTableDescription")
      .PutMember("ImportArn", smithy::schema::Schema::CreateString("ImportArn"))
      .PutMember("ImportStatus", smithy::schema::Schema::CreateEnum("ImportStatus"))
      .PutMember("TableArn", smithy::schema::Schema::CreateString("TableArn"))
      .PutMember("TableId", smithy::schema::Schema::CreateString("TableId"))
      .PutMember("ClientToken", smithy::schema::Schema::CreateString("ClientToken"))
      .PutMember("S3BucketSource", ImportTableResult_S3BucketSourceSchemaSerdeDeser::BuildSchema())
      .PutMember("ErrorCount", smithy::schema::Schema::CreateLong("ErrorCount"))
      .PutMember("CloudWatchLogGroupArn", smithy::schema::Schema::CreateString("CloudWatchLogGroupArn"))
      .PutMember("InputFormat", smithy::schema::Schema::CreateEnum("InputFormat"))
      .PutMember("InputFormatOptions", ImportTableResult_InputFormatOptionsSchemaSerdeDeser::BuildSchema())
      .PutMember("InputCompressionType", smithy::schema::Schema::CreateEnum("InputCompressionType"))
      .PutMember("TableCreationParameters", ImportTableResult_TableCreationParametersSchemaSerdeDeser::BuildSchema())
      .PutMember("StartTime", smithy::schema::Schema::CreateTimestamp("StartTime"))
      .PutMember("EndTime", smithy::schema::Schema::CreateTimestamp("EndTime"))
      .PutMember("ProcessedSizeBytes", smithy::schema::Schema::CreateLong("ProcessedSizeBytes"))
      .PutMember("ProcessedItemCount", smithy::schema::Schema::CreateLong("ProcessedItemCount"))
      .PutMember("ImportedItemCount", smithy::schema::Schema::CreateLong("ImportedItemCount"))
      .PutMember("FailureCode", smithy::schema::Schema::CreateString("FailureCode"))
      .PutMember("FailureMessage", smithy::schema::Schema::CreateString("FailureMessage"))
      .Build();
}

void ImportTableResult_S3BucketSourceSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
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

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_S3BucketSourceSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("S3BucketSource")
      .PutMember("S3BucketOwner", smithy::schema::Schema::CreateString("S3BucketOwner"))
      .PutMember("S3Bucket", smithy::schema::Schema::CreateString("S3Bucket"))
      .PutMember("S3KeyPrefix", smithy::schema::Schema::CreateString("S3KeyPrefix"))
      .Build();
}

void ImportTableResult_InputFormatOptionsSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Csv") {
    CsvOptions nested0;
    ImportTableResult_CsvOptionsSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetCsv(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_InputFormatOptionsSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("InputFormatOptions")
      .PutMember("Csv", ImportTableResult_CsvOptionsSchemaSerdeDeser::BuildSchema())
      .Build();
}

void ImportTableResult_CsvOptionsSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                        smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Delimiter") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDelimiter(*value0);
    }
    return;
  }
  if (memberName == "HeaderList") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetHeaderList(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_CsvOptionsSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("CsvOptions")
      .PutMember("Delimiter", smithy::schema::Schema::CreateString("Delimiter"))
      .PutMember(
          "HeaderList",
          smithy::schema::Schema::ListBuilder("CsvHeaderList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build())
      .Build();
}

void ImportTableResult_TableCreationParametersSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                     smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "TableName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetTableName(*value0);
    }
    return;
  }
  if (memberName == "AttributeDefinitions") {
    Aws::Vector<AttributeDefinition> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      AttributeDefinition nested1;
      ImportTableResult_AttributeDefinitionSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetAttributeDefinitions(std::move(list0));
    return;
  }
  if (memberName == "KeySchema") {
    Aws::Vector<KeySchemaElement> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      KeySchemaElement nested1;
      ImportTableResult_KeySchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetKeySchema(std::move(list0));
    return;
  }
  if (memberName == "BillingMode") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetBillingMode(BillingModeMapper::GetBillingModeForName(*value0));
    }
    return;
  }
  if (memberName == "ProvisionedThroughput") {
    ProvisionedThroughput nested0;
    ImportTableResult_ProvisionedThroughputSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedThroughput(std::move(nested0));
    return;
  }
  if (memberName == "OnDemandThroughput") {
    OnDemandThroughput nested0;
    ImportTableResult_OnDemandThroughputSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughput(std::move(nested0));
    return;
  }
  if (memberName == "SSESpecification") {
    SSESpecification nested0;
    ImportTableResult_SSESpecificationSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetSSESpecification(std::move(nested0));
    return;
  }
  if (memberName == "GlobalSecondaryIndexes") {
    Aws::Vector<GlobalSecondaryIndex> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      GlobalSecondaryIndex nested1;
      ImportTableResult_GlobalSecondaryIndexSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetGlobalSecondaryIndexes(std::move(list0));
    return;
  }
  if (memberName == "VectorIndexes") {
    Aws::Vector<VectorIndex> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      VectorIndex nested1;
      ImportTableResult_VectorIndexSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetVectorIndexes(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_TableCreationParametersSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TableCreationParameters")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("AttributeDefinitions", smithy::schema::Schema::ListBuilder("AttributeDefinitions")
                                             .PutMember("member", ImportTableResult_AttributeDefinitionSchemaSerdeDeser::BuildSchema())
                                             .Build())
      .PutMember("KeySchema", smithy::schema::Schema::ListBuilder("KeySchema")
                                  .PutMember("member", ImportTableResult_KeySchemaElementSchemaSerdeDeser::BuildSchema())
                                  .Build())
      .PutMember("BillingMode", smithy::schema::Schema::CreateEnum("BillingMode"))
      .PutMember("ProvisionedThroughput", ImportTableResult_ProvisionedThroughputSchemaSerdeDeser::BuildSchema())
      .PutMember("OnDemandThroughput", ImportTableResult_OnDemandThroughputSchemaSerdeDeser::BuildSchema())
      .PutMember("SSESpecification", ImportTableResult_SSESpecificationSchemaSerdeDeser::BuildSchema())
      .PutMember("GlobalSecondaryIndexes", smithy::schema::Schema::ListBuilder("GlobalSecondaryIndexList")
                                               .PutMember("member", ImportTableResult_GlobalSecondaryIndexSchemaSerdeDeser::BuildSchema())
                                               .Build())
      .PutMember("VectorIndexes", smithy::schema::Schema::ListBuilder("VectorIndexList")
                                      .PutMember("member", ImportTableResult_VectorIndexSchemaSerdeDeser::BuildSchema())
                                      .Build())
      .Build();
}

void ImportTableResult_AttributeDefinitionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                 smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AttributeName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAttributeName(*value0);
    }
    return;
  }
  if (memberName == "AttributeType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAttributeType(ScalarAttributeTypeMapper::GetScalarAttributeTypeForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_AttributeDefinitionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("AttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("AttributeType", smithy::schema::Schema::CreateEnum("AttributeType"))
      .Build();
}

void ImportTableResult_KeySchemaElementSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                              smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AttributeName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAttributeName(*value0);
    }
    return;
  }
  if (memberName == "KeyType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetKeyType(KeyTypeMapper::GetKeyTypeForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_KeySchemaElementSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("KeySchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("KeyType", smithy::schema::Schema::CreateEnum("KeyType"))
      .Build();
}

void ImportTableResult_ProvisionedThroughputSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                   smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ReadCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReadCapacityUnits(*value0);
    }
    return;
  }
  if (memberName == "WriteCapacityUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetWriteCapacityUnits(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_ProvisionedThroughputSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ProvisionedThroughput")
      .PutMember("ReadCapacityUnits", smithy::schema::Schema::CreateLong("ReadCapacityUnits"))
      .PutMember("WriteCapacityUnits", smithy::schema::Schema::CreateLong("WriteCapacityUnits"))
      .Build();
}

void ImportTableResult_OnDemandThroughputSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "MaxReadRequestUnits") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetMaxReadRequestUnits(*value0);
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
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_OnDemandThroughputSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("OnDemandThroughput")
      .PutMember("MaxReadRequestUnits", smithy::schema::Schema::CreateLong("MaxReadRequestUnits"))
      .PutMember("MaxWriteRequestUnits", smithy::schema::Schema::CreateLong("MaxWriteRequestUnits"))
      .Build();
}

void ImportTableResult_SSESpecificationSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                              smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Enabled") {
    auto value0 = deserializer.ReadBoolean(memberSchema);
    if (value0.has_value()) {
      m_obj.SetEnabled(*value0);
    }
    return;
  }
  if (memberName == "SSEType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSSEType(SSETypeMapper::GetSSETypeForName(*value0));
    }
    return;
  }
  if (memberName == "KMSMasterKeyId") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetKMSMasterKeyId(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_SSESpecificationSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SSESpecification")
      .PutMember("Enabled", smithy::schema::Schema::CreateBoolean("Enabled"))
      .PutMember("SSEType", smithy::schema::Schema::CreateEnum("SSEType"))
      .PutMember("KMSMasterKeyId", smithy::schema::Schema::CreateString("KMSMasterKeyId"))
      .Build();
}

void ImportTableResult_GlobalSecondaryIndexSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                  smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "IndexName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexName(*value0);
    }
    return;
  }
  if (memberName == "KeySchema") {
    Aws::Vector<KeySchemaElement> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      KeySchemaElement nested1;
      ImportTableResult_KeySchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetKeySchema(std::move(list0));
    return;
  }
  if (memberName == "Projection") {
    Projection nested0;
    ImportTableResult_ProjectionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProjection(std::move(nested0));
    return;
  }
  if (memberName == "ProvisionedThroughput") {
    ProvisionedThroughput nested0;
    ImportTableResult_ProvisionedThroughputSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProvisionedThroughput(std::move(nested0));
    return;
  }
  if (memberName == "OnDemandThroughput") {
    OnDemandThroughput nested0;
    ImportTableResult_OnDemandThroughputSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetOnDemandThroughput(std::move(nested0));
    return;
  }
  if (memberName == "WarmThroughput") {
    WarmThroughput nested0;
    ImportTableResult_WarmThroughputSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetWarmThroughput(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_GlobalSecondaryIndexSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GlobalSecondaryIndex")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("KeySchema", smithy::schema::Schema::ListBuilder("KeySchema")
                                  .PutMember("member", ImportTableResult_KeySchemaElementSchemaSerdeDeser::BuildSchema())
                                  .Build())
      .PutMember("Projection", ImportTableResult_ProjectionSchemaSerdeDeser::BuildSchema())
      .PutMember("ProvisionedThroughput", ImportTableResult_ProvisionedThroughputSchemaSerdeDeser::BuildSchema())
      .PutMember("OnDemandThroughput", ImportTableResult_OnDemandThroughputSchemaSerdeDeser::BuildSchema())
      .PutMember("WarmThroughput", ImportTableResult_WarmThroughputSchemaSerdeDeser::BuildSchema())
      .Build();
}

void ImportTableResult_ProjectionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                        smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ProjectionType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetProjectionType(ProjectionTypeMapper::GetProjectionTypeForName(*value0));
    }
    return;
  }
  if (memberName == "NonKeyAttributes") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetNonKeyAttributes(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_ProjectionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Projection")
      .PutMember("ProjectionType", smithy::schema::Schema::CreateEnum("ProjectionType"))
      .PutMember("NonKeyAttributes", smithy::schema::Schema::ListBuilder("NonKeyAttributeNameList")
                                         .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                         .Build())
      .Build();
}

void ImportTableResult_WarmThroughputSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                            smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ReadUnitsPerSecond") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetReadUnitsPerSecond(*value0);
    }
    return;
  }
  if (memberName == "WriteUnitsPerSecond") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetWriteUnitsPerSecond(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_WarmThroughputSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("WarmThroughput")
      .PutMember("ReadUnitsPerSecond", smithy::schema::Schema::CreateLong("ReadUnitsPerSecond"))
      .PutMember("WriteUnitsPerSecond", smithy::schema::Schema::CreateLong("WriteUnitsPerSecond"))
      .Build();
}

void ImportTableResult_VectorIndexSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                         smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "IndexName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetIndexName(*value0);
    }
    return;
  }
  if (memberName == "VectorAttribute") {
    VectorAttributeDefinition nested0;
    ImportTableResult_VectorAttributeDefinitionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetVectorAttribute(std::move(nested0));
    return;
  }
  if (memberName == "SearchSchema") {
    Aws::Vector<SearchSchemaElement> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      SearchSchemaElement nested1;
      ImportTableResult_SearchSchemaElementSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetSearchSchema(std::move(list0));
    return;
  }
  if (memberName == "Projection") {
    Projection nested0;
    ImportTableResult_ProjectionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetProjection(std::move(nested0));
    return;
  }
  if (memberName == "Dimensions") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDimensions(*value0);
    }
    return;
  }
  if (memberName == "DistanceFunction") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDistanceFunction(VectorDistanceFunctionMapper::GetVectorDistanceFunctionForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_VectorIndexSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorIndex")
      .PutMember("IndexName", smithy::schema::Schema::CreateString("IndexName"))
      .PutMember("VectorAttribute", ImportTableResult_VectorAttributeDefinitionSchemaSerdeDeser::BuildSchema())
      .PutMember("SearchSchema", smithy::schema::Schema::ListBuilder("SearchSchema")
                                     .PutMember("member", ImportTableResult_SearchSchemaElementSchemaSerdeDeser::BuildSchema())
                                     .Build())
      .PutMember("Projection", ImportTableResult_ProjectionSchemaSerdeDeser::BuildSchema())
      .PutMember("Dimensions", smithy::schema::Schema::CreateLong("Dimensions"))
      .PutMember("DistanceFunction", smithy::schema::Schema::CreateEnum("DistanceFunction"))
      .Build();
}

void ImportTableResult_VectorAttributeDefinitionSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                       smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AttributeName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAttributeName(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_VectorAttributeDefinitionSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("VectorAttributeDefinition")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .Build();
}

void ImportTableResult_SearchSchemaElementSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                 smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "AttributeName") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAttributeName(*value0);
    }
    return;
  }
  if (memberName == "SearchSchemaElementType") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetSearchSchemaElementType(SearchSchemaElementTypeMapper::GetSearchSchemaElementTypeForName(*value0));
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResult_SearchSchemaElementSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SearchSchemaElement")
      .PutMember("AttributeName", smithy::schema::Schema::CreateString("AttributeName"))
      .PutMember("SearchSchemaElementType", smithy::schema::Schema::CreateEnum("SearchSchemaElementType"))
      .Build();
}

void ImportTableResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "ImportTableDescription") {
    ImportTableDescription nested0;
    ImportTableResult_ImportTableDescriptionSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetImportTableDescription(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> ImportTableResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("ImportTableResult")
      .PutMember("ImportTableDescription", ImportTableResult_ImportTableDescriptionSchemaSerdeDeser::BuildSchema())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> ImportTableResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<ImportTableResultDeserializable>("ImportTableResultDeserializable", *this);
}
