/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/Amount.h>
#include <aws/billing/model/Interval.h>
#include <aws/billing/model/InvestmentMultiplier.h>
#include <aws/billing/model/InvestmentRestriction.h>
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
 * <p>An investment that is awarded upon completion of a defined outcome. This
 * corresponds to the <code>OUTCOME_BASED</code> investment type and is claimed
 * through <code>CreateContractualInvestmentAttestation</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/OutcomeBasedInvestment">AWS
 * API Reference</a></p>
 */
class OutcomeBasedInvestment {
 public:
  AWS_BILLING_API OutcomeBasedInvestment() = default;
  AWS_BILLING_API OutcomeBasedInvestment(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API OutcomeBasedInvestment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the investment, as returned by
   * <code>ListContractualInvestments</code>. This value is 1–36 characters.</p>
   */
  inline const Aws::String& GetInvestmentId() const { return m_investmentId; }
  inline bool InvestmentIdHasBeenSet() const { return m_investmentIdHasBeenSet; }
  template <typename InvestmentIdT = Aws::String>
  void SetInvestmentId(InvestmentIdT&& value) {
    m_investmentIdHasBeenSet = true;
    m_investmentId = std::forward<InvestmentIdT>(value);
  }
  template <typename InvestmentIdT = Aws::String>
  OutcomeBasedInvestment& WithInvestmentId(InvestmentIdT&& value) {
    SetInvestmentId(std::forward<InvestmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of what must be completed to attest the outcome. This value
   * is 1–2048 characters.</p>
   */
  inline const Aws::String& GetOutcomeDescription() const { return m_outcomeDescription; }
  inline bool OutcomeDescriptionHasBeenSet() const { return m_outcomeDescriptionHasBeenSet; }
  template <typename OutcomeDescriptionT = Aws::String>
  void SetOutcomeDescription(OutcomeDescriptionT&& value) {
    m_outcomeDescriptionHasBeenSet = true;
    m_outcomeDescription = std::forward<OutcomeDescriptionT>(value);
  }
  template <typename OutcomeDescriptionT = Aws::String>
  OutcomeBasedInvestment& WithOutcomeDescription(OutcomeDescriptionT&& value) {
    SetOutcomeDescription(std::forward<OutcomeDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time window, expressed as an interval with inclusive start and end dates,
   * during which outcomes can be attested to.</p>
   */
  inline const Interval& GetAttestationWindow() const { return m_attestationWindow; }
  inline bool AttestationWindowHasBeenSet() const { return m_attestationWindowHasBeenSet; }
  template <typename AttestationWindowT = Interval>
  void SetAttestationWindow(AttestationWindowT&& value) {
    m_attestationWindowHasBeenSet = true;
    m_attestationWindow = std::forward<AttestationWindowT>(value);
  }
  template <typename AttestationWindowT = Interval>
  OutcomeBasedInvestment& WithAttestationWindow(AttestationWindowT&& value) {
    SetAttestationWindow(std::forward<AttestationWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The restrictions that cap the value that can be disbursed for the investment.
   * The list contains at most 10 restrictions.</p>
   */
  inline const Aws::Vector<InvestmentRestriction>& GetInvestmentRestrictions() const { return m_investmentRestrictions; }
  inline bool InvestmentRestrictionsHasBeenSet() const { return m_investmentRestrictionsHasBeenSet; }
  template <typename InvestmentRestrictionsT = Aws::Vector<InvestmentRestriction>>
  void SetInvestmentRestrictions(InvestmentRestrictionsT&& value) {
    m_investmentRestrictionsHasBeenSet = true;
    m_investmentRestrictions = std::forward<InvestmentRestrictionsT>(value);
  }
  template <typename InvestmentRestrictionsT = Aws::Vector<InvestmentRestriction>>
  OutcomeBasedInvestment& WithInvestmentRestrictions(InvestmentRestrictionsT&& value) {
    SetInvestmentRestrictions(std::forward<InvestmentRestrictionsT>(value));
    return *this;
  }
  template <typename InvestmentRestrictionsT = InvestmentRestriction>
  OutcomeBasedInvestment& AddInvestmentRestrictions(InvestmentRestrictionsT&& value) {
    m_investmentRestrictionsHasBeenSet = true;
    m_investmentRestrictions.emplace_back(std::forward<InvestmentRestrictionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multipliers used to compute the investment value from the attestation
   * input. The list contains at most 200 multipliers. Multipliers are derived from
   * the terms of the private pricing contract.</p>
   */
  inline const Aws::Vector<InvestmentMultiplier>& GetInvestmentMultipliers() const { return m_investmentMultipliers; }
  inline bool InvestmentMultipliersHasBeenSet() const { return m_investmentMultipliersHasBeenSet; }
  template <typename InvestmentMultipliersT = Aws::Vector<InvestmentMultiplier>>
  void SetInvestmentMultipliers(InvestmentMultipliersT&& value) {
    m_investmentMultipliersHasBeenSet = true;
    m_investmentMultipliers = std::forward<InvestmentMultipliersT>(value);
  }
  template <typename InvestmentMultipliersT = Aws::Vector<InvestmentMultiplier>>
  OutcomeBasedInvestment& WithInvestmentMultipliers(InvestmentMultipliersT&& value) {
    SetInvestmentMultipliers(std::forward<InvestmentMultipliersT>(value));
    return *this;
  }
  template <typename InvestmentMultipliersT = InvestmentMultiplier>
  OutcomeBasedInvestment& AddInvestmentMultipliers(InvestmentMultipliersT&& value) {
    m_investmentMultipliersHasBeenSet = true;
    m_investmentMultipliers.emplace_back(std::forward<InvestmentMultipliersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total value already disbursed against the investment. This value can be
   * distributed among the investment accounts distribution.</p>
   */
  inline const Amount& GetDisbursedValue() const { return m_disbursedValue; }
  inline bool DisbursedValueHasBeenSet() const { return m_disbursedValueHasBeenSet; }
  template <typename DisbursedValueT = Amount>
  void SetDisbursedValue(DisbursedValueT&& value) {
    m_disbursedValueHasBeenSet = true;
    m_disbursedValue = std::forward<DisbursedValueT>(value);
  }
  template <typename DisbursedValueT = Amount>
  OutcomeBasedInvestment& WithDisbursedValue(DisbursedValueT&& value) {
    SetDisbursedValue(std::forward<DisbursedValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_investmentId;

  Aws::String m_outcomeDescription;

  Interval m_attestationWindow;

  Aws::Vector<InvestmentRestriction> m_investmentRestrictions;

  Aws::Vector<InvestmentMultiplier> m_investmentMultipliers;

  Amount m_disbursedValue;
  bool m_investmentIdHasBeenSet = false;
  bool m_outcomeDescriptionHasBeenSet = false;
  bool m_attestationWindowHasBeenSet = false;
  bool m_investmentRestrictionsHasBeenSet = false;
  bool m_investmentMultipliersHasBeenSet = false;
  bool m_disbursedValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
