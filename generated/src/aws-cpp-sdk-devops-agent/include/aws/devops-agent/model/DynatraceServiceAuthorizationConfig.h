/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/DynatraceOAuthClientCredentialsConfig.h>

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
 * <p>Authorization configuration options for Dynatrace service.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DynatraceServiceAuthorizationConfig">AWS
 * API Reference</a></p>
 */
class DynatraceServiceAuthorizationConfig {
 public:
  AWS_DEVOPSAGENT_API DynatraceServiceAuthorizationConfig() = default;
  AWS_DEVOPSAGENT_API DynatraceServiceAuthorizationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API DynatraceServiceAuthorizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>OAuth client credentials configuration.</p>
   */
  inline const DynatraceOAuthClientCredentialsConfig& GetOAuthClientCredentials() const { return m_oAuthClientCredentials; }
  inline bool OAuthClientCredentialsHasBeenSet() const { return m_oAuthClientCredentialsHasBeenSet; }
  template <typename OAuthClientCredentialsT = DynatraceOAuthClientCredentialsConfig>
  void SetOAuthClientCredentials(OAuthClientCredentialsT&& value) {
    m_oAuthClientCredentialsHasBeenSet = true;
    m_oAuthClientCredentials = std::forward<OAuthClientCredentialsT>(value);
  }
  template <typename OAuthClientCredentialsT = DynatraceOAuthClientCredentialsConfig>
  DynatraceServiceAuthorizationConfig& WithOAuthClientCredentials(OAuthClientCredentialsT&& value) {
    SetOAuthClientCredentials(std::forward<OAuthClientCredentialsT>(value));
    return *this;
  }
  ///@}
 private:
  DynatraceOAuthClientCredentialsConfig m_oAuthClientCredentials;
  bool m_oAuthClientCredentialsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
