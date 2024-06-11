﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/TaskField.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class DescribeTasksRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DescribeTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTasks"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task or tasks to describe. If you do not specify a cluster, the default
     * cluster is assumed. This parameter is required if the task or tasks you are
     * describing were launched in any cluster other than the default cluster.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }
    inline DescribeTasksRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}
    inline DescribeTasksRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}
    inline DescribeTasksRequest& WithCluster(const char* value) { SetCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTasks() const{ return m_tasks; }
    inline bool TasksHasBeenSet() const { return m_tasksHasBeenSet; }
    inline void SetTasks(const Aws::Vector<Aws::String>& value) { m_tasksHasBeenSet = true; m_tasks = value; }
    inline void SetTasks(Aws::Vector<Aws::String>&& value) { m_tasksHasBeenSet = true; m_tasks = std::move(value); }
    inline DescribeTasksRequest& WithTasks(const Aws::Vector<Aws::String>& value) { SetTasks(value); return *this;}
    inline DescribeTasksRequest& WithTasks(Aws::Vector<Aws::String>&& value) { SetTasks(std::move(value)); return *this;}
    inline DescribeTasksRequest& AddTasks(const Aws::String& value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }
    inline DescribeTasksRequest& AddTasks(Aws::String&& value) { m_tasksHasBeenSet = true; m_tasks.push_back(std::move(value)); return *this; }
    inline DescribeTasksRequest& AddTasks(const char* value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether you want to see the resource tags for the task. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags aren't included in the response.</p>
     */
    inline const Aws::Vector<TaskField>& GetInclude() const{ return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    inline void SetInclude(const Aws::Vector<TaskField>& value) { m_includeHasBeenSet = true; m_include = value; }
    inline void SetInclude(Aws::Vector<TaskField>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }
    inline DescribeTasksRequest& WithInclude(const Aws::Vector<TaskField>& value) { SetInclude(value); return *this;}
    inline DescribeTasksRequest& WithInclude(Aws::Vector<TaskField>&& value) { SetInclude(std::move(value)); return *this;}
    inline DescribeTasksRequest& AddInclude(const TaskField& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }
    inline DescribeTasksRequest& AddInclude(TaskField&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::Vector<Aws::String> m_tasks;
    bool m_tasksHasBeenSet = false;

    Aws::Vector<TaskField> m_include;
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
