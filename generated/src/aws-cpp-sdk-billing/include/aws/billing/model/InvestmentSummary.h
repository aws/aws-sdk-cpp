/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/Amount.h>
#include <aws/billing/model/InvestmentType.h>
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
 * <p>Detailed information about an investment summary within a contract or a
 * private pricing addendum.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/InvestmentSummary">AWS
 * API Reference</a></p>
 */
class InvestmentSummary {
 public:
  AWS_BILLING_API InvestmentSummary() = default;
  AWS_BILLING_API InvestmentSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API InvestmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the investment summary. Pass this value to
   * <code>ListContractualInvestments</code> to list the investments within the
   * summary, and to <code>CreateContractualInvestmentAttestation</code> to attest an
   * investment. This value is 1–36 characters.</p>
   */
  inline const Aws::String& GetInvestmentSummaryId() const { return m_investmentSummaryId; }
  inline bool InvestmentSummaryIdHasBeenSet() const { return m_investmentSummaryIdHasBeenSet; }
  template <typename InvestmentSummaryIdT = Aws::String>
  void SetInvestmentSummaryId(InvestmentSummaryIdT&& value) {
    m_investmentSummaryIdHasBeenSet = true;
    m_investmentSummaryId = std::forward<InvestmentSummaryIdT>(value);
  }
  template <typename InvestmentSummaryIdT = Aws::String>
  InvestmentSummary& WithInvestmentSummaryId(InvestmentSummaryIdT&& value) {
    SetInvestmentSummaryId(std::forward<InvestmentSummaryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the investment summary, used to reference the investment against
   * a term in the physical contract. This value is 1–400 characters.</p>
   */
  inline const Aws::String& GetInvestmentName() const { return m_investmentName; }
  inline bool InvestmentNameHasBeenSet() const { return m_investmentNameHasBeenSet; }
  template <typename InvestmentNameT = Aws::String>
  void SetInvestmentName(InvestmentNameT&& value) {
    m_investmentNameHasBeenSet = true;
    m_investmentName = std::forward<InvestmentNameT>(value);
  }
  template <typename InvestmentNameT = Aws::String>
  InvestmentSummary& WithInvestmentName(InvestmentNameT&& value) {
    SetInvestmentName(std::forward<InvestmentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the investment summary. Valid values are
   * <code>MILESTONE_BASED</code> and <code>OUTCOME_BASED</code>.
   * <code>OUTCOME_BASED</code> investments can be attested to, upon completion of
   * outcomes. <code>MILESTONE_BASED</code> are automatically triggered by Amazon Web
   * Services, based on the time schedule in the contract.</p>
   */
  inline InvestmentType GetInvestmentType() const { return m_investmentType; }
  inline bool InvestmentTypeHasBeenSet() const { return m_investmentTypeHasBeenSet; }
  inline void SetInvestmentType(InvestmentType value) {
    m_investmentTypeHasBeenSet = true;
    m_investmentType = value;
  }
  inline InvestmentSummary& WithInvestmentType(InvestmentType value) {
    SetInvestmentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum monetary value that can be disbursed against the investment
   * summary, inclusive of all outcomes combined under the summary.</p>
   */
  inline const Amount& GetMaxAllowedInvestmentDisbursementValue() const { return m_maxAllowedInvestmentDisbursementValue; }
  inline bool MaxAllowedInvestmentDisbursementValueHasBeenSet() const { return m_maxAllowedInvestmentDisbursementValueHasBeenSet; }
  template <typename MaxAllowedInvestmentDisbursementValueT = Amount>
  void SetMaxAllowedInvestmentDisbursementValue(MaxAllowedInvestmentDisbursementValueT&& value) {
    m_maxAllowedInvestmentDisbursementValueHasBeenSet = true;
    m_maxAllowedInvestmentDisbursementValue = std::forward<MaxAllowedInvestmentDisbursementValueT>(value);
  }
  template <typename MaxAllowedInvestmentDisbursementValueT = Amount>
  InvestmentSummary& WithMaxAllowedInvestmentDisbursementValue(MaxAllowedInvestmentDisbursementValueT&& value) {
    SetMaxAllowedInvestmentDisbursementValue(std::forward<MaxAllowedInvestmentDisbursementValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_investmentSummaryId;

  Aws::String m_investmentName;

  InvestmentType m_investmentType{InvestmentType::NOT_SET};

  Amount m_maxAllowedInvestmentDisbursementValue;
  bool m_investmentSummaryIdHasBeenSet = false;
  bool m_investmentNameHasBeenSet = false;
  bool m_investmentTypeHasBeenSet = false;
  bool m_maxAllowedInvestmentDisbursementValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
