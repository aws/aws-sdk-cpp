/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/LinkedAccountCharge.h>
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
namespace Billing {
namespace Model {
/**
 * <p>The response structure for
 * ListEnterpriseSupportLinkedAccountCharges.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ListEnterpriseSupportLinkedAccountChargesResponse">AWS
 * API Reference</a></p>
 */
class ListEnterpriseSupportLinkedAccountChargesResult {
 public:
  AWS_BILLING_API ListEnterpriseSupportLinkedAccountChargesResult() = default;
  AWS_BILLING_API ListEnterpriseSupportLinkedAccountChargesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API ListEnterpriseSupportLinkedAccountChargesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of Enterprise Support charges per linked account.</p>
   */
  inline const Aws::Vector<LinkedAccountCharge>& GetLinkedAccount() const { return m_linkedAccount; }
  template <typename LinkedAccountT = Aws::Vector<LinkedAccountCharge>>
  void SetLinkedAccount(LinkedAccountT&& value) {
    m_linkedAccountHasBeenSet = true;
    m_linkedAccount = std::forward<LinkedAccountT>(value);
  }
  template <typename LinkedAccountT = Aws::Vector<LinkedAccountCharge>>
  ListEnterpriseSupportLinkedAccountChargesResult& WithLinkedAccount(LinkedAccountT&& value) {
    SetLinkedAccount(std::forward<LinkedAccountT>(value));
    return *this;
  }
  template <typename LinkedAccountT = LinkedAccountCharge>
  ListEnterpriseSupportLinkedAccountChargesResult& AddLinkedAccount(LinkedAccountT&& value) {
    m_linkedAccountHasBeenSet = true;
    m_linkedAccount.emplace_back(std::forward<LinkedAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEnterpriseSupportLinkedAccountChargesResult& WithNextToken(NextTokenT&& value) {
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
  ListEnterpriseSupportLinkedAccountChargesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<LinkedAccountCharge> m_linkedAccount;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_linkedAccountHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
