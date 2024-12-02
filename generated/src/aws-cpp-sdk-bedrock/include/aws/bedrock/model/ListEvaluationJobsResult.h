/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/EvaluationSummary.h>
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
namespace Bedrock
{
namespace Model
{
  class ListEvaluationJobsResult
  {
  public:
    AWS_BEDROCK_API ListEvaluationJobsResult();
    AWS_BEDROCK_API ListEvaluationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListEvaluationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Continuation token from the previous response, for Amazon Bedrock to list the
     * next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEvaluationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEvaluationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEvaluationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of summaries of the evaluation jobs.</p>
     */
    inline const Aws::Vector<EvaluationSummary>& GetJobSummaries() const{ return m_jobSummaries; }
    inline void SetJobSummaries(const Aws::Vector<EvaluationSummary>& value) { m_jobSummaries = value; }
    inline void SetJobSummaries(Aws::Vector<EvaluationSummary>&& value) { m_jobSummaries = std::move(value); }
    inline ListEvaluationJobsResult& WithJobSummaries(const Aws::Vector<EvaluationSummary>& value) { SetJobSummaries(value); return *this;}
    inline ListEvaluationJobsResult& WithJobSummaries(Aws::Vector<EvaluationSummary>&& value) { SetJobSummaries(std::move(value)); return *this;}
    inline ListEvaluationJobsResult& AddJobSummaries(const EvaluationSummary& value) { m_jobSummaries.push_back(value); return *this; }
    inline ListEvaluationJobsResult& AddJobSummaries(EvaluationSummary&& value) { m_jobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEvaluationJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEvaluationJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEvaluationJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<EvaluationSummary> m_jobSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
