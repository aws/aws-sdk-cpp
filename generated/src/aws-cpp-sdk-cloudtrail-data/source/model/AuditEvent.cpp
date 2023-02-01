/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail-data/model/AuditEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrailData
{
namespace Model
{

AuditEvent::AuditEvent() : 
    m_eventDataHasBeenSet(false),
    m_eventDataChecksumHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

AuditEvent::AuditEvent(JsonView jsonValue) : 
    m_eventDataHasBeenSet(false),
    m_eventDataChecksumHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

AuditEvent& AuditEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventData"))
  {
    m_eventData = jsonValue.GetString("eventData");

    m_eventDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventDataChecksum"))
  {
    m_eventDataChecksum = jsonValue.GetString("eventDataChecksum");

    m_eventDataChecksumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventDataHasBeenSet)
  {
   payload.WithString("eventData", m_eventData);

  }

  if(m_eventDataChecksumHasBeenSet)
  {
   payload.WithString("eventDataChecksum", m_eventDataChecksum);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrailData
} // namespace Aws
