/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PaymentCredentialProviderVendorType.h>
#include <aws/bedrock-agentcore-control/model/PaymentProviderConfigurationOutput.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class CreatePaymentCredentialProviderResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreatePaymentCredentialProviderResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CreatePaymentCredentialProviderResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API CreatePaymentCredentialProviderResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the created payment credential provider.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreatePaymentCredentialProviderResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The vendor type for the created payment credential provider.</p>
   */
  inline PaymentCredentialProviderVendorType GetCredentialProviderVendor() const { return m_credentialProviderVendor; }
  inline void SetCredentialProviderVendor(PaymentCredentialProviderVendorType value) {
    m_credentialProviderVendorHasBeenSet = true;
    m_credentialProviderVendor = value;
  }
  inline CreatePaymentCredentialProviderResult& WithCredentialProviderVendor(PaymentCredentialProviderVendorType value) {
    SetCredentialProviderVendor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the created payment credential
   * provider.</p>
   */
  inline const Aws::String& GetCredentialProviderArn() const { return m_credentialProviderArn; }
  template <typename CredentialProviderArnT = Aws::String>
  void SetCredentialProviderArn(CredentialProviderArnT&& value) {
    m_credentialProviderArnHasBeenSet = true;
    m_credentialProviderArn = std::forward<CredentialProviderArnT>(value);
  }
  template <typename CredentialProviderArnT = Aws::String>
  CreatePaymentCredentialProviderResult& WithCredentialProviderArn(CredentialProviderArnT&& value) {
    SetCredentialProviderArn(std::forward<CredentialProviderArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Output configuration (contains secret ARNs, excludes actual secret
   * values).</p>
   */
  inline const PaymentProviderConfigurationOutput& GetProviderConfigurationOutput() const { return m_providerConfigurationOutput; }
  template <typename ProviderConfigurationOutputT = PaymentProviderConfigurationOutput>
  void SetProviderConfigurationOutput(ProviderConfigurationOutputT&& value) {
    m_providerConfigurationOutputHasBeenSet = true;
    m_providerConfigurationOutput = std::forward<ProviderConfigurationOutputT>(value);
  }
  template <typename ProviderConfigurationOutputT = PaymentProviderConfigurationOutput>
  CreatePaymentCredentialProviderResult& WithProviderConfigurationOutput(ProviderConfigurationOutputT&& value) {
    SetProviderConfigurationOutput(std::forward<ProviderConfigurationOutputT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreatePaymentCredentialProviderResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  PaymentCredentialProviderVendorType m_credentialProviderVendor{PaymentCredentialProviderVendorType::NOT_SET};

  Aws::String m_credentialProviderArn;

  PaymentProviderConfigurationOutput m_providerConfigurationOutput;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_credentialProviderVendorHasBeenSet = false;
  bool m_credentialProviderArnHasBeenSet = false;
  bool m_providerConfigurationOutputHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
