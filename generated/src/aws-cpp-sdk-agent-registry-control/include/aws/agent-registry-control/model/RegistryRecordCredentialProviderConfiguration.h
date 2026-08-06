/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/RegistryRecordCredentialProviderType.h>
#include <aws/agent-registry-control/model/RegistryRecordCredentialProviderUnion.h>

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
 * <p>A credential provider configuration that specifies how to authenticate when
 * fetching descriptor content from a registry record's source URL.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/RegistryRecordCredentialProviderConfiguration">AWS
 * API Reference</a></p>
 */
class RegistryRecordCredentialProviderConfiguration {
 public:
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordCredentialProviderConfiguration() = default;
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordCredentialProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API RegistryRecordCredentialProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of credential provider.</p>
   */
  inline RegistryRecordCredentialProviderType GetCredentialProviderType() const { return m_credentialProviderType; }
  inline bool CredentialProviderTypeHasBeenSet() const { return m_credentialProviderTypeHasBeenSet; }
  inline void SetCredentialProviderType(RegistryRecordCredentialProviderType value) {
    m_credentialProviderTypeHasBeenSet = true;
    m_credentialProviderType = value;
  }
  inline RegistryRecordCredentialProviderConfiguration& WithCredentialProviderType(RegistryRecordCredentialProviderType value) {
    SetCredentialProviderType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The credential provider details corresponding to the specified credential
   * provider type.</p>
   */
  inline const RegistryRecordCredentialProviderUnion& GetCredentialProvider() const { return m_credentialProvider; }
  inline bool CredentialProviderHasBeenSet() const { return m_credentialProviderHasBeenSet; }
  template <typename CredentialProviderT = RegistryRecordCredentialProviderUnion>
  void SetCredentialProvider(CredentialProviderT&& value) {
    m_credentialProviderHasBeenSet = true;
    m_credentialProvider = std::forward<CredentialProviderT>(value);
  }
  template <typename CredentialProviderT = RegistryRecordCredentialProviderUnion>
  RegistryRecordCredentialProviderConfiguration& WithCredentialProvider(CredentialProviderT&& value) {
    SetCredentialProvider(std::forward<CredentialProviderT>(value));
    return *this;
  }
  ///@}
 private:
  RegistryRecordCredentialProviderType m_credentialProviderType{RegistryRecordCredentialProviderType::NOT_SET};

  RegistryRecordCredentialProviderUnion m_credentialProvider;
  bool m_credentialProviderTypeHasBeenSet = false;
  bool m_credentialProviderHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
