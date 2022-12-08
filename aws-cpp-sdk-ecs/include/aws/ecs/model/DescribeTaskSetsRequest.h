/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/TaskSetField.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class DescribeTaskSetsRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DescribeTaskSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTaskSets"; }

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
    inline DescribeTaskSetsRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline DescribeTaskSetsRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline DescribeTaskSetsRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline DescribeTaskSetsRequest& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline DescribeTaskSetsRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline DescribeTaskSetsRequest& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskSets() const{ return m_taskSets; }

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline bool TaskSetsHasBeenSet() const { return m_taskSetsHasBeenSet; }

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline void SetTaskSets(const Aws::Vector<Aws::String>& value) { m_taskSetsHasBeenSet = true; m_taskSets = value; }

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline void SetTaskSets(Aws::Vector<Aws::String>&& value) { m_taskSetsHasBeenSet = true; m_taskSets = std::move(value); }

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline DescribeTaskSetsRequest& WithTaskSets(const Aws::Vector<Aws::String>& value) { SetTaskSets(value); return *this;}

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline DescribeTaskSetsRequest& WithTaskSets(Aws::Vector<Aws::String>&& value) { SetTaskSets(std::move(value)); return *this;}

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline DescribeTaskSetsRequest& AddTaskSets(const Aws::String& value) { m_taskSetsHasBeenSet = true; m_taskSets.push_back(value); return *this; }

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline DescribeTaskSetsRequest& AddTaskSets(Aws::String&& value) { m_taskSetsHasBeenSet = true; m_taskSets.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline DescribeTaskSetsRequest& AddTaskSets(const char* value) { m_taskSetsHasBeenSet = true; m_taskSets.push_back(value); return *this; }


    /**
     * <p>Specifies whether to see the resource tags for the task set. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags aren't included in the response.</p>
     */
    inline const Aws::Vector<TaskSetField>& GetInclude() const{ return m_include; }

    /**
     * <p>Specifies whether to see the resource tags for the task set. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags aren't included in the response.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>Specifies whether to see the resource tags for the task set. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags aren't included in the response.</p>
     */
    inline void SetInclude(const Aws::Vector<TaskSetField>& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>Specifies whether to see the resource tags for the task set. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags aren't included in the response.</p>
     */
    inline void SetInclude(Aws::Vector<TaskSetField>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>Specifies whether to see the resource tags for the task set. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags aren't included in the response.</p>
     */
    inline DescribeTaskSetsRequest& WithInclude(const Aws::Vector<TaskSetField>& value) { SetInclude(value); return *this;}

    /**
     * <p>Specifies whether to see the resource tags for the task set. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags aren't included in the response.</p>
     */
    inline DescribeTaskSetsRequest& WithInclude(Aws::Vector<TaskSetField>&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p>Specifies whether to see the resource tags for the task set. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags aren't included in the response.</p>
     */
    inline DescribeTaskSetsRequest& AddInclude(const TaskSetField& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }

    /**
     * <p>Specifies whether to see the resource tags for the task set. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags aren't included in the response.</p>
     */
    inline DescribeTaskSetsRequest& AddInclude(TaskSetField&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::Vector<Aws::String> m_taskSets;
    bool m_taskSetsHasBeenSet = false;

    Aws::Vector<TaskSetField> m_include;
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
