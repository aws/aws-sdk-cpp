/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/PaymentInstrument.h>
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
 * <p>Response structure for creating a payment instrument.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CreatePaymentInstrumentResponse">AWS
 * API Reference</a></p>
 */
class CreatePaymentInstrumentResult {
 public:
  AWS_BEDROCKAGENTCORE_API CreatePaymentInstrumentResult() = default;
  AWS_BEDROCKAGENTCORE_API CreatePaymentInstrumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API CreatePaymentInstrumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The created payment instrument.</p>
   */
  inline const PaymentInstrument& GetPaymentInstrument() const { return m_paymentInstrument; }
  template <typename PaymentInstrumentT = PaymentInstrument>
  void SetPaymentInstrument(PaymentInstrumentT&& value) {
    m_paymentInstrumentHasBeenSet = true;
    m_paymentInstrument = std::forward<PaymentInstrumentT>(value);
  }
  template <typename PaymentInstrumentT = PaymentInstrument>
  CreatePaymentInstrumentResult& WithPaymentInstrument(PaymentInstrumentT&& value) {
    SetPaymentInstrument(std::forward<PaymentInstrumentT>(value));
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
  CreatePaymentInstrumentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  PaymentInstrument m_paymentInstrument;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentInstrumentHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
