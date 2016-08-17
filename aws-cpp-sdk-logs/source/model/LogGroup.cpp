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
#include <aws/logs/model/LogGroup.h>
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

LogGroup::LogGroup() : 
    m_logGroupNameHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_retentionInDays(0),
    m_retentionInDaysHasBeenSet(false),
    m_metricFilterCount(0),
    m_metricFilterCountHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_storedBytes(0),
    m_storedBytesHasBeenSet(false)
{
}

LogGroup::LogGroup(const JsonValue& jsonValue) : 
    m_logGroupNameHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_retentionInDays(0),
    m_retentionInDaysHasBeenSet(false),
    m_metricFilterCount(0),
    m_metricFilterCountHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_storedBytes(0),
    m_storedBytesHasBeenSet(false)
{
  *this = jsonValue;
}

LogGroup& LogGroup::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

    m_logGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetInt64("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retentionInDays"))
  {
    m_retentionInDays = jsonValue.GetInteger("retentionInDays");

    m_retentionInDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metricFilterCount"))
  {
    m_metricFilterCount = jsonValue.GetInteger("metricFilterCount");

    m_metricFilterCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storedBytes"))
  {
    m_storedBytes = jsonValue.GetInt64("storedBytes");

    m_storedBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue LogGroup::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupNameHasBeenSet)
  {
   payload.WithString("logGroupName", m_logGroupName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithInt64("creationTime", m_creationTime);

  }

  if(m_retentionInDaysHasBeenSet)
  {
   payload.WithInteger("retentionInDays", m_retentionInDays);

  }

  if(m_metricFilterCountHasBeenSet)
  {
   payload.WithInteger("metricFilterCount", m_metricFilterCount);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_storedBytesHasBeenSet)
  {
   payload.WithInt64("storedBytes", m_storedBytes);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws