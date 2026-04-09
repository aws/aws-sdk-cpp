/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/RegistryRecordIamCredentialProvider.h>
#include <aws/bedrock-agentcore-control/model/RegistryRecordOAuthCredentialProvider.h>

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
 * <p>Union of supported credential provider types for registry record
 * synchronization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/RegistryRecordCredentialProviderUnion">AWS
 * API Reference</a></p>
 */
class RegistryRecordCredentialProviderUnion {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API RegistryRecordCredentialProviderUnion() = default;
  AWS_BEDROCKAGENTCORECONTROL_API RegistryRecordCredentialProviderUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API RegistryRecordCredentialProviderUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth credential provider configuration for authenticating with the
   * external source.</p>
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
   * <p>The IAM credential provider configuration for authenticating with the
   * external source using SigV4 signing.</p>
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
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
