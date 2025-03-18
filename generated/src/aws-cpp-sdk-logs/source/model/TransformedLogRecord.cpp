/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/TransformedLogRecord.h>
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

TransformedLogRecord::TransformedLogRecord(JsonView jsonValue)
{
  *this = jsonValue;
}

TransformedLogRecord& TransformedLogRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventNumber"))
  {
    m_eventNumber = jsonValue.GetInt64("eventNumber");
    m_eventNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventMessage"))
  {
    m_eventMessage = jsonValue.GetString("eventMessage");
    m_eventMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transformedEventMessage"))
  {
    m_transformedEventMessage = jsonValue.GetString("transformedEventMessage");
    m_transformedEventMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue TransformedLogRecord::Jsonize() const
{
  JsonValue payload;

  if(m_eventNumberHasBeenSet)
  {
   payload.WithInt64("eventNumber", m_eventNumber);

  }

  if(m_eventMessageHasBeenSet)
  {
   payload.WithString("eventMessage", m_eventMessage);

  }

  if(m_transformedEventMessageHasBeenSet)
  {
   payload.WithString("transformedEventMessage", m_transformedEventMessage);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
