/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/MilestoneBasedInvestment.h>
#include <aws/billing/model/OutcomeBasedInvestment.h>

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
 * <p>An investment within an investment summary. This is a union in which exactly
 * one member is set. The <code>milestoneBasedInvestment</code> member represents a
 * fixed, scheduled investment. The <code>outcomeBasedInvestment</code> member
 * represents an attestable investment awarded upon completion of a defined
 * outcome. Check which member is present to determine the investment
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/Investment">AWS
 * API Reference</a></p>
 */
class Investment {
 public:
  AWS_BILLING_API Investment() = default;
  AWS_BILLING_API Investment(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Investment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An investment with a fixed value that is disbursed on a schedule. This member
   * is set for a milestone-based investment and corresponds to the
   * <code>MILESTONE_BASED</code> investment type.</p>
   */
  inline const MilestoneBasedInvestment& GetMilestoneBasedInvestment() const { return m_milestoneBasedInvestment; }
  inline bool MilestoneBasedInvestmentHasBeenSet() const { return m_milestoneBasedInvestmentHasBeenSet; }
  template <typename MilestoneBasedInvestmentT = MilestoneBasedInvestment>
  void SetMilestoneBasedInvestment(MilestoneBasedInvestmentT&& value) {
    m_milestoneBasedInvestmentHasBeenSet = true;
    m_milestoneBasedInvestment = std::forward<MilestoneBasedInvestmentT>(value);
  }
  template <typename MilestoneBasedInvestmentT = MilestoneBasedInvestment>
  Investment& WithMilestoneBasedInvestment(MilestoneBasedInvestmentT&& value) {
    SetMilestoneBasedInvestment(std::forward<MilestoneBasedInvestmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An investment that is awarded upon completion of a defined outcome. This
   * member is set for an outcome-based (attestable) investment and corresponds to
   * the <code>OUTCOME_BASED</code> investment type.</p>
   */
  inline const OutcomeBasedInvestment& GetOutcomeBasedInvestment() const { return m_outcomeBasedInvestment; }
  inline bool OutcomeBasedInvestmentHasBeenSet() const { return m_outcomeBasedInvestmentHasBeenSet; }
  template <typename OutcomeBasedInvestmentT = OutcomeBasedInvestment>
  void SetOutcomeBasedInvestment(OutcomeBasedInvestmentT&& value) {
    m_outcomeBasedInvestmentHasBeenSet = true;
    m_outcomeBasedInvestment = std::forward<OutcomeBasedInvestmentT>(value);
  }
  template <typename OutcomeBasedInvestmentT = OutcomeBasedInvestment>
  Investment& WithOutcomeBasedInvestment(OutcomeBasedInvestmentT&& value) {
    SetOutcomeBasedInvestment(std::forward<OutcomeBasedInvestmentT>(value));
    return *this;
  }
  ///@}
 private:
  MilestoneBasedInvestment m_milestoneBasedInvestment;

  OutcomeBasedInvestment m_outcomeBasedInvestment;
  bool m_milestoneBasedInvestmentHasBeenSet = false;
  bool m_outcomeBasedInvestmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
