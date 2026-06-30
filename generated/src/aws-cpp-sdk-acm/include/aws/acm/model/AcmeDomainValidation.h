/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmeDomainValidationStatus.h>
#include <aws/acm/model/FailureDetails.h>
#include <aws/acm/model/PrevalidationDetails.h>
#include <aws/acm/model/PrevalidationType.h>
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
namespace ACM {
namespace Model {

/**
 * <p>Contains detailed information about an ACME domain validation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/AcmeDomainValidation">AWS
 * API Reference</a></p>
 */
class AcmeDomainValidation {
 public:
  AWS_ACM_API AcmeDomainValidation() = default;
  AWS_ACM_API AcmeDomainValidation(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API AcmeDomainValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACME domain validation.</p>
   */
  inline const Aws::String& GetAcmeDomainValidationArn() const { return m_acmeDomainValidationArn; }
  inline bool AcmeDomainValidationArnHasBeenSet() const { return m_acmeDomainValidationArnHasBeenSet; }
  template <typename AcmeDomainValidationArnT = Aws::String>
  void SetAcmeDomainValidationArn(AcmeDomainValidationArnT&& value) {
    m_acmeDomainValidationArnHasBeenSet = true;
    m_acmeDomainValidationArn = std::forward<AcmeDomainValidationArnT>(value);
  }
  template <typename AcmeDomainValidationArnT = Aws::String>
  AcmeDomainValidation& WithAcmeDomainValidationArn(AcmeDomainValidationArnT&& value) {
    SetAcmeDomainValidationArn(std::forward<AcmeDomainValidationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACME endpoint.</p>
   */
  inline const Aws::String& GetAcmeEndpointArn() const { return m_acmeEndpointArn; }
  inline bool AcmeEndpointArnHasBeenSet() const { return m_acmeEndpointArnHasBeenSet; }
  template <typename AcmeEndpointArnT = Aws::String>
  void SetAcmeEndpointArn(AcmeEndpointArnT&& value) {
    m_acmeEndpointArnHasBeenSet = true;
    m_acmeEndpointArn = std::forward<AcmeEndpointArnT>(value);
  }
  template <typename AcmeEndpointArnT = Aws::String>
  AcmeDomainValidation& WithAcmeEndpointArn(AcmeEndpointArnT&& value) {
    SetAcmeEndpointArn(std::forward<AcmeEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain name being validated.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  AcmeDomainValidation& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of prevalidation used.</p>
   */
  inline PrevalidationType GetPrevalidationType() const { return m_prevalidationType; }
  inline bool PrevalidationTypeHasBeenSet() const { return m_prevalidationTypeHasBeenSet; }
  inline void SetPrevalidationType(PrevalidationType value) {
    m_prevalidationTypeHasBeenSet = true;
    m_prevalidationType = value;
  }
  inline AcmeDomainValidation& WithPrevalidationType(PrevalidationType value) {
    SetPrevalidationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the prevalidation configuration.</p>
   */
  inline const PrevalidationDetails& GetPrevalidationDetails() const { return m_prevalidationDetails; }
  inline bool PrevalidationDetailsHasBeenSet() const { return m_prevalidationDetailsHasBeenSet; }
  template <typename PrevalidationDetailsT = PrevalidationDetails>
  void SetPrevalidationDetails(PrevalidationDetailsT&& value) {
    m_prevalidationDetailsHasBeenSet = true;
    m_prevalidationDetails = std::forward<PrevalidationDetailsT>(value);
  }
  template <typename PrevalidationDetailsT = PrevalidationDetails>
  AcmeDomainValidation& WithPrevalidationDetails(PrevalidationDetailsT&& value) {
    SetPrevalidationDetails(std::forward<PrevalidationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the domain validation.</p>
   */
  inline AcmeDomainValidationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AcmeDomainValidationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AcmeDomainValidation& WithStatus(AcmeDomainValidationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the failure, if the validation failed.</p>
   */
  inline const FailureDetails& GetFailureDetails() const { return m_failureDetails; }
  inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
  template <typename FailureDetailsT = FailureDetails>
  void SetFailureDetails(FailureDetailsT&& value) {
    m_failureDetailsHasBeenSet = true;
    m_failureDetails = std::forward<FailureDetailsT>(value);
  }
  template <typename FailureDetailsT = FailureDetails>
  AcmeDomainValidation& WithFailureDetails(FailureDetailsT&& value) {
    SetFailureDetails(std::forward<FailureDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the domain validation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AcmeDomainValidation& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the domain validation was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AcmeDomainValidation& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acmeDomainValidationArn;

  Aws::String m_acmeEndpointArn;

  Aws::String m_domainName;

  PrevalidationType m_prevalidationType{PrevalidationType::NOT_SET};

  PrevalidationDetails m_prevalidationDetails;

  AcmeDomainValidationStatus m_status{AcmeDomainValidationStatus::NOT_SET};

  FailureDetails m_failureDetails;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_acmeDomainValidationArnHasBeenSet = false;
  bool m_acmeEndpointArnHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_prevalidationTypeHasBeenSet = false;
  bool m_prevalidationDetailsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureDetailsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
