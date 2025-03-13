/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/DesiredStatus.h>
#include <aws/ecs/model/LaunchType.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class ListTasksRequest : public ECSRequest
  {
  public:
    AWS_ECS_API ListTasksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTasks"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to use when
     * filtering the <code>ListTasks</code> results. If you do not specify a cluster,
     * the default cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    ListTasksRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container instance ID or full ARN of the container instance to use when
     * filtering the <code>ListTasks</code> results. Specifying a
     * <code>containerInstance</code> limits the results to tasks that belong to that
     * container instance.</p>
     */
    inline const Aws::String& GetContainerInstance() const { return m_containerInstance; }
    inline bool ContainerInstanceHasBeenSet() const { return m_containerInstanceHasBeenSet; }
    template<typename ContainerInstanceT = Aws::String>
    void SetContainerInstance(ContainerInstanceT&& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = std::forward<ContainerInstanceT>(value); }
    template<typename ContainerInstanceT = Aws::String>
    ListTasksRequest& WithContainerInstance(ContainerInstanceT&& value) { SetContainerInstance(std::forward<ContainerInstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the task definition family to use when filtering the
     * <code>ListTasks</code> results. Specifying a <code>family</code> limits the
     * results to tasks that belong to that family.</p>
     */
    inline const Aws::String& GetFamily() const { return m_family; }
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
    template<typename FamilyT = Aws::String>
    void SetFamily(FamilyT&& value) { m_familyHasBeenSet = true; m_family = std::forward<FamilyT>(value); }
    template<typename FamilyT = Aws::String>
    ListTasksRequest& WithFamily(FamilyT&& value) { SetFamily(std::forward<FamilyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListTasks</code>
     * request indicating that more results are available to fulfill the request and
     * further calls will be needed. If <code>maxResults</code> was provided, it's
     * possible the number of results to be fewer than <code>maxResults</code>.</p>
     *  <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTasksRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of task results that <code>ListTasks</code> returned in
     * paginated output. When this parameter is used, <code>ListTasks</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListTasks</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter isn't used, then <code>ListTasks</code> returns up to 100 results
     * and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>startedBy</code> value to filter the task results with. Specifying
     * a <code>startedBy</code> value limits the results to tasks that were started
     * with that value.</p> <p>When you specify <code>startedBy</code> as the filter,
     * it must be the only filter that you use.</p>
     */
    inline const Aws::String& GetStartedBy() const { return m_startedBy; }
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }
    template<typename StartedByT = Aws::String>
    void SetStartedBy(StartedByT&& value) { m_startedByHasBeenSet = true; m_startedBy = std::forward<StartedByT>(value); }
    template<typename StartedByT = Aws::String>
    ListTasksRequest& WithStartedBy(StartedByT&& value) { SetStartedBy(std::forward<StartedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service to use when filtering the <code>ListTasks</code>
     * results. Specifying a <code>serviceName</code> limits the results to tasks that
     * belong to that service.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    ListTasksRequest& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task desired status to use when filtering the <code>ListTasks</code>
     * results. Specifying a <code>desiredStatus</code> of <code>STOPPED</code> limits
     * the results to tasks that Amazon ECS has set the desired status to
     * <code>STOPPED</code>. This can be useful for debugging tasks that aren't
     * starting properly or have died or finished. The default status filter is
     * <code>RUNNING</code>, which shows tasks that Amazon ECS has set the desired
     * status to <code>RUNNING</code>.</p>  <p>Although you can filter results
     * based on a desired status of <code>PENDING</code>, this doesn't return any
     * results. Amazon ECS never sets the desired status of a task to that value (only
     * a task's <code>lastStatus</code> may have a value of <code>PENDING</code>).</p>
     * 
     */
    inline DesiredStatus GetDesiredStatus() const { return m_desiredStatus; }
    inline bool DesiredStatusHasBeenSet() const { return m_desiredStatusHasBeenSet; }
    inline void SetDesiredStatus(DesiredStatus value) { m_desiredStatusHasBeenSet = true; m_desiredStatus = value; }
    inline ListTasksRequest& WithDesiredStatus(DesiredStatus value) { SetDesiredStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch type to use when filtering the <code>ListTasks</code> results.</p>
     */
    inline LaunchType GetLaunchType() const { return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(LaunchType value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline ListTasksRequest& WithLaunchType(LaunchType value) { SetLaunchType(value); return *this;}
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_containerInstance;
    bool m_containerInstanceHasBeenSet = false;

    Aws::String m_family;
    bool m_familyHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    DesiredStatus m_desiredStatus{DesiredStatus::NOT_SET};
    bool m_desiredStatusHasBeenSet = false;

    LaunchType m_launchType{LaunchType::NOT_SET};
    bool m_launchTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
