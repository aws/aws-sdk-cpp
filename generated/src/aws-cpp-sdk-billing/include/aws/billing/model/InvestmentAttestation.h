/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/Amount.h>
#include <aws/billing/model/InvestmentAttestationStatus.h>
#include <aws/billing/model/InvestmentDistribution.h>
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
 * <p>A summary of a submitted investment attestation, as returned by
 * <code>ListContractualInvestmentAttestations</code>.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/InvestmentAttestation">AWS
 * API Reference</a></p>
 */
class InvestmentAttestation {
 public:
  AWS_BILLING_API InvestmentAttestation() = default;
  AWS_BILLING_API InvestmentAttestation(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API InvestmentAttestation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the attestation. This value is returned by
   * <code>CreateContractualInvestmentAttestation</code> and is used to cancel the
   * attestation with <code>CancelContractualInvestmentAttestation</code>. This value
   * is 1–36 characters.</p>
   */
  inline const Aws::String& GetAttestationId() const { return m_attestationId; }
  inline bool AttestationIdHasBeenSet() const { return m_attestationIdHasBeenSet; }
  template <typename AttestationIdT = Aws::String>
  void SetAttestationId(AttestationIdT&& value) {
    m_attestationIdHasBeenSet = true;
    m_attestationId = std::forward<AttestationIdT>(value);
  }
  template <typename AttestationIdT = Aws::String>
  InvestmentAttestation& WithAttestationId(AttestationIdT&& value) {
    SetAttestationId(std::forward<AttestationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the investment summary that contains the attested outcome. This
   * value is 1–400 characters.</p>
   */
  inline const Aws::String& GetInvestmentName() const { return m_investmentName; }
  inline bool InvestmentNameHasBeenSet() const { return m_investmentNameHasBeenSet; }
  template <typename InvestmentNameT = Aws::String>
  void SetInvestmentName(InvestmentNameT&& value) {
    m_investmentNameHasBeenSet = true;
    m_investmentName = std::forward<InvestmentNameT>(value);
  }
  template <typename InvestmentNameT = Aws::String>
  InvestmentAttestation& WithInvestmentName(InvestmentNameT&& value) {
    SetInvestmentName(std::forward<InvestmentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the attested outcome. This value is 1–2048 characters.</p>
   */
  inline const Aws::String& GetOutcomeDescription() const { return m_outcomeDescription; }
  inline bool OutcomeDescriptionHasBeenSet() const { return m_outcomeDescriptionHasBeenSet; }
  template <typename OutcomeDescriptionT = Aws::String>
  void SetOutcomeDescription(OutcomeDescriptionT&& value) {
    m_outcomeDescriptionHasBeenSet = true;
    m_outcomeDescription = std::forward<OutcomeDescriptionT>(value);
  }
  template <typename OutcomeDescriptionT = Aws::String>
  InvestmentAttestation& WithOutcomeDescription(OutcomeDescriptionT&& value) {
    SetOutcomeDescription(std::forward<OutcomeDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the investment summary that was attested, as returned by
   * <code>ListContractualInvestmentSummaries</code>.</p>
   */
  inline const Aws::String& GetInvestmentSummaryId() const { return m_investmentSummaryId; }
  inline bool InvestmentSummaryIdHasBeenSet() const { return m_investmentSummaryIdHasBeenSet; }
  template <typename InvestmentSummaryIdT = Aws::String>
  void SetInvestmentSummaryId(InvestmentSummaryIdT&& value) {
    m_investmentSummaryIdHasBeenSet = true;
    m_investmentSummaryId = std::forward<InvestmentSummaryIdT>(value);
  }
  template <typename InvestmentSummaryIdT = Aws::String>
  InvestmentAttestation& WithInvestmentSummaryId(InvestmentSummaryIdT&& value) {
    SetInvestmentSummaryId(std::forward<InvestmentSummaryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the investment that was attested, as returned by
   * <code>ListContractualInvestments</code>.</p>
   */
  inline const Aws::String& GetInvestmentId() const { return m_investmentId; }
  inline bool InvestmentIdHasBeenSet() const { return m_investmentIdHasBeenSet; }
  template <typename InvestmentIdT = Aws::String>
  void SetInvestmentId(InvestmentIdT&& value) {
    m_investmentIdHasBeenSet = true;
    m_investmentId = std::forward<InvestmentIdT>(value);
  }
  template <typename InvestmentIdT = Aws::String>
  InvestmentAttestation& WithInvestmentId(InvestmentIdT&& value) {
    SetInvestmentId(std::forward<InvestmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date on which the attestation was submitted.</p>
   */
  inline const Aws::Utils::DateTime& GetAttestedAt() const { return m_attestedAt; }
  inline bool AttestedAtHasBeenSet() const { return m_attestedAtHasBeenSet; }
  template <typename AttestedAtT = Aws::Utils::DateTime>
  void SetAttestedAt(AttestedAtT&& value) {
    m_attestedAtHasBeenSet = true;
    m_attestedAt = std::forward<AttestedAtT>(value);
  }
  template <typename AttestedAtT = Aws::Utils::DateTime>
  InvestmentAttestation& WithAttestedAt(AttestedAtT&& value) {
    SetAttestedAt(std::forward<AttestedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date on which the attestation was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  InvestmentAttestation& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the attestation. Valid values are
   * <code>PENDING_REVIEW</code>, <code>PENDING_C_LEVEL_APPROVAL</code>,
   * <code>PENDING_CANCELLATION</code>, <code>REJECTED</code>,
   * <code>CANCELLED</code>, and <code>DISBURSED</code>. The values
   * <code>DISBURSED</code>, <code>REJECTED</code>, and <code>CANCELLED</code> are
   * terminal. The other values indicate the attestation is still in progress.</p>
   */
  inline InvestmentAttestationStatus GetAttestationStatus() const { return m_attestationStatus; }
  inline bool AttestationStatusHasBeenSet() const { return m_attestationStatusHasBeenSet; }
  inline void SetAttestationStatus(InvestmentAttestationStatus value) {
    m_attestationStatusHasBeenSet = true;
    m_attestationStatus = value;
  }
  inline InvestmentAttestation& WithAttestationStatus(InvestmentAttestationStatus value) {
    SetAttestationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date on which the investment is disbursed to the investment
   * accounts. This is not the same as the time of disbursement, but reflects the
   * date you submitted with the attestation.</p>
   */
  inline const Aws::Utils::DateTime& GetInvestmentDisbursedAt() const { return m_investmentDisbursedAt; }
  inline bool InvestmentDisbursedAtHasBeenSet() const { return m_investmentDisbursedAtHasBeenSet; }
  template <typename InvestmentDisbursedAtT = Aws::Utils::DateTime>
  void SetInvestmentDisbursedAt(InvestmentDisbursedAtT&& value) {
    m_investmentDisbursedAtHasBeenSet = true;
    m_investmentDisbursedAt = std::forward<InvestmentDisbursedAtT>(value);
  }
  template <typename InvestmentDisbursedAtT = Aws::Utils::DateTime>
  InvestmentAttestation& WithInvestmentDisbursedAt(InvestmentDisbursedAtT&& value) {
    SetInvestmentDisbursedAt(std::forward<InvestmentDisbursedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The monetary value attested.</p>
   */
  inline const Amount& GetAttestedValue() const { return m_attestedValue; }
  inline bool AttestedValueHasBeenSet() const { return m_attestedValueHasBeenSet; }
  template <typename AttestedValueT = Amount>
  void SetAttestedValue(AttestedValueT&& value) {
    m_attestedValueHasBeenSet = true;
    m_attestedValue = std::forward<AttestedValueT>(value);
  }
  template <typename AttestedValueT = Amount>
  InvestmentAttestation& WithAttestedValue(AttestedValueT&& value) {
    SetAttestedValue(std::forward<AttestedValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distribution of the attested investment across the eligible investment
   * accounts. The list contains at most 200 distributions.</p>
   */
  inline const Aws::Vector<InvestmentDistribution>& GetInvestmentDistributions() const { return m_investmentDistributions; }
  inline bool InvestmentDistributionsHasBeenSet() const { return m_investmentDistributionsHasBeenSet; }
  template <typename InvestmentDistributionsT = Aws::Vector<InvestmentDistribution>>
  void SetInvestmentDistributions(InvestmentDistributionsT&& value) {
    m_investmentDistributionsHasBeenSet = true;
    m_investmentDistributions = std::forward<InvestmentDistributionsT>(value);
  }
  template <typename InvestmentDistributionsT = Aws::Vector<InvestmentDistribution>>
  InvestmentAttestation& WithInvestmentDistributions(InvestmentDistributionsT&& value) {
    SetInvestmentDistributions(std::forward<InvestmentDistributionsT>(value));
    return *this;
  }
  template <typename InvestmentDistributionsT = InvestmentDistribution>
  InvestmentAttestation& AddInvestmentDistributions(InvestmentDistributionsT&& value) {
    m_investmentDistributionsHasBeenSet = true;
    m_investmentDistributions.emplace_back(std::forward<InvestmentDistributionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reasons the attestation was rejected. This value is present only when
   * <code>attestationStatus</code> is <code>REJECTED</code>. The list contains at
   * most 30 reasons.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRejectionReasons() const { return m_rejectionReasons; }
  inline bool RejectionReasonsHasBeenSet() const { return m_rejectionReasonsHasBeenSet; }
  template <typename RejectionReasonsT = Aws::Vector<Aws::String>>
  void SetRejectionReasons(RejectionReasonsT&& value) {
    m_rejectionReasonsHasBeenSet = true;
    m_rejectionReasons = std::forward<RejectionReasonsT>(value);
  }
  template <typename RejectionReasonsT = Aws::Vector<Aws::String>>
  InvestmentAttestation& WithRejectionReasons(RejectionReasonsT&& value) {
    SetRejectionReasons(std::forward<RejectionReasonsT>(value));
    return *this;
  }
  template <typename RejectionReasonsT = Aws::String>
  InvestmentAttestation& AddRejectionReasons(RejectionReasonsT&& value) {
    m_rejectionReasonsHasBeenSet = true;
    m_rejectionReasons.emplace_back(std::forward<RejectionReasonsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the attestation can be canceled with
   * <code>CancelContractualInvestmentAttestation</code>.</p>
   */
  inline bool GetIsCancellable() const { return m_isCancellable; }
  inline bool IsCancellableHasBeenSet() const { return m_isCancellableHasBeenSet; }
  inline void SetIsCancellable(bool value) {
    m_isCancellableHasBeenSet = true;
    m_isCancellable = value;
  }
  inline InvestmentAttestation& WithIsCancellable(bool value) {
    SetIsCancellable(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_attestationId;

  Aws::String m_investmentName;

  Aws::String m_outcomeDescription;

  Aws::String m_investmentSummaryId;

  Aws::String m_investmentId;

  Aws::Utils::DateTime m_attestedAt{};

  Aws::Utils::DateTime m_updatedAt{};

  InvestmentAttestationStatus m_attestationStatus{InvestmentAttestationStatus::NOT_SET};

  Aws::Utils::DateTime m_investmentDisbursedAt{};

  Amount m_attestedValue;

  Aws::Vector<InvestmentDistribution> m_investmentDistributions;

  Aws::Vector<Aws::String> m_rejectionReasons;

  bool m_isCancellable{false};
  bool m_attestationIdHasBeenSet = false;
  bool m_investmentNameHasBeenSet = false;
  bool m_outcomeDescriptionHasBeenSet = false;
  bool m_investmentSummaryIdHasBeenSet = false;
  bool m_investmentIdHasBeenSet = false;
  bool m_attestedAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_attestationStatusHasBeenSet = false;
  bool m_investmentDisbursedAtHasBeenSet = false;
  bool m_attestedValueHasBeenSet = false;
  bool m_investmentDistributionsHasBeenSet = false;
  bool m_rejectionReasonsHasBeenSet = false;
  bool m_isCancellableHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
