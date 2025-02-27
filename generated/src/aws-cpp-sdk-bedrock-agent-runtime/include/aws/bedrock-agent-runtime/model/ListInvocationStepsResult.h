/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/InvocationStepSummary.h>
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
namespace BedrockAgentRuntime
{
namespace Model
{
  class ListInvocationStepsResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ListInvocationStepsResult();
    AWS_BEDROCKAGENTRUNTIME_API ListInvocationStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API ListInvocationStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summaries for each invocation step associated with a session and if
     * you specified it, an invocation within the session.</p>
     */
    inline const Aws::Vector<InvocationStepSummary>& GetInvocationStepSummaries() const{ return m_invocationStepSummaries; }
    inline void SetInvocationStepSummaries(const Aws::Vector<InvocationStepSummary>& value) { m_invocationStepSummaries = value; }
    inline void SetInvocationStepSummaries(Aws::Vector<InvocationStepSummary>&& value) { m_invocationStepSummaries = std::move(value); }
    inline ListInvocationStepsResult& WithInvocationStepSummaries(const Aws::Vector<InvocationStepSummary>& value) { SetInvocationStepSummaries(value); return *this;}
    inline ListInvocationStepsResult& WithInvocationStepSummaries(Aws::Vector<InvocationStepSummary>&& value) { SetInvocationStepSummaries(std::move(value)); return *this;}
    inline ListInvocationStepsResult& AddInvocationStepSummaries(const InvocationStepSummary& value) { m_invocationStepSummaries.push_back(value); return *this; }
    inline ListInvocationStepsResult& AddInvocationStepSummaries(InvocationStepSummary&& value) { m_invocationStepSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInvocationStepsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInvocationStepsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInvocationStepsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInvocationStepsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInvocationStepsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInvocationStepsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InvocationStepSummary> m_invocationStepSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
