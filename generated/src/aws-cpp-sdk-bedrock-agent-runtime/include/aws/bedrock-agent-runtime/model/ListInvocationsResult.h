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
    AWS_BEDROCKAGENTRUNTIME_API ListInvocationsResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API ListInvocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API ListInvocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of invocation summaries associated with the session.</p>
     */
    inline const Aws::Vector<InvocationSummary>& GetInvocationSummaries() const { return m_invocationSummaries; }
    template<typename InvocationSummariesT = Aws::Vector<InvocationSummary>>
    void SetInvocationSummaries(InvocationSummariesT&& value) { m_invocationSummariesHasBeenSet = true; m_invocationSummaries = std::forward<InvocationSummariesT>(value); }
    template<typename InvocationSummariesT = Aws::Vector<InvocationSummary>>
    ListInvocationsResult& WithInvocationSummaries(InvocationSummariesT&& value) { SetInvocationSummaries(std::forward<InvocationSummariesT>(value)); return *this;}
    template<typename InvocationSummariesT = InvocationSummary>
    ListInvocationsResult& AddInvocationSummaries(InvocationSummariesT&& value) { m_invocationSummariesHasBeenSet = true; m_invocationSummaries.emplace_back(std::forward<InvocationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInvocationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInvocationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InvocationSummary> m_invocationSummaries;
    bool m_invocationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
