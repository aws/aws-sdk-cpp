/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/PutProjectEventsResultEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

PutProjectEventsResultEntry::PutProjectEventsResultEntry() : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

PutProjectEventsResultEntry::PutProjectEventsResultEntry(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
  *this = jsonValue;
}

PutProjectEventsResultEntry& PutProjectEventsResultEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PutProjectEventsResultEntry::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
