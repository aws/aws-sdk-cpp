/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PaymentCredentialProviderVendorType.h>
#include <aws/bedrock-agentcore-control/model/PaymentProviderConfigurationInput.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class UpdatePaymentCredentialProviderRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdatePaymentCredentialProviderRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePaymentCredentialProvider"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the payment credential provider to update.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdatePaymentCredentialProviderRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The vendor type for the payment credential provider (e.g., CoinbaseCDP,
   * StripePrivy).</p>
   */
  inline PaymentCredentialProviderVendorType GetCredentialProviderVendor() const { return m_credentialProviderVendor; }
  inline bool CredentialProviderVendorHasBeenSet() const { return m_credentialProviderVendorHasBeenSet; }
  inline void SetCredentialProviderVendor(PaymentCredentialProviderVendorType value) {
    m_credentialProviderVendorHasBeenSet = true;
    m_credentialProviderVendor = value;
  }
  inline UpdatePaymentCredentialProviderRequest& WithCredentialProviderVendor(PaymentCredentialProviderVendorType value) {
    SetCredentialProviderVendor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration specific to the vendor, including API credentials.</p>
   */
  inline const PaymentProviderConfigurationInput& GetProviderConfigurationInput() const { return m_providerConfigurationInput; }
  inline bool ProviderConfigurationInputHasBeenSet() const { return m_providerConfigurationInputHasBeenSet; }
  template <typename ProviderConfigurationInputT = PaymentProviderConfigurationInput>
  void SetProviderConfigurationInput(ProviderConfigurationInputT&& value) {
    m_providerConfigurationInputHasBeenSet = true;
    m_providerConfigurationInput = std::forward<ProviderConfigurationInputT>(value);
  }
  template <typename ProviderConfigurationInputT = PaymentProviderConfigurationInput>
  UpdatePaymentCredentialProviderRequest& WithProviderConfigurationInput(ProviderConfigurationInputT&& value) {
    SetProviderConfigurationInput(std::forward<ProviderConfigurationInputT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  PaymentCredentialProviderVendorType m_credentialProviderVendor{PaymentCredentialProviderVendorType::NOT_SET};

  PaymentProviderConfigurationInput m_providerConfigurationInput;
  bool m_nameHasBeenSet = false;
  bool m_credentialProviderVendorHasBeenSet = false;
  bool m_providerConfigurationInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
