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
#include <aws/gamelift/model/FleetCapacity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

FleetCapacity::FleetCapacity() : 
    m_fleetIdHasBeenSet(false),
    m_instanceType(EC2InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCountsHasBeenSet(false)
{
}

FleetCapacity::FleetCapacity(const JsonValue& jsonValue) : 
    m_fleetIdHasBeenSet(false),
    m_instanceType(EC2InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCountsHasBeenSet(false)
{
  *this = jsonValue;
}

FleetCapacity& FleetCapacity::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");

    m_fleetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = EC2InstanceTypeMapper::GetEC2InstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCounts"))
  {
    m_instanceCounts = jsonValue.GetObject("InstanceCounts");

    m_instanceCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue FleetCapacity::Jsonize() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", EC2InstanceTypeMapper::GetNameForEC2InstanceType(m_instanceType));
  }

  if(m_instanceCountsHasBeenSet)
  {
   payload.WithObject("InstanceCounts", m_instanceCounts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws