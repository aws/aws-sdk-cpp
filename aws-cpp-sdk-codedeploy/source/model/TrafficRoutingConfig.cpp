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

TrafficRoutingConfig::TrafficRoutingConfig(const JsonValue& jsonValue) : 
    m_type(TrafficRoutingType::NOT_SET),
    m_typeHasBeenSet(false),
    m_timeBasedCanaryHasBeenSet(false),
    m_timeBasedLinearHasBeenSet(false)
{
  *this = jsonValue;
}

TrafficRoutingConfig& TrafficRoutingConfig::operator =(const JsonValue& jsonValue)
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
