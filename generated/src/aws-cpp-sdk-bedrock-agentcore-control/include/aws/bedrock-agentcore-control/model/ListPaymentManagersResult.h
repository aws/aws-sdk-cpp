/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PaymentManagerSummary.h>
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
class ListPaymentManagersResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ListPaymentManagersResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ListPaymentManagersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API ListPaymentManagersResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of payment manager summaries. For details about the fields in each
   * summary, see the <code>PaymentManagerSummary</code> data type.</p>
   */
  inline const Aws::Vector<PaymentManagerSummary>& GetPaymentManagers() const { return m_paymentManagers; }
  template <typename PaymentManagersT = Aws::Vector<PaymentManagerSummary>>
  void SetPaymentManagers(PaymentManagersT&& value) {
    m_paymentManagersHasBeenSet = true;
    m_paymentManagers = std::forward<PaymentManagersT>(value);
  }
  template <typename PaymentManagersT = Aws::Vector<PaymentManagerSummary>>
  ListPaymentManagersResult& WithPaymentManagers(PaymentManagersT&& value) {
    SetPaymentManagers(std::forward<PaymentManagersT>(value));
    return *this;
  }
  template <typename PaymentManagersT = PaymentManagerSummary>
  ListPaymentManagersResult& AddPaymentManagers(PaymentManagersT&& value) {
    m_paymentManagersHasBeenSet = true;
    m_paymentManagers.emplace_back(std::forward<PaymentManagersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the total number of results is greater than the <code>maxResults</code>
   * value provided in the request, use this token when making another request in the
   * <code>nextToken</code> field to return the next batch of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPaymentManagersResult& WithNextToken(NextTokenT&& value) {
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
  ListPaymentManagersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PaymentManagerSummary> m_paymentManagers;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_paymentManagersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
