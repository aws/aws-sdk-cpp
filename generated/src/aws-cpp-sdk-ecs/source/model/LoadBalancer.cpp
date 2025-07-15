/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/LoadBalancer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

LoadBalancer::LoadBalancer(JsonView jsonValue)
{
  *this = jsonValue;
}

LoadBalancer& LoadBalancer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("targetGroupArn"))
  {
    m_targetGroupArn = jsonValue.GetString("targetGroupArn");
    m_targetGroupArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("loadBalancerName"))
  {
    m_loadBalancerName = jsonValue.GetString("loadBalancerName");
    m_loadBalancerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("containerName"))
  {
    m_containerName = jsonValue.GetString("containerName");
    m_containerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("containerPort"))
  {
    m_containerPort = jsonValue.GetInteger("containerPort");
    m_containerPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("advancedConfiguration"))
  {
    m_advancedConfiguration = jsonValue.GetObject("advancedConfiguration");
    m_advancedConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue LoadBalancer::Jsonize() const
{
  JsonValue payload;

  if(m_targetGroupArnHasBeenSet)
  {
   payload.WithString("targetGroupArn", m_targetGroupArn);

  }

  if(m_loadBalancerNameHasBeenSet)
  {
   payload.WithString("loadBalancerName", m_loadBalancerName);

  }

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("containerName", m_containerName);

  }

  if(m_containerPortHasBeenSet)
  {
   payload.WithInteger("containerPort", m_containerPort);

  }

  if(m_advancedConfigurationHasBeenSet)
  {
   payload.WithObject("advancedConfiguration", m_advancedConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
