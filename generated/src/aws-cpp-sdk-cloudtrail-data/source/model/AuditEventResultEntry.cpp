/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail-data/model/AuditEventResultEntry.h>
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

AuditEventResultEntry::AuditEventResultEntry() : 
    m_eventIDHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

AuditEventResultEntry::AuditEventResultEntry(JsonView jsonValue) : 
    m_eventIDHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

AuditEventResultEntry& AuditEventResultEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventID"))
  {
    m_eventID = jsonValue.GetString("eventID");

    m_eventIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditEventResultEntry::Jsonize() const
{
  JsonValue payload;

  if(m_eventIDHasBeenSet)
  {
   payload.WithString("eventID", m_eventID);

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
