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
#include <aws/dynamodb/model/DescribeExportRequest.h>
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
class DescribeExportRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("DescribeExportRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("DescribeExportRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> DescribeExportRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex DescribeExportRequestSchemaCache<Adapter>::s_mutex;

class DescribeExportRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeExportRequestSerializable(const DescribeExportRequest& obj)
      : m_obj(obj), m_schema(DescribeExportRequestSchemaCache<DescribeExportRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const DescribeExportRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DescribeExportRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.ExportArnHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("ExportArn").value();
    serializer.WriteString(memberSchema, m_obj.GetExportArn());
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeExportRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DescribeExportRequest")
      .PutMember("ExportArn", smithy::schema::Schema::CreateString("ExportArn"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DescribeExportRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<DescribeExportRequestSerializable>("DescribeExportRequestSerializable", *this);
}

Aws::String DescribeExportRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext DescribeExportRequest::GetSchemaSerdeContext() const { return {"DescribeExport", "2012-08-10"}; }

Aws::Http::HeaderValueCollection DescribeExportRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.DescribeExport"));
  return headers;
}

DescribeExportRequest::EndpointParameters DescribeExportRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (ExportArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetExportArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
