﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_fleetArnHasBeenSet(false),
    m_instanceType(EC2InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCountsHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

FleetCapacity::FleetCapacity(JsonView jsonValue) : 
    m_fleetIdHasBeenSet(false),
    m_fleetArnHasBeenSet(false),
    m_instanceType(EC2InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCountsHasBeenSet(false),
    m_locationHasBeenSet(false)
{
  *this = jsonValue;
}

FleetCapacity& FleetCapacity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FleetId"))
  {
    m_fleetId = jsonValue.GetString("FleetId");

    m_fleetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FleetArn"))
  {
    m_fleetArn = jsonValue.GetString("FleetArn");

    m_fleetArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");

    m_locationHasBeenSet = true;
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

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", EC2InstanceTypeMapper::GetNameForEC2InstanceType(m_instanceType));
  }

  if(m_instanceCountsHasBeenSet)
  {
   payload.WithObject("InstanceCounts", m_instanceCounts.Jsonize());

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
