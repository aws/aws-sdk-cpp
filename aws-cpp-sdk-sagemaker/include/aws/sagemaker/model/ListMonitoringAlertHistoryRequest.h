/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringAlertHistorySortKey.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/MonitoringAlertStatus.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListMonitoringAlertHistoryRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListMonitoringAlertHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMonitoringAlertHistory"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const{ return m_monitoringScheduleName; }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(const Aws::String& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = value; }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(Aws::String&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::move(value); }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline void SetMonitoringScheduleName(const char* value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName.assign(value); }

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}

    /**
     * <p>The name of a monitoring schedule.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}


    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline const Aws::String& GetMonitoringAlertName() const{ return m_monitoringAlertName; }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline bool MonitoringAlertNameHasBeenSet() const { return m_monitoringAlertNameHasBeenSet; }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline void SetMonitoringAlertName(const Aws::String& value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName = value; }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline void SetMonitoringAlertName(Aws::String&& value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName = std::move(value); }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline void SetMonitoringAlertName(const char* value) { m_monitoringAlertNameHasBeenSet = true; m_monitoringAlertName.assign(value); }

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithMonitoringAlertName(const Aws::String& value) { SetMonitoringAlertName(value); return *this;}

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithMonitoringAlertName(Aws::String&& value) { SetMonitoringAlertName(std::move(value)); return *this;}

    /**
     * <p>The name of a monitoring alert.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithMonitoringAlertName(const char* value) { SetMonitoringAlertName(value); return *this;}


    /**
     * <p>The field used to sort results. The default is <code>CreationTime</code>.</p>
     */
    inline const MonitoringAlertHistorySortKey& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field used to sort results. The default is <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field used to sort results. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const MonitoringAlertHistorySortKey& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field used to sort results. The default is <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(MonitoringAlertHistorySortKey&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field used to sort results. The default is <code>CreationTime</code>.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithSortBy(const MonitoringAlertHistorySortKey& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field used to sort results. The default is <code>CreationTime</code>.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithSortBy(MonitoringAlertHistorySortKey&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order, whether <code>Ascending</code> or <code>Descending</code>, of
     * the alert history. The default is <code>Descending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order, whether <code>Ascending</code> or <code>Descending</code>, of
     * the alert history. The default is <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order, whether <code>Ascending</code> or <code>Descending</code>, of
     * the alert history. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order, whether <code>Ascending</code> or <code>Descending</code>, of
     * the alert history. The default is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order, whether <code>Ascending</code> or <code>Descending</code>, of
     * the alert history. The default is <code>Descending</code>.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order, whether <code>Ascending</code> or <code>Descending</code>, of
     * the alert history. The default is <code>Descending</code>.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>If the result of the previous <code>ListMonitoringAlertHistory</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of alerts in the history, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous <code>ListMonitoringAlertHistory</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of alerts in the history, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous <code>ListMonitoringAlertHistory</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of alerts in the history, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous <code>ListMonitoringAlertHistory</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of alerts in the history, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous <code>ListMonitoringAlertHistory</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of alerts in the history, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous <code>ListMonitoringAlertHistory</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of alerts in the history, use the token in the next request.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous <code>ListMonitoringAlertHistory</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of alerts in the history, use the token in the next request.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous <code>ListMonitoringAlertHistory</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of alerts in the history, use the token in the next request.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to display. The default is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to display. The default is 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to display. The default is 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to display. The default is 100.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A filter that returns only alerts created on or before the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns only alerts created on or before the specified
     * time.</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only alerts created on or before the specified
     * time.</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns only alerts created on or before the specified
     * time.</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only alerts created on or before the specified
     * time.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only alerts created on or before the specified
     * time.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only alerts created on or after the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns only alerts created on or after the specified time.</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only alerts created on or after the specified time.</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns only alerts created on or after the specified time.</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only alerts created on or after the specified time.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only alerts created on or after the specified time.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that retrieves only alerts with a specific status.</p>
     */
    inline const MonitoringAlertStatus& GetStatusEquals() const{ return m_statusEquals; }

    /**
     * <p>A filter that retrieves only alerts with a specific status.</p>
     */
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }

    /**
     * <p>A filter that retrieves only alerts with a specific status.</p>
     */
    inline void SetStatusEquals(const MonitoringAlertStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }

    /**
     * <p>A filter that retrieves only alerts with a specific status.</p>
     */
    inline void SetStatusEquals(MonitoringAlertStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }

    /**
     * <p>A filter that retrieves only alerts with a specific status.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithStatusEquals(const MonitoringAlertStatus& value) { SetStatusEquals(value); return *this;}

    /**
     * <p>A filter that retrieves only alerts with a specific status.</p>
     */
    inline ListMonitoringAlertHistoryRequest& WithStatusEquals(MonitoringAlertStatus&& value) { SetStatusEquals(std::move(value)); return *this;}

  private:

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    Aws::String m_monitoringAlertName;
    bool m_monitoringAlertNameHasBeenSet = false;

    MonitoringAlertHistorySortKey m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    MonitoringAlertStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
