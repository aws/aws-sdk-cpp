/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/PaymentTokenResponseOutput.h>
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
namespace BedrockAgentCore {
namespace Model {
class GetResourcePaymentTokenResult {
 public:
  AWS_BEDROCKAGENTCORE_API GetResourcePaymentTokenResult() = default;
  AWS_BEDROCKAGENTCORE_API GetResourcePaymentTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API GetResourcePaymentTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Vendor-specific token response output Contains all response data in a
   * type-safe, vendor-specific structure</p>
   */
  inline const PaymentTokenResponseOutput& GetPaymentTokenResponse() const { return m_paymentTokenResponse; }
  template <typename PaymentTokenResponseT = PaymentTokenResponseOutput>
  void SetPaymentTokenResponse(PaymentTokenResponseT&& value) {
    m_paymentTokenResponseHasBeenSet = true;
    m_paymentTokenResponse = std::forward<PaymentTokenResponseT>(value);
  }
  template <typename PaymentTokenResponseT = PaymentTokenResponseOutput>
  GetResourcePaymentTokenResult& WithPaymentTokenResponse(PaymentTokenResponseT&& value) {
    SetPaymentTokenResponse(std::forward<PaymentTokenResponseT>(value));
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
  GetResourcePaymentTokenResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  PaymentTokenResponseOutput m_paymentTokenResponse;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentTokenResponseHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
