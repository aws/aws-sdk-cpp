/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/NewRelicApiKeyConfig.h>

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
 * <p>Authorization configuration options for New Relic service.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/NewRelicServiceAuthorizationConfig">AWS
 * API Reference</a></p>
 */
class NewRelicServiceAuthorizationConfig {
 public:
  AWS_DEVOPSAGENT_API NewRelicServiceAuthorizationConfig() = default;
  AWS_DEVOPSAGENT_API NewRelicServiceAuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API NewRelicServiceAuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>New Relic API Key authentication (apiKey, accountId, region).</p>
   */
  inline const NewRelicApiKeyConfig& GetApiKey() const { return m_apiKey; }
  inline bool ApiKeyHasBeenSet() const { return m_apiKeyHasBeenSet; }
  template <typename ApiKeyT = NewRelicApiKeyConfig>
  void SetApiKey(ApiKeyT&& value) {
    m_apiKeyHasBeenSet = true;
    m_apiKey = std::forward<ApiKeyT>(value);
  }
  template <typename ApiKeyT = NewRelicApiKeyConfig>
  NewRelicServiceAuthorizationConfig& WithApiKey(ApiKeyT&& value) {
    SetApiKey(std::forward<ApiKeyT>(value));
    return *this;
  }
  ///@}
 private:
  NewRelicApiKeyConfig m_apiKey;
  bool m_apiKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
