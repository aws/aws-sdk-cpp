/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/CertificateBasedAuthStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>The certificate-based authentication properties used to authenticate SAML 2.0
   * Identity Provider (IdP) user identities to Active Directory domain-joined
   * streaming instances. Fallback is turned on by default when certificate-based
   * authentication is <b>Enabled</b> . Fallback allows users to log in using their
   * AD domain password if certificate-based authentication is unsuccessful, or to
   * unlock a desktop lock screen. <b>Enabled_no_directory_login_fallback</b> enables
   * certificate-based authentication, but does not allow users to log in using their
   * AD domain password. Users will be disconnected to re-authenticate using
   * certificates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/CertificateBasedAuthProperties">AWS
   * API Reference</a></p>
   */
  class CertificateBasedAuthProperties
  {
  public:
    AWS_APPSTREAM_API CertificateBasedAuthProperties() = default;
    AWS_APPSTREAM_API CertificateBasedAuthProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API CertificateBasedAuthProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline CertificateBasedAuthStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CertificateBasedAuthStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CertificateBasedAuthProperties& WithStatus(CertificateBasedAuthStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the AWS Certificate Manager Private CA resource.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const { return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    template<typename CertificateAuthorityArnT = Aws::String>
    void SetCertificateAuthorityArn(CertificateAuthorityArnT&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::forward<CertificateAuthorityArnT>(value); }
    template<typename CertificateAuthorityArnT = Aws::String>
    CertificateBasedAuthProperties& WithCertificateAuthorityArn(CertificateAuthorityArnT&& value) { SetCertificateAuthorityArn(std::forward<CertificateAuthorityArnT>(value)); return *this;}
    ///@}
  private:

    CertificateBasedAuthStatus m_status{CertificateBasedAuthStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
