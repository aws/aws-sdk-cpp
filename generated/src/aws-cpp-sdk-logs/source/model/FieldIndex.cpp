/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/FieldIndex.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

FieldIndex::FieldIndex(JsonView jsonValue)
{
  *this = jsonValue;
}

FieldIndex& FieldIndex::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logGroupIdentifier"))
  {
    m_logGroupIdentifier = jsonValue.GetString("logGroupIdentifier");
    m_logGroupIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fieldIndexName"))
  {
    m_fieldIndexName = jsonValue.GetString("fieldIndexName");
    m_fieldIndexNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastScanTime"))
  {
    m_lastScanTime = jsonValue.GetInt64("lastScanTime");
    m_lastScanTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("firstEventTime"))
  {
    m_firstEventTime = jsonValue.GetInt64("firstEventTime");
    m_firstEventTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastEventTime"))
  {
    m_lastEventTime = jsonValue.GetInt64("lastEventTime");
    m_lastEventTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue FieldIndex::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupIdentifierHasBeenSet)
  {
   payload.WithString("logGroupIdentifier", m_logGroupIdentifier);

  }

  if(m_fieldIndexNameHasBeenSet)
  {
   payload.WithString("fieldIndexName", m_fieldIndexName);

  }

  if(m_lastScanTimeHasBeenSet)
  {
   payload.WithInt64("lastScanTime", m_lastScanTime);

  }

  if(m_firstEventTimeHasBeenSet)
  {
   payload.WithInt64("firstEventTime", m_firstEventTime);

  }

  if(m_lastEventTimeHasBeenSet)
  {
   payload.WithInt64("lastEventTime", m_lastEventTime);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
