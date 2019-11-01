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

#include <aws/pinpoint/model/JourneyLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

JourneyLimits::JourneyLimits() : 
    m_dailyCap(0),
    m_dailyCapHasBeenSet(false),
    m_endpointReentryCap(0),
    m_endpointReentryCapHasBeenSet(false),
    m_messagesPerSecond(0),
    m_messagesPerSecondHasBeenSet(false)
{
}

JourneyLimits::JourneyLimits(JsonView jsonValue) : 
    m_dailyCap(0),
    m_dailyCapHasBeenSet(false),
    m_endpointReentryCap(0),
    m_endpointReentryCapHasBeenSet(false),
    m_messagesPerSecond(0),
    m_messagesPerSecondHasBeenSet(false)
{
  *this = jsonValue;
}

JourneyLimits& JourneyLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DailyCap"))
  {
    m_dailyCap = jsonValue.GetInteger("DailyCap");

    m_dailyCapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointReentryCap"))
  {
    m_endpointReentryCap = jsonValue.GetInteger("EndpointReentryCap");

    m_endpointReentryCapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessagesPerSecond"))
  {
    m_messagesPerSecond = jsonValue.GetInteger("MessagesPerSecond");

    m_messagesPerSecondHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneyLimits::Jsonize() const
{
  JsonValue payload;

  if(m_dailyCapHasBeenSet)
  {
   payload.WithInteger("DailyCap", m_dailyCap);

  }

  if(m_endpointReentryCapHasBeenSet)
  {
   payload.WithInteger("EndpointReentryCap", m_endpointReentryCap);

  }

  if(m_messagesPerSecondHasBeenSet)
  {
   payload.WithInteger("MessagesPerSecond", m_messagesPerSecond);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
