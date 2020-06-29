/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringScheduleSortKey.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ScheduleStatus.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API ListMonitoringSchedulesRequest : public SageMakerRequest
  {
  public:
    ListMonitoringSchedulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMonitoringSchedules"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of a specific endpoint to fetch schedules for.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>Name of a specific endpoint to fetch schedules for.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>Name of a specific endpoint to fetch schedules for.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>Name of a specific endpoint to fetch schedules for.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>Name of a specific endpoint to fetch schedules for.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>Name of a specific endpoint to fetch schedules for.</p>
     */
    inline ListMonitoringSchedulesRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>Name of a specific endpoint to fetch schedules for.</p>
     */
    inline ListMonitoringSchedulesRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>Name of a specific endpoint to fetch schedules for.</p>
     */
    inline ListMonitoringSchedulesRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>Whether to sort results by <code>Status</code>, <code>CreationTime</code>,
     * <code>ScheduledTime</code> field. The default is <code>CreationTime</code>.</p>
     */
    inline const MonitoringScheduleSortKey& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Whether to sort results by <code>Status</code>, <code>CreationTime</code>,
     * <code>ScheduledTime</code> field. The default is <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Whether to sort results by <code>Status</code>, <code>CreationTime</code>,
     * <code>ScheduledTime</code> field. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const MonitoringScheduleSortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Whether to sort results by <code>Status</code>, <code>CreationTime</code>,
     * <code>ScheduledTime</code> field. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(MonitoringScheduleSortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Whether to sort results by <code>Status</code>, <code>CreationTime</code>,
     * <code>ScheduledTime</code> field. The default is <code>CreationTime</code>.</p>
     */
    inline ListMonitoringSchedulesRequest& WithSortBy(const MonitoringScheduleSortKey& value) { SetSortBy(value); return *this;}

    /**
     * <p>Whether to sort results by <code>Status</code>, <code>CreationTime</code>,
     * <code>ScheduledTime</code> field. The default is <code>CreationTime</code>.</p>
     */
    inline ListMonitoringSchedulesRequest& WithSortBy(MonitoringScheduleSortKey&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline ListMonitoringSchedulesRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Whether to sort the results in <code>Ascending</code> or
     * <code>Descending</code> order. The default is <code>Descending</code>.</p>
     */
    inline ListMonitoringSchedulesRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline ListMonitoringSchedulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline ListMonitoringSchedulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned if the response is truncated. To retrieve the next set of
     * job executions, use it in the next request.</p>
     */
    inline ListMonitoringSchedulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of jobs to return in the response. The default value is
     * 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of jobs to return in the response. The default value is
     * 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of jobs to return in the response. The default value is
     * 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of jobs to return in the response. The default value is
     * 10.</p>
     */
    inline ListMonitoringSchedulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filter for monitoring schedules whose name contains a specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Filter for monitoring schedules whose name contains a specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Filter for monitoring schedules whose name contains a specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Filter for monitoring schedules whose name contains a specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Filter for monitoring schedules whose name contains a specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Filter for monitoring schedules whose name contains a specified string.</p>
     */
    inline ListMonitoringSchedulesRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Filter for monitoring schedules whose name contains a specified string.</p>
     */
    inline ListMonitoringSchedulesRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Filter for monitoring schedules whose name contains a specified string.</p>
     */
    inline ListMonitoringSchedulesRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>A filter that returns only monitoring schedules created before a specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns only monitoring schedules created before a specified
     * time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only monitoring schedules created before a specified
     * time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns only monitoring schedules created before a specified
     * time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only monitoring schedules created before a specified
     * time.</p>
     */
    inline ListMonitoringSchedulesRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only monitoring schedules created before a specified
     * time.</p>
     */
    inline ListMonitoringSchedulesRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only monitoring schedules created after a specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns only monitoring schedules created after a specified
     * time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only monitoring schedules created after a specified
     * time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns only monitoring schedules created after a specified
     * time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only monitoring schedules created after a specified
     * time.</p>
     */
    inline ListMonitoringSchedulesRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only monitoring schedules created after a specified
     * time.</p>
     */
    inline ListMonitoringSchedulesRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only monitoring schedules modified before a specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeBefore() const{ return m_lastModifiedTimeBefore; }

    /**
     * <p>A filter that returns only monitoring schedules modified before a specified
     * time.</p>
     */
    inline bool LastModifiedTimeBeforeHasBeenSet() const { return m_lastModifiedTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only monitoring schedules modified before a specified
     * time.</p>
     */
    inline void SetLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = value; }

    /**
     * <p>A filter that returns only monitoring schedules modified before a specified
     * time.</p>
     */
    inline void SetLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { m_lastModifiedTimeBeforeHasBeenSet = true; m_lastModifiedTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only monitoring schedules modified before a specified
     * time.</p>
     */
    inline ListMonitoringSchedulesRequest& WithLastModifiedTimeBefore(const Aws::Utils::DateTime& value) { SetLastModifiedTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only monitoring schedules modified before a specified
     * time.</p>
     */
    inline ListMonitoringSchedulesRequest& WithLastModifiedTimeBefore(Aws::Utils::DateTime&& value) { SetLastModifiedTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only monitoring schedules modified after a specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimeAfter() const{ return m_lastModifiedTimeAfter; }

    /**
     * <p>A filter that returns only monitoring schedules modified after a specified
     * time.</p>
     */
    inline bool LastModifiedTimeAfterHasBeenSet() const { return m_lastModifiedTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only monitoring schedules modified after a specified
     * time.</p>
     */
    inline void SetLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = value; }

    /**
     * <p>A filter that returns only monitoring schedules modified after a specified
     * time.</p>
     */
    inline void SetLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { m_lastModifiedTimeAfterHasBeenSet = true; m_lastModifiedTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only monitoring schedules modified after a specified
     * time.</p>
     */
    inline ListMonitoringSchedulesRequest& WithLastModifiedTimeAfter(const Aws::Utils::DateTime& value) { SetLastModifiedTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only monitoring schedules modified after a specified
     * time.</p>
     */
    inline ListMonitoringSchedulesRequest& WithLastModifiedTimeAfter(Aws::Utils::DateTime&& value) { SetLastModifiedTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only monitoring schedules modified before a specified
     * time.</p>
     */
    inline const ScheduleStatus& GetStatusEquals() const{ return m_statusEquals; }

    /**
     * <p>A filter that returns only monitoring schedules modified before a specified
     * time.</p>
     */
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }

    /**
     * <p>A filter that returns only monitoring schedules modified before a specified
     * time.</p>
     */
    inline void SetStatusEquals(const ScheduleStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }

    /**
     * <p>A filter that returns only monitoring schedules modified before a specified
     * time.</p>
     */
    inline void SetStatusEquals(ScheduleStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }

    /**
     * <p>A filter that returns only monitoring schedules modified before a specified
     * time.</p>
     */
    inline ListMonitoringSchedulesRequest& WithStatusEquals(const ScheduleStatus& value) { SetStatusEquals(value); return *this;}

    /**
     * <p>A filter that returns only monitoring schedules modified before a specified
     * time.</p>
     */
    inline ListMonitoringSchedulesRequest& WithStatusEquals(ScheduleStatus&& value) { SetStatusEquals(std::move(value)); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet;

    MonitoringScheduleSortKey m_sortBy;
    bool m_sortByHasBeenSet;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTimeBefore;
    bool m_lastModifiedTimeBeforeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTimeAfter;
    bool m_lastModifiedTimeAfterHasBeenSet;

    ScheduleStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
