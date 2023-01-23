/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/AutoScalingPolicyDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

AutoScalingPolicyDescription::AutoScalingPolicyDescription() : 
    m_policyNameHasBeenSet(false),
    m_targetTrackingScalingPolicyConfigurationHasBeenSet(false)
{
}

AutoScalingPolicyDescription::AutoScalingPolicyDescription(JsonView jsonValue) : 
    m_policyNameHasBeenSet(false),
    m_targetTrackingScalingPolicyConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingPolicyDescription& AutoScalingPolicyDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyName"))
  {
    m_policyName = jsonValue.GetString("PolicyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTrackingScalingPolicyConfiguration"))
  {
    m_targetTrackingScalingPolicyConfiguration = jsonValue.GetObject("TargetTrackingScalingPolicyConfiguration");

    m_targetTrackingScalingPolicyConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingPolicyDescription::Jsonize() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("PolicyName", m_policyName);

  }

  if(m_targetTrackingScalingPolicyConfigurationHasBeenSet)
  {
   payload.WithObject("TargetTrackingScalingPolicyConfiguration", m_targetTrackingScalingPolicyConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
