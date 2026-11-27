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
#include <aws/json-rpc-10/model/EndpointWithHostLabelOperationRequest.h>
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
class EndpointWithHostLabelOperationRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("EndpointWithHostLabelOperationRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("EndpointWithHostLabelOperationRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> EndpointWithHostLabelOperationRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex EndpointWithHostLabelOperationRequestSchemaCache<Adapter>::s_mutex;

class EndpointWithHostLabelOperationRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit EndpointWithHostLabelOperationRequestSerializable(const EndpointWithHostLabelOperationRequest& obj)
      : m_obj(obj), m_schema(EndpointWithHostLabelOperationRequestSchemaCache<EndpointWithHostLabelOperationRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const EndpointWithHostLabelOperationRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void EndpointWithHostLabelOperationRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.LabelHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("label").value();
    serializer.WriteString(memberSchema, m_obj.GetLabel());
  }
}

std::shared_ptr<const smithy::schema::Schema> EndpointWithHostLabelOperationRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("EndpointWithHostLabelOperationRequest")
      .PutMember("label", smithy::schema::Schema::CreateString("label"),
                 {{smithy::schema::HostLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HostLabelTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace JSONRPC10
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> EndpointWithHostLabelOperationRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<EndpointWithHostLabelOperationRequestSerializable>("EndpointWithHostLabelOperationRequestSerializable", *this);
}

Aws::String EndpointWithHostLabelOperationRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext EndpointWithHostLabelOperationRequest::GetSchemaSerdeContext() const {
  return {"EndpointWithHostLabelOperation", "2020-07-14"};
}

Aws::Http::HeaderValueCollection EndpointWithHostLabelOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonRpc10.EndpointWithHostLabelOperation"));
  return headers;
}
