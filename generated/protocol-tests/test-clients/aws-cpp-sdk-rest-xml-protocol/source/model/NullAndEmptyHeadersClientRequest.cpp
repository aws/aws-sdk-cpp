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
#include <aws/rest-xml-protocol/model/NullAndEmptyHeadersClientRequest.h>
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
class NullAndEmptyHeadersClientRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("NullAndEmptyHeadersClientRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("NullAndEmptyHeadersClientRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> NullAndEmptyHeadersClientRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex NullAndEmptyHeadersClientRequestSchemaCache<Adapter>::s_mutex;

class NullAndEmptyHeadersClientRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit NullAndEmptyHeadersClientRequestSerializable(const NullAndEmptyHeadersClientRequest& obj)
      : m_obj(obj), m_schema(NullAndEmptyHeadersClientRequestSchemaCache<NullAndEmptyHeadersClientRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const NullAndEmptyHeadersClientRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void NullAndEmptyHeadersClientRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.AHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("a").value();
    serializer.WriteString(memberSchema, m_obj.GetA());
  }
  if (m_obj.BHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("b").value();
    serializer.WriteString(memberSchema, m_obj.GetB());
  }
  if (m_obj.CHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("c").value();
    serializer.WriteList(memberSchema, m_obj.GetC().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetC()) {
        listSerializer0.WriteString(itemSchema0, item0);
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> NullAndEmptyHeadersClientRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("NullAndEmptyHeadersClientRequest")
      .PutMember("a", smithy::schema::Schema::CreateString("a"),
                 {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-A")}})
      .PutMember("b", smithy::schema::Schema::CreateString("b"),
                 {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-B")}})
      .PutMember(
          "c",
          smithy::schema::Schema::ListBuilder("StringList").PutMember("member", smithy::schema::Schema::CreateString("member")).Build(),
          {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-C")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> NullAndEmptyHeadersClientRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<NullAndEmptyHeadersClientRequestSerializable>("NullAndEmptyHeadersClientRequestSerializable", *this);
}

Aws::String NullAndEmptyHeadersClientRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext NullAndEmptyHeadersClientRequest::GetSchemaSerdeContext() const {
  return {"NullAndEmptyHeadersClient", "2019-12-16", "/NullAndEmptyHeadersClient", ""};
}

Aws::Http::HeaderValueCollection NullAndEmptyHeadersClientRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
