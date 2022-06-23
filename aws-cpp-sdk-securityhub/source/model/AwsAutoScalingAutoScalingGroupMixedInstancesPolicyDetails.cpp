/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails::AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails() : 
    m_instancesDistributionHasBeenSet(false),
    m_launchTemplateHasBeenSet(false)
{
}

AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails::AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails(JsonView jsonValue) : 
    m_instancesDistributionHasBeenSet(false),
    m_launchTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails& AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstancesDistribution"))
  {
    m_instancesDistribution = jsonValue.GetObject("InstancesDistribution");

    m_instancesDistributionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchTemplate"))
  {
    m_launchTemplate = jsonValue.GetObject("LaunchTemplate");

    m_launchTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsAutoScalingAutoScalingGroupMixedInstancesPolicyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_instancesDistributionHasBeenSet)
  {
   payload.WithObject("InstancesDistribution", m_instancesDistribution.Jsonize());

  }

  if(m_launchTemplateHasBeenSet)
  {
   payload.WithObject("LaunchTemplate", m_launchTemplate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
