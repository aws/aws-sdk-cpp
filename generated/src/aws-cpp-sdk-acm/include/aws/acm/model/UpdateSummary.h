/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/DomainValidationMethodUpdateSummary.h>
#include <aws/acm/model/UpdateStatus.h>
#include <aws/acm/model/UpdateType.h>
#include <aws/core/utils/DateTime.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Contains information about the most recent certificate update, such as a
 * domain validation method migration. This structure is returned as part of the
 * <a>CertificateDetail</a> response from <a>DescribeCertificate</a>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/UpdateSummary">AWS
 * API Reference</a></p>
 */
class UpdateSummary {
 public:
  AWS_ACM_API UpdateSummary() = default;
  AWS_ACM_API UpdateSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API UpdateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the certificate update. The following are valid values:</p>
   * <ul> <li> <p> <code>PENDING_DOMAIN_VALIDATION</code> – The certificate update is
   * waiting for domain ownership validation to complete.</p> </li> <li> <p>
   * <code>SUCCESS</code> – The certificate was updated successfully.</p> </li> <li>
   * <p> <code>FAILED</code> – The certificate update failed.</p> </li> </ul>
   */
  inline UpdateStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(UpdateStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateSummary& WithStatus(UpdateStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of update that was requested for the certificate. The following are
   * valid values:</p> <ul> <li> <p> <code>DOMAIN_VALIDATION_METHOD</code> – The
   * update changes the domain validation method for the certificate.</p> </li> </ul>
   */
  inline UpdateType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(UpdateType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline UpdateSummary& WithType(UpdateType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about a domain validation method migration, including
   * the previous and target validation methods.</p>
   */
  inline const DomainValidationMethodUpdateSummary& GetDomainValidationMethodUpdateSummary() const {
    return m_domainValidationMethodUpdateSummary;
  }
  inline bool DomainValidationMethodUpdateSummaryHasBeenSet() const { return m_domainValidationMethodUpdateSummaryHasBeenSet; }
  template <typename DomainValidationMethodUpdateSummaryT = DomainValidationMethodUpdateSummary>
  void SetDomainValidationMethodUpdateSummary(DomainValidationMethodUpdateSummaryT&& value) {
    m_domainValidationMethodUpdateSummaryHasBeenSet = true;
    m_domainValidationMethodUpdateSummary = std::forward<DomainValidationMethodUpdateSummaryT>(value);
  }
  template <typename DomainValidationMethodUpdateSummaryT = DomainValidationMethodUpdateSummary>
  UpdateSummary& WithDomainValidationMethodUpdateSummary(DomainValidationMethodUpdateSummaryT&& value) {
    SetDomainValidationMethodUpdateSummary(std::forward<DomainValidationMethodUpdateSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the certificate update was requested.</p>
   */
  inline const Aws::Utils::DateTime& GetRequestedAt() const { return m_requestedAt; }
  inline bool RequestedAtHasBeenSet() const { return m_requestedAtHasBeenSet; }
  template <typename RequestedAtT = Aws::Utils::DateTime>
  void SetRequestedAt(RequestedAtT&& value) {
    m_requestedAtHasBeenSet = true;
    m_requestedAt = std::forward<RequestedAtT>(value);
  }
  template <typename RequestedAtT = Aws::Utils::DateTime>
  UpdateSummary& WithRequestedAt(RequestedAtT&& value) {
    SetRequestedAt(std::forward<RequestedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the certificate update status was last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateStatus m_status{UpdateStatus::NOT_SET};

  UpdateType m_type{UpdateType::NOT_SET};

  DomainValidationMethodUpdateSummary m_domainValidationMethodUpdateSummary;

  Aws::Utils::DateTime m_requestedAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_statusHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_domainValidationMethodUpdateSummaryHasBeenSet = false;
  bool m_requestedAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
