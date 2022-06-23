/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsServiceLoadBalancersDetails.h>
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

AwsEcsServiceLoadBalancersDetails::AwsEcsServiceLoadBalancersDetails() : 
    m_containerNameHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_targetGroupArnHasBeenSet(false)
{
}

AwsEcsServiceLoadBalancersDetails::AwsEcsServiceLoadBalancersDetails(JsonView jsonValue) : 
    m_containerNameHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_targetGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsServiceLoadBalancersDetails& AwsEcsServiceLoadBalancersDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContainerName"))
  {
    m_containerName = jsonValue.GetString("ContainerName");

    m_containerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerPort"))
  {
    m_containerPort = jsonValue.GetInteger("ContainerPort");

    m_containerPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoadBalancerName"))
  {
    m_loadBalancerName = jsonValue.GetString("LoadBalancerName");

    m_loadBalancerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetGroupArn"))
  {
    m_targetGroupArn = jsonValue.GetString("TargetGroupArn");

    m_targetGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsServiceLoadBalancersDetails::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("ContainerName", m_containerName);

  }

  if(m_containerPortHasBeenSet)
  {
   payload.WithInteger("ContainerPort", m_containerPort);

  }

  if(m_loadBalancerNameHasBeenSet)
  {
   payload.WithString("LoadBalancerName", m_loadBalancerName);

  }

  if(m_targetGroupArnHasBeenSet)
  {
   payload.WithString("TargetGroupArn", m_targetGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
