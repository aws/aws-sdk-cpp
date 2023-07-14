/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RequestCancelActivityTaskFailedEventAttributes.h>
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

RequestCancelActivityTaskFailedEventAttributes::RequestCancelActivityTaskFailedEventAttributes() : 
    m_activityIdHasBeenSet(false),
    m_cause(RequestCancelActivityTaskFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
}

RequestCancelActivityTaskFailedEventAttributes::RequestCancelActivityTaskFailedEventAttributes(JsonView jsonValue) : 
    m_activityIdHasBeenSet(false),
    m_cause(RequestCancelActivityTaskFailedCause::NOT_SET),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

RequestCancelActivityTaskFailedEventAttributes& RequestCancelActivityTaskFailedEventAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activityId"))
  {
    m_activityId = jsonValue.GetString("activityId");

    m_activityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = RequestCancelActivityTaskFailedCauseMapper::GetRequestCancelActivityTaskFailedCauseForName(jsonValue.GetString("cause"));

    m_causeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("decisionTaskCompletedEventId"))
  {
    m_decisionTaskCompletedEventId = jsonValue.GetInt64("decisionTaskCompletedEventId");

    m_decisionTaskCompletedEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RequestCancelActivityTaskFailedEventAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_activityIdHasBeenSet)
  {
   payload.WithString("activityId", m_activityId);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", RequestCancelActivityTaskFailedCauseMapper::GetNameForRequestCancelActivityTaskFailedCause(m_cause));
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
