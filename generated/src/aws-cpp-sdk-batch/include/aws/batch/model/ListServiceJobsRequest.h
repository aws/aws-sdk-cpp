/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ServiceJobStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/KeyValuesPair.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class ListServiceJobsRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API ListServiceJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServiceJobs"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or ARN of the job queue with which to list service jobs.</p>
     */
    inline const Aws::String& GetJobQueue() const { return m_jobQueue; }
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }
    template<typename JobQueueT = Aws::String>
    void SetJobQueue(JobQueueT&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::forward<JobQueueT>(value); }
    template<typename JobQueueT = Aws::String>
    ListServiceJobsRequest& WithJobQueue(JobQueueT&& value) { SetJobQueue(std::forward<JobQueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job status with which to filter service jobs. </p>
     */
    inline ServiceJobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(ServiceJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline ListServiceJobsRequest& WithJobStatus(ServiceJobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned by <code>ListServiceJobs</code> in
     * paginated output. When this parameter is used, <code>ListServiceJobs</code> only
     * returns <code>maxResults</code> results in a single page and a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListServiceJobs</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If this parameter isn't used, then <code>ListServiceJobs</code> returns up to
     * 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServiceJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListServiceJobs</code> request where <code>maxResults</code> was used and
     * the results exceeded the value of that parameter. Pagination continues from the
     * end of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p> 
     * <p>Treat this token as an opaque identifier that's only used to retrieve the
     * next items in a list and not for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter to apply to the query. Only one filter can be used at a time. When
     * the filter is used, <code>jobStatus</code> is ignored. The results are sorted by
     * the <code>createdAt</code> field, with the most recent jobs being first.</p>
     * <dl> <dt>JOB_NAME</dt> <dd> <p>The value of the filter is a case-insensitive
     * match for the job name. If the value ends with an asterisk (*), the filter
     * matches any job name that begins with the string before the '*'. This
     * corresponds to the <code>jobName</code> value. For example, <code>test1</code>
     * matches both <code>Test1</code> and <code>test1</code>, and <code>test1*</code>
     * matches both <code>test1</code> and <code>Test10</code>. When the
     * <code>JOB_NAME</code> filter is used, the results are grouped by the job name
     * and version.</p> </dd> <dt>BEFORE_CREATED_AT</dt> <dd> <p>The value for the
     * filter is the time that's before the job was created. This corresponds to the
     * <code>createdAt</code> value. The value is a string representation of the number
     * of milliseconds since 00:00:00 UTC (midnight) on January 1, 1970.</p> </dd>
     * <dt>AFTER_CREATED_AT</dt> <dd> <p>The value for the filter is the time that's
     * after the job was created. This corresponds to the <code>createdAt</code> value.
     * The value is a string representation of the number of milliseconds since
     * 00:00:00 UTC (midnight) on January 1, 1970.</p> </dd> </dl>
     */
    inline const Aws::Vector<KeyValuesPair>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<KeyValuesPair>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<KeyValuesPair>>
    ListServiceJobsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = KeyValuesPair>
    ListServiceJobsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet = false;

    ServiceJobStatus m_jobStatus{ServiceJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<KeyValuesPair> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
