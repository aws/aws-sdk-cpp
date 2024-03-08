/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/AutoScalingPolicy.h>
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

AutoScalingPolicy::AutoScalingPolicy() : 
    m_targetTrackingScalingPolicyConfigurationHasBeenSet(false)
{
}

AutoScalingPolicy::AutoScalingPolicy(JsonView jsonValue) : 
    m_targetTrackingScalingPolicyConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingPolicy& AutoScalingPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetTrackingScalingPolicyConfiguration"))
  {
    m_targetTrackingScalingPolicyConfiguration = jsonValue.GetObject("targetTrackingScalingPolicyConfiguration");

    m_targetTrackingScalingPolicyConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_targetTrackingScalingPolicyConfigurationHasBeenSet)
  {
   payload.WithObject("targetTrackingScalingPolicyConfiguration", m_targetTrackingScalingPolicyConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
