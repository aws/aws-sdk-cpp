/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingRequest.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Billing {
namespace Model {

/**
 * <p>Contains the billing month and optional filters used to retrieve Business
 * Support charges broken down by linked account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ListBusinessSupportAccountChargesRequest">AWS
 * API Reference</a></p>
 */
class ListBusinessSupportAccountChargesRequest : public BillingRequest {
 public:
  AWS_BILLING_API ListBusinessSupportAccountChargesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListBusinessSupportAccountCharges"; }

  AWS_BILLING_API Aws::String SerializePayload() const override;

  AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The billing month to retrieve Business Support charges for, in YYYY-MM
   * format. You can request the current month (charges will be estimated) or a past
   * month (charges will be finalized).</p>
   */
  inline const Aws::String& GetBillingMonth() const { return m_billingMonth; }
  inline bool BillingMonthHasBeenSet() const { return m_billingMonthHasBeenSet; }
  template <typename BillingMonthT = Aws::String>
  void SetBillingMonth(BillingMonthT&& value) {
    m_billingMonthHasBeenSet = true;
    m_billingMonth = std::forward<BillingMonthT>(value);
  }
  template <typename BillingMonthT = Aws::String>
  ListBusinessSupportAccountChargesRequest& WithBillingMonth(BillingMonthT&& value) {
    SetBillingMonth(std::forward<BillingMonthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The linked account ID to filter results to a specific account. If you don't
   * specify a value, the response includes charges for all linked accounts.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ListBusinessSupportAccountChargesRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per page. Default is 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListBusinessSupportAccountChargesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBusinessSupportAccountChargesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_billingMonth;

  Aws::String m_accountId;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_billingMonthHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
