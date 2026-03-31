/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/PagerDutyOAuthClientCredentialsConfig.h>

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
 * <p>Authorization configuration options for PagerDuty service.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/PagerDutyAuthorizationConfig">AWS
 * API Reference</a></p>
 */
class PagerDutyAuthorizationConfig {
 public:
  AWS_DEVOPSAGENT_API PagerDutyAuthorizationConfig() = default;
  AWS_DEVOPSAGENT_API PagerDutyAuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API PagerDutyAuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>OAuth client credentials configuration.</p>
   */
  inline const PagerDutyOAuthClientCredentialsConfig& GetOAuthClientCredentials() const { return m_oAuthClientCredentials; }
  inline bool OAuthClientCredentialsHasBeenSet() const { return m_oAuthClientCredentialsHasBeenSet; }
  template <typename OAuthClientCredentialsT = PagerDutyOAuthClientCredentialsConfig>
  void SetOAuthClientCredentials(OAuthClientCredentialsT&& value) {
    m_oAuthClientCredentialsHasBeenSet = true;
    m_oAuthClientCredentials = std::forward<OAuthClientCredentialsT>(value);
  }
  template <typename OAuthClientCredentialsT = PagerDutyOAuthClientCredentialsConfig>
  PagerDutyAuthorizationConfig& WithOAuthClientCredentials(OAuthClientCredentialsT&& value) {
    SetOAuthClientCredentials(std::forward<OAuthClientCredentialsT>(value));
    return *this;
  }
  ///@}
 private:
  PagerDutyOAuthClientCredentialsConfig m_oAuthClientCredentials;
  bool m_oAuthClientCredentialsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
