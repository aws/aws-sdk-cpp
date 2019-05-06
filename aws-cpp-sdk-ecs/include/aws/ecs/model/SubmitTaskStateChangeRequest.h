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
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/ContainerStateChange.h>
#include <aws/ecs/model/AttachmentStateChange.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API SubmitTaskStateChangeRequest : public ECSRequest
  {
  public:
    SubmitTaskStateChangeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitTaskStateChange"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline SubmitTaskStateChangeRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline SubmitTaskStateChangeRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline SubmitTaskStateChangeRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The task ID or full ARN of the task in the state change request.</p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }

    /**
     * <p>The task ID or full ARN of the task in the state change request.</p>
     */
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }

    /**
     * <p>The task ID or full ARN of the task in the state change request.</p>
     */
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }

    /**
     * <p>The task ID or full ARN of the task in the state change request.</p>
     */
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }

    /**
     * <p>The task ID or full ARN of the task in the state change request.</p>
     */
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }

    /**
     * <p>The task ID or full ARN of the task in the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithTask(const Aws::String& value) { SetTask(value); return *this;}

    /**
     * <p>The task ID or full ARN of the task in the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}

    /**
     * <p>The task ID or full ARN of the task in the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithTask(const char* value) { SetTask(value); return *this;}


    /**
     * <p>The status of the state change request.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the state change request.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the state change request.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the state change request.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the state change request.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The reason for the state change request.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the state change request.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the state change request.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the state change request.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the state change request.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>Any containers associated with the state change request.</p>
     */
    inline const Aws::Vector<ContainerStateChange>& GetContainers() const{ return m_containers; }

    /**
     * <p>Any containers associated with the state change request.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>Any containers associated with the state change request.</p>
     */
    inline void SetContainers(const Aws::Vector<ContainerStateChange>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>Any containers associated with the state change request.</p>
     */
    inline void SetContainers(Aws::Vector<ContainerStateChange>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>Any containers associated with the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithContainers(const Aws::Vector<ContainerStateChange>& value) { SetContainers(value); return *this;}

    /**
     * <p>Any containers associated with the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithContainers(Aws::Vector<ContainerStateChange>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>Any containers associated with the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& AddContainers(const ContainerStateChange& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>Any containers associated with the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& AddContainers(ContainerStateChange&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline const Aws::Vector<AttachmentStateChange>& GetAttachments() const{ return m_attachments; }

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline bool AttachmentsHasBeenSet() const { return m_attachmentsHasBeenSet; }

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline void SetAttachments(const Aws::Vector<AttachmentStateChange>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline void SetAttachments(Aws::Vector<AttachmentStateChange>&& value) { m_attachmentsHasBeenSet = true; m_attachments = std::move(value); }

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithAttachments(const Aws::Vector<AttachmentStateChange>& value) { SetAttachments(value); return *this;}

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithAttachments(Aws::Vector<AttachmentStateChange>&& value) { SetAttachments(std::move(value)); return *this;}

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& AddAttachments(const AttachmentStateChange& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }

    /**
     * <p>Any attachments associated with the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& AddAttachments(AttachmentStateChange&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The Unix timestamp for when the container image pull began.</p>
     */
    inline const Aws::Utils::DateTime& GetPullStartedAt() const{ return m_pullStartedAt; }

    /**
     * <p>The Unix timestamp for when the container image pull began.</p>
     */
    inline bool PullStartedAtHasBeenSet() const { return m_pullStartedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the container image pull began.</p>
     */
    inline void SetPullStartedAt(const Aws::Utils::DateTime& value) { m_pullStartedAtHasBeenSet = true; m_pullStartedAt = value; }

    /**
     * <p>The Unix timestamp for when the container image pull began.</p>
     */
    inline void SetPullStartedAt(Aws::Utils::DateTime&& value) { m_pullStartedAtHasBeenSet = true; m_pullStartedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for when the container image pull began.</p>
     */
    inline SubmitTaskStateChangeRequest& WithPullStartedAt(const Aws::Utils::DateTime& value) { SetPullStartedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for when the container image pull began.</p>
     */
    inline SubmitTaskStateChangeRequest& WithPullStartedAt(Aws::Utils::DateTime&& value) { SetPullStartedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for when the container image pull completed.</p>
     */
    inline const Aws::Utils::DateTime& GetPullStoppedAt() const{ return m_pullStoppedAt; }

    /**
     * <p>The Unix timestamp for when the container image pull completed.</p>
     */
    inline bool PullStoppedAtHasBeenSet() const { return m_pullStoppedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the container image pull completed.</p>
     */
    inline void SetPullStoppedAt(const Aws::Utils::DateTime& value) { m_pullStoppedAtHasBeenSet = true; m_pullStoppedAt = value; }

    /**
     * <p>The Unix timestamp for when the container image pull completed.</p>
     */
    inline void SetPullStoppedAt(Aws::Utils::DateTime&& value) { m_pullStoppedAtHasBeenSet = true; m_pullStoppedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for when the container image pull completed.</p>
     */
    inline SubmitTaskStateChangeRequest& WithPullStoppedAt(const Aws::Utils::DateTime& value) { SetPullStoppedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for when the container image pull completed.</p>
     */
    inline SubmitTaskStateChangeRequest& WithPullStoppedAt(Aws::Utils::DateTime&& value) { SetPullStoppedAt(std::move(value)); return *this;}


    /**
     * <p>The Unix timestamp for when the task execution stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetExecutionStoppedAt() const{ return m_executionStoppedAt; }

    /**
     * <p>The Unix timestamp for when the task execution stopped.</p>
     */
    inline bool ExecutionStoppedAtHasBeenSet() const { return m_executionStoppedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the task execution stopped.</p>
     */
    inline void SetExecutionStoppedAt(const Aws::Utils::DateTime& value) { m_executionStoppedAtHasBeenSet = true; m_executionStoppedAt = value; }

    /**
     * <p>The Unix timestamp for when the task execution stopped.</p>
     */
    inline void SetExecutionStoppedAt(Aws::Utils::DateTime&& value) { m_executionStoppedAtHasBeenSet = true; m_executionStoppedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for when the task execution stopped.</p>
     */
    inline SubmitTaskStateChangeRequest& WithExecutionStoppedAt(const Aws::Utils::DateTime& value) { SetExecutionStoppedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for when the task execution stopped.</p>
     */
    inline SubmitTaskStateChangeRequest& WithExecutionStoppedAt(Aws::Utils::DateTime&& value) { SetExecutionStoppedAt(std::move(value)); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::String m_task;
    bool m_taskHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;

    Aws::Vector<ContainerStateChange> m_containers;
    bool m_containersHasBeenSet;

    Aws::Vector<AttachmentStateChange> m_attachments;
    bool m_attachmentsHasBeenSet;

    Aws::Utils::DateTime m_pullStartedAt;
    bool m_pullStartedAtHasBeenSet;

    Aws::Utils::DateTime m_pullStoppedAt;
    bool m_pullStoppedAtHasBeenSet;

    Aws::Utils::DateTime m_executionStoppedAt;
    bool m_executionStoppedAtHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
