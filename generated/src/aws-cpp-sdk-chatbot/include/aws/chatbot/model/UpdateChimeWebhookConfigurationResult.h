/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/model/ChimeWebhookConfiguration.h>
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
namespace chatbot
{
namespace Model
{
  class UpdateChimeWebhookConfigurationResult
  {
  public:
    AWS_CHATBOT_API UpdateChimeWebhookConfigurationResult() = default;
    AWS_CHATBOT_API UpdateChimeWebhookConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API UpdateChimeWebhookConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A Amazon Chime webhook configuration.</p>
     */
    inline const ChimeWebhookConfiguration& GetWebhookConfiguration() const { return m_webhookConfiguration; }
    template<typename WebhookConfigurationT = ChimeWebhookConfiguration>
    void SetWebhookConfiguration(WebhookConfigurationT&& value) { m_webhookConfigurationHasBeenSet = true; m_webhookConfiguration = std::forward<WebhookConfigurationT>(value); }
    template<typename WebhookConfigurationT = ChimeWebhookConfiguration>
    UpdateChimeWebhookConfigurationResult& WithWebhookConfiguration(WebhookConfigurationT&& value) { SetWebhookConfiguration(std::forward<WebhookConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateChimeWebhookConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ChimeWebhookConfiguration m_webhookConfiguration;
    bool m_webhookConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
