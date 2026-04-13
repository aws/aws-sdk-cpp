/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/RegistryRecordCredentialProviderType.h>
#include <aws/bedrock-agentcore-control/model/RegistryRecordCredentialProviderUnion.h>

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
 * <p>A pairing of a credential provider type with its corresponding provider
 * details for authenticating with external sources.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/RegistryRecordCredentialProviderConfiguration">AWS
 * API Reference</a></p>
 */
class RegistryRecordCredentialProviderConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API RegistryRecordCredentialProviderConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API RegistryRecordCredentialProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API RegistryRecordCredentialProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of credential provider.</p> <ul> <li> <p> <code>OAUTH</code> -
   * OAuth-based authentication.</p> </li> <li> <p> <code>IAM</code> - Amazon Web
   * Services IAM-based authentication using SigV4 signing.</p> </li> </ul>
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
   * <p>The credential provider configuration details. The structure depends on the
   * <code>credentialProviderType</code>.</p>
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
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
