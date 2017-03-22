/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JobStatus.h>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   */
  class AWS_BATCH_API ListJobsRequest : public BatchRequest
  {
  public:
    ListJobsRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The name or full Amazon Resource Name (ARN) of the job queue with which to
     * list jobs.</p>
     */
    inline const Aws::String& GetJobQueue() const{ return m_jobQueue; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the job queue with which to
     * list jobs.</p>
     */
    inline void SetJobQueue(const Aws::String& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the job queue with which to
     * list jobs.</p>
     */
    inline void SetJobQueue(Aws::String&& value) { m_jobQueueHasBeenSet = true; m_jobQueue = value; }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the job queue with which to
     * list jobs.</p>
     */
    inline void SetJobQueue(const char* value) { m_jobQueueHasBeenSet = true; m_jobQueue.assign(value); }

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the job queue with which to
     * list jobs.</p>
     */
    inline ListJobsRequest& WithJobQueue(const Aws::String& value) { SetJobQueue(value); return *this;}

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the job queue with which to
     * list jobs.</p>
     */
    inline ListJobsRequest& WithJobQueue(Aws::String&& value) { SetJobQueue(value); return *this;}

    /**
     * <p>The name or full Amazon Resource Name (ARN) of the job queue with which to
     * list jobs.</p>
     */
    inline ListJobsRequest& WithJobQueue(const char* value) { SetJobQueue(value); return *this;}

    /**
     * <p>The job status with which to filter jobs in the specified queue.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The job status with which to filter jobs in the specified queue.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The job status with which to filter jobs in the specified queue.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The job status with which to filter jobs in the specified queue.</p>
     */
    inline ListJobsRequest& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The job status with which to filter jobs in the specified queue.</p>
     */
    inline ListJobsRequest& WithJobStatus(JobStatus&& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The maximum number of results returned by <code>ListJobs</code> in paginated
     * output. When this parameter is used, <code>ListJobs</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListJobs</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, then <code>ListJobs</code> returns up to 100 results
     * and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results returned by <code>ListJobs</code> in paginated
     * output. When this parameter is used, <code>ListJobs</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListJobs</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, then <code>ListJobs</code> returns up to 100 results
     * and a <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results returned by <code>ListJobs</code> in paginated
     * output. When this parameter is used, <code>ListJobs</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListJobs</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter is not used, then <code>ListJobs</code> returns up to 100 results
     * and a <code>nextToken</code> value if applicable.</p>
     */
    inline ListJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListJobs</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p> <note>
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * </note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListJobs</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p> <note>
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * </note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListJobs</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p> <note>
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * </note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListJobs</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p> <note>
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * </note>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListJobs</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p> <note>
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * </note>
     */
    inline ListJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListJobs</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p> <note>
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * </note>
     */
    inline ListJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListJobs</code> request where <code>maxResults</code> was used and the
     * results exceeded the value of that parameter. Pagination continues from the end
     * of the previous results that returned the <code>nextToken</code> value. This
     * value is <code>null</code> when there are no more results to return.</p> <note>
     * <p>This token should be treated as an opaque identifier that is only used to
     * retrieve the next items in a list and not for other programmatic purposes.</p>
     * </note>
     */
    inline ListJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_jobQueue;
    bool m_jobQueueHasBeenSet;
    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
