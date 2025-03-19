/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/ContainerStateChange.h>
#include <aws/ecs/model/AttachmentStateChange.h>
#include <aws/ecs/model/ManagedAgentStateChange.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class SubmitTaskStateChangeRequest : public ECSRequest
  {
  public:
    AWS_ECS_API SubmitTaskStateChangeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitTaskStateChange"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    SubmitTaskStateChangeRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task ID or full ARN of the task in the state change request.</p>
     */
    inline const Aws::String& GetTask() const { return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    template<typename TaskT = Aws::String>
    void SetTask(TaskT&& value) { m_taskHasBeenSet = true; m_task = std::forward<TaskT>(value); }
    template<typename TaskT = Aws::String>
    SubmitTaskStateChangeRequest& WithTask(TaskT&& value) { SetTask(std::forward<TaskT>(value)); return *this;}
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
    SubmitTaskStateChangeRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
    SubmitTaskStateChangeRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any containers that's associated with the state change request.</p>
     */
    inline const Aws::Vector<ContainerStateChange>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<ContainerStateChange>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<ContainerStateChange>>
    SubmitTaskStateChangeRequest& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = ContainerStateChange>
    SubmitTaskStateChangeRequest& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline const Aws::Vector<AttachmentStateChange>& GetAttachments() const { return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    template<typename AttachmentsT = Aws::Vector<AttachmentStateChange>>
    void SetAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::forward<AttachmentsT>(value); }
    template<typename AttachmentsT = Aws::Vector<AttachmentStateChange>>
    SubmitTaskStateChangeRequest& WithAttachments(AttachmentsT&& value) { SetAttachments(std::forward<AttachmentsT>(value)); return *this;}
    template<typename AttachmentsT = AttachmentStateChange>
    SubmitTaskStateChangeRequest& AddAttachments(AttachmentsT&& value) { m_attachmentsHasBeenSet = true; m_attachments.emplace_back(std::forward<AttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details for the managed agent that's associated with the task.</p>
     */
    inline const Aws::Vector<ManagedAgentStateChange>& GetManagedAgents() const { return m_managedAgents; }
    inline bool ManagedAgentsHasBeenSet() const { return m_managedAgentsHasBeenSet; }
    template<typename ManagedAgentsT = Aws::Vector<ManagedAgentStateChange>>
    void SetManagedAgents(ManagedAgentsT&& value) { m_managedAgentsHasBeenSet = true; m_managedAgents = std::forward<ManagedAgentsT>(value); }
    template<typename ManagedAgentsT = Aws::Vector<ManagedAgentStateChange>>
    SubmitTaskStateChangeRequest& WithManagedAgents(ManagedAgentsT&& value) { SetManagedAgents(std::forward<ManagedAgentsT>(value)); return *this;}
    template<typename ManagedAgentsT = ManagedAgentStateChange>
    SubmitTaskStateChangeRequest& AddManagedAgents(ManagedAgentsT&& value) { m_managedAgentsHasBeenSet = true; m_managedAgents.emplace_back(std::forward<ManagedAgentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the container image pull started.</p>
     */
    inline const Aws::Utils::DateTime& GetPullStartedAt() const { return m_pullStartedAt; }
    inline bool PullStartedAtHasBeenSet() const { return m_pullStartedAtHasBeenSet; }
    template<typename PullStartedAtT = Aws::Utils::DateTime>
    void SetPullStartedAt(PullStartedAtT&& value) { m_pullStartedAtHasBeenSet = true; m_pullStartedAt = std::forward<PullStartedAtT>(value); }
    template<typename PullStartedAtT = Aws::Utils::DateTime>
    SubmitTaskStateChangeRequest& WithPullStartedAt(PullStartedAtT&& value) { SetPullStartedAt(std::forward<PullStartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the container image pull completed.</p>
     */
    inline const Aws::Utils::DateTime& GetPullStoppedAt() const { return m_pullStoppedAt; }
    inline bool PullStoppedAtHasBeenSet() const { return m_pullStoppedAtHasBeenSet; }
    template<typename PullStoppedAtT = Aws::Utils::DateTime>
    void SetPullStoppedAt(PullStoppedAtT&& value) { m_pullStoppedAtHasBeenSet = true; m_pullStoppedAt = std::forward<PullStoppedAtT>(value); }
    template<typename PullStoppedAtT = Aws::Utils::DateTime>
    SubmitTaskStateChangeRequest& WithPullStoppedAt(PullStoppedAtT&& value) { SetPullStoppedAt(std::forward<PullStoppedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task execution stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStoppedAt() const { return m_executionStoppedAt; }
    inline bool ExecutionStoppedAtHasBeenSet() const { return m_executionStoppedAtHasBeenSet; }
    template<typename ExecutionStoppedAtT = Aws::Utils::DateTime>
    void SetExecutionStoppedAt(ExecutionStoppedAtT&& value) { m_executionStoppedAtHasBeenSet = true; m_executionStoppedAt = std::forward<ExecutionStoppedAtT>(value); }
    template<typename ExecutionStoppedAtT = Aws::Utils::DateTime>
    SubmitTaskStateChangeRequest& WithExecutionStoppedAt(ExecutionStoppedAtT&& value) { SetExecutionStoppedAt(std::forward<ExecutionStoppedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_task;
    bool m_taskHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<ContainerStateChange> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::Vector<AttachmentStateChange> m_attachments;
    bool m_attachmentsHasBeenSet = false;

    Aws::Vector<ManagedAgentStateChange> m_managedAgents;
    bool m_managedAgentsHasBeenSet = false;

    Aws::Utils::DateTime m_pullStartedAt{};
    bool m_pullStartedAtHasBeenSet = false;

    Aws::Utils::DateTime m_pullStoppedAt{};
    bool m_pullStoppedAtHasBeenSet = false;

    Aws::Utils::DateTime m_executionStoppedAt{};
    bool m_executionStoppedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
