/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/EndpointEventBus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

EndpointEventBus::EndpointEventBus() : 
    m_eventBusArnHasBeenSet(false)
{
}

EndpointEventBus::EndpointEventBus(JsonView jsonValue) : 
    m_eventBusArnHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointEventBus& EndpointEventBus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventBusArn"))
  {
    m_eventBusArn = jsonValue.GetString("EventBusArn");

    m_eventBusArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EndpointEventBus::Jsonize() const
{
  JsonValue payload;

  if(m_eventBusArnHasBeenSet)
  {
   payload.WithString("EventBusArn", m_eventBusArn);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
