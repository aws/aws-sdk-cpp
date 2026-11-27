/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/query-protocol/model/XmlNamespacesResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <atomic>
#include <mutex>
#include <utility>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

XmlNamespacesResult::XmlNamespacesResult(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

XmlNamespacesResult& XmlNamespacesResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const auto& headers = result.GetHeaderValueCollection();
  const auto requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_responseMetadata.SetRequestId(requestIdIter->second);
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::XmlNamespacesResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}

namespace Aws {
namespace QueryProtocol {
namespace Model {
namespace {
template <typename Adapter>
class XmlNamespacesResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("XmlNamespacesResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("XmlNamespacesResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> XmlNamespacesResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex XmlNamespacesResultSchemaCache<Adapter>::s_mutex;

class XmlNamespacesResult_XmlNamespaceNestedSchemaSerdeDeser final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlNamespacesResult_XmlNamespaceNestedSchemaSerdeDeser(XmlNamespaceNested& obj)
      : m_obj(obj), m_schema(XmlNamespacesResultSchemaCache<XmlNamespacesResult_XmlNamespaceNestedSchemaSerdeDeser>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlNamespaceNested& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class XmlNamespacesResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlNamespacesResultDeserializable(XmlNamespacesResult& obj)
      : m_obj(obj), m_schema(XmlNamespacesResultSchemaCache<XmlNamespacesResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  XmlNamespacesResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlNamespacesResult_XmlNamespaceNestedSchemaSerdeDeser::From(const smithy::schema::Schema& memberSchema,
                                                                  smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "foo") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetFoo(*value0);
    }
    return;
  }
  if (memberName == "values") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetValues(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlNamespacesResult_XmlNamespaceNestedSchemaSerdeDeser::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlNamespaceNested")
      .PutMember("foo", smithy::schema::Schema::CreateString("foo"),
                 {{smithy::schema::XmlNamespaceTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlNamespaceTrait>("SchemaSerdeTrait", "http://baz.com", "baz")}})
      .PutMember("values",
                 smithy::schema::Schema::ListBuilder("XmlNamespacedList")
                     .PutMember("member", smithy::schema::Schema::CreateString("member"),
                                {{smithy::schema::XmlNamespaceTrait::KEY(),
                                  Aws::MakeShared<smithy::schema::XmlNamespaceTrait>("SchemaSerdeTrait", "http://bux.com")}})
                     .Build(),
                 {{smithy::schema::XmlNamespaceTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlNamespaceTrait>("SchemaSerdeTrait", "http://qux.com")}})
      .Build();
}

void XmlNamespacesResultDeserializable::From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "nested") {
    XmlNamespaceNested nested0;
    XmlNamespacesResult_XmlNamespaceNestedSchemaSerdeDeser{nested0}.Deserialize(deserializer);
    m_obj.SetNested(std::move(nested0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlNamespacesResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlNamespacesResult")
      .PutMember("nested", XmlNamespacesResultSchemaCache<XmlNamespacesResult_XmlNamespaceNestedSchemaSerdeDeser>::Get())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlNamespacesResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<XmlNamespacesResultDeserializable>("XmlNamespacesResultDeserializable", *this);
}
