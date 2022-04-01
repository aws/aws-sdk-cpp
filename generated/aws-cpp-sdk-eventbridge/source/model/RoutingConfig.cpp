/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/RoutingConfig.h>
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

RoutingConfig::RoutingConfig() : 
    m_failoverConfigHasBeenSet(false)
{
}

RoutingConfig::RoutingConfig(JsonView jsonValue) : 
    m_failoverConfigHasBeenSet(false)
{
  *this = jsonValue;
}

RoutingConfig& RoutingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailoverConfig"))
  {
    m_failoverConfig = jsonValue.GetObject("FailoverConfig");

    m_failoverConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue RoutingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_failoverConfigHasBeenSet)
  {
   payload.WithObject("FailoverConfig", m_failoverConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
