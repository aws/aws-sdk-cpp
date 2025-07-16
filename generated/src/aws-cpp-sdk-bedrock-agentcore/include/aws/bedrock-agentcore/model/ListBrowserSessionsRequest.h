/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/BrowserSessionStatus.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

  /**
   */
  class ListBrowserSessionsRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API ListBrowserSessionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBrowserSessions"; }

    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the browser to list sessions for. If specified, only
     * sessions for this browser are returned. If not specified, sessions for all
     * browsers are returned.</p>
     */
    inline const Aws::String& GetBrowserIdentifier() const { return m_browserIdentifier; }
    inline bool BrowserIdentifierHasBeenSet() const { return m_browserIdentifierHasBeenSet; }
    template<typename BrowserIdentifierT = Aws::String>
    void SetBrowserIdentifier(BrowserIdentifierT&& value) { m_browserIdentifierHasBeenSet = true; m_browserIdentifier = std::forward<BrowserIdentifierT>(value); }
    template<typename BrowserIdentifierT = Aws::String>
    ListBrowserSessionsRequest& WithBrowserIdentifier(BrowserIdentifierT&& value) { SetBrowserIdentifier(std::forward<BrowserIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. The default value
     * is 10. Valid values range from 1 to 100. To retrieve the remaining results, make
     * another call with the returned <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBrowserSessionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. If not
     * specified, Amazon Bedrock returns the first page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBrowserSessionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the browser sessions to list. Valid values include ACTIVE,
     * STOPPING, and STOPPED. If not specified, sessions with any status are
     * returned.</p>
     */
    inline BrowserSessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BrowserSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListBrowserSessionsRequest& WithStatus(BrowserSessionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_browserIdentifier;
    bool m_browserIdentifierHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    BrowserSessionStatus m_status{BrowserSessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
