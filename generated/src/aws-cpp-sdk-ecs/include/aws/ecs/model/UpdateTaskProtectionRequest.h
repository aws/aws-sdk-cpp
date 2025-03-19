/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class UpdateTaskProtectionRequest : public ECSRequest
  {
  public:
    AWS_ECS_API UpdateTaskProtectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTaskProtection"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    UpdateTaskProtectionRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 10 task IDs or full ARN entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTasks() const { return m_tasks; }
    inline bool TasksHasBeenSet() const { return m_tasksHasBeenSet; }
    template<typename TasksT = Aws::Vector<Aws::String>>
    void SetTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks = std::forward<TasksT>(value); }
    template<typename TasksT = Aws::Vector<Aws::String>>
    UpdateTaskProtectionRequest& WithTasks(TasksT&& value) { SetTasks(std::forward<TasksT>(value)); return *this;}
    template<typename TasksT = Aws::String>
    UpdateTaskProtectionRequest& AddTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks.emplace_back(std::forward<TasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify <code>true</code> to mark a task for protection and
     * <code>false</code> to unset protection, making it eligible for termination.</p>
     */
    inline bool GetProtectionEnabled() const { return m_protectionEnabled; }
    inline bool ProtectionEnabledHasBeenSet() const { return m_protectionEnabledHasBeenSet; }
    inline void SetProtectionEnabled(bool value) { m_protectionEnabledHasBeenSet = true; m_protectionEnabled = value; }
    inline UpdateTaskProtectionRequest& WithProtectionEnabled(bool value) { SetProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you set <code>protectionEnabled</code> to <code>true</code>, you can
     * specify the duration for task protection in minutes. You can specify a value
     * from 1 minute to up to 2,880 minutes (48 hours). During this time, your task
     * will not be terminated by scale-in events from Service Auto Scaling or
     * deployments. After this time period lapses, <code>protectionEnabled</code> will
     * be reset to <code>false</code>.</p> <p>If you don’t specify the time, then the
     * task is automatically protected for 120 minutes (2 hours).</p>
     */
    inline int GetExpiresInMinutes() const { return m_expiresInMinutes; }
    inline bool ExpiresInMinutesHasBeenSet() const { return m_expiresInMinutesHasBeenSet; }
    inline void SetExpiresInMinutes(int value) { m_expiresInMinutesHasBeenSet = true; m_expiresInMinutes = value; }
    inline UpdateTaskProtectionRequest& WithExpiresInMinutes(int value) { SetExpiresInMinutes(value); return *this;}
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::Vector<Aws::String> m_tasks;
    bool m_tasksHasBeenSet = false;

    bool m_protectionEnabled{false};
    bool m_protectionEnabledHasBeenSet = false;

    int m_expiresInMinutes{0};
    bool m_expiresInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
