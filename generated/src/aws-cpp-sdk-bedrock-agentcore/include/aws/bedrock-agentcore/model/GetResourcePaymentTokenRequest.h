/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/PaymentTokenRequestInput.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class GetResourcePaymentTokenRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API GetResourcePaymentTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetResourcePaymentToken"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Workload access token for authorization. Named workloadIdentityToken for
   * consistency with APIKey and OAuth2CredentialProvider.</p>
   */
  inline const Aws::String& GetWorkloadIdentityToken() const { return m_workloadIdentityToken; }
  inline bool WorkloadIdentityTokenHasBeenSet() const { return m_workloadIdentityTokenHasBeenSet; }
  template <typename WorkloadIdentityTokenT = Aws::String>
  void SetWorkloadIdentityToken(WorkloadIdentityTokenT&& value) {
    m_workloadIdentityTokenHasBeenSet = true;
    m_workloadIdentityToken = std::forward<WorkloadIdentityTokenT>(value);
  }
  template <typename WorkloadIdentityTokenT = Aws::String>
  GetResourcePaymentTokenRequest& WithWorkloadIdentityToken(WorkloadIdentityTokenT&& value) {
    SetWorkloadIdentityToken(std::forward<WorkloadIdentityTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the payment credential provider to use</p>
   */
  inline const Aws::String& GetResourceCredentialProviderName() const { return m_resourceCredentialProviderName; }
  inline bool ResourceCredentialProviderNameHasBeenSet() const { return m_resourceCredentialProviderNameHasBeenSet; }
  template <typename ResourceCredentialProviderNameT = Aws::String>
  void SetResourceCredentialProviderName(ResourceCredentialProviderNameT&& value) {
    m_resourceCredentialProviderNameHasBeenSet = true;
    m_resourceCredentialProviderName = std::forward<ResourceCredentialProviderNameT>(value);
  }
  template <typename ResourceCredentialProviderNameT = Aws::String>
  GetResourcePaymentTokenRequest& WithResourceCredentialProviderName(ResourceCredentialProviderNameT&& value) {
    SetResourceCredentialProviderName(std::forward<ResourceCredentialProviderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Vendor-specific token request input Contains all request parameters in a
   * type-safe, vendor-specific structure</p>
   */
  inline const PaymentTokenRequestInput& GetPaymentTokenRequest() const { return m_paymentTokenRequest; }
  inline bool PaymentTokenRequestHasBeenSet() const { return m_paymentTokenRequestHasBeenSet; }
  template <typename PaymentTokenRequestT = PaymentTokenRequestInput>
  void SetPaymentTokenRequest(PaymentTokenRequestT&& value) {
    m_paymentTokenRequestHasBeenSet = true;
    m_paymentTokenRequest = std::forward<PaymentTokenRequestT>(value);
  }
  template <typename PaymentTokenRequestT = PaymentTokenRequestInput>
  GetResourcePaymentTokenRequest& WithPaymentTokenRequest(PaymentTokenRequestT&& value) {
    SetPaymentTokenRequest(std::forward<PaymentTokenRequestT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workloadIdentityToken;

  Aws::String m_resourceCredentialProviderName;

  PaymentTokenRequestInput m_paymentTokenRequest;
  bool m_workloadIdentityTokenHasBeenSet = false;
  bool m_resourceCredentialProviderNameHasBeenSet = false;
  bool m_paymentTokenRequestHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
