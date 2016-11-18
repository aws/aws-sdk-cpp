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
#include <aws/elastictranscoder/model/TimeSpan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

TimeSpan::TimeSpan() : 
    m_startTimeHasBeenSet(false),
    m_durationHasBeenSet(false)
{
}

TimeSpan::TimeSpan(const JsonValue& jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_durationHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSpan& TimeSpan::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetString("Duration");

    m_durationHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSpan::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithString("Duration", m_duration);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws