/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/DisableKinesisStreamingDestinationRequest.h>
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

#include <atomic>
#include <mutex>
#include <numeric>
#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {
namespace {
template <typename Adapter>
class DisableKinesisStreamingDestinationRequestSchemaCache {
 public:
  static std::shared_ptr<const smithy::schema::Schema> Get() {
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_acquire)) {
      return *cached;
    }
    std::lock_guard<std::mutex> lock(s_mutex);
    if (std::shared_ptr<const smithy::schema::Schema>* cached = s_schema.load(std::memory_order_relaxed)) {
      return *cached;
    }
    std::shared_ptr<const smithy::schema::Schema>* built = Aws::New<std::shared_ptr<const smithy::schema::Schema>>(
        "DisableKinesisStreamingDestinationRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("DisableKinesisStreamingDestinationRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> DisableKinesisStreamingDestinationRequestSchemaCache<Adapter>::s_schema{
    nullptr};
template <typename Adapter>
std::mutex DisableKinesisStreamingDestinationRequestSchemaCache<Adapter>::s_mutex;

class DisableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer final
    : public smithy::schema::SerializableStruct {
 public:
  explicit DisableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer(
      const EnableKinesisStreamingConfiguration& obj)
      : m_obj(obj),
        m_schema(DisableKinesisStreamingDestinationRequestSchemaCache<
                 DisableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const EnableKinesisStreamingConfiguration& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DisableKinesisStreamingDestinationRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DisableKinesisStreamingDestinationRequestSerializable(const DisableKinesisStreamingDestinationRequest& obj)
      : m_obj(obj),
        m_schema(DisableKinesisStreamingDestinationRequestSchemaCache<DisableKinesisStreamingDestinationRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const DisableKinesisStreamingDestinationRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DisableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer::SerializeMembers(
    smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ApproximateCreationDateTimePrecisionHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ApproximateCreationDateTimePrecision").value();
    serializer.WriteString(memberSchema, ApproximateCreationDateTimePrecisionMapper::GetNameForApproximateCreationDateTimePrecision(
                                             m_obj.GetApproximateCreationDateTimePrecision()));
  }
}

std::shared_ptr<const smithy::schema::Schema>
DisableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("EnableKinesisStreamingConfiguration")
      .PutMember("ApproximateCreationDateTimePrecision", smithy::schema::Schema::CreateEnum("ApproximateCreationDateTimePrecision"))
      .Build();
}

void DisableKinesisStreamingDestinationRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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
    DisableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer nested0(
        m_obj.GetEnableKinesisStreamingConfiguration());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> DisableKinesisStreamingDestinationRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DisableKinesisStreamingDestinationRequest")
      .PutMember("TableName", smithy::schema::Schema::CreateString("TableName"))
      .PutMember("StreamArn", smithy::schema::Schema::CreateString("StreamArn"))
      .PutMember("EnableKinesisStreamingConfiguration",
                 DisableKinesisStreamingDestinationRequestSchemaCache<
                     DisableKinesisStreamingDestinationRequest_EnableKinesisStreamingConfigurationSchemaSerdeSer>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DisableKinesisStreamingDestinationRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<DisableKinesisStreamingDestinationRequestSerializable>("DisableKinesisStreamingDestinationRequestSerializable",
                                                                                *this);
}

Aws::String DisableKinesisStreamingDestinationRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext DisableKinesisStreamingDestinationRequest::GetSchemaSerdeContext() const {
  return {"DisableKinesisStreamingDestination", "2012-08-10"};
}

Aws::Http::HeaderValueCollection DisableKinesisStreamingDestinationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.DisableKinesisStreamingDestination"));
  return headers;
}

DisableKinesisStreamingDestinationRequest::EndpointParameters DisableKinesisStreamingDestinationRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
