/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACMRequest.h>
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmeAuthorizationBehavior.h>
#include <aws/acm/model/AcmeContact.h>
#include <aws/acm/model/CertificateAuthority.h>
#include <aws/acm/model/Tag.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ACM {
namespace Model {

/**
 */
class CreateAcmeEndpointRequest : public ACMRequest {
 public:
  AWS_ACM_API CreateAcmeEndpointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAcmeEndpoint"; }

  AWS_ACM_API Aws::String SerializePayload() const override;

  AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_ACM_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure idempotency of the request.</p>
   */
  inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
  inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
  template <typename IdempotencyTokenT = Aws::String>
  void SetIdempotencyToken(IdempotencyTokenT&& value) {
    m_idempotencyTokenHasBeenSet = true;
    m_idempotencyToken = std::forward<IdempotencyTokenT>(value);
  }
  template <typename IdempotencyTokenT = Aws::String>
  CreateAcmeEndpointRequest& WithIdempotencyToken(IdempotencyTokenT&& value) {
    SetIdempotencyToken(std::forward<IdempotencyTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization behavior for the ACME endpoint.</p>
   */
  inline AcmeAuthorizationBehavior GetAuthorizationBehavior() const { return m_authorizationBehavior; }
  inline bool AuthorizationBehaviorHasBeenSet() const { return m_authorizationBehaviorHasBeenSet; }
  inline void SetAuthorizationBehavior(AcmeAuthorizationBehavior value) {
    m_authorizationBehaviorHasBeenSet = true;
    m_authorizationBehavior = value;
  }
  inline CreateAcmeEndpointRequest& WithAuthorizationBehavior(AcmeAuthorizationBehavior value) {
    SetAuthorizationBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether ACME clients must provide contact information during
   * account registration.</p>
   */
  inline AcmeContact GetContact() const { return m_contact; }
  inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }
  inline void SetContact(AcmeContact value) {
    m_contactHasBeenSet = true;
    m_contact = value;
  }
  inline CreateAcmeEndpointRequest& WithContact(AcmeContact value) {
    SetContact(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of certificate authority to use for issuing certificates through
   * this ACME endpoint.</p>
   */
  inline const CertificateAuthority& GetCertificateAuthority() const { return m_certificateAuthority; }
  inline bool CertificateAuthorityHasBeenSet() const { return m_certificateAuthorityHasBeenSet; }
  template <typename CertificateAuthorityT = CertificateAuthority>
  void SetCertificateAuthority(CertificateAuthorityT&& value) {
    m_certificateAuthorityHasBeenSet = true;
    m_certificateAuthority = std::forward<CertificateAuthorityT>(value);
  }
  template <typename CertificateAuthorityT = CertificateAuthority>
  CreateAcmeEndpointRequest& WithCertificateAuthority(CertificateAuthorityT&& value) {
    SetCertificateAuthority(std::forward<CertificateAuthorityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>One or more tags to associate with the ACME endpoint.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateAcmeEndpointRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateAcmeEndpointRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to apply to certificates issued through this ACME endpoint.</p>
   */
  inline const Aws::Vector<Tag>& GetCertificateTags() const { return m_certificateTags; }
  inline bool CertificateTagsHasBeenSet() const { return m_certificateTagsHasBeenSet; }
  template <typename CertificateTagsT = Aws::Vector<Tag>>
  void SetCertificateTags(CertificateTagsT&& value) {
    m_certificateTagsHasBeenSet = true;
    m_certificateTags = std::forward<CertificateTagsT>(value);
  }
  template <typename CertificateTagsT = Aws::Vector<Tag>>
  CreateAcmeEndpointRequest& WithCertificateTags(CertificateTagsT&& value) {
    SetCertificateTags(std::forward<CertificateTagsT>(value));
    return *this;
  }
  template <typename CertificateTagsT = Tag>
  CreateAcmeEndpointRequest& AddCertificateTags(CertificateTagsT&& value) {
    m_certificateTagsHasBeenSet = true;
    m_certificateTags.emplace_back(std::forward<CertificateTagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};

  AcmeAuthorizationBehavior m_authorizationBehavior{AcmeAuthorizationBehavior::NOT_SET};

  AcmeContact m_contact{AcmeContact::NOT_SET};

  CertificateAuthority m_certificateAuthority;

  Aws::Vector<Tag> m_tags;

  Aws::Vector<Tag> m_certificateTags;
  bool m_idempotencyTokenHasBeenSet = true;
  bool m_authorizationBehaviorHasBeenSet = false;
  bool m_contactHasBeenSet = false;
  bool m_certificateAuthorityHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_certificateTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
