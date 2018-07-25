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
