/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/Webhook.h>
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
namespace Amplify
{
namespace Model
{
  /**
   * <p>The result structure for the list webhooks request. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/ListWebhooksResult">AWS
   * API Reference</a></p>
   */
  class ListWebhooksResult
  {
  public:
    AWS_AMPLIFY_API ListWebhooksResult() = default;
    AWS_AMPLIFY_API ListWebhooksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFY_API ListWebhooksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of webhooks. </p>
     */
    inline const Aws::Vector<Webhook>& GetWebhooks() const { return m_webhooks; }
    template<typename WebhooksT = Aws::Vector<Webhook>>
    void SetWebhooks(WebhooksT&& value) { m_webhooksHasBeenSet = true; m_webhooks = std::forward<WebhooksT>(value); }
    template<typename WebhooksT = Aws::Vector<Webhook>>
    ListWebhooksResult& WithWebhooks(WebhooksT&& value) { SetWebhooks(std::forward<WebhooksT>(value)); return *this;}
    template<typename WebhooksT = Webhook>
    ListWebhooksResult& AddWebhooks(WebhooksT&& value) { m_webhooksHasBeenSet = true; m_webhooks.emplace_back(std::forward<WebhooksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token. If non-null, the pagination token is returned in a
     * result. Pass its value in another request to retrieve more entries. </p>
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

    Aws::Vector<Webhook> m_webhooks;
    bool m_webhooksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
