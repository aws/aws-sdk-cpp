/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/AuditEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

AuditEvent::AuditEvent() : 
    m_eventIdHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_performedByHasBeenSet(false),
    m_performedTimeHasBeenSet(false),
    m_relatedItemType(RelatedItemType::NOT_SET),
    m_relatedItemTypeHasBeenSet(false),
    m_type(AuditEventType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

AuditEvent::AuditEvent(JsonView jsonValue) : 
    m_eventIdHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_performedByHasBeenSet(false),
    m_performedTimeHasBeenSet(false),
    m_relatedItemType(RelatedItemType::NOT_SET),
    m_relatedItemTypeHasBeenSet(false),
    m_type(AuditEventType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

AuditEvent& AuditEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("performedBy"))
  {
    m_performedBy = jsonValue.GetObject("performedBy");

    m_performedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("performedTime"))
  {
    m_performedTime = jsonValue.GetString("performedTime");

    m_performedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relatedItemType"))
  {
    m_relatedItemType = RelatedItemTypeMapper::GetRelatedItemTypeForName(jsonValue.GetString("relatedItemType"));

    m_relatedItemTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = AuditEventTypeMapper::GetAuditEventTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
   }
   payload.WithArray("fields", std::move(fieldsJsonList));

  }

  if(m_performedByHasBeenSet)
  {
   payload.WithObject("performedBy", m_performedBy.Jsonize());

  }

  if(m_performedTimeHasBeenSet)
  {
   payload.WithString("performedTime", m_performedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_relatedItemTypeHasBeenSet)
  {
   payload.WithString("relatedItemType", RelatedItemTypeMapper::GetNameForRelatedItemType(m_relatedItemType));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AuditEventTypeMapper::GetNameForAuditEventType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
