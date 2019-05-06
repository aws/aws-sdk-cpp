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
  class AWS_ECS_API ListTasksRequest : public ECSRequest
  {
  public:
    ListTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTasks"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the tasks to list. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the tasks to list. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the tasks to list. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the tasks to list. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the tasks to list. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the tasks to list. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline ListTasksRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the tasks to list. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline ListTasksRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the tasks to list. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline ListTasksRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The container instance ID or full ARN of the container instance with which to
     * filter the <code>ListTasks</code> results. Specifying a
     * <code>containerInstance</code> limits the results to tasks that belong to that
     * container instance.</p>
     */
    inline const Aws::String& GetContainerInstance() const{ return m_containerInstance; }

    /**
     * <p>The container instance ID or full ARN of the container instance with which to
     * filter the <code>ListTasks</code> results. Specifying a
     * <code>containerInstance</code> limits the results to tasks that belong to that
     * container instance.</p>
     */
    inline bool ContainerInstanceHasBeenSet() const { return m_containerInstanceHasBeenSet; }

    /**
     * <p>The container instance ID or full ARN of the container instance with which to
     * filter the <code>ListTasks</code> results. Specifying a
     * <code>containerInstance</code> limits the results to tasks that belong to that
     * container instance.</p>
     */
    inline void SetContainerInstance(const Aws::String& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = value; }

    /**
     * <p>The container instance ID or full ARN of the container instance with which to
     * filter the <code>ListTasks</code> results. Specifying a
     * <code>containerInstance</code> limits the results to tasks that belong to that
     * container instance.</p>
     */
    inline void SetContainerInstance(Aws::String&& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = std::move(value); }

    /**
     * <p>The container instance ID or full ARN of the container instance with which to
     * filter the <code>ListTasks</code> results. Specifying a
     * <code>containerInstance</code> limits the results to tasks that belong to that
     * container instance.</p>
     */
    inline void SetContainerInstance(const char* value) { m_containerInstanceHasBeenSet = true; m_containerInstance.assign(value); }

    /**
     * <p>The container instance ID or full ARN of the container instance with which to
     * filter the <code>ListTasks</code> results. Specifying a
     * <code>containerInstance</code> limits the results to tasks that belong to that
     * container instance.</p>
     */
    inline ListTasksRequest& WithContainerInstance(const Aws::String& value) { SetContainerInstance(value); return *this;}

    /**
     * <p>The container instance ID or full ARN of the container instance with which to
     * filter the <code>ListTasks</code> results. Specifying a
     * <code>containerInstance</code> limits the results to tasks that belong to that
     * container instance.</p>
     */
    inline ListTasksRequest& WithContainerInstance(Aws::String&& value) { SetContainerInstance(std::move(value)); return *this;}

    /**
     * <p>The container instance ID or full ARN of the container instance with which to
     * filter the <code>ListTasks</code> results. Specifying a
     * <code>containerInstance</code> limits the results to tasks that belong to that
     * container instance.</p>
     */
    inline ListTasksRequest& WithContainerInstance(const char* value) { SetContainerInstance(value); return *this;}


    /**
     * <p>The name of the family with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>family</code> limits the results to tasks that
     * belong to that family.</p>
     */
    inline const Aws::String& GetFamily() const{ return m_family; }

    /**
     * <p>The name of the family with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>family</code> limits the results to tasks that
     * belong to that family.</p>
     */
    inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }

    /**
     * <p>The name of the family with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>family</code> limits the results to tasks that
     * belong to that family.</p>
     */
    inline void SetFamily(const Aws::String& value) { m_familyHasBeenSet = true; m_family = value; }

    /**
     * <p>The name of the family with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>family</code> limits the results to tasks that
     * belong to that family.</p>
     */
    inline void SetFamily(Aws::String&& value) { m_familyHasBeenSet = true; m_family = std::move(value); }

    /**
     * <p>The name of the family with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>family</code> limits the results to tasks that
     * belong to that family.</p>
     */
    inline void SetFamily(const char* value) { m_familyHasBeenSet = true; m_family.assign(value); }

    /**
     * <p>The name of the family with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>family</code> limits the results to tasks that
     * belong to that family.</p>
     */
    inline ListTasksRequest& WithFamily(const Aws::String& value) { SetFamily(value); return *this;}

    /**
     * <p>The name of the family with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>family</code> limits the results to tasks that
     * belong to that family.</p>
     */
    inline ListTasksRequest& WithFamily(Aws::String&& value) { SetFamily(std::move(value)); return *this;}

    /**
     * <p>The name of the family with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>family</code> limits the results to tasks that
     * belong to that family.</p>
     */
    inline ListTasksRequest& WithFamily(const char* value) { SetFamily(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTasks</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTasks</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTasks</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTasks</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTasks</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTasks</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTasks</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListTasks</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value.</p>
     * <note> <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> </note>
     */
    inline ListTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of task results returned by <code>ListTasks</code> in
     * paginated output. When this parameter is used, <code>ListTasks</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListTasks</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, then <code>ListTasks</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of task results returned by <code>ListTasks</code> in
     * paginated output. When this parameter is used, <code>ListTasks</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListTasks</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, then <code>ListTasks</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of task results returned by <code>ListTasks</code> in
     * paginated output. When this parameter is used, <code>ListTasks</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListTasks</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, then <code>ListTasks</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of task results returned by <code>ListTasks</code> in
     * paginated output. When this parameter is used, <code>ListTasks</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListTasks</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, then <code>ListTasks</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline ListTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>startedBy</code> value with which to filter the task results.
     * Specifying a <code>startedBy</code> value limits the results to tasks that were
     * started with that value.</p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>The <code>startedBy</code> value with which to filter the task results.
     * Specifying a <code>startedBy</code> value limits the results to tasks that were
     * started with that value.</p>
     */
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }

    /**
     * <p>The <code>startedBy</code> value with which to filter the task results.
     * Specifying a <code>startedBy</code> value limits the results to tasks that were
     * started with that value.</p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }

    /**
     * <p>The <code>startedBy</code> value with which to filter the task results.
     * Specifying a <code>startedBy</code> value limits the results to tasks that were
     * started with that value.</p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = std::move(value); }

    /**
     * <p>The <code>startedBy</code> value with which to filter the task results.
     * Specifying a <code>startedBy</code> value limits the results to tasks that were
     * started with that value.</p>
     */
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }

    /**
     * <p>The <code>startedBy</code> value with which to filter the task results.
     * Specifying a <code>startedBy</code> value limits the results to tasks that were
     * started with that value.</p>
     */
    inline ListTasksRequest& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>The <code>startedBy</code> value with which to filter the task results.
     * Specifying a <code>startedBy</code> value limits the results to tasks that were
     * started with that value.</p>
     */
    inline ListTasksRequest& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}

    /**
     * <p>The <code>startedBy</code> value with which to filter the task results.
     * Specifying a <code>startedBy</code> value limits the results to tasks that were
     * started with that value.</p>
     */
    inline ListTasksRequest& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}


    /**
     * <p>The name of the service with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>serviceName</code> limits the results to tasks that
     * belong to that service.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>serviceName</code> limits the results to tasks that
     * belong to that service.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>serviceName</code> limits the results to tasks that
     * belong to that service.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>serviceName</code> limits the results to tasks that
     * belong to that service.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>serviceName</code> limits the results to tasks that
     * belong to that service.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>serviceName</code> limits the results to tasks that
     * belong to that service.</p>
     */
    inline ListTasksRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>serviceName</code> limits the results to tasks that
     * belong to that service.</p>
     */
    inline ListTasksRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>serviceName</code> limits the results to tasks that
     * belong to that service.</p>
     */
    inline ListTasksRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The task desired status with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>desiredStatus</code> of <code>STOPPED</code> limits
     * the results to tasks that Amazon ECS has set the desired status to
     * <code>STOPPED</code>. This can be useful for debugging tasks that are not
     * starting properly or have died or finished. The default status filter is
     * <code>RUNNING</code>, which shows tasks that Amazon ECS has set the desired
     * status to <code>RUNNING</code>.</p> <note> <p>Although you can filter results
     * based on a desired status of <code>PENDING</code>, this does not return any
     * results. Amazon ECS never sets the desired status of a task to that value (only
     * a task's <code>lastStatus</code> may have a value of <code>PENDING</code>).</p>
     * </note>
     */
    inline const DesiredStatus& GetDesiredStatus() const{ return m_desiredStatus; }

    /**
     * <p>The task desired status with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>desiredStatus</code> of <code>STOPPED</code> limits
     * the results to tasks that Amazon ECS has set the desired status to
     * <code>STOPPED</code>. This can be useful for debugging tasks that are not
     * starting properly or have died or finished. The default status filter is
     * <code>RUNNING</code>, which shows tasks that Amazon ECS has set the desired
     * status to <code>RUNNING</code>.</p> <note> <p>Although you can filter results
     * based on a desired status of <code>PENDING</code>, this does not return any
     * results. Amazon ECS never sets the desired status of a task to that value (only
     * a task's <code>lastStatus</code> may have a value of <code>PENDING</code>).</p>
     * </note>
     */
    inline bool DesiredStatusHasBeenSet() const { return m_desiredStatusHasBeenSet; }

    /**
     * <p>The task desired status with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>desiredStatus</code> of <code>STOPPED</code> limits
     * the results to tasks that Amazon ECS has set the desired status to
     * <code>STOPPED</code>. This can be useful for debugging tasks that are not
     * starting properly or have died or finished. The default status filter is
     * <code>RUNNING</code>, which shows tasks that Amazon ECS has set the desired
     * status to <code>RUNNING</code>.</p> <note> <p>Although you can filter results
     * based on a desired status of <code>PENDING</code>, this does not return any
     * results. Amazon ECS never sets the desired status of a task to that value (only
     * a task's <code>lastStatus</code> may have a value of <code>PENDING</code>).</p>
     * </note>
     */
    inline void SetDesiredStatus(const DesiredStatus& value) { m_desiredStatusHasBeenSet = true; m_desiredStatus = value; }

    /**
     * <p>The task desired status with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>desiredStatus</code> of <code>STOPPED</code> limits
     * the results to tasks that Amazon ECS has set the desired status to
     * <code>STOPPED</code>. This can be useful for debugging tasks that are not
     * starting properly or have died or finished. The default status filter is
     * <code>RUNNING</code>, which shows tasks that Amazon ECS has set the desired
     * status to <code>RUNNING</code>.</p> <note> <p>Although you can filter results
     * based on a desired status of <code>PENDING</code>, this does not return any
     * results. Amazon ECS never sets the desired status of a task to that value (only
     * a task's <code>lastStatus</code> may have a value of <code>PENDING</code>).</p>
     * </note>
     */
    inline void SetDesiredStatus(DesiredStatus&& value) { m_desiredStatusHasBeenSet = true; m_desiredStatus = std::move(value); }

    /**
     * <p>The task desired status with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>desiredStatus</code> of <code>STOPPED</code> limits
     * the results to tasks that Amazon ECS has set the desired status to
     * <code>STOPPED</code>. This can be useful for debugging tasks that are not
     * starting properly or have died or finished. The default status filter is
     * <code>RUNNING</code>, which shows tasks that Amazon ECS has set the desired
     * status to <code>RUNNING</code>.</p> <note> <p>Although you can filter results
     * based on a desired status of <code>PENDING</code>, this does not return any
     * results. Amazon ECS never sets the desired status of a task to that value (only
     * a task's <code>lastStatus</code> may have a value of <code>PENDING</code>).</p>
     * </note>
     */
    inline ListTasksRequest& WithDesiredStatus(const DesiredStatus& value) { SetDesiredStatus(value); return *this;}

    /**
     * <p>The task desired status with which to filter the <code>ListTasks</code>
     * results. Specifying a <code>desiredStatus</code> of <code>STOPPED</code> limits
     * the results to tasks that Amazon ECS has set the desired status to
     * <code>STOPPED</code>. This can be useful for debugging tasks that are not
     * starting properly or have died or finished. The default status filter is
     * <code>RUNNING</code>, which shows tasks that Amazon ECS has set the desired
     * status to <code>RUNNING</code>.</p> <note> <p>Although you can filter results
     * based on a desired status of <code>PENDING</code>, this does not return any
     * results. Amazon ECS never sets the desired status of a task to that value (only
     * a task's <code>lastStatus</code> may have a value of <code>PENDING</code>).</p>
     * </note>
     */
    inline ListTasksRequest& WithDesiredStatus(DesiredStatus&& value) { SetDesiredStatus(std::move(value)); return *this;}


    /**
     * <p>The launch type for services to list.</p>
     */
    inline const LaunchType& GetLaunchType() const{ return m_launchType; }

    /**
     * <p>The launch type for services to list.</p>
     */
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }

    /**
     * <p>The launch type for services to list.</p>
     */
    inline void SetLaunchType(const LaunchType& value) { m_launchTypeHasBeenSet = true; m_launchType = value; }

    /**
     * <p>The launch type for services to list.</p>
     */
    inline void SetLaunchType(LaunchType&& value) { m_launchTypeHasBeenSet = true; m_launchType = std::move(value); }

    /**
     * <p>The launch type for services to list.</p>
     */
    inline ListTasksRequest& WithLaunchType(const LaunchType& value) { SetLaunchType(value); return *this;}

    /**
     * <p>The launch type for services to list.</p>
     */
    inline ListTasksRequest& WithLaunchType(LaunchType&& value) { SetLaunchType(std::move(value)); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::String m_containerInstance;
    bool m_containerInstanceHasBeenSet;

    Aws::String m_family;
    bool m_familyHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    DesiredStatus m_desiredStatus;
    bool m_desiredStatusHasBeenSet;

    LaunchType m_launchType;
    bool m_launchTypeHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
