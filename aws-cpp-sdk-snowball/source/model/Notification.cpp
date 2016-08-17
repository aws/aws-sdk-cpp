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
#include <aws/snowball/model/Notification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

Notification::Notification() : 
    m_snsTopicARNHasBeenSet(false),
    m_jobStatesToNotifyHasBeenSet(false),
    m_notifyAll(false),
    m_notifyAllHasBeenSet(false)
{
}

Notification::Notification(const JsonValue& jsonValue) : 
    m_snsTopicARNHasBeenSet(false),
    m_jobStatesToNotifyHasBeenSet(false),
    m_notifyAll(false),
    m_notifyAllHasBeenSet(false)
{
  *this = jsonValue;
}

Notification& Notification::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SnsTopicARN"))
  {
    m_snsTopicARN = jsonValue.GetString("SnsTopicARN");

    m_snsTopicARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobStatesToNotify"))
  {
    Array<JsonValue> jobStatesToNotifyJsonList = jsonValue.GetArray("JobStatesToNotify");
    for(unsigned jobStatesToNotifyIndex = 0; jobStatesToNotifyIndex < jobStatesToNotifyJsonList.GetLength(); ++jobStatesToNotifyIndex)
    {
      m_jobStatesToNotify.push_back(JobStateMapper::GetJobStateForName(jobStatesToNotifyJsonList[jobStatesToNotifyIndex].AsString()));
    }
    m_jobStatesToNotifyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotifyAll"))
  {
    m_notifyAll = jsonValue.GetBool("NotifyAll");

    m_notifyAllHasBeenSet = true;
  }

  return *this;
}

JsonValue Notification::Jsonize() const
{
  JsonValue payload;

  if(m_snsTopicARNHasBeenSet)
  {
   payload.WithString("SnsTopicARN", m_snsTopicARN);

  }

  if(m_jobStatesToNotifyHasBeenSet)
  {
   Array<JsonValue> jobStatesToNotifyJsonList(m_jobStatesToNotify.size());
   for(unsigned jobStatesToNotifyIndex = 0; jobStatesToNotifyIndex < jobStatesToNotifyJsonList.GetLength(); ++jobStatesToNotifyIndex)
   {
     jobStatesToNotifyJsonList[jobStatesToNotifyIndex].AsString(JobStateMapper::GetNameForJobState(m_jobStatesToNotify[jobStatesToNotifyIndex]));
   }
   payload.WithArray("JobStatesToNotify", std::move(jobStatesToNotifyJsonList));

  }

  if(m_notifyAllHasBeenSet)
  {
   payload.WithBool("NotifyAll", m_notifyAll);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws