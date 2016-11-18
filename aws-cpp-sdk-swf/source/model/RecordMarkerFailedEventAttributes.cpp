/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

RecordMarkerFailedEventAttributes::RecordMarkerFailedEventAttributes(const JsonValue& jsonValue) : 
    m_markerNameHasBeenSet(false),
    m_cause(RecordMarkerFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

RecordMarkerFailedEventAttributes& RecordMarkerFailedEventAttributes::operator =(const JsonValue& jsonValue)
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