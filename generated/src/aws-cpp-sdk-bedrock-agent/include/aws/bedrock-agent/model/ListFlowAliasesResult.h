/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/FlowAliasSummary.h>
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
namespace BedrockAgent
{
namespace Model
{
  class ListFlowAliasesResult
  {
  public:
    AWS_BEDROCKAGENT_API ListFlowAliasesResult() = default;
    AWS_BEDROCKAGENT_API ListFlowAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API ListFlowAliasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list, each member of which contains information about an alias.</p>
     */
    inline const Aws::Vector<FlowAliasSummary>& GetFlowAliasSummaries() const { return m_flowAliasSummaries; }
    template<typename FlowAliasSummariesT = Aws::Vector<FlowAliasSummary>>
    void SetFlowAliasSummaries(FlowAliasSummariesT&& value) { m_flowAliasSummariesHasBeenSet = true; m_flowAliasSummaries = std::forward<FlowAliasSummariesT>(value); }
    template<typename FlowAliasSummariesT = Aws::Vector<FlowAliasSummary>>
    ListFlowAliasesResult& WithFlowAliasSummaries(FlowAliasSummariesT&& value) { SetFlowAliasSummaries(std::forward<FlowAliasSummariesT>(value)); return *this;}
    template<typename FlowAliasSummariesT = FlowAliasSummary>
    ListFlowAliasesResult& AddFlowAliasSummaries(FlowAliasSummariesT&& value) { m_flowAliasSummariesHasBeenSet = true; m_flowAliasSummaries.emplace_back(std::forward<FlowAliasSummariesT>(value)); return *this; }
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
    ListFlowAliasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFlowAliasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlowAliasSummary> m_flowAliasSummaries;
    bool m_flowAliasSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
