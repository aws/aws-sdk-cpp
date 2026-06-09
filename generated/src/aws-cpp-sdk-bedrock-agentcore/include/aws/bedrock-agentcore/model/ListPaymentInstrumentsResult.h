/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/PaymentInstrumentSummary.h>
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
namespace BedrockAgentCore {
namespace Model {
/**
 * <p>Response structure for listing payment instruments.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ListPaymentInstrumentsResponse">AWS
 * API Reference</a></p>
 */
class ListPaymentInstrumentsResult {
 public:
  AWS_BEDROCKAGENTCORE_API ListPaymentInstrumentsResult() = default;
  AWS_BEDROCKAGENTCORE_API ListPaymentInstrumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API ListPaymentInstrumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of payment instrument summaries matching the request criteria.</p>
   */
  inline const Aws::Vector<PaymentInstrumentSummary>& GetPaymentInstruments() const { return m_paymentInstruments; }
  template <typename PaymentInstrumentsT = Aws::Vector<PaymentInstrumentSummary>>
  void SetPaymentInstruments(PaymentInstrumentsT&& value) {
    m_paymentInstrumentsHasBeenSet = true;
    m_paymentInstruments = std::forward<PaymentInstrumentsT>(value);
  }
  template <typename PaymentInstrumentsT = Aws::Vector<PaymentInstrumentSummary>>
  ListPaymentInstrumentsResult& WithPaymentInstruments(PaymentInstrumentsT&& value) {
    SetPaymentInstruments(std::forward<PaymentInstrumentsT>(value));
    return *this;
  }
  template <typename PaymentInstrumentsT = PaymentInstrumentSummary>
  ListPaymentInstrumentsResult& AddPaymentInstruments(PaymentInstrumentsT&& value) {
    m_paymentInstrumentsHasBeenSet = true;
    m_paymentInstruments.emplace_back(std::forward<PaymentInstrumentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for pagination to retrieve the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPaymentInstrumentsResult& WithNextToken(NextTokenT&& value) {
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
  ListPaymentInstrumentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PaymentInstrumentSummary> m_paymentInstruments;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentInstrumentsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
