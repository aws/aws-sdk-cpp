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
#include <aws/rest-xml-protocol/model/NestedXmlMapWithXmlNameRequest.h>
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
class NestedXmlMapWithXmlNameRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("NestedXmlMapWithXmlNameRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("NestedXmlMapWithXmlNameRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> NestedXmlMapWithXmlNameRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex NestedXmlMapWithXmlNameRequestSchemaCache<Adapter>::s_mutex;

class NestedXmlMapWithXmlNameRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit NestedXmlMapWithXmlNameRequestSerializable(const NestedXmlMapWithXmlNameRequest& obj)
      : m_obj(obj), m_schema(NestedXmlMapWithXmlNameRequestSchemaCache<NestedXmlMapWithXmlNameRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const NestedXmlMapWithXmlNameRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void NestedXmlMapWithXmlNameRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NestedXmlMapWithXmlNameMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("nestedXmlMapWithXmlNameMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetNestedXmlMapWithXmlNameMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetNestedXmlMapWithXmlNameMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteMap(valueSchema0, entry0.second.size(), [&](smithy::schema::MapSerializer& mapSerializer1) {
            const smithy::schema::Schema& valueSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("value").value();
            for (const auto& entry1 : entry0.second) {
              mapSerializer1.WriteEntry(entry1.first, [&](smithy::schema::ShapeSerializer& valueSerializer1) {
                valueSerializer1.WriteString(valueSchema1, entry1.second);
              });
            }
          });
        });
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> NestedXmlMapWithXmlNameRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("NestedXmlMapWithXmlNameRequest")
      .PutMember("nestedXmlMapWithXmlNameMap",
                 smithy::schema::Schema::MapBuilder("NestedXmlMapWithXmlNameMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"),
                                {{smithy::schema::XmlNameTrait::KEY(),
                                  Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "OuterKey")}})
                     .PutMember("value",
                                smithy::schema::Schema::MapBuilder("NestedXmlMapWithXmlNameInnerMap")
                                    .PutMember("key", smithy::schema::Schema::CreateString("key"),
                                               {{smithy::schema::XmlNameTrait::KEY(),
                                                 Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "InnerKey")}})
                                    .PutMember("value", smithy::schema::Schema::CreateString("value"),
                                               {{smithy::schema::XmlNameTrait::KEY(),
                                                 Aws::MakeShared<smithy::schema::XmlNameTrait>("SchemaSerdeTrait", "InnerValue")}})
                                    .Build(),
                                {{smithy::schema::XmlMapKeyNameTrait::KEY(),
                                  Aws::MakeShared<smithy::schema::XmlMapKeyNameTrait>("SchemaSerdeTrait", "InnerKey")},
                                 {smithy::schema::XmlMapValueNameTrait::KEY(),
                                  Aws::MakeShared<smithy::schema::XmlMapValueNameTrait>("SchemaSerdeTrait", "InnerValue")}})
                     .Build(),
                 {{smithy::schema::XmlMapKeyNameTrait::KEY(),
                   Aws::MakeShared<smithy::schema::XmlMapKeyNameTrait>("SchemaSerdeTrait", "OuterKey")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> NestedXmlMapWithXmlNameRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<NestedXmlMapWithXmlNameRequestSerializable>("NestedXmlMapWithXmlNameRequestSerializable", *this);
}

Aws::String NestedXmlMapWithXmlNameRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext NestedXmlMapWithXmlNameRequest::GetSchemaSerdeContext() const {
  return {"NestedXmlMapWithXmlName", "2019-12-16", "/NestedXmlMapWithXmlName", ""};
}
