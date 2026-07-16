/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/CreditAllocationHistoryEntry.h>
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
class GetCreditAllocationHistoryResult {
 public:
  AWS_BILLING_API GetCreditAllocationHistoryResult() = default;
  AWS_BILLING_API GetCreditAllocationHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API GetCreditAllocationHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Allocation entries sorted by <code>billingMonth</code> in descending
   * order.</p>
   */
  inline const Aws::Vector<CreditAllocationHistoryEntry>& GetCreditAllocationHistoryList() const { return m_creditAllocationHistoryList; }
  template <typename CreditAllocationHistoryListT = Aws::Vector<CreditAllocationHistoryEntry>>
  void SetCreditAllocationHistoryList(CreditAllocationHistoryListT&& value) {
    m_creditAllocationHistoryListHasBeenSet = true;
    m_creditAllocationHistoryList = std::forward<CreditAllocationHistoryListT>(value);
  }
  template <typename CreditAllocationHistoryListT = Aws::Vector<CreditAllocationHistoryEntry>>
  GetCreditAllocationHistoryResult& WithCreditAllocationHistoryList(CreditAllocationHistoryListT&& value) {
    SetCreditAllocationHistoryList(std::forward<CreditAllocationHistoryListT>(value));
    return *this;
  }
  template <typename CreditAllocationHistoryListT = CreditAllocationHistoryEntry>
  GetCreditAllocationHistoryResult& AddCreditAllocationHistoryList(CreditAllocationHistoryListT&& value) {
    m_creditAllocationHistoryListHasBeenSet = true;
    m_creditAllocationHistoryList.emplace_back(std::forward<CreditAllocationHistoryListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> <code>true</code> when data could not be retrieved for one or more billing
   * months. The <code>failedMonths</code> field lists which months are missing.</p>
   */
  inline bool GetPartialResults() const { return m_partialResults; }
  inline void SetPartialResults(bool value) {
    m_partialResultsHasBeenSet = true;
    m_partialResults = value;
  }
  inline GetCreditAllocationHistoryResult& WithPartialResults(bool value) {
    SetPartialResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Billing months in <code>YYYY-MM</code> format that failed to return data.
   * Non-empty only when <code>partialResults</code> is <code>true</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFailedMonths() const { return m_failedMonths; }
  template <typename FailedMonthsT = Aws::Vector<Aws::String>>
  void SetFailedMonths(FailedMonthsT&& value) {
    m_failedMonthsHasBeenSet = true;
    m_failedMonths = std::forward<FailedMonthsT>(value);
  }
  template <typename FailedMonthsT = Aws::Vector<Aws::String>>
  GetCreditAllocationHistoryResult& WithFailedMonths(FailedMonthsT&& value) {
    SetFailedMonths(std::forward<FailedMonthsT>(value));
    return *this;
  }
  template <typename FailedMonthsT = Aws::String>
  GetCreditAllocationHistoryResult& AddFailedMonths(FailedMonthsT&& value) {
    m_failedMonthsHasBeenSet = true;
    m_failedMonths.emplace_back(std::forward<FailedMonthsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token. Present when more pages are available; <code>null</code>
   * when there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetCreditAllocationHistoryResult& WithNextToken(NextTokenT&& value) {
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
  GetCreditAllocationHistoryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CreditAllocationHistoryEntry> m_creditAllocationHistoryList;

  bool m_partialResults{false};

  Aws::Vector<Aws::String> m_failedMonths;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_creditAllocationHistoryListHasBeenSet = false;
  bool m_partialResultsHasBeenSet = false;
  bool m_failedMonthsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
