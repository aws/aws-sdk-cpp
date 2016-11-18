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
#include <aws/opsworks/model/EcsCluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

EcsCluster::EcsCluster() : 
    m_ecsClusterArnHasBeenSet(false),
    m_ecsClusterNameHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_registeredAtHasBeenSet(false)
{
}

EcsCluster::EcsCluster(const JsonValue& jsonValue) : 
    m_ecsClusterArnHasBeenSet(false),
    m_ecsClusterNameHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_registeredAtHasBeenSet(false)
{
  *this = jsonValue;
}

EcsCluster& EcsCluster::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EcsClusterArn"))
  {
    m_ecsClusterArn = jsonValue.GetString("EcsClusterArn");

    m_ecsClusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EcsClusterName"))
  {
    m_ecsClusterName = jsonValue.GetString("EcsClusterName");

    m_ecsClusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StackId"))
  {
    m_stackId = jsonValue.GetString("StackId");

    m_stackIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegisteredAt"))
  {
    m_registeredAt = jsonValue.GetString("RegisteredAt");

    m_registeredAtHasBeenSet = true;
  }

  return *this;
}

JsonValue EcsCluster::Jsonize() const
{
  JsonValue payload;

  if(m_ecsClusterArnHasBeenSet)
  {
   payload.WithString("EcsClusterArn", m_ecsClusterArn);

  }

  if(m_ecsClusterNameHasBeenSet)
  {
   payload.WithString("EcsClusterName", m_ecsClusterName);

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_registeredAtHasBeenSet)
  {
   payload.WithString("RegisteredAt", m_registeredAt);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws