/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/PaymentSessionSummary.h>
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
 * <p>Response structure for listing payment sessions.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ListPaymentSessionsResponse">AWS
 * API Reference</a></p>
 */
class ListPaymentSessionsResult {
 public:
  AWS_BEDROCKAGENTCORE_API ListPaymentSessionsResult() = default;
  AWS_BEDROCKAGENTCORE_API ListPaymentSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API ListPaymentSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of payment session summaries matching the request criteria.</p>
   */
  inline const Aws::Vector<PaymentSessionSummary>& GetPaymentSessions() const { return m_paymentSessions; }
  template <typename PaymentSessionsT = Aws::Vector<PaymentSessionSummary>>
  void SetPaymentSessions(PaymentSessionsT&& value) {
    m_paymentSessionsHasBeenSet = true;
    m_paymentSessions = std::forward<PaymentSessionsT>(value);
  }
  template <typename PaymentSessionsT = Aws::Vector<PaymentSessionSummary>>
  ListPaymentSessionsResult& WithPaymentSessions(PaymentSessionsT&& value) {
    SetPaymentSessions(std::forward<PaymentSessionsT>(value));
    return *this;
  }
  template <typename PaymentSessionsT = PaymentSessionSummary>
  ListPaymentSessionsResult& AddPaymentSessions(PaymentSessionsT&& value) {
    m_paymentSessionsHasBeenSet = true;
    m_paymentSessions.emplace_back(std::forward<PaymentSessionsT>(value));
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
  ListPaymentSessionsResult& WithNextToken(NextTokenT&& value) {
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
  ListPaymentSessionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PaymentSessionSummary> m_paymentSessions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentSessionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
