/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Secret.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Stripe Privy configuration output with secret ARNs.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/StripePrivyConfigurationOutput">AWS
 * API Reference</a></p>
 */
class StripePrivyConfigurationOutput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API StripePrivyConfigurationOutput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API StripePrivyConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API StripePrivyConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The app ID provided by Privy.</p>
   */
  inline const Aws::String& GetAppId() const { return m_appId; }
  inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
  template <typename AppIdT = Aws::String>
  void SetAppId(AppIdT&& value) {
    m_appIdHasBeenSet = true;
    m_appId = std::forward<AppIdT>(value);
  }
  template <typename AppIdT = Aws::String>
  StripePrivyConfigurationOutput& WithAppId(AppIdT&& value) {
    SetAppId(std::forward<AppIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Secret& GetAppSecretArn() const { return m_appSecretArn; }
  inline bool AppSecretArnHasBeenSet() const { return m_appSecretArnHasBeenSet; }
  template <typename AppSecretArnT = Secret>
  void SetAppSecretArn(AppSecretArnT&& value) {
    m_appSecretArnHasBeenSet = true;
    m_appSecretArn = std::forward<AppSecretArnT>(value);
  }
  template <typename AppSecretArnT = Secret>
  StripePrivyConfigurationOutput& WithAppSecretArn(AppSecretArnT&& value) {
    SetAppSecretArn(std::forward<AppSecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Secret& GetAuthorizationPrivateKeyArn() const { return m_authorizationPrivateKeyArn; }
  inline bool AuthorizationPrivateKeyArnHasBeenSet() const { return m_authorizationPrivateKeyArnHasBeenSet; }
  template <typename AuthorizationPrivateKeyArnT = Secret>
  void SetAuthorizationPrivateKeyArn(AuthorizationPrivateKeyArnT&& value) {
    m_authorizationPrivateKeyArnHasBeenSet = true;
    m_authorizationPrivateKeyArn = std::forward<AuthorizationPrivateKeyArnT>(value);
  }
  template <typename AuthorizationPrivateKeyArnT = Secret>
  StripePrivyConfigurationOutput& WithAuthorizationPrivateKeyArn(AuthorizationPrivateKeyArnT&& value) {
    SetAuthorizationPrivateKeyArn(std::forward<AuthorizationPrivateKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization ID for the Stripe Privy integration.</p>
   */
  inline const Aws::String& GetAuthorizationId() const { return m_authorizationId; }
  inline bool AuthorizationIdHasBeenSet() const { return m_authorizationIdHasBeenSet; }
  template <typename AuthorizationIdT = Aws::String>
  void SetAuthorizationId(AuthorizationIdT&& value) {
    m_authorizationIdHasBeenSet = true;
    m_authorizationId = std::forward<AuthorizationIdT>(value);
  }
  template <typename AuthorizationIdT = Aws::String>
  StripePrivyConfigurationOutput& WithAuthorizationId(AuthorizationIdT&& value) {
    SetAuthorizationId(std::forward<AuthorizationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_appId;

  Secret m_appSecretArn;

  Secret m_authorizationPrivateKeyArn;

  Aws::String m_authorizationId;
  bool m_appIdHasBeenSet = false;
  bool m_appSecretArnHasBeenSet = false;
  bool m_authorizationPrivateKeyArnHasBeenSet = false;
  bool m_authorizationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
