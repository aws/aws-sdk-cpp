/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ListWebhookItem.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class PutWebhookResult
  {
  public:
    AWS_CODEPIPELINE_API PutWebhookResult() = default;
    AWS_CODEPIPELINE_API PutWebhookResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API PutWebhookResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The detail returned from creating the webhook, such as the webhook name,
     * webhook URL, and webhook ARN.</p>
     */
    inline const ListWebhookItem& GetWebhook() const { return m_webhook; }
    template<typename WebhookT = ListWebhookItem>
    void SetWebhook(WebhookT&& value) { m_webhookHasBeenSet = true; m_webhook = std::forward<WebhookT>(value); }
    template<typename WebhookT = ListWebhookItem>
    PutWebhookResult& WithWebhook(WebhookT&& value) { SetWebhook(std::forward<WebhookT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutWebhookResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ListWebhookItem m_webhook;
    bool m_webhookHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
