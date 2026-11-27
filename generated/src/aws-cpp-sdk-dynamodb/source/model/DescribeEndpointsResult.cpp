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
#include <aws/dynamodb/model/DescribeEndpointsResult.h>
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

DescribeEndpointsResult::DescribeEndpointsResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

DescribeEndpointsResult& DescribeEndpointsResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
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
class DescribeEndpointsResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("DescribeEndpointsResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("DescribeEndpointsResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> DescribeEndpointsResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex DescribeEndpointsResultSchemaCache<Adapter>::s_mutex;

class DescribeEndpointsResult_EndpointSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeEndpointsResult_EndpointSchemaSerdeDeser(Endpoint& obj)
      : m_obj(obj), m_schema(DescribeEndpointsResultSchemaCache<DescribeEndpointsResult_EndpointSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  Endpoint& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class DescribeEndpointsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DescribeEndpointsResultDeserializable(DescribeEndpointsResult& obj)
      : m_obj(obj), m_schema(DescribeEndpointsResultSchemaCache<DescribeEndpointsResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DescribeEndpointsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DescribeEndpointsResult_EndpointSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                            smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Address") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetAddress(*value0);
    }
    return;
  }
  if (memberName == "CachePeriodInMinutes") {
    auto value0 = deserializer.ReadLong(memberSchema);
    if (value0.has_value()) {
      m_obj.SetCachePeriodInMinutes(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeEndpointsResult_EndpointSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("Endpoint")
      .PutMember("Address", smithy::schema::Schema::CreateString("Address"))
      .PutMember("CachePeriodInMinutes", smithy::schema::Schema::CreateLong("CachePeriodInMinutes"))
      .Build();
}

void DescribeEndpointsResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                 smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "Endpoints") {
    Aws::Vector<Endpoint> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      Endpoint nested1;
      DescribeEndpointsResult_EndpointSchemaSerdeDeser{nested1}.Deserialize(itemDeserializer0);
      list0.push_back(std::move(nested1));
    });
    m_obj.SetEndpoints(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DescribeEndpointsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DescribeEndpointsResult")
      .PutMember("Endpoints",
                 smithy::schema::Schema::ListBuilder("Endpoints")
                     .PutMember("member", DescribeEndpointsResultSchemaCache<DescribeEndpointsResult_EndpointSchemaSerdeDeser>::Get())
                     .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DescribeEndpointsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DescribeEndpointsResultDeserializable>("DescribeEndpointsResultDeserializable", *this);
}
