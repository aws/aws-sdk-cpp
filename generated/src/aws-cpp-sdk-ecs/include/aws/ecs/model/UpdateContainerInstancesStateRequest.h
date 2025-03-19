/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateContainerInstancesStateRequest : public ECSRequest
  {
  public:
    AWS_ECS_API UpdateContainerInstancesStateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContainerInstancesState"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to update. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    UpdateContainerInstancesStateRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 10 container instance IDs or full ARN entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerInstances() const { return m_containerInstances; }
    inline bool ContainerInstancesHasBeenSet() const { return m_containerInstancesHasBeenSet; }
    template<typename ContainerInstancesT = Aws::Vector<Aws::String>>
    void SetContainerInstances(ContainerInstancesT&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances = std::forward<ContainerInstancesT>(value); }
    template<typename ContainerInstancesT = Aws::Vector<Aws::String>>
    UpdateContainerInstancesStateRequest& WithContainerInstances(ContainerInstancesT&& value) { SetContainerInstances(std::forward<ContainerInstancesT>(value)); return *this;}
    template<typename ContainerInstancesT = Aws::String>
    UpdateContainerInstancesStateRequest& AddContainerInstances(ContainerInstancesT&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances.emplace_back(std::forward<ContainerInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The container instance state to update the container instance with. The only
     * valid values for this action are <code>ACTIVE</code> and <code>DRAINING</code>.
     * A container instance can only be updated to <code>DRAINING</code> status once it
     * has reached an <code>ACTIVE</code> state. If a container instance is in
     * <code>REGISTERING</code>, <code>DEREGISTERING</code>, or
     * <code>REGISTRATION_FAILED</code> state you can describe the container instance
     * but can't update the container instance state.</p>
     */
    inline ContainerInstanceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ContainerInstanceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateContainerInstancesStateRequest& WithStatus(ContainerInstanceStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::Vector<Aws::String> m_containerInstances;
    bool m_containerInstancesHasBeenSet = false;

    ContainerInstanceStatus m_status{ContainerInstanceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
