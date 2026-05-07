/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PaymentCredentialProviderItem.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
class ListPaymentCredentialProvidersResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListPaymentCredentialProvidersResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListPaymentCredentialProvidersResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListPaymentCredentialProvidersResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of payment credential providers.</p>
   */
  inline const Aws::Vector<PaymentCredentialProviderItem>& GetCredentialProviders() const { return m_credentialProviders; }
  template <typename CredentialProvidersT = Aws::Vector<PaymentCredentialProviderItem>>
  void SetCredentialProviders(CredentialProvidersT&& value) {
    m_credentialProvidersHasBeenSet = true;
    m_credentialProviders = std::forward<CredentialProvidersT>(value);
  }
  template <typename CredentialProvidersT = Aws::Vector<PaymentCredentialProviderItem>>
  ListPaymentCredentialProvidersResult& WithCredentialProviders(CredentialProvidersT&& value) {
    SetCredentialProviders(std::forward<CredentialProvidersT>(value));
    return *this;
  }
  template <typename CredentialProvidersT = PaymentCredentialProviderItem>
  ListPaymentCredentialProvidersResult& AddCredentialProviders(CredentialProvidersT&& value) {
    m_credentialProvidersHasBeenSet = true;
    m_credentialProviders.emplace_back(std::forward<CredentialProvidersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPaymentCredentialProvidersResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListPaymentCredentialProvidersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PaymentCredentialProviderItem> m_credentialProviders;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_credentialProvidersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
