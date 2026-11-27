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
#include <aws/rest-json-protocol/model/TestPayloadStructureRequest.h>
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

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
namespace {
template <typename Adapter>
class TestPayloadStructureRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("TestPayloadStructureRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("TestPayloadStructureRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> TestPayloadStructureRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex TestPayloadStructureRequestSchemaCache<Adapter>::s_mutex;

class TestPayloadStructureRequest_PayloadConfigSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit TestPayloadStructureRequest_PayloadConfigSchemaSerdeSer(const PayloadConfig& obj)
      : m_obj(obj), m_schema(TestPayloadStructureRequestSchemaCache<TestPayloadStructureRequest_PayloadConfigSchemaSerdeSer>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const PayloadConfig& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class TestPayloadStructureRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit TestPayloadStructureRequestSerializable(const TestPayloadStructureRequest& obj)
      : m_obj(obj), m_schema(TestPayloadStructureRequestSchemaCache<TestPayloadStructureRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const TestPayloadStructureRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void TestPayloadStructureRequest_PayloadConfigSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.DataHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("data").value();
    serializer.WriteInteger(memberSchema, m_obj.GetData());
  }
}

std::shared_ptr<const smithy::schema::Schema> TestPayloadStructureRequest_PayloadConfigSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("PayloadConfig").PutMember("data", smithy::schema::Schema::CreateInteger("data")).Build();
}

void TestPayloadStructureRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.TestIdHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("testId").value();
    serializer.WriteString(memberSchema, m_obj.GetTestId());
  }
  if (m_obj.PayloadConfigHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("payloadConfig").value();
    TestPayloadStructureRequest_PayloadConfigSchemaSerdeSer nested0(m_obj.GetPayloadConfig());
    serializer.WriteStruct(memberSchema, nested0);
  }
}

std::shared_ptr<const smithy::schema::Schema> TestPayloadStructureRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("TestPayloadStructureRequest")
      .PutMember(
          "testId", smithy::schema::Schema::CreateString("testId"),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "x-amz-test-id")}})
      .PutMember("payloadConfig", TestPayloadStructureRequestSchemaCache<TestPayloadStructureRequest_PayloadConfigSchemaSerdeSer>::Get(),
                 {{smithy::schema::HttpPayloadTrait::KEY(), Aws::MakeShared<smithy::schema::HttpPayloadTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> TestPayloadStructureRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<TestPayloadStructureRequestSerializable>("TestPayloadStructureRequestSerializable", *this);
}

Aws::String TestPayloadStructureRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext TestPayloadStructureRequest::GetSchemaSerdeContext() const {
  return {"TestPayloadStructure", "2019-12-16", "/payload", ""};
}

Aws::Http::HeaderValueCollection TestPayloadStructureRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
