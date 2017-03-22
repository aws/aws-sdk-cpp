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
#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/ContainerInstanceStatus.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API UpdateContainerInstancesStateRequest : public ECSRequest
  {
  public:
    UpdateContainerInstancesStateRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to update. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to update. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to update. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to update. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to update. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline UpdateContainerInstancesStateRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to update. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline UpdateContainerInstancesStateRequest& WithCluster(Aws::String&& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to update. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline UpdateContainerInstancesStateRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerInstances() const{ return m_containerInstances; }

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline void SetContainerInstances(const Aws::Vector<Aws::String>& value) { m_containerInstancesHasBeenSet = true; m_containerInstances = value; }

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline void SetContainerInstances(Aws::Vector<Aws::String>&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances = value; }

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline UpdateContainerInstancesStateRequest& WithContainerInstances(const Aws::Vector<Aws::String>& value) { SetContainerInstances(value); return *this;}

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline UpdateContainerInstancesStateRequest& WithContainerInstances(Aws::Vector<Aws::String>&& value) { SetContainerInstances(value); return *this;}

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline UpdateContainerInstancesStateRequest& AddContainerInstances(const Aws::String& value) { m_containerInstancesHasBeenSet = true; m_containerInstances.push_back(value); return *this; }

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline UpdateContainerInstancesStateRequest& AddContainerInstances(Aws::String&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances.push_back(value); return *this; }

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline UpdateContainerInstancesStateRequest& AddContainerInstances(const char* value) { m_containerInstancesHasBeenSet = true; m_containerInstances.push_back(value); return *this; }

    /**
     * <p>The container instance state with which to update the container instance.</p>
     */
    inline const ContainerInstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The container instance state with which to update the container instance.</p>
     */
    inline void SetStatus(const ContainerInstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The container instance state with which to update the container instance.</p>
     */
    inline void SetStatus(ContainerInstanceStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The container instance state with which to update the container instance.</p>
     */
    inline UpdateContainerInstancesStateRequest& WithStatus(const ContainerInstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The container instance state with which to update the container instance.</p>
     */
    inline UpdateContainerInstancesStateRequest& WithStatus(ContainerInstanceStatus&& value) { SetStatus(value); return *this;}

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::Vector<Aws::String> m_containerInstances;
    bool m_containerInstancesHasBeenSet;
    ContainerInstanceStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
