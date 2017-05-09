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

#include <aws/states/model/ActivityScheduledEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

ActivityScheduledEventDetails::ActivityScheduledEventDetails() : 
    m_resourceHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_heartbeatInSeconds(0),
    m_heartbeatInSecondsHasBeenSet(false)
{
}

ActivityScheduledEventDetails::ActivityScheduledEventDetails(const JsonValue& jsonValue) : 
    m_resourceHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_timeoutInSeconds(0),
    m_timeoutInSecondsHasBeenSet(false),
    m_heartbeatInSeconds(0),
    m_heartbeatInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

ActivityScheduledEventDetails& ActivityScheduledEventDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutInSeconds"))
  {
    m_timeoutInSeconds = jsonValue.GetInt64("timeoutInSeconds");

    m_timeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("heartbeatInSeconds"))
  {
    m_heartbeatInSeconds = jsonValue.GetInt64("heartbeatInSeconds");

    m_heartbeatInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivityScheduledEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_timeoutInSecondsHasBeenSet)
  {
   payload.WithInt64("timeoutInSeconds", m_timeoutInSeconds);

  }

  if(m_heartbeatInSecondsHasBeenSet)
  {
   payload.WithInt64("heartbeatInSeconds", m_heartbeatInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws