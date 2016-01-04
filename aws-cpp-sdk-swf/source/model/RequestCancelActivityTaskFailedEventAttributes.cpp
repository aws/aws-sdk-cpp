/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/model/RequestCancelActivityTaskFailedEventAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RequestCancelActivityTaskFailedEventAttributes::RequestCancelActivityTaskFailedEventAttributes() : 
    m_activityIdHasBeenSet(false),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
}

RequestCancelActivityTaskFailedEventAttributes::RequestCancelActivityTaskFailedEventAttributes(const JsonValue& jsonValue) : 
    m_activityIdHasBeenSet(false),
    m_causeHasBeenSet(false),
    m_decisionTaskCompletedEventId(0),
    m_decisionTaskCompletedEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

RequestCancelActivityTaskFailedEventAttributes& RequestCancelActivityTaskFailedEventAttributes::operator =(const JsonValue& jsonValue)
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

  return std::move(payload);
}