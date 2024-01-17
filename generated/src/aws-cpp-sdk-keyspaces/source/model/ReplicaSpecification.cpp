/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/ReplicaSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

ReplicaSpecification::ReplicaSpecification() : 
    m_regionHasBeenSet(false),
    m_readCapacityUnits(0),
    m_readCapacityUnitsHasBeenSet(false),
    m_readCapacityAutoScalingHasBeenSet(false)
{
}

ReplicaSpecification::ReplicaSpecification(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_readCapacityUnits(0),
    m_readCapacityUnitsHasBeenSet(false),
    m_readCapacityAutoScalingHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicaSpecification& ReplicaSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readCapacityUnits"))
  {
    m_readCapacityUnits = jsonValue.GetInt64("readCapacityUnits");

    m_readCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readCapacityAutoScaling"))
  {
    m_readCapacityAutoScaling = jsonValue.GetObject("readCapacityAutoScaling");

    m_readCapacityAutoScalingHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicaSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_readCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("readCapacityUnits", m_readCapacityUnits);

  }

  if(m_readCapacityAutoScalingHasBeenSet)
  {
   payload.WithObject("readCapacityAutoScaling", m_readCapacityAutoScaling.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
