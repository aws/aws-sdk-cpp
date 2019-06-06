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
  class AWS_ECS_API DescribeTasksRequest : public ECSRequest
  {
  public:
    DescribeTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTasks"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task or tasks to describe. If you do not specify a cluster, the default
     * cluster is assumed. This parameter is required if the task or tasks you are
     * describing were launched in any cluster other than the default cluster.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task or tasks to describe. If you do not specify a cluster, the default
     * cluster is assumed. This parameter is required if the task or tasks you are
     * describing were launched in any cluster other than the default cluster.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task or tasks to describe. If you do not specify a cluster, the default
     * cluster is assumed. This parameter is required if the task or tasks you are
     * describing were launched in any cluster other than the default cluster.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task or tasks to describe. If you do not specify a cluster, the default
     * cluster is assumed. This parameter is required if the task or tasks you are
     * describing were launched in any cluster other than the default cluster.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task or tasks to describe. If you do not specify a cluster, the default
     * cluster is assumed. This parameter is required if the task or tasks you are
     * describing were launched in any cluster other than the default cluster.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task or tasks to describe. If you do not specify a cluster, the default
     * cluster is assumed. This parameter is required if the task or tasks you are
     * describing were launched in any cluster other than the default cluster.</p>
     */
    inline DescribeTasksRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task or tasks to describe. If you do not specify a cluster, the default
     * cluster is assumed. This parameter is required if the task or tasks you are
     * describing were launched in any cluster other than the default cluster.</p>
     */
    inline DescribeTasksRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task or tasks to describe. If you do not specify a cluster, the default
     * cluster is assumed. This parameter is required if the task or tasks you are
     * describing were launched in any cluster other than the default cluster.</p>
     */
    inline DescribeTasksRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTasks() const{ return m_tasks; }

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline bool TasksHasBeenSet() const { return m_tasksHasBeenSet; }

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline void SetTasks(const Aws::Vector<Aws::String>& value) { m_tasksHasBeenSet = true; m_tasks = value; }

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline void SetTasks(Aws::Vector<Aws::String>&& value) { m_tasksHasBeenSet = true; m_tasks = std::move(value); }

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline DescribeTasksRequest& WithTasks(const Aws::Vector<Aws::String>& value) { SetTasks(value); return *this;}

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline DescribeTasksRequest& WithTasks(Aws::Vector<Aws::String>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline DescribeTasksRequest& AddTasks(const Aws::String& value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline DescribeTasksRequest& AddTasks(Aws::String&& value) { m_tasksHasBeenSet = true; m_tasks.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline DescribeTasksRequest& AddTasks(const char* value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }


    /**
     * <p>Specifies whether you want to see the resource tags for the task. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline const Aws::Vector<TaskField>& GetInclude() const{ return m_include; }

    /**
     * <p>Specifies whether you want to see the resource tags for the task. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>Specifies whether you want to see the resource tags for the task. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline void SetInclude(const Aws::Vector<TaskField>& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>Specifies whether you want to see the resource tags for the task. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline void SetInclude(Aws::Vector<TaskField>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>Specifies whether you want to see the resource tags for the task. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline DescribeTasksRequest& WithInclude(const Aws::Vector<TaskField>& value) { SetInclude(value); return *this;}

    /**
     * <p>Specifies whether you want to see the resource tags for the task. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline DescribeTasksRequest& WithInclude(Aws::Vector<TaskField>&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p>Specifies whether you want to see the resource tags for the task. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline DescribeTasksRequest& AddInclude(const TaskField& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }

    /**
     * <p>Specifies whether you want to see the resource tags for the task. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline DescribeTasksRequest& AddInclude(TaskField&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::Vector<Aws::String> m_tasks;
    bool m_tasksHasBeenSet;

    Aws::Vector<TaskField> m_include;
    bool m_includeHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
