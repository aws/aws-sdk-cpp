/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/LineageInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

LineageInfo::LineageInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

LineageInfo& LineageInfo::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("eventStatus"))
  {
    m_eventStatus = LineageEventProcessingStatusMapper::GetLineageEventProcessingStatusForName(jsonValue.GetString("eventStatus"));
    m_eventStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue LineageInfo::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_eventStatusHasBeenSet)
  {
   payload.WithString("eventStatus", LineageEventProcessingStatusMapper::GetNameForLineageEventProcessingStatus(m_eventStatus));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
