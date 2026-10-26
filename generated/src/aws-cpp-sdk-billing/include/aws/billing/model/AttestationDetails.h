/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/AttestationValue.h>
#include <aws/billing/model/InvestmentDistribution.h>
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
 * <p>The details of an investment attestation submission, including the value
 * being attested and how the resulting investment is distributed.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/AttestationDetails">AWS
 * API Reference</a></p>
 */
class AttestationDetails {
 public:
  AWS_BILLING_API AttestationDetails() = default;
  AWS_BILLING_API AttestationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API AttestationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value being attested, expressed as either a monetary amount or one or
   * more quantities. Exactly one form is set.</p>
   */
  inline const AttestationValue& GetAttestationValue() const { return m_attestationValue; }
  inline bool AttestationValueHasBeenSet() const { return m_attestationValueHasBeenSet; }
  template <typename AttestationValueT = AttestationValue>
  void SetAttestationValue(AttestationValueT&& value) {
    m_attestationValueHasBeenSet = true;
    m_attestationValue = std::forward<AttestationValueT>(value);
  }
  template <typename AttestationValueT = AttestationValue>
  AttestationDetails& WithAttestationValue(AttestationValueT&& value) {
    SetAttestationValue(std::forward<AttestationValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distribution of the resulting investment across the eligible investment
   * accounts on the contract. If you omit this value, the full investment is
   * allocated to the single eligible investment account on the contract. This value
   * is required when multiple investment accounts are eligible. When you provide
   * this value, the sum of all distributions must equal the resulting monetary
   * investment value (the attested amount, or the value computed from the attested
   * quantities using the investment multipliers). The list contains at most 200
   * distributions.</p>
   */
  inline const Aws::Vector<InvestmentDistribution>& GetInvestmentDistributions() const { return m_investmentDistributions; }
  inline bool InvestmentDistributionsHasBeenSet() const { return m_investmentDistributionsHasBeenSet; }
  template <typename InvestmentDistributionsT = Aws::Vector<InvestmentDistribution>>
  void SetInvestmentDistributions(InvestmentDistributionsT&& value) {
    m_investmentDistributionsHasBeenSet = true;
    m_investmentDistributions = std::forward<InvestmentDistributionsT>(value);
  }
  template <typename InvestmentDistributionsT = Aws::Vector<InvestmentDistribution>>
  AttestationDetails& WithInvestmentDistributions(InvestmentDistributionsT&& value) {
    SetInvestmentDistributions(std::forward<InvestmentDistributionsT>(value));
    return *this;
  }
  template <typename InvestmentDistributionsT = InvestmentDistribution>
  AttestationDetails& AddInvestmentDistributions(InvestmentDistributionsT&& value) {
    m_investmentDistributionsHasBeenSet = true;
    m_investmentDistributions.emplace_back(std::forward<InvestmentDistributionsT>(value));
    return *this;
  }
  ///@}
 private:
  AttestationValue m_attestationValue;

  Aws::Vector<InvestmentDistribution> m_investmentDistributions;
  bool m_attestationValueHasBeenSet = false;
  bool m_investmentDistributionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
