/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/NetworkBinding.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class SubmitContainerStateChangeRequest : public ECSRequest
  {
  public:
    AWS_ECS_API SubmitContainerStateChangeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitContainerStateChange"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full ARN of the cluster that hosts the container.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    SubmitContainerStateChangeRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task that hosts the
     * container.</p>
     */
    inline const Aws::String& GetTask() const { return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    template<typename TaskT = Aws::String>
    void SetTask(TaskT&& value) { m_taskHasBeenSet = true; m_task = std::forward<TaskT>(value); }
    template<typename TaskT = Aws::String>
    SubmitContainerStateChangeRequest& WithTask(TaskT&& value) { SetTask(std::forward<TaskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetContainerName() const { return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    template<typename ContainerNameT = Aws::String>
    void SetContainerName(ContainerNameT&& value) { m_containerNameHasBeenSet = true; m_containerName = std::forward<ContainerNameT>(value); }
    template<typename ContainerNameT = Aws::String>
    SubmitContainerStateChangeRequest& WithContainerName(ContainerNameT&& value) { SetContainerName(std::forward<ContainerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Docker container.</p>
     */
    inline const Aws::String& GetRuntimeId() const { return m_runtimeId; }
    inline bool RuntimeIdHasBeenSet() const { return m_runtimeIdHasBeenSet; }
    template<typename RuntimeIdT = Aws::String>
    void SetRuntimeId(RuntimeIdT&& value) { m_runtimeIdHasBeenSet = true; m_runtimeId = std::forward<RuntimeIdT>(value); }
    template<typename RuntimeIdT = Aws::String>
    SubmitContainerStateChangeRequest& WithRuntimeId(RuntimeIdT&& value) { SetRuntimeId(std::forward<RuntimeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the state change request.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    SubmitContainerStateChangeRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exit code that's returned for the state change request.</p>
     */
    inline int GetExitCode() const { return m_exitCode; }
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }
    inline SubmitContainerStateChangeRequest& WithExitCode(int value) { SetExitCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the state change request.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    SubmitContainerStateChangeRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network bindings of the container.</p>
     */
    inline const Aws::Vector<NetworkBinding>& GetNetworkBindings() const { return m_networkBindings; }
    inline bool NetworkBindingsHasBeenSet() const { return m_networkBindingsHasBeenSet; }
    template<typename NetworkBindingsT = Aws::Vector<NetworkBinding>>
    void SetNetworkBindings(NetworkBindingsT&& value) { m_networkBindingsHasBeenSet = true; m_networkBindings = std::forward<NetworkBindingsT>(value); }
    template<typename NetworkBindingsT = Aws::Vector<NetworkBinding>>
    SubmitContainerStateChangeRequest& WithNetworkBindings(NetworkBindingsT&& value) { SetNetworkBindings(std::forward<NetworkBindingsT>(value)); return *this;}
    template<typename NetworkBindingsT = NetworkBinding>
    SubmitContainerStateChangeRequest& AddNetworkBindings(NetworkBindingsT&& value) { m_networkBindingsHasBeenSet = true; m_networkBindings.emplace_back(std::forward<NetworkBindingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_task;
    bool m_taskHasBeenSet = false;

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    Aws::String m_runtimeId;
    bool m_runtimeIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    int m_exitCode{0};
    bool m_exitCodeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<NetworkBinding> m_networkBindings;
    bool m_networkBindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
