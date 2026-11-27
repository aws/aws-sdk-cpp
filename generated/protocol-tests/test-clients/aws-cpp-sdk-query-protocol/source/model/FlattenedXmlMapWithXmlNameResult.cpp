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
#include <aws/query-protocol/model/FlattenedXmlMapWithXmlNameResult.h>
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

FlattenedXmlMapWithXmlNameResult::FlattenedXmlMapWithXmlNameResult(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  *this = result;
}

FlattenedXmlMapWithXmlNameResult& FlattenedXmlMapWithXmlNameResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const auto& headers = result.GetHeaderValueCollection();
  const auto requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_responseMetadata.SetRequestId(requestIdIter->second);
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::QueryProtocol::Model::FlattenedXmlMapWithXmlNameResult",
                        "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}

namespace Aws {
namespace QueryProtocol {
namespace Model {
namespace {
template <typename Adapter>
class FlattenedXmlMapWithXmlNameResultSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("FlattenedXmlMapWithXmlNameResultSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("FlattenedXmlMapWithXmlNameResultSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> FlattenedXmlMapWithXmlNameResultSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex FlattenedXmlMapWithXmlNameResultSchemaCache<Adapter>::s_mutex;

class FlattenedXmlMapWithXmlNameResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit FlattenedXmlMapWithXmlNameResultDeserializable(FlattenedXmlMapWithXmlNameResult& obj)
      : m_obj(obj), m_schema(FlattenedXmlMapWithXmlNameResultSchemaCache<FlattenedXmlMapWithXmlNameResultDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  FlattenedXmlMapWithXmlNameResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void FlattenedXmlMapWithXmlNameResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                          smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "myMap") {
    Aws::Map<Aws::String, Aws::String> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      auto value1 = valueDeserializer0.ReadString(valueSchema0);
      if (value1.has_value()) {
        map0[key0] = *value1;
      }
    });
    m_obj.SetMyMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> FlattenedXmlMapWithXmlNameResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("FlattenedXmlMapWithXmlNameResult")
      .PutMember(
          "myMap",
          smithy::schema::Schema::MapBuilder("FlattenedXmlMapWithXmlNameOutputMap")
              .PutMember("key", smithy::schema::Schema::CreateString("key"),
                         {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "K")}})
              .PutMember("value", smithy::schema::Schema::CreateString("value"),
                         {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "V")}})
              .Build(),
          {{smithy::schema::XmlNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "KVP")},
           {smithy::schema::XmlFlattenedTrait::KEY(), Aws::MakeShared<smithy::schema::XmlFlattenedTrait>("SchemaSerdeTrait")},
           {smithy::schema::XmlMapKeyNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlMapKeyNameTrait>("SchemaSerdeTrait", "K")},
           {smithy::schema::XmlMapValueNameTrait::KEY(), Aws::MakeShared<smithy::schema::XmlMapValueNameTrait>("SchemaSerdeTrait", "V")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> FlattenedXmlMapWithXmlNameResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<FlattenedXmlMapWithXmlNameResultDeserializable>("FlattenedXmlMapWithXmlNameResultDeserializable", *this);
}
