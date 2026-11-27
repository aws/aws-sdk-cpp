/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/component-registry/ComponentRegistry.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2-protocol/model/DatetimeOffsetsResponse.h>
#include <smithy/client/schema/DocumentConversion.h>
#include <smithy/client/schema/HttpTraits.h>
#include <smithy/client/schema/Schema.h>
#include <smithy/client/schema/SchemaBuilder.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>
#include <smithy/client/schema/XmlTraits.h>

#include <atomic>
#include <mutex>
#include <utility>

using namespace Aws::EC2Protocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DatetimeOffsetsResponse::DatetimeOffsetsResponse(const Aws::AmazonWebServiceResult<Aws::String>& result) { *this = result; }

DatetimeOffsetsResponse& DatetimeOffsetsResponse::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  const auto& headers = result.GetHeaderValueCollection();
  const auto requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_responseMetadata.SetRequestId(requestIdIter->second);
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::EC2Protocol::Model::DatetimeOffsetsResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId());
  }
  return *this;
}

namespace Aws {
namespace EC2Protocol {
namespace Model {
namespace {
template <typename Adapter>
class DatetimeOffsetsResponseSchemaCache {
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
        Aws::New<std::shared_ptr<const smithy::schema::Schema>>("DatetimeOffsetsResponseSchemaCache", Adapter::BuildSchema());
    Aws::Utils::ComponentRegistry::RegisterComponent("DatetimeOffsetsResponseSchemaCache", built, &Release);
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
std::atomic<std::shared_ptr<const smithy::schema::Schema>*> DatetimeOffsetsResponseSchemaCache<Adapter>::s_schema{nullptr};
template <typename Adapter>
std::mutex DatetimeOffsetsResponseSchemaCache<Adapter>::s_mutex;

class DatetimeOffsetsResponseDeserializable final : public smithy::schema::SerializableStruct {
 public:
  explicit DatetimeOffsetsResponseDeserializable(DatetimeOffsetsResponse& obj)
      : m_obj(obj), m_schema(DatetimeOffsetsResponseSchemaCache<DatetimeOffsetsResponseDeserializable>::Get()) {}
  const smithy::schema::Schema& GetSchema() const override { return *m_schema; }
  void SerializeMembers(smithy::schema::ShapeSerializer&) const override {}
  void From(const smithy::schema::Schema& memberSchema, smithy::schema::ShapeDeserializer& deserializer) override;
  static std::shared_ptr<const smithy::schema::Schema> BuildSchema();

 private:
  DatetimeOffsetsResponse& m_obj;
  const std::shared_ptr<const smithy::schema::Schema> m_schema;
};

void DatetimeOffsetsResponseDeserializable::From(const smithy::schema::Schema& memberSchema,
                                                 smithy::schema::ShapeDeserializer& deserializer) {
  const Aws::String memberName = memberSchema.GetMemberName();
  if (memberName == "datetime") {
    auto value0 = deserializer.ReadTimestamp(memberSchema);
    if (value0.has_value()) {
      m_obj.SetDatetime(*value0);
    }
    return;
  }
}

std::shared_ptr<const smithy::schema::Schema> DatetimeOffsetsResponseDeserializable::BuildSchema() {
  return smithy::schema::Schema::StructureBuilder("DatetimeOffsetsResponse")
      .PutMember(
          "datetime", smithy::schema::Schema::CreateTimestamp("datetime"),
          {{smithy::schema::TimestampFormatTrait::KEY(), Aws::MakeShared<smithy::schema::TimestampFormatTrait>(
                                                             "SchemaSerdeTrait", smithy::schema::TimestampFormatTrait::Format::DATE_TIME)}})
      .Build();
}

}  // namespace
}  // namespace Model
}  // namespace EC2Protocol
}  // namespace Aws

Aws::UniquePtr<smithy::schema::SerializableStruct> DatetimeOffsetsResponse::GetSchemaSerdeOutput() {
  return Aws::MakeUnique<DatetimeOffsetsResponseDeserializable>("DatetimeOffsetsResponseDeserializable", *this);
}
