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
