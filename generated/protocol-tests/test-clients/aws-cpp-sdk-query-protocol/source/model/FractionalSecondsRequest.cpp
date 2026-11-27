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
#include <aws/query-protocol/model/FractionalSecondsRequest.h>
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

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

namespace Aws {
namespace QueryProtocol {
namespace Model {
namespace {
template <typename Adapter>
class FractionalSecondsRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("FractionalSecondsRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("FractionalSecondsRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> FractionalSecondsRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex FractionalSecondsRequestSchemaCache<Adapter>::s_mutex;

class FractionalSecondsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit FractionalSecondsRequestSerializable(const FractionalSecondsRequest&)
      : m_schema(FractionalSecondsRequestSchemaCache<FractionalSecondsRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void FractionalSecondsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer&) const {}

std::shared_ptr<const smithy::schema::Schema> FractionalSecondsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("FractionalSecondsRequest").Build();
}

}  // namespace
}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> FractionalSecondsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<FractionalSecondsRequestSerializable>("FractionalSecondsRequestSerializable", *this);
}

Aws::String FractionalSecondsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext FractionalSecondsRequest::GetSchemaSerdeContext() const {
  return {"FractionalSeconds", "2020-01-08"};
}

void FractionalSecondsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
