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
    AWS_ECS_API SubmitContainerStateChangeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitContainerStateChange"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full ARN of the cluster that hosts the container.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full ARN of the cluster that hosts the container.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full ARN of the cluster that hosts the container.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full ARN of the cluster that hosts the container.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full ARN of the cluster that hosts the container.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full ARN of the cluster that hosts the container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full ARN of the cluster that hosts the container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full ARN of the cluster that hosts the container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task that hosts the
     * container.</p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task that hosts the
     * container.</p>
     */
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task that hosts the
     * container.</p>
     */
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task that hosts the
     * container.</p>
     */
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task that hosts the
     * container.</p>
     */
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task that hosts the
     * container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithTask(const Aws::String& value) { SetTask(value); return *this;}

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task that hosts the
     * container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task that hosts the
     * container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithTask(const char* value) { SetTask(value); return *this;}


    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of the container.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of the container.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of the container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of the container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of the container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The ID of the Docker container.</p>
     */
    inline const Aws::String& GetRuntimeId() const{ return m_runtimeId; }

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline bool RuntimeIdHasBeenSet() const { return m_runtimeIdHasBeenSet; }

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline void SetRuntimeId(const Aws::String& value) { m_runtimeIdHasBeenSet = true; m_runtimeId = value; }

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline void SetRuntimeId(Aws::String&& value) { m_runtimeIdHasBeenSet = true; m_runtimeId = std::move(value); }

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline void SetRuntimeId(const char* value) { m_runtimeIdHasBeenSet = true; m_runtimeId.assign(value); }

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithRuntimeId(const Aws::String& value) { SetRuntimeId(value); return *this;}

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithRuntimeId(Aws::String&& value) { SetRuntimeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Docker container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithRuntimeId(const char* value) { SetRuntimeId(value); return *this;}


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
    inline SubmitContainerStateChangeRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the state change request.</p>
     */
    inline SubmitContainerStateChangeRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the state change request.</p>
     */
    inline SubmitContainerStateChangeRequest& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The exit code that's returned for the state change request.</p>
     */
    inline int GetExitCode() const{ return m_exitCode; }

    /**
     * <p>The exit code that's returned for the state change request.</p>
     */
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }

    /**
     * <p>The exit code that's returned for the state change request.</p>
     */
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }

    /**
     * <p>The exit code that's returned for the state change request.</p>
     */
    inline SubmitContainerStateChangeRequest& WithExitCode(int value) { SetExitCode(value); return *this;}


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
    inline SubmitContainerStateChangeRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the state change request.</p>
     */
    inline SubmitContainerStateChangeRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the state change request.</p>
     */
    inline SubmitContainerStateChangeRequest& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The network bindings of the container.</p>
     */
    inline const Aws::Vector<NetworkBinding>& GetNetworkBindings() const{ return m_networkBindings; }

    /**
     * <p>The network bindings of the container.</p>
     */
    inline bool NetworkBindingsHasBeenSet() const { return m_networkBindingsHasBeenSet; }

    /**
     * <p>The network bindings of the container.</p>
     */
    inline void SetNetworkBindings(const Aws::Vector<NetworkBinding>& value) { m_networkBindingsHasBeenSet = true; m_networkBindings = value; }

    /**
     * <p>The network bindings of the container.</p>
     */
    inline void SetNetworkBindings(Aws::Vector<NetworkBinding>&& value) { m_networkBindingsHasBeenSet = true; m_networkBindings = std::move(value); }

    /**
     * <p>The network bindings of the container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithNetworkBindings(const Aws::Vector<NetworkBinding>& value) { SetNetworkBindings(value); return *this;}

    /**
     * <p>The network bindings of the container.</p>
     */
    inline SubmitContainerStateChangeRequest& WithNetworkBindings(Aws::Vector<NetworkBinding>&& value) { SetNetworkBindings(std::move(value)); return *this;}

    /**
     * <p>The network bindings of the container.</p>
     */
    inline SubmitContainerStateChangeRequest& AddNetworkBindings(const NetworkBinding& value) { m_networkBindingsHasBeenSet = true; m_networkBindings.push_back(value); return *this; }

    /**
     * <p>The network bindings of the container.</p>
     */
    inline SubmitContainerStateChangeRequest& AddNetworkBindings(NetworkBinding&& value) { m_networkBindingsHasBeenSet = true; m_networkBindings.push_back(std::move(value)); return *this; }

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

    int m_exitCode;
    bool m_exitCodeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<NetworkBinding> m_networkBindings;
    bool m_networkBindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
