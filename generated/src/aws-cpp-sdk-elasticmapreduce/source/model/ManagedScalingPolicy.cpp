/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ManagedScalingPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

ManagedScalingPolicy::ManagedScalingPolicy() : 
    m_computeLimitsHasBeenSet(false)
{
}

ManagedScalingPolicy::ManagedScalingPolicy(JsonView jsonValue) : 
    m_computeLimitsHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedScalingPolicy& ManagedScalingPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComputeLimits"))
  {
    m_computeLimits = jsonValue.GetObject("ComputeLimits");

    m_computeLimitsHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedScalingPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_computeLimitsHasBeenSet)
  {
   payload.WithObject("ComputeLimits", m_computeLimits.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
