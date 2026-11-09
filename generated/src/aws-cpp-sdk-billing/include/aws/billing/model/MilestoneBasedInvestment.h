/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/Amount.h>
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
 * <p>An investment with a fixed value that is disbursed on a schedule. This
 * corresponds to the <code>MILESTONE_BASED</code> investment type.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/MilestoneBasedInvestment">AWS
 * API Reference</a></p>
 */
class MilestoneBasedInvestment {
 public:
  AWS_BILLING_API MilestoneBasedInvestment() = default;
  AWS_BILLING_API MilestoneBasedInvestment(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API MilestoneBasedInvestment& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  MilestoneBasedInvestment& WithInvestmentId(InvestmentIdT&& value) {
    SetInvestmentId(std::forward<InvestmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total value of the investment, including its currency and amount.</p>
   */
  inline const Amount& GetInvestmentValue() const { return m_investmentValue; }
  inline bool InvestmentValueHasBeenSet() const { return m_investmentValueHasBeenSet; }
  template <typename InvestmentValueT = Amount>
  void SetInvestmentValue(InvestmentValueT&& value) {
    m_investmentValueHasBeenSet = true;
    m_investmentValue = std::forward<InvestmentValueT>(value);
  }
  template <typename InvestmentValueT = Amount>
  MilestoneBasedInvestment& WithInvestmentValue(InvestmentValueT&& value) {
    SetInvestmentValue(std::forward<InvestmentValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date on which the investment is disbursed to the investment accounts.</p>
   */
  inline const Aws::Utils::DateTime& GetInvestmentDisbursedAt() const { return m_investmentDisbursedAt; }
  inline bool InvestmentDisbursedAtHasBeenSet() const { return m_investmentDisbursedAtHasBeenSet; }
  template <typename InvestmentDisbursedAtT = Aws::Utils::DateTime>
  void SetInvestmentDisbursedAt(InvestmentDisbursedAtT&& value) {
    m_investmentDisbursedAtHasBeenSet = true;
    m_investmentDisbursedAt = std::forward<InvestmentDisbursedAtT>(value);
  }
  template <typename InvestmentDisbursedAtT = Aws::Utils::DateTime>
  MilestoneBasedInvestment& WithInvestmentDisbursedAt(InvestmentDisbursedAtT&& value) {
    SetInvestmentDisbursedAt(std::forward<InvestmentDisbursedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_investmentId;

  Amount m_investmentValue;

  Aws::Utils::DateTime m_investmentDisbursedAt{};
  bool m_investmentIdHasBeenSet = false;
  bool m_investmentValueHasBeenSet = false;
  bool m_investmentDisbursedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
