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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/JobStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Control
{
namespace Model
{

  /**
   */
  class AWS_S3CONTROL_API ListJobsRequest : public S3ControlRequest
  {
  public:
    ListJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p/>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p/>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p/>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p/>
     */
    inline ListJobsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p/>
     */
    inline ListJobsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListJobsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline const Aws::Vector<JobStatus>& GetJobStatuses() const{ return m_jobStatuses; }

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline bool JobStatusesHasBeenSet() const { return m_jobStatusesHasBeenSet; }

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline void SetJobStatuses(const Aws::Vector<JobStatus>& value) { m_jobStatusesHasBeenSet = true; m_jobStatuses = value; }

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline void SetJobStatuses(Aws::Vector<JobStatus>&& value) { m_jobStatusesHasBeenSet = true; m_jobStatuses = std::move(value); }

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline ListJobsRequest& WithJobStatuses(const Aws::Vector<JobStatus>& value) { SetJobStatuses(value); return *this;}

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline ListJobsRequest& WithJobStatuses(Aws::Vector<JobStatus>&& value) { SetJobStatuses(std::move(value)); return *this;}

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline ListJobsRequest& AddJobStatuses(const JobStatus& value) { m_jobStatusesHasBeenSet = true; m_jobStatuses.push_back(value); return *this; }

    /**
     * <p>The <code>List Jobs</code> request returns jobs that match the statuses
     * listed in this element.</p>
     */
    inline ListJobsRequest& AddJobStatuses(JobStatus&& value) { m_jobStatusesHasBeenSet = true; m_jobStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline ListJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline ListJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token to request the next page of results. Use the token that
     * Amazon S3 returned in the <code>NextToken</code> element of the
     * <code>ListJobsResult</code> from the previous <code>List Jobs</code>
     * request.</p>
     */
    inline ListJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of jobs that Amazon S3 will include in the <code>List
     * Jobs</code> response. If there are more jobs than this number, the response will
     * include a pagination token in the <code>NextToken</code> field to enable you to
     * retrieve the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of jobs that Amazon S3 will include in the <code>List
     * Jobs</code> response. If there are more jobs than this number, the response will
     * include a pagination token in the <code>NextToken</code> field to enable you to
     * retrieve the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of jobs that Amazon S3 will include in the <code>List
     * Jobs</code> response. If there are more jobs than this number, the response will
     * include a pagination token in the <code>NextToken</code> field to enable you to
     * retrieve the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of jobs that Amazon S3 will include in the <code>List
     * Jobs</code> response. If there are more jobs than this number, the response will
     * include a pagination token in the <code>NextToken</code> field to enable you to
     * retrieve the next page of results.</p>
     */
    inline ListJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::Vector<JobStatus> m_jobStatuses;
    bool m_jobStatusesHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
