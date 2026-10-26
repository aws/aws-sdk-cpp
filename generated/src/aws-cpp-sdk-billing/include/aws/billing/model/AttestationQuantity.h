/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
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
 * <p>A quantity-based attestation value, such as a count of workloads
 * migrated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/AttestationQuantity">AWS
 * API Reference</a></p>
 */
class AttestationQuantity {
 public:
  AWS_BILLING_API AttestationQuantity() = default;
  AWS_BILLING_API AttestationQuantity(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API AttestationQuantity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of units being attested, expressed as a decimal string to preserve
   * precision. The value is digits with an optional decimal point and is 1–1000
   * characters.</p>
   */
  inline const Aws::String& GetAttestationVolume() const { return m_attestationVolume; }
  inline bool AttestationVolumeHasBeenSet() const { return m_attestationVolumeHasBeenSet; }
  template <typename AttestationVolumeT = Aws::String>
  void SetAttestationVolume(AttestationVolumeT&& value) {
    m_attestationVolumeHasBeenSet = true;
    m_attestationVolume = std::forward<AttestationVolumeT>(value);
  }
  template <typename AttestationVolumeT = Aws::String>
  AttestationQuantity& WithAttestationVolume(AttestationVolumeT&& value) {
    SetAttestationVolume(std::forward<AttestationVolumeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit of the attestation, such as <code>workloads migrated</code>. This
   * value is 1–1000 characters.</p>
   */
  inline const Aws::String& GetAttestationUnit() const { return m_attestationUnit; }
  inline bool AttestationUnitHasBeenSet() const { return m_attestationUnitHasBeenSet; }
  template <typename AttestationUnitT = Aws::String>
  void SetAttestationUnit(AttestationUnitT&& value) {
    m_attestationUnitHasBeenSet = true;
    m_attestationUnit = std::forward<AttestationUnitT>(value);
  }
  template <typename AttestationUnitT = Aws::String>
  AttestationQuantity& WithAttestationUnit(AttestationUnitT&& value) {
    SetAttestationUnit(std::forward<AttestationUnitT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attestationVolume;

  Aws::String m_attestationUnit;
  bool m_attestationVolumeHasBeenSet = false;
  bool m_attestationUnitHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
