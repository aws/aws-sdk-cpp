/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CapacityDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

CapacityDescription::CapacityDescription() : 
    m_autoScalingHasBeenSet(false),
    m_provisionedCapacityHasBeenSet(false)
{
}

CapacityDescription::CapacityDescription(JsonView jsonValue) : 
    m_autoScalingHasBeenSet(false),
    m_provisionedCapacityHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityDescription& CapacityDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("autoScaling"))
  {
    m_autoScaling = jsonValue.GetObject("autoScaling");

    m_autoScalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provisionedCapacity"))
  {
    m_provisionedCapacity = jsonValue.GetObject("provisionedCapacity");

    m_provisionedCapacityHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityDescription::Jsonize() const
{
  JsonValue payload;

  if(m_autoScalingHasBeenSet)
  {
   payload.WithObject("autoScaling", m_autoScaling.Jsonize());

  }

  if(m_provisionedCapacityHasBeenSet)
  {
   payload.WithObject("provisionedCapacity", m_provisionedCapacity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
