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
#include <aws/rest-json-protocol/model/MediaTypeHeaderRequest.h>
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
class MediaTypeHeaderRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit MediaTypeHeaderRequestSerializable(const MediaTypeHeaderRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const MediaTypeHeaderRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void MediaTypeHeaderRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.JsonHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("json").value();
    serializer.WriteString(memberSchema, m_obj.GetJson());
  }
}

std::shared_ptr<const smithy::schema::Schema> MediaTypeHeaderRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("MediaTypeHeaderRequest")
      .PutMember("json", smithy::schema::Schema::CreateString("json"),
                 {{smithy::schema::HttpHeaderTrait::KEY(), Aws::MakeShared<smithy::schema::HttpHeaderTrait>("SchemaSerdeTrait", "X-Json")},
                  {smithy::schema::MediaTypeTrait::KEY(),
                   Aws::MakeShared<smithy::schema::MediaTypeTrait>("SchemaSerdeTrait", "application/json")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> MediaTypeHeaderRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<MediaTypeHeaderRequestSerializable>("MediaTypeHeaderRequestSerializable", *this);
}

Aws::String MediaTypeHeaderRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext MediaTypeHeaderRequest::GetSchemaSerdeContext() const {
  return {"MediaTypeHeader", "2019-12-16", "/MediaTypeHeader", ""};
}

Aws::Http::HeaderValueCollection MediaTypeHeaderRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  return headers;
}
