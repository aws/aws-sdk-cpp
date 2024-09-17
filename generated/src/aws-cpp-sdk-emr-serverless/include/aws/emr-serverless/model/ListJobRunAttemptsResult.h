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
    AWS_EMRSERVERLESS_API ListJobRunAttemptsResult();
    AWS_EMRSERVERLESS_API ListJobRunAttemptsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRSERVERLESS_API ListJobRunAttemptsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The array of the listed job run attempt objects.</p>
     */
    inline const Aws::Vector<JobRunAttemptSummary>& GetJobRunAttempts() const{ return m_jobRunAttempts; }
    inline void SetJobRunAttempts(const Aws::Vector<JobRunAttemptSummary>& value) { m_jobRunAttempts = value; }
    inline void SetJobRunAttempts(Aws::Vector<JobRunAttemptSummary>&& value) { m_jobRunAttempts = std::move(value); }
    inline ListJobRunAttemptsResult& WithJobRunAttempts(const Aws::Vector<JobRunAttemptSummary>& value) { SetJobRunAttempts(value); return *this;}
    inline ListJobRunAttemptsResult& WithJobRunAttempts(Aws::Vector<JobRunAttemptSummary>&& value) { SetJobRunAttempts(std::move(value)); return *this;}
    inline ListJobRunAttemptsResult& AddJobRunAttempts(const JobRunAttemptSummary& value) { m_jobRunAttempts.push_back(value); return *this; }
    inline ListJobRunAttemptsResult& AddJobRunAttempts(JobRunAttemptSummary&& value) { m_jobRunAttempts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output displays the token for the next set of application results. This
     * is required for pagination and is available as a response of the previous
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListJobRunAttemptsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListJobRunAttemptsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListJobRunAttemptsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListJobRunAttemptsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListJobRunAttemptsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListJobRunAttemptsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobRunAttemptSummary> m_jobRunAttempts;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
