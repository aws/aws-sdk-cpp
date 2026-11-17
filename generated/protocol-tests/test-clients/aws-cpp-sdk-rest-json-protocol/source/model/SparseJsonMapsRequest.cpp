/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/SparseJsonMapsRequest.h>
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

#include <numeric>
#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace {
class SparseJsonMapsRequest_GreetingStructSchemaSerdeSer final : public smithy::schema::SerializableStruct {
 public:
  explicit SparseJsonMapsRequest_GreetingStructSchemaSerdeSer(const GreetingStruct& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const GreetingStruct& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

class SparseJsonMapsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit SparseJsonMapsRequestSerializable(const SparseJsonMapsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SparseJsonMapsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void SparseJsonMapsRequest_GreetingStructSchemaSerdeSer::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.HiHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("hi").value();
    serializer.WriteString(memberSchema, m_obj.GetHi());
  }
}

std::shared_ptr<const smithy::schema::Schema> SparseJsonMapsRequest_GreetingStructSchemaSerdeSer::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("GreetingStruct").PutMember("hi", smithy::schema::Schema::CreateString("hi")).Build();
}

void SparseJsonMapsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.SparseStructMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("sparseStructMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetSparseStructMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetSparseStructMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          if (entry0.second.has_value()) {
            SparseJsonMapsRequest_GreetingStructSchemaSerdeSer nested1((*entry0.second));
            valueSerializer0.WriteStruct(valueSchema0, nested1);
          } else {
            valueSerializer0.WriteNull(valueSchema0);
          }
        });
      }
    });
  }
  if (m_obj.SparseNumberMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("sparseNumberMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetSparseNumberMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetSparseNumberMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          if (entry0.second.has_value()) {
            valueSerializer0.WriteInteger(valueSchema0, (*entry0.second));
          } else {
            valueSerializer0.WriteNull(valueSchema0);
          }
        });
      }
    });
  }
  if (m_obj.SparseBooleanMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("sparseBooleanMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetSparseBooleanMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetSparseBooleanMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          if (entry0.second.has_value()) {
            valueSerializer0.WriteBoolean(valueSchema0, (*entry0.second));
          } else {
            valueSerializer0.WriteNull(valueSchema0);
          }
        });
      }
    });
  }
  if (m_obj.SparseStringMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("sparseStringMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetSparseStringMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetSparseStringMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          if (entry0.second.has_value()) {
            valueSerializer0.WriteString(valueSchema0, (*entry0.second));
          } else {
            valueSerializer0.WriteNull(valueSchema0);
          }
        });
      }
    });
  }
  if (m_obj.SparseSetMapHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("sparseSetMap").value();
    serializer.WriteMap(memberSchema, m_obj.GetSparseSetMap().size(), [&](smithy::schema::MapSerializer& mapSerializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      for (const auto& entry0 : m_obj.GetSparseSetMap()) {
        mapSerializer0.WriteEntry(entry0.first, [&](smithy::schema::ShapeSerializer& valueSerializer0) {
          if (entry0.second.has_value()) {
            valueSerializer0.WriteList(valueSchema0, (*entry0.second).size(), [&](smithy::schema::ShapeSerializer& listSerializer1) {
              const smithy::schema::Schema& itemSchema1 = *valueSchema0.GetMemberTarget().value()->GetMember("member").value();
              for (const auto& item1 : (*entry0.second)) {
                listSerializer1.WriteString(itemSchema1, item1);
              }
            });
          } else {
            valueSerializer0.WriteNull(valueSchema0);
          }
        });
      }
    });
  }
}

std::shared_ptr<const smithy::schema::Schema> SparseJsonMapsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SparseJsonMapsRequest")
      .PutMember("sparseStructMap",
                 smithy::schema::Schema::MapBuilder("SparseStructMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", SparseJsonMapsRequest_GreetingStructSchemaSerdeSer::BuildSchema())
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .PutMember("sparseNumberMap",
                 smithy::schema::Schema::MapBuilder("SparseNumberMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateInteger("value"))
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .PutMember("sparseBooleanMap",
                 smithy::schema::Schema::MapBuilder("SparseBooleanMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateBoolean("value"))
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .PutMember("sparseStringMap",
                 smithy::schema::Schema::MapBuilder("SparseStringMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .PutMember("sparseSetMap",
                 smithy::schema::Schema::MapBuilder("SparseSetMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::ListBuilder("StringSet")
                                             .PutMember("member", smithy::schema::Schema::CreateString("member"))
                                             .Build())
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> SparseJsonMapsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<SparseJsonMapsRequestSerializable>("SparseJsonMapsRequestSerializable", *this);
}

Aws::String SparseJsonMapsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext SparseJsonMapsRequest::GetSchemaSerdeContext() const {
  return {"SparseJsonMaps", "2019-12-16", "/SparseJsonMaps", ""};
}
