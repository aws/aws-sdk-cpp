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
#include <aws/rest-json-protocol/model/SparseJsonListsRequest.h>
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

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
namespace {
template <typename Adapter>
class SparseJsonListsRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("SparseJsonListsRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("SparseJsonListsRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> SparseJsonListsRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex SparseJsonListsRequestSchemaCache<Adapter>::s_mutex;

class SparseJsonListsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit SparseJsonListsRequestSerializable(const SparseJsonListsRequest& obj)
      : m_obj(obj), m_schema(SparseJsonListsRequestSchemaCache<SparseJsonListsRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SparseJsonListsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void SparseJsonListsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.SparseStringListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("sparseStringList").value();
    serializer.WriteList(memberSchema, m_obj.GetSparseStringList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetSparseStringList()) {
        if (item0.has_value()) {
          listSerializer0.WriteString(itemSchema0, (*item0));
        } else {
          listSerializer0.WriteNull(itemSchema0);
        }
      }
    });
  }
  if (m_obj.SparseShortListHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("sparseShortList").value();
    serializer.WriteList(memberSchema, m_obj.GetSparseShortList().size(), [&](smithy::schema::ShapeSerializer& listSerializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      for (const auto& item0 : m_obj.GetSparseShortList()) {
        if (item0.has_value()) {
          listSerializer0.WriteInteger(itemSchema0, (*item0));
        } else {
          listSerializer0.WriteNull(itemSchema0);
        }
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> SparseJsonListsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SparseJsonListsRequest")
      .PutMember("sparseStringList",
                 smithy::schema::Schema::ListBuilder("SparseStringList")
                     .PutMember("member", smithy::schema::Schema::CreateString("member"))
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .PutMember("sparseShortList",
                 smithy::schema::Schema::ListBuilder("SparseShortList")
                     .PutMember("member", smithy::schema::Schema::CreateInteger("member"))
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> SparseJsonListsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<SparseJsonListsRequestSerializable>("SparseJsonListsRequestSerializable", *this);
}

Aws::String SparseJsonListsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext SparseJsonListsRequest::GetSchemaSerdeContext() const {
  return {"SparseJsonLists", "2019-12-16", "/SparseJsonLists", ""};
}
