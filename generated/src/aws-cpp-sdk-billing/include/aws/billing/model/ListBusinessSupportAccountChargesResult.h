/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/BusinessSupportAccountCharge.h>
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
 * <p>Contains the Business Support charges broken down by linked account for the
 * specified billing month, along with account and spend totals.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ListBusinessSupportAccountChargesResponse">AWS
 * API Reference</a></p>
 */
class ListBusinessSupportAccountChargesResult {
 public:
  AWS_BILLING_API ListBusinessSupportAccountChargesResult() = default;
  AWS_BILLING_API ListBusinessSupportAccountChargesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API ListBusinessSupportAccountChargesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The billing month for the returned charges, in YYYY-MM format.</p>
   */
  inline const Aws::String& GetBillingMonth() const { return m_billingMonth; }
  template <typename BillingMonthT = Aws::String>
  void SetBillingMonth(BillingMonthT&& value) {
    m_billingMonthHasBeenSet = true;
    m_billingMonth = std::forward<BillingMonthT>(value);
  }
  template <typename BillingMonthT = Aws::String>
  ListBusinessSupportAccountChargesResult& WithBillingMonth(BillingMonthT&& value) {
    SetBillingMonth(std::forward<BillingMonthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the Support charge amount is estimated. When false, the
   * charge amount is finalized.</p>
   */
  inline bool GetIsEstimated() const { return m_isEstimated; }
  inline void SetIsEstimated(bool value) {
    m_isEstimatedHasBeenSet = true;
    m_isEstimated = value;
  }
  inline ListBusinessSupportAccountChargesResult& WithIsEstimated(bool value) {
    SetIsEstimated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total Business Support charge amount for all accounts in the billing
   * month.</p>
   */
  inline const Aws::String& GetTotalSupportCharge() const { return m_totalSupportCharge; }
  template <typename TotalSupportChargeT = Aws::String>
  void SetTotalSupportCharge(TotalSupportChargeT&& value) {
    m_totalSupportChargeHasBeenSet = true;
    m_totalSupportCharge = std::forward<TotalSupportChargeT>(value);
  }
  template <typename TotalSupportChargeT = Aws::String>
  ListBusinessSupportAccountChargesResult& WithTotalSupportCharge(TotalSupportChargeT&& value) {
    SetTotalSupportCharge(std::forward<TotalSupportChargeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total Support-eligible spend from all accounts in the billing month. This
   * includes eligible spend from usage of Amazon Web Services.</p>
   */
  inline const Aws::String& GetTotalSupportEligibleSpend() const { return m_totalSupportEligibleSpend; }
  template <typename TotalSupportEligibleSpendT = Aws::String>
  void SetTotalSupportEligibleSpend(TotalSupportEligibleSpendT&& value) {
    m_totalSupportEligibleSpendHasBeenSet = true;
    m_totalSupportEligibleSpend = std::forward<TotalSupportEligibleSpendT>(value);
  }
  template <typename TotalSupportEligibleSpendT = Aws::String>
  ListBusinessSupportAccountChargesResult& WithTotalSupportEligibleSpend(TotalSupportEligibleSpendT&& value) {
    SetTotalSupportEligibleSpend(std::forward<TotalSupportEligibleSpendT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of linked accounts with Business Support charges in the
   * billing month.</p>
   */
  inline int GetAccountCount() const { return m_accountCount; }
  inline void SetAccountCount(int value) {
    m_accountCountHasBeenSet = true;
    m_accountCount = value;
  }
  inline ListBusinessSupportAccountChargesResult& WithAccountCount(int value) {
    SetAccountCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Business Support charges per linked account.</p>
   */
  inline const Aws::Vector<BusinessSupportAccountCharge>& GetAccountCharges() const { return m_accountCharges; }
  template <typename AccountChargesT = Aws::Vector<BusinessSupportAccountCharge>>
  void SetAccountCharges(AccountChargesT&& value) {
    m_accountChargesHasBeenSet = true;
    m_accountCharges = std::forward<AccountChargesT>(value);
  }
  template <typename AccountChargesT = Aws::Vector<BusinessSupportAccountCharge>>
  ListBusinessSupportAccountChargesResult& WithAccountCharges(AccountChargesT&& value) {
    SetAccountCharges(std::forward<AccountChargesT>(value));
    return *this;
  }
  template <typename AccountChargesT = BusinessSupportAccountCharge>
  ListBusinessSupportAccountChargesResult& AddAccountCharges(AccountChargesT&& value) {
    m_accountChargesHasBeenSet = true;
    m_accountCharges.emplace_back(std::forward<AccountChargesT>(value));
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
  ListBusinessSupportAccountChargesResult& WithNextToken(NextTokenT&& value) {
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
  ListBusinessSupportAccountChargesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_billingMonth;

  bool m_isEstimated{false};

  Aws::String m_totalSupportCharge;

  Aws::String m_totalSupportEligibleSpend;

  int m_accountCount{0};

  Aws::Vector<BusinessSupportAccountCharge> m_accountCharges;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_billingMonthHasBeenSet = false;
  bool m_isEstimatedHasBeenSet = false;
  bool m_totalSupportChargeHasBeenSet = false;
  bool m_totalSupportEligibleSpendHasBeenSet = false;
  bool m_accountCountHasBeenSet = false;
  bool m_accountChargesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
