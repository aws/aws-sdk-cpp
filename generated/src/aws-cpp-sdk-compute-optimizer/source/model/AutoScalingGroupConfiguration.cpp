/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/AutoScalingGroupConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

AutoScalingGroupConfiguration::AutoScalingGroupConfiguration() : 
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
{
}

AutoScalingGroupConfiguration::AutoScalingGroupConfiguration(JsonView jsonValue) : 
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingGroupConfiguration& AutoScalingGroupConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("desiredCapacity"))
  {
    m_desiredCapacity = jsonValue.GetInteger("desiredCapacity");

    m_desiredCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minSize"))
  {
    m_minSize = jsonValue.GetInteger("minSize");

    m_minSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxSize"))
  {
    m_maxSize = jsonValue.GetInteger("maxSize");

    m_maxSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingGroupConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_desiredCapacityHasBeenSet)
  {
   payload.WithInteger("desiredCapacity", m_desiredCapacity);

  }

  if(m_minSizeHasBeenSet)
  {
   payload.WithInteger("minSize", m_minSize);

  }

  if(m_maxSizeHasBeenSet)
  {
   payload.WithInteger("maxSize", m_maxSize);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
