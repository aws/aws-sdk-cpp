/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent-runtime/model/SessionSummary.h>
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
  class ListSessionsResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ListSessionsResult() = default;
    AWS_BEDROCKAGENTRUNTIME_API ListSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API ListSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summaries for each session in your Amazon Web Services account.</p>
     */
    inline const Aws::Vector<SessionSummary>& GetSessionSummaries() const { return m_sessionSummaries; }
    template<typename SessionSummariesT = Aws::Vector<SessionSummary>>
    void SetSessionSummaries(SessionSummariesT&& value) { m_sessionSummariesHasBeenSet = true; m_sessionSummaries = std::forward<SessionSummariesT>(value); }
    template<typename SessionSummariesT = Aws::Vector<SessionSummary>>
    ListSessionsResult& WithSessionSummaries(SessionSummariesT&& value) { SetSessionSummaries(std::forward<SessionSummariesT>(value)); return *this;}
    template<typename SessionSummariesT = SessionSummary>
    ListSessionsResult& AddSessionSummaries(SessionSummariesT&& value) { m_sessionSummariesHasBeenSet = true; m_sessionSummaries.emplace_back(std::forward<SessionSummariesT>(value)); return *this; }
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
    ListSessionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSessionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SessionSummary> m_sessionSummaries;
    bool m_sessionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
