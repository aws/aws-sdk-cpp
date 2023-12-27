/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxScalingGroupConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxScalingGroupConfiguration::KxScalingGroupConfiguration() : 
    m_scalingGroupNameHasBeenSet(false),
    m_memoryLimit(0),
    m_memoryLimitHasBeenSet(false),
    m_memoryReservation(0),
    m_memoryReservationHasBeenSet(false),
    m_nodeCount(0),
    m_nodeCountHasBeenSet(false),
    m_cpu(0.0),
    m_cpuHasBeenSet(false)
{
}

KxScalingGroupConfiguration::KxScalingGroupConfiguration(JsonView jsonValue) : 
    m_scalingGroupNameHasBeenSet(false),
    m_memoryLimit(0),
    m_memoryLimitHasBeenSet(false),
    m_memoryReservation(0),
    m_memoryReservationHasBeenSet(false),
    m_nodeCount(0),
    m_nodeCountHasBeenSet(false),
    m_cpu(0.0),
    m_cpuHasBeenSet(false)
{
  *this = jsonValue;
}

KxScalingGroupConfiguration& KxScalingGroupConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scalingGroupName"))
  {
    m_scalingGroupName = jsonValue.GetString("scalingGroupName");

    m_scalingGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memoryLimit"))
  {
    m_memoryLimit = jsonValue.GetInteger("memoryLimit");

    m_memoryLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memoryReservation"))
  {
    m_memoryReservation = jsonValue.GetInteger("memoryReservation");

    m_memoryReservationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodeCount"))
  {
    m_nodeCount = jsonValue.GetInteger("nodeCount");

    m_nodeCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetDouble("cpu");

    m_cpuHasBeenSet = true;
  }

  return *this;
}

JsonValue KxScalingGroupConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_scalingGroupNameHasBeenSet)
  {
   payload.WithString("scalingGroupName", m_scalingGroupName);

  }

  if(m_memoryLimitHasBeenSet)
  {
   payload.WithInteger("memoryLimit", m_memoryLimit);

  }

  if(m_memoryReservationHasBeenSet)
  {
   payload.WithInteger("memoryReservation", m_memoryReservation);

  }

  if(m_nodeCountHasBeenSet)
  {
   payload.WithInteger("nodeCount", m_nodeCount);

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithDouble("cpu", m_cpu);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
