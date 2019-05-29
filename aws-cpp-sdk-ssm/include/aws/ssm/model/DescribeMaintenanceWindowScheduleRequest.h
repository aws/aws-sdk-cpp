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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MaintenanceWindowResourceType.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/PatchOrchestratorFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DescribeMaintenanceWindowScheduleRequest : public SSMRequest
  {
  public:
    DescribeMaintenanceWindowScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMaintenanceWindowSchedule"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the maintenance window to retrieve information about.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window to retrieve information about.</p>
     */
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }

    /**
     * <p>The ID of the maintenance window to retrieve information about.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowIdHasBeenSet = true; m_windowId = value; }

    /**
     * <p>The ID of the maintenance window to retrieve information about.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowIdHasBeenSet = true; m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window to retrieve information about.</p>
     */
    inline void SetWindowId(const char* value) { m_windowIdHasBeenSet = true; m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window to retrieve information about.</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window to retrieve information about.</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window to retrieve information about.</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The instance ID or key/value pair to retrieve information about.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }

    /**
     * <p>The instance ID or key/value pair to retrieve information about.</p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The instance ID or key/value pair to retrieve information about.</p>
     */
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The instance ID or key/value pair to retrieve information about.</p>
     */
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The instance ID or key/value pair to retrieve information about.</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}

    /**
     * <p>The instance ID or key/value pair to retrieve information about.</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The instance ID or key/value pair to retrieve information about.</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The instance ID or key/value pair to retrieve information about.</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of resource you want to retrieve information about. For example,
     * "INSTANCE".</p>
     */
    inline const MaintenanceWindowResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource you want to retrieve information about. For example,
     * "INSTANCE".</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource you want to retrieve information about. For example,
     * "INSTANCE".</p>
     */
    inline void SetResourceType(const MaintenanceWindowResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource you want to retrieve information about. For example,
     * "INSTANCE".</p>
     */
    inline void SetResourceType(MaintenanceWindowResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource you want to retrieve information about. For example,
     * "INSTANCE".</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithResourceType(const MaintenanceWindowResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource you want to retrieve information about. For example,
     * "INSTANCE".</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithResourceType(MaintenanceWindowResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Filters used to limit the range of results. For example, you can limit
     * maintenance window executions to only those scheduled before or after a certain
     * date and time.</p>
     */
    inline const Aws::Vector<PatchOrchestratorFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters used to limit the range of results. For example, you can limit
     * maintenance window executions to only those scheduled before or after a certain
     * date and time.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters used to limit the range of results. For example, you can limit
     * maintenance window executions to only those scheduled before or after a certain
     * date and time.</p>
     */
    inline void SetFilters(const Aws::Vector<PatchOrchestratorFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters used to limit the range of results. For example, you can limit
     * maintenance window executions to only those scheduled before or after a certain
     * date and time.</p>
     */
    inline void SetFilters(Aws::Vector<PatchOrchestratorFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters used to limit the range of results. For example, you can limit
     * maintenance window executions to only those scheduled before or after a certain
     * date and time.</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithFilters(const Aws::Vector<PatchOrchestratorFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters used to limit the range of results. For example, you can limit
     * maintenance window executions to only those scheduled before or after a certain
     * date and time.</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithFilters(Aws::Vector<PatchOrchestratorFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters used to limit the range of results. For example, you can limit
     * maintenance window executions to only those scheduled before or after a certain
     * date and time.</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& AddFilters(const PatchOrchestratorFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters used to limit the range of results. For example, you can limit
     * maintenance window executions to only those scheduled before or after a certain
     * date and time.</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& AddFilters(PatchOrchestratorFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeMaintenanceWindowScheduleRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet;

    MaintenanceWindowResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Vector<PatchOrchestratorFilter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
