/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/model/JobRunAttemptSummary.h>
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
  class ListJobRunAttemptsResult
  {
  public:
    AWS_EMRSERVERLESS_API ListJobRunAttemptsResult() = default;
    AWS_EMRSERVERLESS_API ListJobRunAttemptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRSERVERLESS_API ListJobRunAttemptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The array of the listed job run attempt objects.</p>
     */
    inline const Aws::Vector<JobRunAttemptSummary>& GetJobRunAttempts() const { return m_jobRunAttempts; }
    template<typename JobRunAttemptsT = Aws::Vector<JobRunAttemptSummary>>
    void SetJobRunAttempts(JobRunAttemptsT&& value) { m_jobRunAttemptsHasBeenSet = true; m_jobRunAttempts = std::forward<JobRunAttemptsT>(value); }
    template<typename JobRunAttemptsT = Aws::Vector<JobRunAttemptSummary>>
    ListJobRunAttemptsResult& WithJobRunAttempts(JobRunAttemptsT&& value) { SetJobRunAttempts(std::forward<JobRunAttemptsT>(value)); return *this;}
    template<typename JobRunAttemptsT = JobRunAttemptSummary>
    ListJobRunAttemptsResult& AddJobRunAttempts(JobRunAttemptsT&& value) { m_jobRunAttemptsHasBeenSet = true; m_jobRunAttempts.emplace_back(std::forward<JobRunAttemptsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output displays the token for the next set of application results. This
     * is required for pagination and is available as a response of the previous
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJobRunAttemptsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListJobRunAttemptsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobRunAttemptSummary> m_jobRunAttempts;
    bool m_jobRunAttemptsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
