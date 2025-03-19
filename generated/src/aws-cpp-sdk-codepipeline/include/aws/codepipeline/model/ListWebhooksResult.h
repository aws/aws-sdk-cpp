/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ListWebhookItem.h>
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
namespace CodePipeline
{
namespace Model
{
  class ListWebhooksResult
  {
  public:
    AWS_CODEPIPELINE_API ListWebhooksResult() = default;
    AWS_CODEPIPELINE_API ListWebhooksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListWebhooksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The JSON detail returned for each webhook in the list output for the
     * ListWebhooks call.</p>
     */
    inline const Aws::Vector<ListWebhookItem>& GetWebhooks() const { return m_webhooks; }
    template<typename WebhooksT = Aws::Vector<ListWebhookItem>>
    void SetWebhooks(WebhooksT&& value) { m_webhooksHasBeenSet = true; m_webhooks = std::forward<WebhooksT>(value); }
    template<typename WebhooksT = Aws::Vector<ListWebhookItem>>
    ListWebhooksResult& WithWebhooks(WebhooksT&& value) { SetWebhooks(std::forward<WebhooksT>(value)); return *this;}
    template<typename WebhooksT = ListWebhookItem>
    ListWebhooksResult& AddWebhooks(WebhooksT&& value) { m_webhooksHasBeenSet = true; m_webhooks.emplace_back(std::forward<WebhooksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent ListWebhooks call to return the
     * next set of webhooks in the list. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWebhooksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWebhooksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListWebhookItem> m_webhooks;
    bool m_webhooksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
