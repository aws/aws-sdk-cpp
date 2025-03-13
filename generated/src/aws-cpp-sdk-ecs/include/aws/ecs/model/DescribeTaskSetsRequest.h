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
    AWS_ECS_API DescribeTaskSetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTaskSets"; }

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
    DescribeTaskSetsRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    DescribeTaskSetsRequest& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskSets() const { return m_taskSets; }
    inline bool TaskSetsHasBeenSet() const { return m_taskSetsHasBeenSet; }
    template<typename TaskSetsT = Aws::Vector<Aws::String>>
    void SetTaskSets(TaskSetsT&& value) { m_taskSetsHasBeenSet = true; m_taskSets = std::forward<TaskSetsT>(value); }
    template<typename TaskSetsT = Aws::Vector<Aws::String>>
    DescribeTaskSetsRequest& WithTaskSets(TaskSetsT&& value) { SetTaskSets(std::forward<TaskSetsT>(value)); return *this;}
    template<typename TaskSetsT = Aws::String>
    DescribeTaskSetsRequest& AddTaskSets(TaskSetsT&& value) { m_taskSetsHasBeenSet = true; m_taskSets.emplace_back(std::forward<TaskSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to see the resource tags for the task set. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags aren't included in the response.</p>
     */
    inline const Aws::Vector<TaskSetField>& GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    template<typename IncludeT = Aws::Vector<TaskSetField>>
    void SetInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include = std::forward<IncludeT>(value); }
    template<typename IncludeT = Aws::Vector<TaskSetField>>
    DescribeTaskSetsRequest& WithInclude(IncludeT&& value) { SetInclude(std::forward<IncludeT>(value)); return *this;}
    inline DescribeTaskSetsRequest& AddInclude(TaskSetField value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }
    ///@}
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
