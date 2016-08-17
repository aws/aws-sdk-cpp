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
#include <aws/ecs/model/Cluster.h>
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

Cluster::Cluster() : 
    m_clusterArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_registeredContainerInstancesCount(0),
    m_registeredContainerInstancesCountHasBeenSet(false),
    m_runningTasksCount(0),
    m_runningTasksCountHasBeenSet(false),
    m_pendingTasksCount(0),
    m_pendingTasksCountHasBeenSet(false),
    m_activeServicesCount(0),
    m_activeServicesCountHasBeenSet(false)
{
}

Cluster::Cluster(const JsonValue& jsonValue) : 
    m_clusterArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_registeredContainerInstancesCount(0),
    m_registeredContainerInstancesCountHasBeenSet(false),
    m_runningTasksCount(0),
    m_runningTasksCountHasBeenSet(false),
    m_pendingTasksCount(0),
    m_pendingTasksCountHasBeenSet(false),
    m_activeServicesCount(0),
    m_activeServicesCountHasBeenSet(false)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredContainerInstancesCount"))
  {
    m_registeredContainerInstancesCount = jsonValue.GetInteger("registeredContainerInstancesCount");

    m_registeredContainerInstancesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runningTasksCount"))
  {
    m_runningTasksCount = jsonValue.GetInteger("runningTasksCount");

    m_runningTasksCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingTasksCount"))
  {
    m_pendingTasksCount = jsonValue.GetInteger("pendingTasksCount");

    m_pendingTasksCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeServicesCount"))
  {
    m_activeServicesCount = jsonValue.GetInteger("activeServicesCount");

    m_activeServicesCountHasBeenSet = true;
  }

  return *this;
}

JsonValue Cluster::Jsonize() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_registeredContainerInstancesCountHasBeenSet)
  {
   payload.WithInteger("registeredContainerInstancesCount", m_registeredContainerInstancesCount);

  }

  if(m_runningTasksCountHasBeenSet)
  {
   payload.WithInteger("runningTasksCount", m_runningTasksCount);

  }

  if(m_pendingTasksCountHasBeenSet)
  {
   payload.WithInteger("pendingTasksCount", m_pendingTasksCount);

  }

  if(m_activeServicesCountHasBeenSet)
  {
   payload.WithInteger("activeServicesCount", m_activeServicesCount);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws