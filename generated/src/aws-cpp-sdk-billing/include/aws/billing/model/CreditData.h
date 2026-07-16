/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/Amount.h>
#include <aws/billing/model/ApplicationType.h>
#include <aws/billing/model/CreditSharingType.h>
#include <aws/billing/model/CreditStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Detailed information about an Amazon Web Services credit, including its
 * identifier, type, monetary amounts, applicable products, sharing configuration,
 * and current enabled status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/CreditData">AWS
 * API Reference</a></p>
 */
class CreditData {
 public:
  AWS_BILLING_API CreditData() = default;
  AWS_BILLING_API CreditData(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API CreditData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the credit.</p>
   */
  inline const Aws::String& GetCreditId() const { return m_creditId; }
  inline bool CreditIdHasBeenSet() const { return m_creditIdHasBeenSet; }
  template <typename CreditIdT = Aws::String>
  void SetCreditId(CreditIdT&& value) {
    m_creditIdHasBeenSet = true;
    m_creditId = std::forward<CreditIdT>(value);
  }
  template <typename CreditIdT = Aws::String>
  CreditData& WithCreditId(CreditIdT&& value) {
    SetCreditId(std::forward<CreditIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID that owns the credit.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  CreditData& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of credit. Examples: <code>Promotion</code>, <code>Refund</code>,
   * <code>TrueUp</code>.</p>
   */
  inline const Aws::String& GetCreditType() const { return m_creditType; }
  inline bool CreditTypeHasBeenSet() const { return m_creditTypeHasBeenSet; }
  template <typename CreditTypeT = Aws::String>
  void SetCreditType(CreditTypeT&& value) {
    m_creditTypeHasBeenSet = true;
    m_creditType = std::forward<CreditTypeT>(value);
  }
  template <typename CreditTypeT = Aws::String>
  CreditData& WithCreditType(CreditTypeT&& value) {
    SetCreditType(std::forward<CreditTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initial amount of the credit when it was issued.</p>
   */
  inline const Amount& GetInitialAmount() const { return m_initialAmount; }
  inline bool InitialAmountHasBeenSet() const { return m_initialAmountHasBeenSet; }
  template <typename InitialAmountT = Amount>
  void SetInitialAmount(InitialAmountT&& value) {
    m_initialAmountHasBeenSet = true;
    m_initialAmount = std::forward<InitialAmountT>(value);
  }
  template <typename InitialAmountT = Amount>
  CreditData& WithInitialAmount(InitialAmountT&& value) {
    SetInitialAmount(std::forward<InitialAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unused balance of the credit.</p>
   */
  inline const Amount& GetRemainingAmount() const { return m_remainingAmount; }
  inline bool RemainingAmountHasBeenSet() const { return m_remainingAmountHasBeenSet; }
  template <typename RemainingAmountT = Amount>
  void SetRemainingAmount(RemainingAmountT&& value) {
    m_remainingAmountHasBeenSet = true;
    m_remainingAmount = std::forward<RemainingAmountT>(value);
  }
  template <typename RemainingAmountT = Amount>
  CreditData& WithRemainingAmount(RemainingAmountT&& value) {
    SetRemainingAmount(std::forward<RemainingAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The estimated remaining balance, including in-flight (open) bills that have
   * not yet been finalized.</p>
   */
  inline const Amount& GetEstimatedAmount() const { return m_estimatedAmount; }
  inline bool EstimatedAmountHasBeenSet() const { return m_estimatedAmountHasBeenSet; }
  template <typename EstimatedAmountT = Amount>
  void SetEstimatedAmount(EstimatedAmountT&& value) {
    m_estimatedAmountHasBeenSet = true;
    m_estimatedAmount = std::forward<EstimatedAmountT>(value);
  }
  template <typename EstimatedAmountT = Amount>
  CreditData& WithEstimatedAmount(EstimatedAmountT&& value) {
    SetEstimatedAmount(std::forward<EstimatedAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of Amazon Web Services services this credit applies to.</p>
   */
  inline const Aws::Vector<Aws::String>& GetApplicableProductNames() const { return m_applicableProductNames; }
  inline bool ApplicableProductNamesHasBeenSet() const { return m_applicableProductNamesHasBeenSet; }
  template <typename ApplicableProductNamesT = Aws::Vector<Aws::String>>
  void SetApplicableProductNames(ApplicableProductNamesT&& value) {
    m_applicableProductNamesHasBeenSet = true;
    m_applicableProductNames = std::forward<ApplicableProductNamesT>(value);
  }
  template <typename ApplicableProductNamesT = Aws::Vector<Aws::String>>
  CreditData& WithApplicableProductNames(ApplicableProductNamesT&& value) {
    SetApplicableProductNames(std::forward<ApplicableProductNamesT>(value));
    return *this;
  }
  template <typename ApplicableProductNamesT = Aws::String>
  CreditData& AddApplicableProductNames(ApplicableProductNamesT&& value) {
    m_applicableProductNamesHasBeenSet = true;
    m_applicableProductNames.emplace_back(std::forward<ApplicableProductNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the credit.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreditData& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date the credit becomes valid, as Unix epoch seconds.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  CreditData& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date the credit expires, as Unix epoch seconds.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  CreditData& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date the credit balance reached zero, as Unix epoch seconds.</p>
   */
  inline const Aws::Utils::DateTime& GetExhaustDate() const { return m_exhaustDate; }
  inline bool ExhaustDateHasBeenSet() const { return m_exhaustDateHasBeenSet; }
  template <typename ExhaustDateT = Aws::Utils::DateTime>
  void SetExhaustDate(ExhaustDateT&& value) {
    m_exhaustDateHasBeenSet = true;
    m_exhaustDate = std::forward<ExhaustDateT>(value);
  }
  template <typename ExhaustDateT = Aws::Utils::DateTime>
  CreditData& WithExhaustDate(ExhaustDateT&& value) {
    SetExhaustDate(std::forward<ExhaustDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the credit is applied during bill computation. Valid values:
   * <code>BEFORE_CROSS_SERVICE_DISCOUNTS</code>, <code>AFTER_DISCOUNTS</code>.</p>
   */
  inline ApplicationType GetApplicationType() const { return m_applicationType; }
  inline bool ApplicationTypeHasBeenSet() const { return m_applicationTypeHasBeenSet; }
  inline void SetApplicationType(ApplicationType value) {
    m_applicationTypeHasBeenSet = true;
    m_applicationType = value;
  }
  inline CreditData& WithApplicationType(ApplicationType value) {
    SetApplicationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account IDs entitled to apply this credit.</p>
   */
  inline const Aws::Vector<Aws::String>& GetShareableAccounts() const { return m_shareableAccounts; }
  inline bool ShareableAccountsHasBeenSet() const { return m_shareableAccountsHasBeenSet; }
  template <typename ShareableAccountsT = Aws::Vector<Aws::String>>
  void SetShareableAccounts(ShareableAccountsT&& value) {
    m_shareableAccountsHasBeenSet = true;
    m_shareableAccounts = std::forward<ShareableAccountsT>(value);
  }
  template <typename ShareableAccountsT = Aws::Vector<Aws::String>>
  CreditData& WithShareableAccounts(ShareableAccountsT&& value) {
    SetShareableAccounts(std::forward<ShareableAccountsT>(value));
    return *this;
  }
  template <typename ShareableAccountsT = Aws::String>
  CreditData& AddShareableAccounts(ShareableAccountsT&& value) {
    m_shareableAccountsHasBeenSet = true;
    m_shareableAccounts.emplace_back(std::forward<ShareableAccountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the owning account has account-level credit sharing turned on.</p>
   */
  inline bool GetAccountHasCreditSharingEnabled() const { return m_accountHasCreditSharingEnabled; }
  inline bool AccountHasCreditSharingEnabledHasBeenSet() const { return m_accountHasCreditSharingEnabledHasBeenSet; }
  inline void SetAccountHasCreditSharingEnabled(bool value) {
    m_accountHasCreditSharingEnabledHasBeenSet = true;
    m_accountHasCreditSharingEnabled = value;
  }
  inline CreditData& WithAccountHasCreditSharingEnabled(bool value) {
    SetAccountHasCreditSharingEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display configuration for the credit in the Amazon Web Services Billing
   * console.</p>
   */
  inline const Aws::String& GetCreditConsoleVisibility() const { return m_creditConsoleVisibility; }
  inline bool CreditConsoleVisibilityHasBeenSet() const { return m_creditConsoleVisibilityHasBeenSet; }
  template <typename CreditConsoleVisibilityT = Aws::String>
  void SetCreditConsoleVisibility(CreditConsoleVisibilityT&& value) {
    m_creditConsoleVisibilityHasBeenSet = true;
    m_creditConsoleVisibility = std::forward<CreditConsoleVisibilityT>(value);
  }
  template <typename CreditConsoleVisibilityT = Aws::String>
  CreditData& WithCreditConsoleVisibility(CreditConsoleVisibilityT&& value) {
    SetCreditConsoleVisibility(std::forward<CreditConsoleVisibilityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sharing configuration for the credit. Valid values: <code>DEFAULT</code>,
   * <code>DISABLED</code>, <code>CUSTOM</code>, <code>COST_CATEGORY_RULE</code>.</p>
   */
  inline CreditSharingType GetCreditSharingType() const { return m_creditSharingType; }
  inline bool CreditSharingTypeHasBeenSet() const { return m_creditSharingTypeHasBeenSet; }
  inline void SetCreditSharingType(CreditSharingType value) {
    m_creditSharingTypeHasBeenSet = true;
    m_creditSharingType = value;
  }
  inline CreditData& WithCreditSharingType(CreditSharingType value) {
    SetCreditSharingType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Cost Category controlling the credit's
   * sharing scope. Present only when <code>creditSharingType</code> is
   * <code>COST_CATEGORY_RULE</code>.</p>
   */
  inline const Aws::String& GetCostCategoryArn() const { return m_costCategoryArn; }
  inline bool CostCategoryArnHasBeenSet() const { return m_costCategoryArnHasBeenSet; }
  template <typename CostCategoryArnT = Aws::String>
  void SetCostCategoryArn(CostCategoryArnT&& value) {
    m_costCategoryArnHasBeenSet = true;
    m_costCategoryArn = std::forward<CostCategoryArnT>(value);
  }
  template <typename CostCategoryArnT = Aws::String>
  CreditData& WithCostCategoryArn(CostCategoryArnT&& value) {
    SetCostCategoryArn(std::forward<CostCategoryArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rule name within the Cost Category. Present only when
   * <code>creditSharingType</code> is <code>COST_CATEGORY_RULE</code>.</p>
   */
  inline const Aws::String& GetRuleName() const { return m_ruleName; }
  inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
  template <typename RuleNameT = Aws::String>
  void SetRuleName(RuleNameT&& value) {
    m_ruleNameHasBeenSet = true;
    m_ruleName = std::forward<RuleNameT>(value);
  }
  template <typename RuleNameT = Aws::String>
  CreditData& WithRuleName(RuleNameT&& value) {
    SetRuleName(std::forward<RuleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the credit participates in billing runs. Valid values:
   * <code>ENABLED</code>, <code>DISABLED</code>.</p>
   */
  inline CreditStatus GetCreditStatus() const { return m_creditStatus; }
  inline bool CreditStatusHasBeenSet() const { return m_creditStatusHasBeenSet; }
  inline void SetCreditStatus(CreditStatus value) {
    m_creditStatusHasBeenSet = true;
    m_creditStatus = value;
  }
  inline CreditData& WithCreditStatus(CreditStatus value) {
    SetCreditStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Restricts which purchase types this credit applies to. When <code>null</code>
   * or omitted, the credit applies to all purchase types.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPurchaseTypeApplications() const { return m_purchaseTypeApplications; }
  inline bool PurchaseTypeApplicationsHasBeenSet() const { return m_purchaseTypeApplicationsHasBeenSet; }
  template <typename PurchaseTypeApplicationsT = Aws::Vector<Aws::String>>
  void SetPurchaseTypeApplications(PurchaseTypeApplicationsT&& value) {
    m_purchaseTypeApplicationsHasBeenSet = true;
    m_purchaseTypeApplications = std::forward<PurchaseTypeApplicationsT>(value);
  }
  template <typename PurchaseTypeApplicationsT = Aws::Vector<Aws::String>>
  CreditData& WithPurchaseTypeApplications(PurchaseTypeApplicationsT&& value) {
    SetPurchaseTypeApplications(std::forward<PurchaseTypeApplicationsT>(value));
    return *this;
  }
  template <typename PurchaseTypeApplicationsT = Aws::String>
  CreditData& AddPurchaseTypeApplications(PurchaseTypeApplicationsT&& value) {
    m_purchaseTypeApplicationsHasBeenSet = true;
    m_purchaseTypeApplications.emplace_back(std::forward<PurchaseTypeApplicationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_creditId;

  Aws::String m_accountId;

  Aws::String m_creditType;

  Amount m_initialAmount;

  Amount m_remainingAmount;

  Amount m_estimatedAmount;

  Aws::Vector<Aws::String> m_applicableProductNames;

  Aws::String m_description;

  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_endDate{};

  Aws::Utils::DateTime m_exhaustDate{};

  ApplicationType m_applicationType{ApplicationType::NOT_SET};

  Aws::Vector<Aws::String> m_shareableAccounts;

  bool m_accountHasCreditSharingEnabled{false};

  Aws::String m_creditConsoleVisibility;

  CreditSharingType m_creditSharingType{CreditSharingType::NOT_SET};

  Aws::String m_costCategoryArn;

  Aws::String m_ruleName;

  CreditStatus m_creditStatus{CreditStatus::NOT_SET};

  Aws::Vector<Aws::String> m_purchaseTypeApplications;
  bool m_creditIdHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_creditTypeHasBeenSet = false;
  bool m_initialAmountHasBeenSet = false;
  bool m_remainingAmountHasBeenSet = false;
  bool m_estimatedAmountHasBeenSet = false;
  bool m_applicableProductNamesHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
  bool m_exhaustDateHasBeenSet = false;
  bool m_applicationTypeHasBeenSet = false;
  bool m_shareableAccountsHasBeenSet = false;
  bool m_accountHasCreditSharingEnabledHasBeenSet = false;
  bool m_creditConsoleVisibilityHasBeenSet = false;
  bool m_creditSharingTypeHasBeenSet = false;
  bool m_costCategoryArnHasBeenSet = false;
  bool m_ruleNameHasBeenSet = false;
  bool m_creditStatusHasBeenSet = false;
  bool m_purchaseTypeApplicationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
