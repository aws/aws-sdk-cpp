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
#include <aws/rest-json-protocol/model/SparseJsonListsResult.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/JsonTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SparseJsonListsResult::SparseJsonListsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SparseJsonListsResult& SparseJsonListsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
class SparseJsonListsResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit SparseJsonListsResultDeserializable(SparseJsonListsResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  SparseJsonListsResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void SparseJsonListsResultDeserializable::From(const smithy::schema::Schema& memberSchema,
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
  if (memberName == "sparseShortList") {
    Aws::Vector<Aws::Crt::Optional<int>> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      if (itemDeserializer0.IsNull()) {
        itemDeserializer0.ReadString(itemSchema0);
        list0.push_back({});
      } else {
        auto value1 = itemDeserializer0.ReadInteger(itemSchema0);
        if (value1.has_value()) {
          list0.push_back(*value1);
        }
      }
    });
    m_obj.SetSparseShortList(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> SparseJsonListsResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("SparseJsonListsResult")
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

Aws::UniquePtr<smithy::schema::SerializableStruct> SparseJsonListsResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<SparseJsonListsResultDeserializable>("SparseJsonListsResultDeserializable", *this);
}
