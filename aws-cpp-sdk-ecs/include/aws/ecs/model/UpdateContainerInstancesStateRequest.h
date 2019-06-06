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

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/ContainerInstanceStatus.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContainerInstancesState"; }

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
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

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
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

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
    inline UpdateContainerInstancesStateRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to update. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline UpdateContainerInstancesStateRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>A list of container instance IDs or full ARN entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerInstances() const{ return m_containerInstances; }

    /**
     * <p>A list of container instance IDs or full ARN entries.</p>
     */
    inline bool ContainerInstancesHasBeenSet() const { return m_containerInstancesHasBeenSet; }

    /**
     * <p>A list of container instance IDs or full ARN entries.</p>
     */
    inline void SetContainerInstances(const Aws::Vector<Aws::String>& value) { m_containerInstancesHasBeenSet = true; m_containerInstances = value; }

    /**
     * <p>A list of container instance IDs or full ARN entries.</p>
     */
    inline void SetContainerInstances(Aws::Vector<Aws::String>&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances = std::move(value); }

    /**
     * <p>A list of container instance IDs or full ARN entries.</p>
     */
    inline UpdateContainerInstancesStateRequest& WithContainerInstances(const Aws::Vector<Aws::String>& value) { SetContainerInstances(value); return *this;}

    /**
     * <p>A list of container instance IDs or full ARN entries.</p>
     */
    inline UpdateContainerInstancesStateRequest& WithContainerInstances(Aws::Vector<Aws::String>&& value) { SetContainerInstances(std::move(value)); return *this;}

    /**
     * <p>A list of container instance IDs or full ARN entries.</p>
     */
    inline UpdateContainerInstancesStateRequest& AddContainerInstances(const Aws::String& value) { m_containerInstancesHasBeenSet = true; m_containerInstances.push_back(value); return *this; }

    /**
     * <p>A list of container instance IDs or full ARN entries.</p>
     */
    inline UpdateContainerInstancesStateRequest& AddContainerInstances(Aws::String&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of container instance IDs or full ARN entries.</p>
     */
    inline UpdateContainerInstancesStateRequest& AddContainerInstances(const char* value) { m_containerInstancesHasBeenSet = true; m_containerInstances.push_back(value); return *this; }


    /**
     * <p>The container instance state with which to update the container instance. The
     * only valid values for this action are <code>ACTIVE</code> and
     * <code>DRAINING</code>. A container instance can only be updated to
     * <code>DRAINING</code> status once it has reached an <code>ACTIVE</code> state.
     * If a container instance is in <code>REGISTERING</code>,
     * <code>DEREGISTERING</code>, or <code>REGISTRATION_FAILED</code> state you can
     * describe the container instance but will be unable to update the container
     * instance state.</p>
     */
    inline const ContainerInstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The container instance state with which to update the container instance. The
     * only valid values for this action are <code>ACTIVE</code> and
     * <code>DRAINING</code>. A container instance can only be updated to
     * <code>DRAINING</code> status once it has reached an <code>ACTIVE</code> state.
     * If a container instance is in <code>REGISTERING</code>,
     * <code>DEREGISTERING</code>, or <code>REGISTRATION_FAILED</code> state you can
     * describe the container instance but will be unable to update the container
     * instance state.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The container instance state with which to update the container instance. The
     * only valid values for this action are <code>ACTIVE</code> and
     * <code>DRAINING</code>. A container instance can only be updated to
     * <code>DRAINING</code> status once it has reached an <code>ACTIVE</code> state.
     * If a container instance is in <code>REGISTERING</code>,
     * <code>DEREGISTERING</code>, or <code>REGISTRATION_FAILED</code> state you can
     * describe the container instance but will be unable to update the container
     * instance state.</p>
     */
    inline void SetStatus(const ContainerInstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The container instance state with which to update the container instance. The
     * only valid values for this action are <code>ACTIVE</code> and
     * <code>DRAINING</code>. A container instance can only be updated to
     * <code>DRAINING</code> status once it has reached an <code>ACTIVE</code> state.
     * If a container instance is in <code>REGISTERING</code>,
     * <code>DEREGISTERING</code>, or <code>REGISTRATION_FAILED</code> state you can
     * describe the container instance but will be unable to update the container
     * instance state.</p>
     */
    inline void SetStatus(ContainerInstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The container instance state with which to update the container instance. The
     * only valid values for this action are <code>ACTIVE</code> and
     * <code>DRAINING</code>. A container instance can only be updated to
     * <code>DRAINING</code> status once it has reached an <code>ACTIVE</code> state.
     * If a container instance is in <code>REGISTERING</code>,
     * <code>DEREGISTERING</code>, or <code>REGISTRATION_FAILED</code> state you can
     * describe the container instance but will be unable to update the container
     * instance state.</p>
     */
    inline UpdateContainerInstancesStateRequest& WithStatus(const ContainerInstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The container instance state with which to update the container instance. The
     * only valid values for this action are <code>ACTIVE</code> and
     * <code>DRAINING</code>. A container instance can only be updated to
     * <code>DRAINING</code> status once it has reached an <code>ACTIVE</code> state.
     * If a container instance is in <code>REGISTERING</code>,
     * <code>DEREGISTERING</code>, or <code>REGISTRATION_FAILED</code> state you can
     * describe the container instance but will be unable to update the container
     * instance state.</p>
     */
    inline UpdateContainerInstancesStateRequest& WithStatus(ContainerInstanceStatus&& value) { SetStatus(std::move(value)); return *this;}

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
