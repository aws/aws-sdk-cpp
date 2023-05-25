/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/TrafficRoutingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

TrafficRoutingConfig::TrafficRoutingConfig() : 
    m_type(TrafficRoutingType::NOT_SET),
    m_typeHasBeenSet(false),
    m_timeBasedCanaryHasBeenSet(false),
    m_timeBasedLinearHasBeenSet(false)
{
}

TrafficRoutingConfig::TrafficRoutingConfig(JsonView jsonValue) : 
    m_type(TrafficRoutingType::NOT_SET),
    m_typeHasBeenSet(false),
    m_timeBasedCanaryHasBeenSet(false),
    m_timeBasedLinearHasBeenSet(false)
{
  *this = jsonValue;
}

TrafficRoutingConfig& TrafficRoutingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = TrafficRoutingTypeMapper::GetTrafficRoutingTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeBasedCanary"))
  {
    m_timeBasedCanary = jsonValue.GetObject("timeBasedCanary");

    m_timeBasedCanaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeBasedLinear"))
  {
    m_timeBasedLinear = jsonValue.GetObject("timeBasedLinear");

    m_timeBasedLinearHasBeenSet = true;
  }

  return *this;
}

JsonValue TrafficRoutingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TrafficRoutingTypeMapper::GetNameForTrafficRoutingType(m_type));
  }

  if(m_timeBasedCanaryHasBeenSet)
  {
   payload.WithObject("timeBasedCanary", m_timeBasedCanary.Jsonize());

  }

  if(m_timeBasedLinearHasBeenSet)
  {
   payload.WithObject("timeBasedLinear", m_timeBasedLinear.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
