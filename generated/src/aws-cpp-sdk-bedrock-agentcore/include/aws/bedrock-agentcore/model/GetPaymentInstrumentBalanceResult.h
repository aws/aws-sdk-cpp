/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/TokenBalance.h>
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
/**
 * <p>Response structure for getting payment instrument balance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GetPaymentInstrumentBalanceResponse">AWS
 * API Reference</a></p>
 */
class GetPaymentInstrumentBalanceResult {
 public:
  AWS_BEDROCKAGENTCORE_API GetPaymentInstrumentBalanceResult() = default;
  AWS_BEDROCKAGENTCORE_API GetPaymentInstrumentBalanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API GetPaymentInstrumentBalanceResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the payment instrument.</p>
   */
  inline const Aws::String& GetPaymentInstrumentId() const { return m_paymentInstrumentId; }
  template <typename PaymentInstrumentIdT = Aws::String>
  void SetPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    m_paymentInstrumentIdHasBeenSet = true;
    m_paymentInstrumentId = std::forward<PaymentInstrumentIdT>(value);
  }
  template <typename PaymentInstrumentIdT = Aws::String>
  GetPaymentInstrumentBalanceResult& WithPaymentInstrumentId(PaymentInstrumentIdT&& value) {
    SetPaymentInstrumentId(std::forward<PaymentInstrumentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The balance of the supported token on the requested chain.</p>
   */
  inline const TokenBalance& GetTokenBalance() const { return m_tokenBalance; }
  template <typename TokenBalanceT = TokenBalance>
  void SetTokenBalance(TokenBalanceT&& value) {
    m_tokenBalanceHasBeenSet = true;
    m_tokenBalance = std::forward<TokenBalanceT>(value);
  }
  template <typename TokenBalanceT = TokenBalance>
  GetPaymentInstrumentBalanceResult& WithTokenBalance(TokenBalanceT&& value) {
    SetTokenBalance(std::forward<TokenBalanceT>(value));
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
  GetPaymentInstrumentBalanceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_paymentInstrumentId;

  TokenBalance m_tokenBalance;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentInstrumentIdHasBeenSet = false;
  bool m_tokenBalanceHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
