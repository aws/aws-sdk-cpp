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
#include <aws/rest-xml-protocol/model/XmlTimestampsRequest.h>
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
class XmlTimestampsRequestSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("XmlTimestampsRequestSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("XmlTimestampsRequestSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> XmlTimestampsRequestSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex XmlTimestampsRequestSchemaCache<Adapter>::s_mutex;

class XmlTimestampsRequestSerializable final : public smithy::schema::SerializableStruct {
 public:
  explicit XmlTimestampsRequestSerializable(const XmlTimestampsRequest& obj)
      : m_obj(obj), m_schema(XmlTimestampsRequestSchemaCache<XmlTimestampsRequestSerializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer& serializer) const override;
  void From(const smithy::schema::Schema&, smithy::schema::ShapeDeserializer&) override {}
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  const XmlTimestampsRequest& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void XmlTimestampsRequestSerializable::SerializeMembers(smithy::schema::ShapeSerializer& serializer) const {
  if (m_obj.NormalHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("normal").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetNormal());
  }
  if (m_obj.DateTimeHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("dateTime").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetDateTime());
  }
  if (m_obj.DateTimeOnTargetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("dateTimeOnTarget").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetDateTimeOnTarget());
  }
  if (m_obj.EpochSecondsHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("epochSeconds").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetEpochSeconds());
  }
  if (m_obj.EpochSecondsOnTargetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("epochSecondsOnTarget").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetEpochSecondsOnTarget());
  }
  if (m_obj.HttpDateHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("httpDate").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetHttpDate());
  }
  if (m_obj.HttpDateOnTargetHasBeenSet()) {
    const smithy::schema::Schema& memberSchema = *m_schema->GetMember("httpDateOnTarget").value();
    serializer.WriteTimestamp(memberSchema, m_obj.GetHttpDateOnTarget());
  }
}

std::shared_ptr<const smithy::schema::Schema> XmlTimestampsRequestSerializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("XmlTimestampsRequest")
      .PutMember("normal", smithy::schema::Schema::CreateTimestamp("normal"))
      .PutMember(
          "dateTime", smithy::schema::Schema::CreateTimestamp("dateTime"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::DATE_TIME)}})
      .PutMember(
          "dateTimeOnTarget", smithy::schema::Schema::CreateTimestamp("dateTimeOnTarget"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::DATE_TIME)}})
      .PutMember("epochSeconds", smithy::schema::Schema::CreateTimestamp("epochSeconds"),
                 {{smithy::schema::TimestampFormatTrait::KEY(),
                   Aws::MakeShared<smithy::schema::TimestampFormatTrait>("SchemaSerdeTrait",
                                                                         smithy::schema::TimestampFormatTrait::Format::EPOCH_SECONDS)}})
      .PutMember("epochSecondsOnTarget", smithy::schema::Schema::CreateTimestamp("epochSecondsOnTarget"),
                 {{smithy::schema::TimestampFormatTrait::KEY(),
                   Aws::MakeShared<smithy::schema::TimestampFormatTrait>("SchemaSerdeTrait",
                                                                         smithy::schema::TimestampFormatTrait::Format::EPOCH_SECONDS)}})
      .PutMember(
          "httpDate", smithy::schema::Schema::CreateTimestamp("httpDate"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::HTTP_DATE)}})
      .PutMember(
          "httpDateOnTarget", smithy::schema::Schema::CreateTimestamp("httpDateOnTarget"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::HTTP_DATE)}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> XmlTimestampsRequest::GetSchemaSerdeInput() const {
  return Aws::MakeUnique<XmlTimestampsRequestSerializable>("XmlTimestampsRequestSerializable", *this);
}

Aws::String XmlTimestampsRequest::SerializePayload() const { return {}; }
smithy::schema::OperationRequestContext XmlTimestampsRequest::GetSchemaSerdeContext() const {
  return {"XmlTimestamps", "2019-12-16", "/XmlTimestamps", ""};
}
