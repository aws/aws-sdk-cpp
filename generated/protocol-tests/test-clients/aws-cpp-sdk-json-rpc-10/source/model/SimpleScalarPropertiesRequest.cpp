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
#include <aws/json-rpc-10/model/SimpleScalarPropertiesRequest.h>
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

using namespace Aws::JSONRPC10::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace JSONRPC10 {
namespace Model {
namespace {
template <typename Adapter>
class SimpleScalarPropertiesRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("SimpleScalarPropertiesRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("SimpleScalarPropertiesRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> SimpleScalarPropertiesRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex SimpleScalarPropertiesRequestSchemaCache<Adapter>::s_mutex;

class SimpleScalarPropertiesRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit SimpleScalarPropertiesRequestSerializable(const SimpleScalarPropertiesRequest& obj)
      : m_obj(obj), m_schema(SimpleScalarPropertiesRequestSchemaCache<SimpleScalarPropertiesRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SimpleScalarPropertiesRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void SimpleScalarPropertiesRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FloatValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("floatValue").value();
    serializer.WriteDouble(memberSchema, m_obj.GetFloatValue());
  }
  if (m_obj.DoubleValueHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("doubleValue").value();
    serializer.WriteDouble(memberSchema, m_obj.GetDoubleValue());
  }
}

std::shared_ptr<const smithy::schema::Schema> SimpleScalarPropertiesRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SimpleScalarPropertiesRequest")
      .PutMember("floatValue", smithy::schema::Schema::CreateDouble("floatValue"))
      .PutMember("doubleValue", smithy::schema::Schema::CreateDouble("doubleValue"))
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace JSONRPC10
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> SimpleScalarPropertiesRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<SimpleScalarPropertiesRequestSerializable>("SimpleScalarPropertiesRequestSerializable", *this);
}

Aws::String SimpleScalarPropertiesRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext SimpleScalarPropertiesRequest::GetSchemaSerdeContext() const {
  return {"SimpleScalarProperties", "2020-07-14"};
}

Aws::Http::HeaderValueCollection SimpleScalarPropertiesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonRpc10.SimpleScalarProperties"));
  return headers;
}
