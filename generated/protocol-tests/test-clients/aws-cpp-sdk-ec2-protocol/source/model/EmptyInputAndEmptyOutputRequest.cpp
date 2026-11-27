/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2-protocol/model/EmptyInputAndEmptyOutputRequest.h>
#include <smithy/client/schema/ClientProtocol.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/MapSerializer.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeSerializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <atomic>
#include <mutex>
#include <numeric>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils;

namespace Aws {
namespace EC2Protocol {
namespace Model {
namespace {
template <typename Adapter>
class EmptyInputAndEmptyOutputRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("EmptyInputAndEmptyOutputRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("EmptyInputAndEmptyOutputRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> EmptyInputAndEmptyOutputRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex EmptyInputAndEmptyOutputRequestSchemaCache<Adapter>::s_mutex;

class EmptyInputAndEmptyOutputRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit EmptyInputAndEmptyOutputRequestSerializable(const EmptyInputAndEmptyOutputRequest&)
      : m_schema(EmptyInputAndEmptyOutputRequestSchemaCache<EmptyInputAndEmptyOutputRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void EmptyInputAndEmptyOutputRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer&) const {}

std::shared_ptr<const smithy::schema::Schema> EmptyInputAndEmptyOutputRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("EmptyInputAndEmptyOutputRequest").Build();
}

}  // namespace
}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> EmptyInputAndEmptyOutputRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<EmptyInputAndEmptyOutputRequestSerializable>("EmptyInputAndEmptyOutputRequestSerializable", *this);
}

Aws::String EmptyInputAndEmptyOutputRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext EmptyInputAndEmptyOutputRequest::GetSchemaSerdeContext() const {
  return {"EmptyInputAndEmptyOutput", "2020-01-08"};
}

void EmptyInputAndEmptyOutputRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
