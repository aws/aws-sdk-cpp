/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/InvocationSummary.h>
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
  class ListInvocationsResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ListInvocationsResult();
    AWS_BEDROCKAGENTRUNTIME_API ListInvocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API ListInvocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of invocation summaries associated with the session.</p>
     */
    inline const Aws::Vector<InvocationSummary>& GetInvocationSummaries() const{ return m_invocationSummaries; }
    inline void SetInvocationSummaries(const Aws::Vector<InvocationSummary>& value) { m_invocationSummaries = value; }
    inline void SetInvocationSummaries(Aws::Vector<InvocationSummary>&& value) { m_invocationSummaries = std::move(value); }
    inline ListInvocationsResult& WithInvocationSummaries(const Aws::Vector<InvocationSummary>& value) { SetInvocationSummaries(value); return *this;}
    inline ListInvocationsResult& WithInvocationSummaries(Aws::Vector<InvocationSummary>&& value) { SetInvocationSummaries(std::move(value)); return *this;}
    inline ListInvocationsResult& AddInvocationSummaries(const InvocationSummary& value) { m_invocationSummaries.push_back(value); return *this; }
    inline ListInvocationsResult& AddInvocationSummaries(InvocationSummary&& value) { m_invocationSummaries.push_back(std::move(value)); return *this; }
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
    inline ListInvocationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInvocationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInvocationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInvocationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInvocationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInvocationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InvocationSummary> m_invocationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
