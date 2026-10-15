/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/SparseNullsOperationResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SparseNullsOperationResult::SparseNullsOperationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SparseNullsOperationResult& SparseNullsOperationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}

namespace {
class SparseNullsOperationResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit SparseNullsOperationResultDeserializable(SparseNullsOperationResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SparseNullsOperationResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void SparseNullsOperationResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                    smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "sparseStringList") {
    Aws::Vector<Aws::Crt::Optional<Aws::String>> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      if (itemDeserializer0.IsNull()) {
        itemDeserializer0.ReadString(itemSchema0);
        list0.push_back({});
      } else {
        auto value1 = itemDeserializer0.ReadString(itemSchema0);
        if (value1.has_value()) {
          list0.push_back(*value1);
        }
      }
    });
    m_obj.SetSparseStringList(std::move(list0));
    return;
  }
  if (memberName == "sparseStringMap") {
    Aws::Map<Aws::String, Aws::Crt::Optional<Aws::String>> map0;
    deserializer.ReadMap(memberSchema, [&](const Aws::String& key0, smithy::schema::ShapeDeserializer& valueDeserializer0) {
      const smithy::schema::Schema& valueSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("value").value();
      if (valueDeserializer0.IsNull()) {
        valueDeserializer0.ReadString(valueSchema0);
        map0[key0];
      } else {
        auto value1 = valueDeserializer0.ReadString(valueSchema0);
        if (value1.has_value()) {
          map0[key0] = *value1;
        }
      }
    });
    m_obj.SetSparseStringMap(std::move(map0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> SparseNullsOperationResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SparseNullsOperationResult")
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

Aws::UniquePtr<smithy::schema::SerializableStruct> SparseNullsOperationResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<SparseNullsOperationResultDeserializable>("SparseNullsOperationResultDeserializable", *this);
}
