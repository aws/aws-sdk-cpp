/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JobStatus.h>
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
   * <p>Contains the parameters for <code>ListJobs</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListJobsRequest">AWS
   * API Reference</a></p>
   */
  class ListJobsRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API ListJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or full Amazon Resource Name (ARN) of the job queue used to list
     * jobs.</p>
     */
    inline const Aws::String& GetJobQueue() const { return m_jobQueue; }
    inline bool JobQueueHasBeenSet() const { return m_jobQueueHasBeenSet; }
    template<typename JobQueueT = Aws::String>
    void SetJobQueue(JobQueueT&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = std::forward<JobQueueT>(value); }
    template<typename JobQueueT = Aws::String>
    ListJobsRequest& WithJobQueue(JobQueueT&& value) { SetJobQueue(std::forward<JobQueueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID for an array job. Specifying an array job ID with this parameter
     * lists all child jobs from within the specified array.</p>
     */
    inline const Aws::String& GetArrayJobId() const { return m_arrayJobId; }
    inline bool ArrayJobIdHasBeenSet() const { return m_arrayJobIdHasBeenSet; }
    template<typename ArrayJobIdT = Aws::String>
    void SetArrayJobId(ArrayJobIdT&& value) { m_arrayJobIdHasBeenSet = true; m_arrayJobId = std::forward<ArrayJobIdT>(value); }
    template<typename ArrayJobIdT = Aws::String>
    ListJobsRequest& WithArrayJobId(ArrayJobIdT&& value) { SetArrayJobId(std::forward<ArrayJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID for a multi-node parallel job. Specifying a multi-node parallel
     * job ID with this parameter lists all nodes that are associated with the
     * specified job.</p>
     */
    inline const Aws::String& GetMultiNodeJobId() const { return m_multiNodeJobId; }
    inline bool MultiNodeJobIdHasBeenSet() const { return m_multiNodeJobIdHasBeenSet; }
    template<typename MultiNodeJobIdT = Aws::String>
    void SetMultiNodeJobId(MultiNodeJobIdT&& value) { m_multiNodeJobIdHasBeenSet = true; m_multiNodeJobId = std::forward<MultiNodeJobIdT>(value); }
    template<typename MultiNodeJobIdT = Aws::String>
    ListJobsRequest& WithMultiNodeJobId(MultiNodeJobIdT&& value) { SetMultiNodeJobId(std::forward<MultiNodeJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job status used to filter jobs in the specified queue. If the
     * <code>filters</code> parameter is specified, the <code>jobStatus</code>
     * parameter is ignored and jobs with any status are returned. If you don't specify
     * a status, only <code>RUNNING</code> jobs are returned.</p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline ListJobsRequest& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned by <code>ListJobs</code> in a
     * paginated output. When this parameter is used, <code>ListJobs</code> returns up
     * to <code>maxResults</code> results in a single page and a <code>nextToken</code>
     * response element, if applicable. The remaining results of the initial request
     * can be seen by sending another <code>ListJobs</code> request with the returned
     * <code>nextToken</code> value.</p> <p>The following outlines key parameters and
     * limitations:</p> <ul> <li> <p>The minimum value is 1. </p> </li> <li> <p>When
     * <code>--job-status</code> is used, Batch returns up to 1000 values. </p> </li>
     * <li> <p>When <code>--filters</code> is used, Batch returns up to 100 values.</p>
     * </li> <li> <p>If neither parameter is used, then <code>ListJobs</code> returns
     * up to 1000 results (jobs that are in the <code>RUNNING</code> status) and a
     * <code>nextToken</code> value, if applicable.</p> </li> </ul>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListJobs</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p> 
     * <p>Treat this token as an opaque identifier that's only used to retrieve the
     * next items in a list and not for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter to apply to the query. Only one filter can be used at a time. When
     * the filter is used, <code>jobStatus</code> is ignored. The filter doesn't apply
     * to child jobs in an array or multi-node parallel (MNP) jobs. The results are
     * sorted by the <code>createdAt</code> field, with the most recent jobs being
     * first.</p> <dl> <dt>JOB_NAME</dt> <dd> <p>The value of the filter is a
     * case-insensitive match for the job name. If the value ends with an asterisk (*),
     * the filter matches any job name that begins with the string before the '*'. This
     * corresponds to the <code>jobName</code> value. For example, <code>test1</code>
     * matches both <code>Test1</code> and <code>test1</code>, and <code>test1*</code>
     * matches both <code>test1</code> and <code>Test10</code>. When the
     * <code>JOB_NAME</code> filter is used, the results are grouped by the job name
     * and version.</p> </dd> <dt>JOB_DEFINITION</dt> <dd> <p>The value for the filter
     * is the name or Amazon Resource Name (ARN) of the job definition. This
     * corresponds to the <code>jobDefinition</code> value. The value is case
     * sensitive. When the value for the filter is the job definition name, the results
     * include all the jobs that used any revision of that job definition name. If the
     * value ends with an asterisk (*), the filter matches any job definition name that
     * begins with the string before the '*'. For example, <code>jd1</code> matches
     * only <code>jd1</code>, and <code>jd1*</code> matches both <code>jd1</code> and
     * <code>jd1A</code>. The version of the job definition that's used doesn't affect
     * the sort order. When the <code>JOB_DEFINITION</code> filter is used and the ARN
     * is used (which is in the form
     * <code>arn:${Partition}:batch:${Region}:${Account}:job-definition/${JobDefinitionName}:${Revision}</code>),
     * the results include jobs that used the specified revision of the job definition.
     * Asterisk (*) isn't supported when the ARN is used.</p> </dd>
     * <dt>BEFORE_CREATED_AT</dt> <dd> <p>The value for the filter is the time that's
     * before the job was created. This corresponds to the <code>createdAt</code>
     * value. The value is a string representation of the number of milliseconds since
     * 00:00:00 UTC (midnight) on January 1, 1970.</p> </dd> <dt>AFTER_CREATED_AT</dt>
     * <dd> <p>The value for the filter is the time that's after the job was created.
     * This corresponds to the <code>createdAt</code> value. The value is a string
     * representation of the number of milliseconds since 00:00:00 UTC (midnight) on
     * January 1, 1970.</p> </dd> </dl>
     */
    inline const Aws::Vector<KeyValuesPair>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<KeyValuesPair>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<KeyValuesPair>>
    ListJobsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = KeyValuesPair>
    ListJobsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet = false;

    Aws::String m_arrayJobId;
    bool m_arrayJobIdHasBeenSet = false;

    Aws::String m_multiNodeJobId;
    bool m_multiNodeJobIdHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
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
