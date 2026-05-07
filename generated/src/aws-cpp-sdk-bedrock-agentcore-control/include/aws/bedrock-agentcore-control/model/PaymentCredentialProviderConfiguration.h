/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
 * <p>Configuration for a payment credential provider that stores authentication
 * credentials for a payment provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PaymentCredentialProviderConfiguration">AWS
 * API Reference</a></p>
 */
class PaymentCredentialProviderConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PaymentCredentialProviderConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PaymentCredentialProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PaymentCredentialProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the credential provider that stores the
   * authentication credentials for the payment provider.</p>
   */
  inline const Aws::String& GetCredentialProviderArn() const { return m_credentialProviderArn; }
  inline bool CredentialProviderArnHasBeenSet() const { return m_credentialProviderArnHasBeenSet; }
  template <typename CredentialProviderArnT = Aws::String>
  void SetCredentialProviderArn(CredentialProviderArnT&& value) {
    m_credentialProviderArnHasBeenSet = true;
    m_credentialProviderArn = std::forward<CredentialProviderArnT>(value);
  }
  template <typename CredentialProviderArnT = Aws::String>
  PaymentCredentialProviderConfiguration& WithCredentialProviderArn(CredentialProviderArnT&& value) {
    SetCredentialProviderArn(std::forward<CredentialProviderArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_credentialProviderArn;
  bool m_credentialProviderArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
