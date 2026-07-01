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
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ACM {
namespace Model {

/**
 */
class UpdateAcmeEndpointRequest : public ACMRequest {
 public:
  AWS_ACM_API UpdateAcmeEndpointRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAcmeEndpoint"; }

  AWS_ACM_API Aws::String SerializePayload() const override;

  AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_ACM_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACME endpoint to update.</p>
   */
  inline const Aws::String& GetAcmeEndpointArn() const { return m_acmeEndpointArn; }
  inline bool AcmeEndpointArnHasBeenSet() const { return m_acmeEndpointArnHasBeenSet; }
  template <typename AcmeEndpointArnT = Aws::String>
  void SetAcmeEndpointArn(AcmeEndpointArnT&& value) {
    m_acmeEndpointArnHasBeenSet = true;
    m_acmeEndpointArn = std::forward<AcmeEndpointArnT>(value);
  }
  template <typename AcmeEndpointArnT = Aws::String>
  UpdateAcmeEndpointRequest& WithAcmeEndpointArn(AcmeEndpointArnT&& value) {
    SetAcmeEndpointArn(std::forward<AcmeEndpointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated authorization behavior.</p>
   */
  inline AcmeAuthorizationBehavior GetAuthorizationBehavior() const { return m_authorizationBehavior; }
  inline bool AuthorizationBehaviorHasBeenSet() const { return m_authorizationBehaviorHasBeenSet; }
  inline void SetAuthorizationBehavior(AcmeAuthorizationBehavior value) {
    m_authorizationBehaviorHasBeenSet = true;
    m_authorizationBehavior = value;
  }
  inline UpdateAcmeEndpointRequest& WithAuthorizationBehavior(AcmeAuthorizationBehavior value) {
    SetAuthorizationBehavior(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated contact requirement.</p>
   */
  inline AcmeContact GetContact() const { return m_contact; }
  inline bool ContactHasBeenSet() const { return m_contactHasBeenSet; }
  inline void SetContact(AcmeContact value) {
    m_contactHasBeenSet = true;
    m_contact = value;
  }
  inline UpdateAcmeEndpointRequest& WithContact(AcmeContact value) {
    SetContact(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated certificate authority configuration.</p>
   */
  inline const CertificateAuthority& GetCertificateAuthority() const { return m_certificateAuthority; }
  inline bool CertificateAuthorityHasBeenSet() const { return m_certificateAuthorityHasBeenSet; }
  template <typename CertificateAuthorityT = CertificateAuthority>
  void SetCertificateAuthority(CertificateAuthorityT&& value) {
    m_certificateAuthorityHasBeenSet = true;
    m_certificateAuthority = std::forward<CertificateAuthorityT>(value);
  }
  template <typename CertificateAuthorityT = CertificateAuthority>
  UpdateAcmeEndpointRequest& WithCertificateAuthority(CertificateAuthorityT&& value) {
    SetCertificateAuthority(std::forward<CertificateAuthorityT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acmeEndpointArn;

  AcmeAuthorizationBehavior m_authorizationBehavior{AcmeAuthorizationBehavior::NOT_SET};

  AcmeContact m_contact{AcmeContact::NOT_SET};

  CertificateAuthority m_certificateAuthority;
  bool m_acmeEndpointArnHasBeenSet = false;
  bool m_authorizationBehaviorHasBeenSet = false;
  bool m_contactHasBeenSet = false;
  bool m_certificateAuthorityHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
