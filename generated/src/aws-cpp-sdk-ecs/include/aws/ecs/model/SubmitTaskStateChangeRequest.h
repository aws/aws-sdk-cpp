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
    AWS_ECS_API SubmitTaskStateChangeRequest();

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
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }
    inline SubmitTaskStateChangeRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}
    inline SubmitTaskStateChangeRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}
    inline SubmitTaskStateChangeRequest& WithCluster(const char* value) { SetCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task ID or full ARN of the task in the state change request.</p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }
    inline SubmitTaskStateChangeRequest& WithTask(const Aws::String& value) { SetTask(value); return *this;}
    inline SubmitTaskStateChangeRequest& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}
    inline SubmitTaskStateChangeRequest& WithTask(const char* value) { SetTask(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the state change request.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline SubmitTaskStateChangeRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline SubmitTaskStateChangeRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline SubmitTaskStateChangeRequest& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the state change request.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline SubmitTaskStateChangeRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline SubmitTaskStateChangeRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline SubmitTaskStateChangeRequest& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any containers that's associated with the state change request.</p>
     */
    inline const Aws::Vector<ContainerStateChange>& GetContainers() const{ return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    inline void SetContainers(const Aws::Vector<ContainerStateChange>& value) { m_containersHasBeenSet = true; m_containers = value; }
    inline void SetContainers(Aws::Vector<ContainerStateChange>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }
    inline SubmitTaskStateChangeRequest& WithContainers(const Aws::Vector<ContainerStateChange>& value) { SetContainers(value); return *this;}
    inline SubmitTaskStateChangeRequest& WithContainers(Aws::Vector<ContainerStateChange>&& value) { SetContainers(std::move(value)); return *this;}
    inline SubmitTaskStateChangeRequest& AddContainers(const ContainerStateChange& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }
    inline SubmitTaskStateChangeRequest& AddContainers(ContainerStateChange&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline const Aws::Vector<AttachmentStateChange>& GetAttachments() const{ return m_attachments; }
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }
    inline void SetAttachments(const Aws::Vector<AttachmentStateChange>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }
    inline void SetAttachments(Aws::Vector<AttachmentStateChange>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }
    inline SubmitTaskStateChangeRequest& WithAttachments(const Aws::Vector<AttachmentStateChange>& value) { SetAttachments(value); return *this;}
    inline SubmitTaskStateChangeRequest& WithAttachments(Aws::Vector<AttachmentStateChange>&& value) { SetAttachments(std::move(value)); return *this;}
    inline SubmitTaskStateChangeRequest& AddAttachments(const AttachmentStateChange& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }
    inline SubmitTaskStateChangeRequest& AddAttachments(AttachmentStateChange&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details for the managed agent that's associated with the task.</p>
     */
    inline const Aws::Vector<ManagedAgentStateChange>& GetManagedAgents() const{ return m_managedAgents; }
    inline bool ManagedAgentsHasBeenSet() const { return m_managedAgentsHasBeenSet; }
    inline void SetManagedAgents(const Aws::Vector<ManagedAgentStateChange>& value) { m_managedAgentsHasBeenSet = true; m_managedAgents = value; }
    inline void SetManagedAgents(Aws::Vector<ManagedAgentStateChange>&& value) { m_managedAgentsHasBeenSet = true; m_managedAgents = std::move(value); }
    inline SubmitTaskStateChangeRequest& WithManagedAgents(const Aws::Vector<ManagedAgentStateChange>& value) { SetManagedAgents(value); return *this;}
    inline SubmitTaskStateChangeRequest& WithManagedAgents(Aws::Vector<ManagedAgentStateChange>&& value) { SetManagedAgents(std::move(value)); return *this;}
    inline SubmitTaskStateChangeRequest& AddManagedAgents(const ManagedAgentStateChange& value) { m_managedAgentsHasBeenSet = true; m_managedAgents.push_back(value); return *this; }
    inline SubmitTaskStateChangeRequest& AddManagedAgents(ManagedAgentStateChange&& value) { m_managedAgentsHasBeenSet = true; m_managedAgents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the container image pull started.</p>
     */
    inline const Aws::Utils::DateTime& GetPullStartedAt() const{ return m_pullStartedAt; }
    inline bool PullStartedAtHasBeenSet() const { return m_pullStartedAtHasBeenSet; }
    inline void SetPullStartedAt(const Aws::Utils::DateTime& value) { m_pullStartedAtHasBeenSet = true; m_pullStartedAt = value; }
    inline void SetPullStartedAt(Aws::Utils::DateTime&& value) { m_pullStartedAtHasBeenSet = true; m_pullStartedAt = std::move(value); }
    inline SubmitTaskStateChangeRequest& WithPullStartedAt(const Aws::Utils::DateTime& value) { SetPullStartedAt(value); return *this;}
    inline SubmitTaskStateChangeRequest& WithPullStartedAt(Aws::Utils::DateTime&& value) { SetPullStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the container image pull completed.</p>
     */
    inline const Aws::Utils::DateTime& GetPullStoppedAt() const{ return m_pullStoppedAt; }
    inline bool PullStoppedAtHasBeenSet() const { return m_pullStoppedAtHasBeenSet; }
    inline void SetPullStoppedAt(const Aws::Utils::DateTime& value) { m_pullStoppedAtHasBeenSet = true; m_pullStoppedAt = value; }
    inline void SetPullStoppedAt(Aws::Utils::DateTime&& value) { m_pullStoppedAtHasBeenSet = true; m_pullStoppedAt = std::move(value); }
    inline SubmitTaskStateChangeRequest& WithPullStoppedAt(const Aws::Utils::DateTime& value) { SetPullStoppedAt(value); return *this;}
    inline SubmitTaskStateChangeRequest& WithPullStoppedAt(Aws::Utils::DateTime&& value) { SetPullStoppedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for the time when the task execution stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStoppedAt() const{ return m_executionStoppedAt; }
    inline bool ExecutionStoppedAtHasBeenSet() const { return m_executionStoppedAtHasBeenSet; }
    inline void SetExecutionStoppedAt(const Aws::Utils::DateTime& value) { m_executionStoppedAtHasBeenSet = true; m_executionStoppedAt = value; }
    inline void SetExecutionStoppedAt(Aws::Utils::DateTime&& value) { m_executionStoppedAtHasBeenSet = true; m_executionStoppedAt = std::move(value); }
    inline SubmitTaskStateChangeRequest& WithExecutionStoppedAt(const Aws::Utils::DateTime& value) { SetExecutionStoppedAt(value); return *this;}
    inline SubmitTaskStateChangeRequest& WithExecutionStoppedAt(Aws::Utils::DateTime&& value) { SetExecutionStoppedAt(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_pullStartedAt;
    bool m_pullStartedAtHasBeenSet = false;

    Aws::Utils::DateTime m_pullStoppedAt;
    bool m_pullStoppedAtHasBeenSet = false;

    Aws::Utils::DateTime m_executionStoppedAt;
    bool m_executionStoppedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
