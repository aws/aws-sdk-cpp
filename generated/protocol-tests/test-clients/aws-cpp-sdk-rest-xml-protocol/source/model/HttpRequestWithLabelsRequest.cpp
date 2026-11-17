/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpRequestWithLabelsRequest.h>
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

#include <numeric>
#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

namespace {
class HttpRequestWithLabelsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit HttpRequestWithLabelsRequestSerializable(const HttpRequestWithLabelsRequest& obj) : m_obj(obj), m_schema(BuildSchema()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const HttpRequestWithLabelsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void HttpRequestWithLabelsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.StringHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("string").value();
    serializer.WriteString(memberSchema, m_obj.GetString());
  }
  if (m_obj.ShortHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("short").value();
    serializer.WriteInteger(memberSchema, m_obj.GetShort());
  }
  if (m_obj.IntegerHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("integer").value();
    serializer.WriteInteger(memberSchema, m_obj.GetInteger());
  }
  if (m_obj.LongHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("long").value();
    serializer.WriteLong(memberSchema, m_obj.GetLong());
  }
  if (m_obj.FloatHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("float").value();
    serializer.WriteDouble(memberSchema, m_obj.GetFloat());
  }
  if (m_obj.DoubleHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("double").value();
    serializer.WriteDouble(memberSchema, m_obj.GetDouble());
  }
  if (m_obj.BooleanHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("boolean").value();
    serializer.WriteBoolean(memberSchema, m_obj.GetBoolean());
  }
  if (m_obj.TimestampHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("timestamp").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetTimestamp());
  }
}

std::shared_ptr<const smithy::schema::Schema> HttpRequestWithLabelsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("HttpRequestWithLabelsRequest")
      .PutMember("string", smithy::schema::Schema::CreateString("string"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("short", smithy::schema::Schema::CreateInteger("short"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("integer", smithy::schema::Schema::CreateInteger("integer"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("long", smithy::schema::Schema::CreateLong("long"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("float", smithy::schema::Schema::CreateDouble("float"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("double", smithy::schema::Schema::CreateDouble("double"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("boolean", smithy::schema::Schema::CreateBoolean("boolean"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .PutMember("timestamp", smithy::schema::Schema::CreateTimestamp("timestamp"),
                 {{smithy::schema::HttpLabelTrait::KEY(), Aws::MakeShared<smithy::schema::HttpLabelTrait>("SchemaSerdeTrait")}})
      .Build();
}

}  // namespace

Aws::UniquePtr<smithy::schema::SerializableStruct> HttpRequestWithLabelsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<HttpRequestWithLabelsRequestSerializable>("HttpRequestWithLabelsRequestSerializable", *this);
}

Aws::String HttpRequestWithLabelsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext HttpRequestWithLabelsRequest::GetSchemaSerdeContext() const {
  return {"HttpRequestWithLabels", "2019-12-16",
          "/HttpRequestWithLabels/{string}/{short}/{integer}/{long}/{float}/{double}/{boolean}/{timestamp}", ""};
}
