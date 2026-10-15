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
#include <aws/json-protocol/model/SparseNullsOperationRequest.h>
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

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace {
class SparseNullsOperationRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit SparseNullsOperationRequestSerializable(const SparseNullsOperationRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const SparseNullsOperationRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void SparseNullsOperationRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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
}

std::shared_ptr<const smithy::schema::Schema> SparseNullsOperationRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SparseNullsOperationRequest")
      .PutMember("sparseStringList",
                 smithy::schema::Schema::ListBuilder("SparseStringList")
                     .PutMember("member", smithy::schema::Schema::CreateString("member"))
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .PutMember("sparseStringMap",
                 smithy::schema::Schema::MapBuilder("SparseStringMap")
                     .PutMember("key", smithy::schema::Schema::CreateString("key"))
                     .PutMember("value", smithy::schema::Schema::CreateString("value"))
                     .Build(),
                 {{smithy::schema::SparseTrait::KEY(), Aws::MakeShared<smithy::schema::SparseTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> SparseNullsOperationRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<SparseNullsOperationRequestSerializable>("SparseNullsOperationRequestSerializable", *this);
}

Aws::String SparseNullsOperationRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext SparseNullsOperationRequest::GetSchemaSerdeContext() const {
  return {"SparseNullsOperation", "2018-01-01"};
}

Aws::Http::HeaderValueCollection SparseNullsOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.SparseNullsOperation"));
  return headers;
}
