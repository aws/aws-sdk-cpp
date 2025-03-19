/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chatbot/model/ChimeWebhookConfiguration.h>
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
  class DescribeChimeWebhookConfigurationsResult
  {
  public:
    AWS_CHATBOT_API DescribeChimeWebhookConfigurationsResult() = default;
    AWS_CHATBOT_API DescribeChimeWebhookConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHATBOT_API DescribeChimeWebhookConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeChimeWebhookConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Chime webhooks associated with the account.</p>
     */
    inline const Aws::Vector<ChimeWebhookConfiguration>& GetWebhookConfigurations() const { return m_webhookConfigurations; }
    template<typename WebhookConfigurationsT = Aws::Vector<ChimeWebhookConfiguration>>
    void SetWebhookConfigurations(WebhookConfigurationsT&& value) { m_webhookConfigurationsHasBeenSet = true; m_webhookConfigurations = std::forward<WebhookConfigurationsT>(value); }
    template<typename WebhookConfigurationsT = Aws::Vector<ChimeWebhookConfiguration>>
    DescribeChimeWebhookConfigurationsResult& WithWebhookConfigurations(WebhookConfigurationsT&& value) { SetWebhookConfigurations(std::forward<WebhookConfigurationsT>(value)); return *this;}
    template<typename WebhookConfigurationsT = ChimeWebhookConfiguration>
    DescribeChimeWebhookConfigurationsResult& AddWebhookConfigurations(WebhookConfigurationsT&& value) { m_webhookConfigurationsHasBeenSet = true; m_webhookConfigurations.emplace_back(std::forward<WebhookConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeChimeWebhookConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ChimeWebhookConfiguration> m_webhookConfigurations;
    bool m_webhookConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
