/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

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
 * <p>OAuth client credentials configuration for PagerDuty.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/PagerDutyOAuthClientCredentialsConfig">AWS
 * API Reference</a></p>
 */
class PagerDutyOAuthClientCredentialsConfig {
 public:
  AWS_DEVOPSAGENT_API PagerDutyOAuthClientCredentialsConfig() = default;
  AWS_DEVOPSAGENT_API PagerDutyOAuthClientCredentialsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API PagerDutyOAuthClientCredentialsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>User friendly OAuth client name specified by end user.</p>
   */
  inline const Aws::String& GetClientName() const { return m_clientName; }
  inline bool ClientNameHasBeenSet() const { return m_clientNameHasBeenSet; }
  template <typename ClientNameT = Aws::String>
  void SetClientName(ClientNameT&& value) {
    m_clientNameHasBeenSet = true;
    m_clientName = std::forward<ClientNameT>(value);
  }
  template <typename ClientNameT = Aws::String>
  PagerDutyOAuthClientCredentialsConfig& WithClientName(ClientNameT&& value) {
    SetClientName(std::forward<ClientNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth client ID for authenticating with the service.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  PagerDutyOAuthClientCredentialsConfig& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth token exchange parameters for authenticating with the service.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetExchangeParameters() const { return m_exchangeParameters; }
  inline bool ExchangeParametersHasBeenSet() const { return m_exchangeParametersHasBeenSet; }
  template <typename ExchangeParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetExchangeParameters(ExchangeParametersT&& value) {
    m_exchangeParametersHasBeenSet = true;
    m_exchangeParameters = std::forward<ExchangeParametersT>(value);
  }
  template <typename ExchangeParametersT = Aws::Map<Aws::String, Aws::String>>
  PagerDutyOAuthClientCredentialsConfig& WithExchangeParameters(ExchangeParametersT&& value) {
    SetExchangeParameters(std::forward<ExchangeParametersT>(value));
    return *this;
  }
  template <typename ExchangeParametersKeyT = Aws::String, typename ExchangeParametersValueT = Aws::String>
  PagerDutyOAuthClientCredentialsConfig& AddExchangeParameters(ExchangeParametersKeyT&& key, ExchangeParametersValueT&& value) {
    m_exchangeParametersHasBeenSet = true;
    m_exchangeParameters.emplace(std::forward<ExchangeParametersKeyT>(key), std::forward<ExchangeParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth client secret for authenticating with the service.</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  PagerDutyOAuthClientCredentialsConfig& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientName;

  Aws::String m_clientId;

  Aws::Map<Aws::String, Aws::String> m_exchangeParameters;

  Aws::String m_clientSecret;
  bool m_clientNameHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_exchangeParametersHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
