/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/CertificateAuthorityActivatedBy.h>
#include <aws/eks/model/CertificateAuthorityCreatedBy.h>
#include <aws/eks/model/CertificateAuthorityDistributionStatus.h>
#include <aws/eks/model/CertificateAuthorityScheduledEvents.h>
#include <aws/eks/model/CertificateAuthoritySigningStatus.h>
#include <aws/eks/model/CertificateAuthorityValidity.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>An object representing a certificate authority (CA) for an Amazon EKS
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CertificateAuthority">AWS
 * API Reference</a></p>
 */
class CertificateAuthority {
 public:
  AWS_EKS_API CertificateAuthority() = default;
  AWS_EKS_API CertificateAuthority(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API CertificateAuthority& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the certificate authority.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CertificateAuthority& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix epoch timestamp in seconds for when the certificate authority was
   * created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CertificateAuthority& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that created the certificate authority. Certificate authorities
   * that you create are <code>CUSTOMER</code>; those that Amazon EKS provisions on
   * your behalf, such as a cluster's initial certificate authority, are
   * <code>EKS</code>.</p>
   */
  inline CertificateAuthorityCreatedBy GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  inline void SetCreatedBy(CertificateAuthorityCreatedBy value) {
    m_createdByHasBeenSet = true;
    m_createdBy = value;
  }
  inline CertificateAuthority& WithCreatedBy(CertificateAuthorityCreatedBy value) {
    SetCreatedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix epoch timestamp in seconds for when the certificate authority was
   * last activated as the cluster's signer. This value is absent if the certificate
   * authority has never been activated.</p>
   */
  inline const Aws::Utils::DateTime& GetActivatedAt() const { return m_activatedAt; }
  inline bool ActivatedAtHasBeenSet() const { return m_activatedAtHasBeenSet; }
  template <typename ActivatedAtT = Aws::Utils::DateTime>
  void SetActivatedAt(ActivatedAtT&& value) {
    m_activatedAtHasBeenSet = true;
    m_activatedAt = std::forward<ActivatedAtT>(value);
  }
  template <typename ActivatedAtT = Aws::Utils::DateTime>
  CertificateAuthority& WithActivatedAt(ActivatedAtT&& value) {
    SetActivatedAt(std::forward<ActivatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that most recently activated the certificate authority. A value of
   * <code>EKS</code> indicates that Amazon EKS activated it automatically;
   * <code>CUSTOMER</code> indicates that you activated it.</p>
   */
  inline CertificateAuthorityActivatedBy GetActivatedBy() const { return m_activatedBy; }
  inline bool ActivatedByHasBeenSet() const { return m_activatedByHasBeenSet; }
  inline void SetActivatedBy(CertificateAuthorityActivatedBy value) {
    m_activatedByHasBeenSet = true;
    m_activatedBy = value;
  }
  inline CertificateAuthority& WithActivatedBy(CertificateAuthorityActivatedBy value) {
    SetActivatedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The signing status of the certificate authority. <code>IN_USE</code> means
   * the certificate authority is currently signing certificates for the cluster,
   * <code>ACTIVATING</code> means it's being promoted to the signer, and
   * <code>NOT_USED</code> means it's trusted by the cluster (for example, a
   * successor CA during a rotation, or a retired outgoing CA) but isn't the
   * signer.</p>
   */
  inline CertificateAuthoritySigningStatus GetSigningStatus() const { return m_signingStatus; }
  inline bool SigningStatusHasBeenSet() const { return m_signingStatusHasBeenSet; }
  inline void SetSigningStatus(CertificateAuthoritySigningStatus value) {
    m_signingStatusHasBeenSet = true;
    m_signingStatus = value;
  }
  inline CertificateAuthority& WithSigningStatus(CertificateAuthoritySigningStatus value) {
    SetSigningStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distribution status of the certificate authority, which tracks whether
   * Amazon EKS has distributed its trust to the Amazon Web Services managed
   * components in your cluster (the control plane, Amazon EKS Auto Mode instances,
   * and Amazon Web Services Fargate nodes). Valid values are
   * <code>IN_PROGRESS</code>, <code>COMPLETE</code>, <code>FAILED</code>, and
   * <code>DELETING</code>. A successor CA can only be activated after its
   * distribution status is <code>COMPLETE</code>.</p>
   */
  inline CertificateAuthorityDistributionStatus GetDistributionStatus() const { return m_distributionStatus; }
  inline bool DistributionStatusHasBeenSet() const { return m_distributionStatusHasBeenSet; }
  inline void SetDistributionStatus(CertificateAuthorityDistributionStatus value) {
    m_distributionStatusHasBeenSet = true;
    m_distributionStatus = value;
  }
  inline CertificateAuthority& WithDistributionStatus(CertificateAuthorityDistributionStatus value) {
    SetDistributionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validity period of the certificate authority's certificate.</p>
   */
  inline const CertificateAuthorityValidity& GetValidity() const { return m_validity; }
  inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }
  template <typename ValidityT = CertificateAuthorityValidity>
  void SetValidity(ValidityT&& value) {
    m_validityHasBeenSet = true;
    m_validity = std::forward<ValidityT>(value);
  }
  template <typename ValidityT = CertificateAuthorityValidity>
  CertificateAuthority& WithValidity(ValidityT&& value) {
    SetValidity(std::forward<ValidityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scheduled auto-activation events for the certificate authority, computed
   * from its validity period.</p>
   */
  inline const CertificateAuthorityScheduledEvents& GetScheduledEvents() const { return m_scheduledEvents; }
  inline bool ScheduledEventsHasBeenSet() const { return m_scheduledEventsHasBeenSet; }
  template <typename ScheduledEventsT = CertificateAuthorityScheduledEvents>
  void SetScheduledEvents(ScheduledEventsT&& value) {
    m_scheduledEventsHasBeenSet = true;
    m_scheduledEvents = std::forward<ScheduledEventsT>(value);
  }
  template <typename ScheduledEventsT = CertificateAuthorityScheduledEvents>
  CertificateAuthority& WithScheduledEvents(ScheduledEventsT&& value) {
    SetScheduledEvents(std::forward<ScheduledEventsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether CA rollback is still available for this certificate
   * authority. After you activate a successor CA, rollback lets you revert to the
   * outgoing CA for a limited period while you finish updating any worker nodes or
   * clients that were missed.</p>
   */
  inline bool GetRollbackAvailable() const { return m_rollbackAvailable; }
  inline bool RollbackAvailableHasBeenSet() const { return m_rollbackAvailableHasBeenSet; }
  inline void SetRollbackAvailable(bool value) {
    m_rollbackAvailableHasBeenSet = true;
    m_rollbackAvailable = value;
  }
  inline CertificateAuthority& WithRollbackAvailable(bool value) {
    SetRollbackAvailable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Base64-encoded public certificate of the certificate authority.</p>
   */
  inline const Aws::String& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = Aws::String>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::String>
  CertificateAuthority& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::Utils::DateTime m_createdAt{};

  CertificateAuthorityCreatedBy m_createdBy{CertificateAuthorityCreatedBy::NOT_SET};

  Aws::Utils::DateTime m_activatedAt{};

  CertificateAuthorityActivatedBy m_activatedBy{CertificateAuthorityActivatedBy::NOT_SET};

  CertificateAuthoritySigningStatus m_signingStatus{CertificateAuthoritySigningStatus::NOT_SET};

  CertificateAuthorityDistributionStatus m_distributionStatus{CertificateAuthorityDistributionStatus::NOT_SET};

  CertificateAuthorityValidity m_validity;

  CertificateAuthorityScheduledEvents m_scheduledEvents;

  bool m_rollbackAvailable{false};

  Aws::String m_data;
  bool m_idHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_activatedAtHasBeenSet = false;
  bool m_activatedByHasBeenSet = false;
  bool m_signingStatusHasBeenSet = false;
  bool m_distributionStatusHasBeenSet = false;
  bool m_validityHasBeenSet = false;
  bool m_scheduledEventsHasBeenSet = false;
  bool m_rollbackAvailableHasBeenSet = false;
  bool m_dataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
