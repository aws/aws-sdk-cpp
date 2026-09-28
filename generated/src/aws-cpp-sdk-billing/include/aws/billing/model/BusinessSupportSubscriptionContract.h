/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Billing {
namespace Model {

/**
 * <p>A Business Support subscription contract for an account.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BusinessSupportSubscriptionContract">AWS
 * API Reference</a></p>
 */
class BusinessSupportSubscriptionContract {
 public:
  AWS_BILLING_API BusinessSupportSubscriptionContract() = default;
  AWS_BILLING_API BusinessSupportSubscriptionContract(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API BusinessSupportSubscriptionContract& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The account ID associated with this subscription contract.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  BusinessSupportSubscriptionContract& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Support plan for this subscription contract. Valid values:
   * <code>AWSSupportBusiness</code> (Business Support plan),
   * <code>AWSSupportDeveloper</code> (Developer Support plan),
   * <code>AWSSupportEssential</code> (Basic Support plan).</p>
   */
  inline const Aws::String& GetPlanName() const { return m_planName; }
  inline bool PlanNameHasBeenSet() const { return m_planNameHasBeenSet; }
  template <typename PlanNameT = Aws::String>
  void SetPlanName(PlanNameT&& value) {
    m_planNameHasBeenSet = true;
    m_planName = std::forward<PlanNameT>(value);
  }
  template <typename PlanNameT = Aws::String>
  BusinessSupportSubscriptionContract& WithPlanName(PlanNameT&& value) {
    SetPlanName(std::forward<PlanNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date of the subscription contract.</p>
   */
  inline const Aws::Utils::DateTime& GetContractStartDate() const { return m_contractStartDate; }
  inline bool ContractStartDateHasBeenSet() const { return m_contractStartDateHasBeenSet; }
  template <typename ContractStartDateT = Aws::Utils::DateTime>
  void SetContractStartDate(ContractStartDateT&& value) {
    m_contractStartDateHasBeenSet = true;
    m_contractStartDate = std::forward<ContractStartDateT>(value);
  }
  template <typename ContractStartDateT = Aws::Utils::DateTime>
  BusinessSupportSubscriptionContract& WithContractStartDate(ContractStartDateT&& value) {
    SetContractStartDate(std::forward<ContractStartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date of the subscription contract.</p>
   */
  inline const Aws::Utils::DateTime& GetContractEndDate() const { return m_contractEndDate; }
  inline bool ContractEndDateHasBeenSet() const { return m_contractEndDateHasBeenSet; }
  template <typename ContractEndDateT = Aws::Utils::DateTime>
  void SetContractEndDate(ContractEndDateT&& value) {
    m_contractEndDateHasBeenSet = true;
    m_contractEndDate = std::forward<ContractEndDateT>(value);
  }
  template <typename ContractEndDateT = Aws::Utils::DateTime>
  BusinessSupportSubscriptionContract& WithContractEndDate(ContractEndDateT&& value) {
    SetContractEndDate(std::forward<ContractEndDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_planName;

  Aws::Utils::DateTime m_contractStartDate{};

  Aws::Utils::DateTime m_contractEndDate{};
  bool m_accountIdHasBeenSet = false;
  bool m_planNameHasBeenSet = false;
  bool m_contractStartDateHasBeenSet = false;
  bool m_contractEndDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
