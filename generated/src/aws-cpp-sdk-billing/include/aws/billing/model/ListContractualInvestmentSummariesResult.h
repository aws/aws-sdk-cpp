/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/InvestmentSummary.h>
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
class ListContractualInvestmentSummariesResult {
 public:
  AWS_BILLING_API ListContractualInvestmentSummariesResult() = default;
  AWS_BILLING_API ListContractualInvestmentSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API ListContractualInvestmentSummariesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of investment summaries under the contract. It includes the
   * investment name, maximum investment amount, and investment type. It does not
   * provide investment details. Use this to know if the contract has investment
   * terms and what type.</p>
   */
  inline const Aws::Vector<InvestmentSummary>& GetItems() const { return m_items; }
  template <typename ItemsT = Aws::Vector<InvestmentSummary>>
  void SetItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items = std::forward<ItemsT>(value);
  }
  template <typename ItemsT = Aws::Vector<InvestmentSummary>>
  ListContractualInvestmentSummariesResult& WithItems(ItemsT&& value) {
    SetItems(std::forward<ItemsT>(value));
    return *this;
  }
  template <typename ItemsT = InvestmentSummary>
  ListContractualInvestmentSummariesResult& AddItems(ItemsT&& value) {
    m_itemsHasBeenSet = true;
    m_items.emplace_back(std::forward<ItemsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use on subsequent calls to retrieve the next set of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListContractualInvestmentSummariesResult& WithNextToken(NextTokenT&& value) {
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
  ListContractualInvestmentSummariesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<InvestmentSummary> m_items;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_itemsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
