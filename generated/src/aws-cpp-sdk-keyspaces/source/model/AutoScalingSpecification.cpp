/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/AutoScalingSpecification.h>
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

AutoScalingSpecification::AutoScalingSpecification() : 
    m_writeCapacityAutoScalingHasBeenSet(false),
    m_readCapacityAutoScalingHasBeenSet(false)
{
}

AutoScalingSpecification::AutoScalingSpecification(JsonView jsonValue) : 
    m_writeCapacityAutoScalingHasBeenSet(false),
    m_readCapacityAutoScalingHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingSpecification& AutoScalingSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("writeCapacityAutoScaling"))
  {
    m_writeCapacityAutoScaling = jsonValue.GetObject("writeCapacityAutoScaling");

    m_writeCapacityAutoScalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readCapacityAutoScaling"))
  {
    m_readCapacityAutoScaling = jsonValue.GetObject("readCapacityAutoScaling");

    m_readCapacityAutoScalingHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_writeCapacityAutoScalingHasBeenSet)
  {
   payload.WithObject("writeCapacityAutoScaling", m_writeCapacityAutoScaling.Jsonize());

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
