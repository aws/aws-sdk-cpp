/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/RegistryRecordIamCredentialProvider.h>
#include <aws/agent-registry-control/model/RegistryRecordOAuthCredentialProvider.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>The credential provider details for a registry record. Exactly one member is
 * populated, matching the configured credential provider type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/RegistryRecordCredentialProviderUnion">AWS
 * API Reference</a></p>
 */
class RegistryRecordCredentialProviderUnion {
 public:
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordCredentialProviderUnion() = default;
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordCredentialProviderUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordCredentialProviderUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth 2.0 credential provider details.</p>
   */
  inline const RegistryRecordOAuthCredentialProvider& GetOauthCredentialProvider() const { return m_oauthCredentialProvider; }
  inline bool OauthCredentialProviderHasBeenSet() const { return m_oauthCredentialProviderHasBeenSet; }
  template <typename OauthCredentialProviderT = RegistryRecordOAuthCredentialProvider>
  void SetOauthCredentialProvider(OauthCredentialProviderT&& value) {
    m_oauthCredentialProviderHasBeenSet = true;
    m_oauthCredentialProvider = std::forward<OauthCredentialProviderT>(value);
  }
  template <typename OauthCredentialProviderT = RegistryRecordOAuthCredentialProvider>
  RegistryRecordCredentialProviderUnion& WithOauthCredentialProvider(OauthCredentialProviderT&& value) {
    SetOauthCredentialProvider(std::forward<OauthCredentialProviderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM role credential provider details.</p>
   */
  inline const RegistryRecordIamCredentialProvider& GetIamCredentialProvider() const { return m_iamCredentialProvider; }
  inline bool IamCredentialProviderHasBeenSet() const { return m_iamCredentialProviderHasBeenSet; }
  template <typename IamCredentialProviderT = RegistryRecordIamCredentialProvider>
  void SetIamCredentialProvider(IamCredentialProviderT&& value) {
    m_iamCredentialProviderHasBeenSet = true;
    m_iamCredentialProvider = std::forward<IamCredentialProviderT>(value);
  }
  template <typename IamCredentialProviderT = RegistryRecordIamCredentialProvider>
  RegistryRecordCredentialProviderUnion& WithIamCredentialProvider(IamCredentialProviderT&& value) {
    SetIamCredentialProvider(std::forward<IamCredentialProviderT>(value));
    return *this;
  }
  ///@}
 private:
  RegistryRecordOAuthCredentialProvider m_oauthCredentialProvider;

  RegistryRecordIamCredentialProvider m_iamCredentialProvider;
  bool m_oauthCredentialProviderHasBeenSet = false;
  bool m_iamCredentialProviderHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
