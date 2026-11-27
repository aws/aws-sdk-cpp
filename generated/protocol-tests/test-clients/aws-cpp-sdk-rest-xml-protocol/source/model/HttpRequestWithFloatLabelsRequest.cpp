/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpRequestWithFloatLabelsRequest.h>
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
#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

namespace Aws {
namespace RestXmlProtocol {
namespace Model {
namespace {
template <typename Adapter>
class HttpRequestWithFloatLabelsRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("HttpRequestWithFloatLabelsRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("HttpRequestWithFloatLabelsRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> HttpRequestWithFloatLabelsRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex HttpRequestWithFloatLabelsRequestSchemaCache<Adapter>::s_mutex;

class HttpRequestWithFloatLabelsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpRequestWithFloatLabelsRequestSerializable(const HttpRequestWithFloatLabelsRequest& obj)
      : m_obj(obj), m_schema(HttpRequestWithFloatLabelsRequestSchemaCache<HttpRequestWithFloatLabelsRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpRequestWithFloatLabelsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpRequestWithFloatLabelsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FloatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("float").value();
    serializer.WriteDouble(memberSchema, m_obj.GetFloat());
  }
  if (m_obj.DoubleHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("double").value();
    serializer.WriteDouble(memberSchema, m_obj.GetDouble());
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpRequestWithFloatLabelsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpRequestWithFloatLabelsRequest")
      .PutMember("float", smithy::schema::Schema::CreateDouble("float"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("double", smithy::schema::Schema::CreateDouble("double"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpRequestWithFloatLabelsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpRequestWithFloatLabelsRequestSerializable>("HttpRequestWithFloatLabelsRequestSerializable", *this);
}

Aws::String HttpRequestWithFloatLabelsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpRequestWithFloatLabelsRequest::GetSchemaSerdeContext() const {
  return {"HttpRequestWithFloatLabels", "2019-12-16", "/FloatHttpLabels/{float}/{double}", ""};
}
