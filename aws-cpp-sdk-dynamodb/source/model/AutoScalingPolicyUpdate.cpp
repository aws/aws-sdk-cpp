/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/AutoScalingPolicyUpdate.h>
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

AutoScalingPolicyUpdate::AutoScalingPolicyUpdate() : 
    m_policyNameHasBeenSet(false),
    m_targetTrackingScalingPolicyConfigurationHasBeenSet(false)
{
}

AutoScalingPolicyUpdate::AutoScalingPolicyUpdate(JsonView jsonValue) : 
    m_policyNameHasBeenSet(false),
    m_targetTrackingScalingPolicyConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingPolicyUpdate& AutoScalingPolicyUpdate::operator =(JsonView jsonValue)
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

JsonValue AutoScalingPolicyUpdate::Jsonize() const
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
