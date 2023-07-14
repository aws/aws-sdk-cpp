/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/ScalingPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{

ScalingPolicy::ScalingPolicy() : 
    m_policyNameHasBeenSet(false),
    m_policyType(PolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_targetTrackingConfigurationHasBeenSet(false)
{
}

ScalingPolicy::ScalingPolicy(JsonView jsonValue) : 
    m_policyNameHasBeenSet(false),
    m_policyType(PolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_targetTrackingConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ScalingPolicy& ScalingPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyName"))
  {
    m_policyName = jsonValue.GetString("PolicyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyType"))
  {
    m_policyType = PolicyTypeMapper::GetPolicyTypeForName(jsonValue.GetString("PolicyType"));

    m_policyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTrackingConfiguration"))
  {
    m_targetTrackingConfiguration = jsonValue.GetObject("TargetTrackingConfiguration");

    m_targetTrackingConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ScalingPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", PolicyTypeMapper::GetNameForPolicyType(m_policyType));
  }

  if(m_targetTrackingConfigurationHasBeenSet)
  {
   payload.WithObject("TargetTrackingConfiguration", m_targetTrackingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
