/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingRequest.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Billing {
namespace Model {

/**
 */
class GetCreditsRequest : public BillingRequest {
 public:
  AWS_BILLING_API GetCreditsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCredits"; }

  AWS_BILLING_API Aws::String SerializePayload() const override;

  AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Web Services account ID. Must be a 12-digit numeric string.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  GetCreditsRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date for the credit period as Unix epoch seconds. Must be a past
   * date that is not more than one year before the current date.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  GetCreditsRequest& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date for the credit period as Unix epoch seconds. Must not be a
   * future date and must be on or after <code>startDate</code>. Defaults to the
   * current date when omitted.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  GetCreditsRequest& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When <code>true</code> and the caller is the management account, the response
   * aggregates credits across the entire consolidated billing family. When
   * <code>false</code> or omitted, returns only credits for the specified
   * <code>accountId</code>.</p>
   */
  inline bool GetPayerAccountFlag() const { return m_payerAccountFlag; }
  inline bool PayerAccountFlagHasBeenSet() const { return m_payerAccountFlagHasBeenSet; }
  inline void SetPayerAccountFlag(bool value) {
    m_payerAccountFlagHasBeenSet = true;
    m_payerAccountFlag = value;
  }
  inline GetCreditsRequest& WithPayerAccountFlag(bool value) {
    SetPayerAccountFlag(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_endDate{};

  bool m_payerAccountFlag{false};
  bool m_accountIdHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_payerAccountFlagHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
