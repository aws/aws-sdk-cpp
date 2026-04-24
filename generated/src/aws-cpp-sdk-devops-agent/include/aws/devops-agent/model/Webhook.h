/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/WebhookType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Represents a complete Webhook with all its properties, and unique
 * identifier.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/Webhook">AWS
 * API Reference</a></p>
 */
class Webhook {
 public:
  AWS_DEVOPSAGENT_API Webhook() = default;
  AWS_DEVOPSAGENT_API Webhook(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Webhook& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Webhook endpoint URL.</p>
   */
  inline const Aws::String& GetWebhookUrl() const { return m_webhookUrl; }
  inline bool WebhookUrlHasBeenSet() const { return m_webhookUrlHasBeenSet; }
  template <typename WebhookUrlT = Aws::String>
  void SetWebhookUrl(WebhookUrlT&& value) {
    m_webhookUrlHasBeenSet = true;
    m_webhookUrl = std::forward<WebhookUrlT>(value);
  }
  template <typename WebhookUrlT = Aws::String>
  Webhook& WithWebhookUrl(WebhookUrlT&& value) {
    SetWebhookUrl(std::forward<WebhookUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Webhook authentication type.</p>
   */
  inline WebhookType GetWebhookType() const { return m_webhookType; }
  inline bool WebhookTypeHasBeenSet() const { return m_webhookTypeHasBeenSet; }
  inline void SetWebhookType(WebhookType value) {
    m_webhookTypeHasBeenSet = true;
    m_webhookType = value;
  }
  inline Webhook& WithWebhookType(WebhookType value) {
    SetWebhookType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Webhook</p>
   */
  inline const Aws::String& GetWebhookId() const { return m_webhookId; }
  inline bool WebhookIdHasBeenSet() const { return m_webhookIdHasBeenSet; }
  template <typename WebhookIdT = Aws::String>
  void SetWebhookId(WebhookIdT&& value) {
    m_webhookIdHasBeenSet = true;
    m_webhookId = std::forward<WebhookIdT>(value);
  }
  template <typename WebhookIdT = Aws::String>
  Webhook& WithWebhookId(WebhookIdT&& value) {
    SetWebhookId(std::forward<WebhookIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_webhookUrl;

  WebhookType m_webhookType{WebhookType::NOT_SET};

  Aws::String m_webhookId;
  bool m_webhookUrlHasBeenSet = false;
  bool m_webhookTypeHasBeenSet = false;
  bool m_webhookIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
