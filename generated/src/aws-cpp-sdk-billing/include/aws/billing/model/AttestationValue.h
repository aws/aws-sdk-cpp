/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/Amount.h>
#include <aws/billing/model/AttestationQuantity.h>
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
 * <p>The value being attested. This is a union in which exactly one member is set.
 * Set <code>attestationAmount</code> to attest a monetary amount directly, or set
 * <code>attestationQuantities</code> to attest one or more quantities that are
 * converted to a value using the investment's multipliers.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/AttestationValue">AWS
 * API Reference</a></p>
 */
class AttestationValue {
 public:
  AWS_BILLING_API AttestationValue() = default;
  AWS_BILLING_API AttestationValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API AttestationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value attested as a monetary amount. This form is valid only when the
   * investment has no multiplier.</p>
   */
  inline const Amount& GetAttestationAmount() const { return m_attestationAmount; }
  inline bool AttestationAmountHasBeenSet() const { return m_attestationAmountHasBeenSet; }
  template <typename AttestationAmountT = Amount>
  void SetAttestationAmount(AttestationAmountT&& value) {
    m_attestationAmountHasBeenSet = true;
    m_attestationAmount = std::forward<AttestationAmountT>(value);
  }
  template <typename AttestationAmountT = Amount>
  AttestationValue& WithAttestationAmount(AttestationAmountT&& value) {
    SetAttestationAmount(std::forward<AttestationAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value attested as one or more quantities, each with its own unit. The
   * list contains at most 50 quantities.</p>
   */
  inline const Aws::Vector<AttestationQuantity>& GetAttestationQuantities() const { return m_attestationQuantities; }
  inline bool AttestationQuantitiesHasBeenSet() const { return m_attestationQuantitiesHasBeenSet; }
  template <typename AttestationQuantitiesT = Aws::Vector<AttestationQuantity>>
  void SetAttestationQuantities(AttestationQuantitiesT&& value) {
    m_attestationQuantitiesHasBeenSet = true;
    m_attestationQuantities = std::forward<AttestationQuantitiesT>(value);
  }
  template <typename AttestationQuantitiesT = Aws::Vector<AttestationQuantity>>
  AttestationValue& WithAttestationQuantities(AttestationQuantitiesT&& value) {
    SetAttestationQuantities(std::forward<AttestationQuantitiesT>(value));
    return *this;
  }
  template <typename AttestationQuantitiesT = AttestationQuantity>
  AttestationValue& AddAttestationQuantities(AttestationQuantitiesT&& value) {
    m_attestationQuantitiesHasBeenSet = true;
    m_attestationQuantities.emplace_back(std::forward<AttestationQuantitiesT>(value));
    return *this;
  }
  ///@}
 private:
  Amount m_attestationAmount;

  Aws::Vector<AttestationQuantity> m_attestationQuantities;
  bool m_attestationAmountHasBeenSet = false;
  bool m_attestationQuantitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
