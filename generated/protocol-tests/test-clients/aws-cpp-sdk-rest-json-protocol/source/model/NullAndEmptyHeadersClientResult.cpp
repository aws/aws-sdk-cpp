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
#include <aws/rest-json-protocol/model/NullAndEmptyHeadersClientResult.h>
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

NullAndEmptyHeadersClientResult::NullAndEmptyHeadersClientResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

NullAndEmptyHeadersClientResult& NullAndEmptyHeadersClientResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
class NullAndEmptyHeadersClientResultDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit NullAndEmptyHeadersClientResultDeserializable(NullAndEmptyHeadersClientResult& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  NullAndEmptyHeadersClientResult& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void NullAndEmptyHeadersClientResultDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                         smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "a") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetA(*value0);
    }
    return;
  }
  if (memberName == "b") {
    auto value0 = deserializer.ReadString(memberSchema);
    if (value0.has_value()) {
      m_obj.SetB(*value0);
    }
    return;
  }
  if (memberName == "c") {
    Aws::Vector<Aws::String> list0;
    deserializer.ReadList(memberSchema, [&](smithy::schema::ShapeDeserializer& itemDeserializer0) {
      const smithy::schema::Schema& itemSchema0 = *memberSchema.GetMemberTarget().value()->GetMember("member").value();
      auto value1 = itemDeserializer0.ReadString(itemSchema0);
      if (value1.has_value()) {
        list0.push_back(*value1);
      }
    });
    m_obj.SetC(std::move(list0));
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> NullAndEmptyHeadersClientResultDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("NullAndEmptyHeadersClientResult")
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

Aws::UniquePtr<smithy::schema::SerializableStruct> NullAndEmptyHeadersClientResult::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<NullAndEmptyHeadersClientResultDeserializable>("NullAndEmptyHeadersClientResultDeserializable", *this);
}
