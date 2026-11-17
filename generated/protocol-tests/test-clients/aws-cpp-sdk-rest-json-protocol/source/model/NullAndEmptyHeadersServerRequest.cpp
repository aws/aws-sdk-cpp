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
#include <aws/rest-json-protocol/model/NullAndEmptyHeadersServerRequest.h>
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
class NullAndEmptyHeadersServerRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit NullAndEmptyHeadersServerRequestSerializable(const NullAndEmptyHeadersServerRequest& obj)
      : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const NullAndEmptyHeadersServerRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void NullAndEmptyHeadersServerRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
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

std::shared_ptr<const smithy::schema::Schema> NullAndEmptyHeadersServerRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("NullAndEmptyHeadersServerRequest")
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

Aws::UniquePtr<smithy::schema::SerializableStruct> NullAndEmptyHeadersServerRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<NullAndEmptyHeadersServerRequestSerializable>("NullAndEmptyHeadersServerRequestSerializable", *this);
}

Aws::String NullAndEmptyHeadersServerRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext NullAndEmptyHeadersServerRequest::GetSchemaSerdeContext() const {
  return {"NullAndEmptyHeadersServer", "2019-12-16", "/NullAndEmptyHeadersServer", ""};
}

Aws::Http::HeaderValueCollection NullAndEmptyHeadersServerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
