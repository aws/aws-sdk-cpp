/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/ContractRestriction.h>
#include <aws/billing/model/Interval.h>
#include <aws/billing/model/LegalEntity.h>
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
 * <p>The details of a private pricing addendum contract.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/PrivatePricingAddendum">AWS
 * API Reference</a></p>
 */
class PrivatePricingAddendum {
 public:
  AWS_BILLING_API PrivatePricingAddendum() = default;
  AWS_BILLING_API PrivatePricingAddendum(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API PrivatePricingAddendum& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the private pricing addendum.</p>
   */
  inline const Aws::String& GetContractArn() const { return m_contractArn; }
  inline bool ContractArnHasBeenSet() const { return m_contractArnHasBeenSet; }
  template <typename ContractArnT = Aws::String>
  void SetContractArn(ContractArnT&& value) {
    m_contractArnHasBeenSet = true;
    m_contractArn = std::forward<ContractArnT>(value);
  }
  template <typename ContractArnT = Aws::String>
  PrivatePricingAddendum& WithContractArn(ContractArnT&& value) {
    SetContractArn(std::forward<ContractArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contract term period of the private pricing addendum, expressed as an
   * interval with an inclusive start date and an inclusive end date.</p>
   */
  inline const Interval& GetContractTerm() const { return m_contractTerm; }
  inline bool ContractTermHasBeenSet() const { return m_contractTermHasBeenSet; }
  template <typename ContractTermT = Interval>
  void SetContractTerm(ContractTermT&& value) {
    m_contractTermHasBeenSet = true;
    m_contractTerm = std::forward<ContractTermT>(value);
  }
  template <typename ContractTermT = Interval>
  PrivatePricingAddendum& WithContractTerm(ContractTermT&& value) {
    SetContractTerm(std::forward<ContractTermT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payer accounts that are eligible under the private pricing addendum. The
   * list contains at most 100 account IDs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEligiblePayerAccounts() const { return m_eligiblePayerAccounts; }
  inline bool EligiblePayerAccountsHasBeenSet() const { return m_eligiblePayerAccountsHasBeenSet; }
  template <typename EligiblePayerAccountsT = Aws::Vector<Aws::String>>
  void SetEligiblePayerAccounts(EligiblePayerAccountsT&& value) {
    m_eligiblePayerAccountsHasBeenSet = true;
    m_eligiblePayerAccounts = std::forward<EligiblePayerAccountsT>(value);
  }
  template <typename EligiblePayerAccountsT = Aws::Vector<Aws::String>>
  PrivatePricingAddendum& WithEligiblePayerAccounts(EligiblePayerAccountsT&& value) {
    SetEligiblePayerAccounts(std::forward<EligiblePayerAccountsT>(value));
    return *this;
  }
  template <typename EligiblePayerAccountsT = Aws::String>
  PrivatePricingAddendum& AddEligiblePayerAccounts(EligiblePayerAccountsT&& value) {
    m_eligiblePayerAccountsHasBeenSet = true;
    m_eligiblePayerAccounts.emplace_back(std::forward<EligiblePayerAccountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The accounts that are eligible to receive investments under the private
   * pricing addendum. An <code>InvestmentDistribution</code> must target one of
   * these accounts. The list contains at most 100 account IDs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetInvestmentAccounts() const { return m_investmentAccounts; }
  inline bool InvestmentAccountsHasBeenSet() const { return m_investmentAccountsHasBeenSet; }
  template <typename InvestmentAccountsT = Aws::Vector<Aws::String>>
  void SetInvestmentAccounts(InvestmentAccountsT&& value) {
    m_investmentAccountsHasBeenSet = true;
    m_investmentAccounts = std::forward<InvestmentAccountsT>(value);
  }
  template <typename InvestmentAccountsT = Aws::Vector<Aws::String>>
  PrivatePricingAddendum& WithInvestmentAccounts(InvestmentAccountsT&& value) {
    SetInvestmentAccounts(std::forward<InvestmentAccountsT>(value));
    return *this;
  }
  template <typename InvestmentAccountsT = Aws::String>
  PrivatePricingAddendum& AddInvestmentAccounts(InvestmentAccountsT&& value) {
    m_investmentAccountsHasBeenSet = true;
    m_investmentAccounts.emplace_back(std::forward<InvestmentAccountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The legal entities on the private pricing addendum. The list contains at most
   * 10 legal entities.</p>
   */
  inline const Aws::Vector<LegalEntity>& GetLegalEntities() const { return m_legalEntities; }
  inline bool LegalEntitiesHasBeenSet() const { return m_legalEntitiesHasBeenSet; }
  template <typename LegalEntitiesT = Aws::Vector<LegalEntity>>
  void SetLegalEntities(LegalEntitiesT&& value) {
    m_legalEntitiesHasBeenSet = true;
    m_legalEntities = std::forward<LegalEntitiesT>(value);
  }
  template <typename LegalEntitiesT = Aws::Vector<LegalEntity>>
  PrivatePricingAddendum& WithLegalEntities(LegalEntitiesT&& value) {
    SetLegalEntities(std::forward<LegalEntitiesT>(value));
    return *this;
  }
  template <typename LegalEntitiesT = LegalEntity>
  PrivatePricingAddendum& AddLegalEntities(LegalEntitiesT&& value) {
    m_legalEntitiesHasBeenSet = true;
    m_legalEntities.emplace_back(std::forward<LegalEntitiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The restrictions that limit the self-service actions you can take on the
   * private pricing addendum. An empty or absent value indicates that no
   * restrictions apply. The list contains at most 10 restrictions.</p>
   */
  inline const Aws::Vector<ContractRestriction>& GetContractRestrictions() const { return m_contractRestrictions; }
  inline bool ContractRestrictionsHasBeenSet() const { return m_contractRestrictionsHasBeenSet; }
  template <typename ContractRestrictionsT = Aws::Vector<ContractRestriction>>
  void SetContractRestrictions(ContractRestrictionsT&& value) {
    m_contractRestrictionsHasBeenSet = true;
    m_contractRestrictions = std::forward<ContractRestrictionsT>(value);
  }
  template <typename ContractRestrictionsT = Aws::Vector<ContractRestriction>>
  PrivatePricingAddendum& WithContractRestrictions(ContractRestrictionsT&& value) {
    SetContractRestrictions(std::forward<ContractRestrictionsT>(value));
    return *this;
  }
  inline PrivatePricingAddendum& AddContractRestrictions(ContractRestriction value) {
    m_contractRestrictionsHasBeenSet = true;
    m_contractRestrictions.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_contractArn;

  Interval m_contractTerm;

  Aws::Vector<Aws::String> m_eligiblePayerAccounts;

  Aws::Vector<Aws::String> m_investmentAccounts;

  Aws::Vector<LegalEntity> m_legalEntities;

  Aws::Vector<ContractRestriction> m_contractRestrictions;
  bool m_contractArnHasBeenSet = false;
  bool m_contractTermHasBeenSet = false;
  bool m_eligiblePayerAccountsHasBeenSet = false;
  bool m_investmentAccountsHasBeenSet = false;
  bool m_legalEntitiesHasBeenSet = false;
  bool m_contractRestrictionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
