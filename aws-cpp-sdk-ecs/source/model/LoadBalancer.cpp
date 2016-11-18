/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

LoadBalancer::LoadBalancer() : 
    m_targetGroupArnHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false)
{
}

LoadBalancer::LoadBalancer(const JsonValue& jsonValue) : 
    m_targetGroupArnHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_containerPort(0),
    m_containerPortHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancer& LoadBalancer::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws