/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmeAuthorizationBehavior.h>
#include <aws/acm/model/AcmeContact.h>
#include <aws/acm/model/AcmeEndpointStatus.h>
#include <aws/acm/model/CertificateAuthority.h>
#include <aws/acm/model/Tag.h>
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
namespace ACM {
namespace Model {

/**
 * <p>Contains summary information about an ACME endpoint.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/AcmeEndpointSummary">AWS
 * API Reference</a></p>
 */
class AcmeEndpointSummary {
 public:
  AWS_ACM_API AcmeEndpointSummary() = default;
  AWS_ACM_API AcmeEndpointSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API AcmeEndpointSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  AcmeEndpointSummary& WithAcmeEndpointArn(AcmeEndpointArnT&& value) {
    SetAcmeEndpointArn(std::forward<AcmeEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the ACME endpoint.</p>
   */
  inline const Aws::String& GetEndpointUrl() const { return m_endpointUrl; }
  inline bool EndpointUrlHasBeenSet() const { return m_endpointUrlHasBeenSet; }
  template <typename EndpointUrlT = Aws::String>
  void SetEndpointUrl(EndpointUrlT&& value) {
    m_endpointUrlHasBeenSet = true;
    m_endpointUrl = std::forward<EndpointUrlT>(value);
  }
  template <typename EndpointUrlT = Aws::String>
  AcmeEndpointSummary& WithEndpointUrl(EndpointUrlT&& value) {
    SetEndpointUrl(std::forward<EndpointUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the ACME endpoint.</p>
   */
  inline AcmeEndpointStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AcmeEndpointStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AcmeEndpointSummary& WithStatus(AcmeEndpointStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason the ACME endpoint failed, if applicable.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  AcmeEndpointSummary& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization behavior of the ACME endpoint.</p>
   */
  inline AcmeAuthorizationBehavior GetAuthorizationBehavior() const { return m_authorizationBehavior; }
  inline bool AuthorizationBehaviorHasBeenSet() const { return m_authorizationBehaviorHasBeenSet; }
  inline void SetAuthorizationBehavior(AcmeAuthorizationBehavior value) {
    m_authorizationBehaviorHasBeenSet = true;
    m_authorizationBehavior = value;
  }
  inline AcmeEndpointSummary& WithAuthorizationBehavior(AcmeAuthorizationBehavior value) {
    SetAuthorizationBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether ACME clients must provide contact information during account
   * registration.</p>
   */
  inline AcmeContact GetContact() const { return m_contact; }
  inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }
  inline void SetContact(AcmeContact value) {
    m_contactHasBeenSet = true;
    m_contact = value;
  }
  inline AcmeEndpointSummary& WithContact(AcmeContact value) {
    SetContact(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The certificate authority configuration for the ACME endpoint.</p>
   */
  inline const CertificateAuthority& GetCertificateAuthority() const { return m_certificateAuthority; }
  inline bool CertificateAuthorityHasBeenSet() const { return m_certificateAuthorityHasBeenSet; }
  template <typename CertificateAuthorityT = CertificateAuthority>
  void SetCertificateAuthority(CertificateAuthorityT&& value) {
    m_certificateAuthorityHasBeenSet = true;
    m_certificateAuthority = std::forward<CertificateAuthorityT>(value);
  }
  template <typename CertificateAuthorityT = CertificateAuthority>
  AcmeEndpointSummary& WithCertificateAuthority(CertificateAuthorityT&& value) {
    SetCertificateAuthority(std::forward<CertificateAuthorityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags applied to certificates issued through this ACME endpoint.</p>
   */
  inline const Aws::Vector<Tag>& GetCertificateTags() const { return m_certificateTags; }
  inline bool CertificateTagsHasBeenSet() const { return m_certificateTagsHasBeenSet; }
  template <typename CertificateTagsT = Aws::Vector<Tag>>
  void SetCertificateTags(CertificateTagsT&& value) {
    m_certificateTagsHasBeenSet = true;
    m_certificateTags = std::forward<CertificateTagsT>(value);
  }
  template <typename CertificateTagsT = Aws::Vector<Tag>>
  AcmeEndpointSummary& WithCertificateTags(CertificateTagsT&& value) {
    SetCertificateTags(std::forward<CertificateTagsT>(value));
    return *this;
  }
  template <typename CertificateTagsT = Tag>
  AcmeEndpointSummary& AddCertificateTags(CertificateTagsT&& value) {
    m_certificateTagsHasBeenSet = true;
    m_certificateTags.emplace_back(std::forward<CertificateTagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the ACME endpoint was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AcmeEndpointSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time at which the ACME endpoint was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AcmeEndpointSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acmeEndpointArn;

  Aws::String m_endpointUrl;

  AcmeEndpointStatus m_status{AcmeEndpointStatus::NOT_SET};

  Aws::String m_failureReason;

  AcmeAuthorizationBehavior m_authorizationBehavior{AcmeAuthorizationBehavior::NOT_SET};

  AcmeContact m_contact{AcmeContact::NOT_SET};

  CertificateAuthority m_certificateAuthority;

  Aws::Vector<Tag> m_certificateTags;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_acmeEndpointArnHasBeenSet = false;
  bool m_endpointUrlHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_authorizationBehaviorHasBeenSet = false;
  bool m_contactHasBeenSet = false;
  bool m_certificateAuthorityHasBeenSet = false;
  bool m_certificateTagsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
