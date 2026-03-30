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
 * <p>Generic webhook configuration for services that support webhook
 * notifications.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GenericWebhook">AWS
 * API Reference</a></p>
 */
class GenericWebhook {
 public:
  AWS_DEVOPSAGENT_API GenericWebhook() = default;
  AWS_DEVOPSAGENT_API GenericWebhook(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API GenericWebhook& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The webhook URL endpoint</p>
   */
  inline const Aws::String& GetWebhookUrl() const { return m_webhookUrl; }
  inline bool WebhookUrlHasBeenSet() const { return m_webhookUrlHasBeenSet; }
  template <typename WebhookUrlT = Aws::String>
  void SetWebhookUrl(WebhookUrlT&& value) {
    m_webhookUrlHasBeenSet = true;
    m_webhookUrl = std::forward<WebhookUrlT>(value);
  }
  template <typename WebhookUrlT = Aws::String>
  GenericWebhook& WithWebhookUrl(WebhookUrlT&& value) {
    SetWebhookUrl(std::forward<WebhookUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique webhook identifier</p>
   */
  inline const Aws::String& GetWebhookId() const { return m_webhookId; }
  inline bool WebhookIdHasBeenSet() const { return m_webhookIdHasBeenSet; }
  template <typename WebhookIdT = Aws::String>
  void SetWebhookId(WebhookIdT&& value) {
    m_webhookIdHasBeenSet = true;
    m_webhookId = std::forward<WebhookIdT>(value);
  }
  template <typename WebhookIdT = Aws::String>
  GenericWebhook& WithWebhookId(WebhookIdT&& value) {
    SetWebhookId(std::forward<WebhookIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The webhook authentication type</p>
   */
  inline WebhookType GetWebhookType() const { return m_webhookType; }
  inline bool WebhookTypeHasBeenSet() const { return m_webhookTypeHasBeenSet; }
  inline void SetWebhookType(WebhookType value) {
    m_webhookTypeHasBeenSet = true;
    m_webhookType = value;
  }
  inline GenericWebhook& WithWebhookType(WebhookType value) {
    SetWebhookType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The webhook secret for authentication</p>
   */
  inline const Aws::String& GetWebhookSecret() const { return m_webhookSecret; }
  inline bool WebhookSecretHasBeenSet() const { return m_webhookSecretHasBeenSet; }
  template <typename WebhookSecretT = Aws::String>
  void SetWebhookSecret(WebhookSecretT&& value) {
    m_webhookSecretHasBeenSet = true;
    m_webhookSecret = std::forward<WebhookSecretT>(value);
  }
  template <typename WebhookSecretT = Aws::String>
  GenericWebhook& WithWebhookSecret(WebhookSecretT&& value) {
    SetWebhookSecret(std::forward<WebhookSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>API Key for API Key webhook authentication</p>
   */
  inline const Aws::String& GetApiKey() const { return m_apiKey; }
  inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
  template <typename ApiKeyT = Aws::String>
  void SetApiKey(ApiKeyT&& value) {
    m_apiKeyHasBeenSet = true;
    m_apiKey = std::forward<ApiKeyT>(value);
  }
  template <typename ApiKeyT = Aws::String>
  GenericWebhook& WithApiKey(ApiKeyT&& value) {
    SetApiKey(std::forward<ApiKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_webhookUrl;

  Aws::String m_webhookId;

  WebhookType m_webhookType{WebhookType::NOT_SET};

  Aws::String m_webhookSecret;

  Aws::String m_apiKey;
  bool m_webhookUrlHasBeenSet = false;
  bool m_webhookIdHasBeenSet = false;
  bool m_webhookTypeHasBeenSet = false;
  bool m_webhookSecretHasBeenSet = false;
  bool m_apiKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
