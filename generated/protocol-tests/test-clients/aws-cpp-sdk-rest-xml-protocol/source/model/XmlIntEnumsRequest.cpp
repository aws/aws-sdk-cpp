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
#include <aws/rest-xml-protocol/model/XmlIntEnumsRequest.h>
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
class XmlIntEnumsRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("XmlIntEnumsRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("XmlIntEnumsRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> XmlIntEnumsRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex XmlIntEnumsRequestSchemaCache<Adapter>::s_mutex;

class XmlIntEnumsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlIntEnumsRequestSerializable(const XmlIntEnumsRequest& obj)
      : m_obj(obj), m_schema(XmlIntEnumsRequestSchemaCache<XmlIntEnumsRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlIntEnumsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlIntEnumsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.IntEnum1HasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("intEnum1").value();
    serializer.WriteInteger(memberSchema, m_obj.GetIntEnum1());
  }
  if (m_obj.IntEnum2HasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("intEnum2").value();
    serializer.WriteInteger(memberSchema, m_obj.GetIntEnum2());
  }
  if (m_obj.IntEnum3HasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("intEnum3").value();
    serializer.WriteInteger(memberSchema, m_obj.GetIntEnum3());
  }
  if (m_obj.IntEnumListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("intEnumList").value();
    serializer.WriteList(memberSchema, m_obj.GetIntEnumList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetIntEnumList()) {
        listSerializer0.WriteInteger(itemSchema0, item0);
      }
    });
  }
  if (m_obj.IntEnumSetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("intEnumSet").value();
    serializer.WriteList(memberSchema, m_obj.GetIntEnumSet().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetIntEnumSet()) {
        listSerializer0.WriteInteger(itemSchema0, item0);
      }
    });
  }
  if (m_obj.IntEnumMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("intEnumMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetIntEnumMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetIntEnumMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          valueSerializer0.WriteInteger(valueSchema0, entry0.second);
        });
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlIntEnumsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlIntEnumsRequest")
      .PutMember("intEnum1", smithy::schema::Schema::CreateIntEnum("intEnum1"))
      .PutMember("intEnum2", smithy::schema::Schema::CreateIntEnum("intEnum2"))
      .PutMember("intEnum3", smithy::schema::Schema::CreateIntEnum("intEnum3"))
      .PutMember("intEnumList", smithy::schema::Schema::ListBuilder("IntegerEnumList")
                                    .PutMember("member", smithy::schema::Schema::CreateIntEnum("member"))
                                    .Build())
      .PutMember("intEnumSet", smithy::schema::Schema::ListBuilder("IntegerEnumSet")
                                   .PutMember("member", smithy::schema::Schema::CreateIntEnum("member"))
                                   .Build())
      .PutMember("intEnumMap", smithy::schema::Schema::MapBuilder("IntegerEnumMap")
                                   .PutMember("key", smithy::schema::Schema::CreateString("key"))
                                   .PutMember("value", smithy::schema::Schema::CreateIntEnum("value"))
                                   .Build())
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlIntEnumsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<XmlIntEnumsRequestSerializable>("XmlIntEnumsRequestSerializable", *this);
}

Aws::String XmlIntEnumsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext XmlIntEnumsRequest::GetSchemaSerdeContext() const {
  return {"XmlIntEnums", "2019-12-16", "/XmlIntEnums", ""};
}
