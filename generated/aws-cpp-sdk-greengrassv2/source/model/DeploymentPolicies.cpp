/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/DeploymentPolicies.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

DeploymentPolicies::DeploymentPolicies() : 
    m_failureHandlingPolicy(DeploymentFailureHandlingPolicy::NOT_SET),
    m_failureHandlingPolicyHasBeenSet(false),
    m_componentUpdatePolicyHasBeenSet(false),
    m_configurationValidationPolicyHasBeenSet(false)
{
}

DeploymentPolicies::DeploymentPolicies(JsonView jsonValue) : 
    m_failureHandlingPolicy(DeploymentFailureHandlingPolicy::NOT_SET),
    m_failureHandlingPolicyHasBeenSet(false),
    m_componentUpdatePolicyHasBeenSet(false),
    m_configurationValidationPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentPolicies& DeploymentPolicies::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failureHandlingPolicy"))
  {
    m_failureHandlingPolicy = DeploymentFailureHandlingPolicyMapper::GetDeploymentFailureHandlingPolicyForName(jsonValue.GetString("failureHandlingPolicy"));

    m_failureHandlingPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("componentUpdatePolicy"))
  {
    m_componentUpdatePolicy = jsonValue.GetObject("componentUpdatePolicy");

    m_componentUpdatePolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationValidationPolicy"))
  {
    m_configurationValidationPolicy = jsonValue.GetObject("configurationValidationPolicy");

    m_configurationValidationPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue DeploymentPolicies::Jsonize() const
{
  JsonValue payload;

  if(m_failureHandlingPolicyHasBeenSet)
  {
   payload.WithString("failureHandlingPolicy", DeploymentFailureHandlingPolicyMapper::GetNameForDeploymentFailureHandlingPolicy(m_failureHandlingPolicy));
  }

  if(m_componentUpdatePolicyHasBeenSet)
  {
   payload.WithObject("componentUpdatePolicy", m_componentUpdatePolicy.Jsonize());

  }

  if(m_configurationValidationPolicyHasBeenSet)
  {
   payload.WithObject("configurationValidationPolicy", m_configurationValidationPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
