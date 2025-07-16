/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/BrowserSummary.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{
  class ListBrowsersResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ListBrowsersResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ListBrowsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API ListBrowsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of browser summaries.</p>
     */
    inline const Aws::Vector<BrowserSummary>& GetBrowserSummaries() const { return m_browserSummaries; }
    template<typename BrowserSummariesT = Aws::Vector<BrowserSummary>>
    void SetBrowserSummaries(BrowserSummariesT&& value) { m_browserSummariesHasBeenSet = true; m_browserSummaries = std::forward<BrowserSummariesT>(value); }
    template<typename BrowserSummariesT = Aws::Vector<BrowserSummary>>
    ListBrowsersResult& WithBrowserSummaries(BrowserSummariesT&& value) { SetBrowserSummaries(std::forward<BrowserSummariesT>(value)); return *this;}
    template<typename BrowserSummariesT = BrowserSummary>
    ListBrowsersResult& AddBrowserSummaries(BrowserSummariesT&& value) { m_browserSummariesHasBeenSet = true; m_browserSummaries.emplace_back(std::forward<BrowserSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBrowsersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBrowsersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BrowserSummary> m_browserSummaries;
    bool m_browserSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
