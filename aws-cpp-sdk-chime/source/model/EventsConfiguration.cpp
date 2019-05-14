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

#include <aws/chime/model/EventsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

EventsConfiguration::EventsConfiguration() : 
    m_botIdHasBeenSet(false),
    m_outboundEventsHTTPSEndpointHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false)
{
}

EventsConfiguration::EventsConfiguration(JsonView jsonValue) : 
    m_botIdHasBeenSet(false),
    m_outboundEventsHTTPSEndpointHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false)
{
  *this = jsonValue;
}

EventsConfiguration& EventsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BotId"))
  {
    m_botId = jsonValue.GetString("BotId");

    m_botIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutboundEventsHTTPSEndpoint"))
  {
    m_outboundEventsHTTPSEndpoint = jsonValue.GetString("OutboundEventsHTTPSEndpoint");

    m_outboundEventsHTTPSEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LambdaFunctionArn"))
  {
    m_lambdaFunctionArn = jsonValue.GetString("LambdaFunctionArn");

    m_lambdaFunctionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EventsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_botIdHasBeenSet)
  {
   payload.WithString("BotId", m_botId);

  }

  if(m_outboundEventsHTTPSEndpointHasBeenSet)
  {
   payload.WithString("OutboundEventsHTTPSEndpoint", m_outboundEventsHTTPSEndpoint);

  }

  if(m_lambdaFunctionArnHasBeenSet)
  {
   payload.WithString("LambdaFunctionArn", m_lambdaFunctionArn);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
