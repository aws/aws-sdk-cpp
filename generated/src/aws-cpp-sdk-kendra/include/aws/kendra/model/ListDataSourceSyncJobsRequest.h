/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/TimeRange.h>
#include <aws/kendra/model/DataSourceSyncJobStatus.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class ListDataSourceSyncJobsRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API ListDataSourceSyncJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataSourceSyncJobs"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the data source connector.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ListDataSourceSyncJobsRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ListDataSourceSyncJobsRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ListDataSourceSyncJobsRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index used with the data source connector.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline ListDataSourceSyncJobsRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline ListDataSourceSyncJobsRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline ListDataSourceSyncJobsRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Kendra returns a pagination token in the response. You can use
     * this pagination token to retrieve the next set of jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDataSourceSyncJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataSourceSyncJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataSourceSyncJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of synchronization jobs to return in the response. If
     * there are fewer results in the list, this response contains only the actual
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDataSourceSyncJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When specified, the synchronization jobs returned in the list are limited to
     * jobs between the specified dates.</p>
     */
    inline const TimeRange& GetStartTimeFilter() const{ return m_startTimeFilter; }
    inline bool StartTimeFilterHasBeenSet() const { return m_startTimeFilterHasBeenSet; }
    inline void SetStartTimeFilter(const TimeRange& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = value; }
    inline void SetStartTimeFilter(TimeRange&& value) { m_startTimeFilterHasBeenSet = true; m_startTimeFilter = std::move(value); }
    inline ListDataSourceSyncJobsRequest& WithStartTimeFilter(const TimeRange& value) { SetStartTimeFilter(value); return *this;}
    inline ListDataSourceSyncJobsRequest& WithStartTimeFilter(TimeRange&& value) { SetStartTimeFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only returns synchronization jobs with the <code>Status</code> field equal to
     * the specified status.</p>
     */
    inline const DataSourceSyncJobStatus& GetStatusFilter() const{ return m_statusFilter; }
    inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }
    inline void SetStatusFilter(const DataSourceSyncJobStatus& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }
    inline void SetStatusFilter(DataSourceSyncJobStatus&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = std::move(value); }
    inline ListDataSourceSyncJobsRequest& WithStatusFilter(const DataSourceSyncJobStatus& value) { SetStatusFilter(value); return *this;}
    inline ListDataSourceSyncJobsRequest& WithStatusFilter(DataSourceSyncJobStatus&& value) { SetStatusFilter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    TimeRange m_startTimeFilter;
    bool m_startTimeFilterHasBeenSet = false;

    DataSourceSyncJobStatus m_statusFilter;
    bool m_statusFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
