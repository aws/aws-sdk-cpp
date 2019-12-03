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
