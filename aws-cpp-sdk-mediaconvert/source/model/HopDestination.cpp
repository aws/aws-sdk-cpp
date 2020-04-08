/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/mediaconvert/model/HopDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

HopDestination::HopDestination() : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_waitMinutes(0),
    m_waitMinutesHasBeenSet(false)
{
}

HopDestination::HopDestination(JsonView jsonValue) : 
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_waitMinutes(0),
    m_waitMinutesHasBeenSet(false)
{
  *this = jsonValue;
}

HopDestination& HopDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("priority"))
  {
    m_priority = jsonValue.GetInteger("priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queue"))
  {
    m_queue = jsonValue.GetString("queue");

    m_queueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("waitMinutes"))
  {
    m_waitMinutes = jsonValue.GetInteger("waitMinutes");

    m_waitMinutesHasBeenSet = true;
  }

  return *this;
}

JsonValue HopDestination::Jsonize() const
{
  JsonValue payload;

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("priority", m_priority);

  }

  if(m_queueHasBeenSet)
  {
   payload.WithString("queue", m_queue);

  }

  if(m_waitMinutesHasBeenSet)
  {
   payload.WithInteger("waitMinutes", m_waitMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
