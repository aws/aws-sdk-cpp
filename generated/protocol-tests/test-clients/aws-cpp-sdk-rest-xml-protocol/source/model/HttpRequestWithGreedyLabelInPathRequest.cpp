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
#include <aws/rest-xml-protocol/model/HttpRequestWithGreedyLabelInPathRequest.h>
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
class HttpRequestWithGreedyLabelInPathRequestSchemaCache {
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
        "HttpRequestWithGreedyLabelInPathRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("HttpRequestWithGreedyLabelInPathRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> HttpRequestWithGreedyLabelInPathRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex HttpRequestWithGreedyLabelInPathRequestSchemaCache<Adapter>::s_mutex;

class HttpRequestWithGreedyLabelInPathRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpRequestWithGreedyLabelInPathRequestSerializable(const HttpRequestWithGreedyLabelInPathRequest& obj)
      : m_obj(obj),
        m_schema(HttpRequestWithGreedyLabelInPathRequestSchemaCache<HttpRequestWithGreedyLabelInPathRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpRequestWithGreedyLabelInPathRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpRequestWithGreedyLabelInPathRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.FooHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("foo").value();
    serializer.WriteString(memberSchema, m_obj.GetFoo());
  }
  if (m_obj.BazHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("baz").value();
    serializer.WriteString(memberSchema, m_obj.GetBaz());
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpRequestWithGreedyLabelInPathRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpRequestWithGreedyLabelInPathRequest")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("baz", smithy::schema::Schema::CreateString("baz"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpRequestWithGreedyLabelInPathRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpRequestWithGreedyLabelInPathRequestSerializable>("HttpRequestWithGreedyLabelInPathRequestSerializable", *this);
}

Aws::String HttpRequestWithGreedyLabelInPathRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpRequestWithGreedyLabelInPathRequest::GetSchemaSerdeContext() const {
  return {"HttpRequestWithGreedyLabelInPath", "2019-12-16", "/HttpRequestWithGreedyLabelInPath/foo/{foo}/baz/{baz+}", ""};
}
