/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/Webhook.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
/**
 * <p>Output containing a list of service association webhooks.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListWebhooksOutput">AWS
 * API Reference</a></p>
 */
class ListWebhooksResult {
 public:
  AWS_DEVOPSAGENT_API ListWebhooksResult() = default;
  AWS_DEVOPSAGENT_API ListWebhooksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API ListWebhooksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of association webhooks.</p>
   */
  inline const Aws::Vector<Webhook>& GetWebhooks() const { return m_webhooks; }
  template <typename WebhooksT = Aws::Vector<Webhook>>
  void SetWebhooks(WebhooksT&& value) {
    m_webhooksHasBeenSet = true;
    m_webhooks = std::forward<WebhooksT>(value);
  }
  template <typename WebhooksT = Aws::Vector<Webhook>>
  ListWebhooksResult& WithWebhooks(WebhooksT&& value) {
    SetWebhooks(std::forward<WebhooksT>(value));
    return *this;
  }
  template <typename WebhooksT = Webhook>
  ListWebhooksResult& AddWebhooks(WebhooksT&& value) {
    m_webhooksHasBeenSet = true;
    m_webhooks.emplace_back(std::forward<WebhooksT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListWebhooksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Webhook> m_webhooks;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_webhooksHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
