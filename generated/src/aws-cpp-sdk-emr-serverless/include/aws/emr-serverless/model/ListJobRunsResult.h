/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/model/JobRunSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMRServerless
{
namespace Model
{
  class ListJobRunsResult
  {
  public:
    AWS_EMRSERVERLESS_API ListJobRunsResult() = default;
    AWS_EMRSERVERLESS_API ListJobRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRSERVERLESS_API ListJobRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The output lists information about the specified job runs.</p>
     */
    inline const Aws::Vector<JobRunSummary>& GetJobRuns() const { return m_jobRuns; }
    template<typename JobRunsT = Aws::Vector<JobRunSummary>>
    void SetJobRuns(JobRunsT&& value) { m_jobRunsHasBeenSet = true; m_jobRuns = std::forward<JobRunsT>(value); }
    template<typename JobRunsT = Aws::Vector<JobRunSummary>>
    ListJobRunsResult& WithJobRuns(JobRunsT&& value) { SetJobRuns(std::forward<JobRunsT>(value)); return *this;}
    template<typename JobRunsT = JobRunSummary>
    ListJobRunsResult& AddJobRuns(JobRunsT&& value) { m_jobRunsHasBeenSet = true; m_jobRuns.emplace_back(std::forward<JobRunsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output displays the token for the next set of job run results. This is
     * required for pagination and is available as a response of the previous
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJobRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListJobRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobRunSummary> m_jobRuns;
    bool m_jobRunsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
