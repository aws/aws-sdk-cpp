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
#include <aws/eks/model/CertificateAuthoritySigningStatus.h>

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
 * <p>Summary information about a certificate authority (CA) for an Amazon EKS
 * cluster, returned by <a
 * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_ListCertificateAuthorities.html">
 * <code>ListCertificateAuthorities</code> </a> and the certificate-authority write
 * operations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CertificateAuthoritySummary">AWS
 * API Reference</a></p>
 */
class CertificateAuthoritySummary {
 public:
  AWS_EKS_API CertificateAuthoritySummary() = default;
  AWS_EKS_API CertificateAuthoritySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API CertificateAuthoritySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  CertificateAuthoritySummary& WithId(IdT&& value) {
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
  CertificateAuthoritySummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that created the certificate authority, either
   * <code>CUSTOMER</code> or <code>EKS</code>.</p>
   */
  inline CertificateAuthorityCreatedBy GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  inline void SetCreatedBy(CertificateAuthorityCreatedBy value) {
    m_createdByHasBeenSet = true;
    m_createdBy = value;
  }
  inline CertificateAuthoritySummary& WithCreatedBy(CertificateAuthorityCreatedBy value) {
    SetCreatedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix epoch timestamp in seconds for when the certificate authority was
   * last activated. This value is absent if the certificate authority has never been
   * activated.</p>
   */
  inline const Aws::Utils::DateTime& GetActivatedAt() const { return m_activatedAt; }
  inline bool ActivatedAtHasBeenSet() const { return m_activatedAtHasBeenSet; }
  template <typename ActivatedAtT = Aws::Utils::DateTime>
  void SetActivatedAt(ActivatedAtT&& value) {
    m_activatedAtHasBeenSet = true;
    m_activatedAt = std::forward<ActivatedAtT>(value);
  }
  template <typename ActivatedAtT = Aws::Utils::DateTime>
  CertificateAuthoritySummary& WithActivatedAt(ActivatedAtT&& value) {
    SetActivatedAt(std::forward<ActivatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity that most recently activated the certificate authority, either
   * <code>CUSTOMER</code> or <code>EKS</code>.</p>
   */
  inline CertificateAuthorityActivatedBy GetActivatedBy() const { return m_activatedBy; }
  inline bool ActivatedByHasBeenSet() const { return m_activatedByHasBeenSet; }
  inline void SetActivatedBy(CertificateAuthorityActivatedBy value) {
    m_activatedByHasBeenSet = true;
    m_activatedBy = value;
  }
  inline CertificateAuthoritySummary& WithActivatedBy(CertificateAuthorityActivatedBy value) {
    SetActivatedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The signing status of the certificate authority: <code>IN_USE</code>,
   * <code>ACTIVATING</code>, or <code>NOT_USED</code>.</p>
   */
  inline CertificateAuthoritySigningStatus GetSigningStatus() const { return m_signingStatus; }
  inline bool SigningStatusHasBeenSet() const { return m_signingStatusHasBeenSet; }
  inline void SetSigningStatus(CertificateAuthoritySigningStatus value) {
    m_signingStatusHasBeenSet = true;
    m_signingStatus = value;
  }
  inline CertificateAuthoritySummary& WithSigningStatus(CertificateAuthoritySigningStatus value) {
    SetSigningStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distribution status of the certificate authority:
   * <code>IN_PROGRESS</code>, <code>COMPLETE</code>, <code>FAILED</code>, or
   * <code>DELETING</code>.</p>
   */
  inline CertificateAuthorityDistributionStatus GetDistributionStatus() const { return m_distributionStatus; }
  inline bool DistributionStatusHasBeenSet() const { return m_distributionStatusHasBeenSet; }
  inline void SetDistributionStatus(CertificateAuthorityDistributionStatus value) {
    m_distributionStatusHasBeenSet = true;
    m_distributionStatus = value;
  }
  inline CertificateAuthoritySummary& WithDistributionStatus(CertificateAuthorityDistributionStatus value) {
    SetDistributionStatus(value);
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
  bool m_idHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_activatedAtHasBeenSet = false;
  bool m_activatedByHasBeenSet = false;
  bool m_signingStatusHasBeenSet = false;
  bool m_distributionStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
