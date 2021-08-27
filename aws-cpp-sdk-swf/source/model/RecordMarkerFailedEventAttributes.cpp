/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RecordMarkerFailedEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

RecordMarkerFailedEventAttributes::RecordMarkerFailedEventAttributes() : 
    m_markerNameHasBeenSet(false),
    m_cause(RecordMarkerFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
}

RecordMarkerFailedEventAttributes::RecordMarkerFailedEventAttributes(JsonView jsonValue) : 
    m_markerNameHasBeenSet(false),
    m_cause(RecordMarkerFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

RecordMarkerFailedEventAttributes& RecordMarkerFailedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("markerName"))
  {
    m_markerName = jsonValue.GetString("markerName");

    m_markerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = RecordMarkerFailedCauseMapper::GetRecordMarkerFailedCauseForName(jsonValue.GetString("cause"));

    m_causeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");

    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordMarkerFailedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_markerNameHasBeenSet)
  {
   payload.WithString("markerName", m_markerName);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", RecordMarkerFailedCauseMapper::GetNameForRecordMarkerFailedCause(m_cause));
  }

  if(m_decisionTaskCompletedEventIdHasBeenSet)
  {
   payload.WithInt64("decisionTaskCompletedEventId", m_decisionTaskCompletedEventId);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws
