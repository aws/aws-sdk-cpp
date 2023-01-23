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
    AWS_ECS_API UpdateTaskProtectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTaskProtection"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline UpdateTaskProtectionRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline UpdateTaskProtectionRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline UpdateTaskProtectionRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>A list of up to 10 task IDs or full ARN entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTasks() const{ return m_tasks; }

    /**
     * <p>A list of up to 10 task IDs or full ARN entries.</p>
     */
    inline bool TasksHasBeenSet() const { return m_tasksHasBeenSet; }

    /**
     * <p>A list of up to 10 task IDs or full ARN entries.</p>
     */
    inline void SetTasks(const Aws::Vector<Aws::String>& value) { m_tasksHasBeenSet = true; m_tasks = value; }

    /**
     * <p>A list of up to 10 task IDs or full ARN entries.</p>
     */
    inline void SetTasks(Aws::Vector<Aws::String>&& value) { m_tasksHasBeenSet = true; m_tasks = std::move(value); }

    /**
     * <p>A list of up to 10 task IDs or full ARN entries.</p>
     */
    inline UpdateTaskProtectionRequest& WithTasks(const Aws::Vector<Aws::String>& value) { SetTasks(value); return *this;}

    /**
     * <p>A list of up to 10 task IDs or full ARN entries.</p>
     */
    inline UpdateTaskProtectionRequest& WithTasks(Aws::Vector<Aws::String>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>A list of up to 10 task IDs or full ARN entries.</p>
     */
    inline UpdateTaskProtectionRequest& AddTasks(const Aws::String& value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }

    /**
     * <p>A list of up to 10 task IDs or full ARN entries.</p>
     */
    inline UpdateTaskProtectionRequest& AddTasks(Aws::String&& value) { m_tasksHasBeenSet = true; m_tasks.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 10 task IDs or full ARN entries.</p>
     */
    inline UpdateTaskProtectionRequest& AddTasks(const char* value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }


    /**
     * <p>Specify <code>true</code> to mark a task for protection and
     * <code>false</code> to unset protection, making it eligible for termination.</p>
     */
    inline bool GetProtectionEnabled() const{ return m_protectionEnabled; }

    /**
     * <p>Specify <code>true</code> to mark a task for protection and
     * <code>false</code> to unset protection, making it eligible for termination.</p>
     */
    inline bool ProtectionEnabledHasBeenSet() const { return m_protectionEnabledHasBeenSet; }

    /**
     * <p>Specify <code>true</code> to mark a task for protection and
     * <code>false</code> to unset protection, making it eligible for termination.</p>
     */
    inline void SetProtectionEnabled(bool value) { m_protectionEnabledHasBeenSet = true; m_protectionEnabled = value; }

    /**
     * <p>Specify <code>true</code> to mark a task for protection and
     * <code>false</code> to unset protection, making it eligible for termination.</p>
     */
    inline UpdateTaskProtectionRequest& WithProtectionEnabled(bool value) { SetProtectionEnabled(value); return *this;}


    /**
     * <p>If you set <code>protectionEnabled</code> to <code>true</code>, you can
     * specify the duration for task protection in minutes. You can specify a value
     * from 1 minute to up to 2,880 minutes (48 hours). During this time, your task
     * will not be terminated by scale-in events from Service Auto Scaling or
     * deployments. After this time period lapses, <code>protectionEnabled</code> will
     * be reset to <code>false</code>.</p> <p>If you don’t specify the time, then the
     * task is automatically protected for 120 minutes (2 hours).</p>
     */
    inline int GetExpiresInMinutes() const{ return m_expiresInMinutes; }

    /**
     * <p>If you set <code>protectionEnabled</code> to <code>true</code>, you can
     * specify the duration for task protection in minutes. You can specify a value
     * from 1 minute to up to 2,880 minutes (48 hours). During this time, your task
     * will not be terminated by scale-in events from Service Auto Scaling or
     * deployments. After this time period lapses, <code>protectionEnabled</code> will
     * be reset to <code>false</code>.</p> <p>If you don’t specify the time, then the
     * task is automatically protected for 120 minutes (2 hours).</p>
     */
    inline bool ExpiresInMinutesHasBeenSet() const { return m_expiresInMinutesHasBeenSet; }

    /**
     * <p>If you set <code>protectionEnabled</code> to <code>true</code>, you can
     * specify the duration for task protection in minutes. You can specify a value
     * from 1 minute to up to 2,880 minutes (48 hours). During this time, your task
     * will not be terminated by scale-in events from Service Auto Scaling or
     * deployments. After this time period lapses, <code>protectionEnabled</code> will
     * be reset to <code>false</code>.</p> <p>If you don’t specify the time, then the
     * task is automatically protected for 120 minutes (2 hours).</p>
     */
    inline void SetExpiresInMinutes(int value) { m_expiresInMinutesHasBeenSet = true; m_expiresInMinutes = value; }

    /**
     * <p>If you set <code>protectionEnabled</code> to <code>true</code>, you can
     * specify the duration for task protection in minutes. You can specify a value
     * from 1 minute to up to 2,880 minutes (48 hours). During this time, your task
     * will not be terminated by scale-in events from Service Auto Scaling or
     * deployments. After this time period lapses, <code>protectionEnabled</code> will
     * be reset to <code>false</code>.</p> <p>If you don’t specify the time, then the
     * task is automatically protected for 120 minutes (2 hours).</p>
     */
    inline UpdateTaskProtectionRequest& WithExpiresInMinutes(int value) { SetExpiresInMinutes(value); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::Vector<Aws::String> m_tasks;
    bool m_tasksHasBeenSet = false;

    bool m_protectionEnabled;
    bool m_protectionEnabledHasBeenSet = false;

    int m_expiresInMinutes;
    bool m_expiresInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
