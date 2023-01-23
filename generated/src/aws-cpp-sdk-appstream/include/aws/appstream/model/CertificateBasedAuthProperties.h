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
    AWS_APPSTREAM_API CertificateBasedAuthProperties();
    AWS_APPSTREAM_API CertificateBasedAuthProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API CertificateBasedAuthProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline const CertificateBasedAuthStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline void SetStatus(const CertificateBasedAuthStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline void SetStatus(CertificateBasedAuthStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline CertificateBasedAuthProperties& WithStatus(const CertificateBasedAuthStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the certificate-based authentication properties.</p>
     */
    inline CertificateBasedAuthProperties& WithStatus(CertificateBasedAuthStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The ARN of the AWS Certificate Manager Private CA resource.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The ARN of the AWS Certificate Manager Private CA resource.</p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The ARN of the AWS Certificate Manager Private CA resource.</p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The ARN of the AWS Certificate Manager Private CA resource.</p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The ARN of the AWS Certificate Manager Private CA resource.</p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The ARN of the AWS Certificate Manager Private CA resource.</p>
     */
    inline CertificateBasedAuthProperties& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The ARN of the AWS Certificate Manager Private CA resource.</p>
     */
    inline CertificateBasedAuthProperties& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the AWS Certificate Manager Private CA resource.</p>
     */
    inline CertificateBasedAuthProperties& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}

  private:

    CertificateBasedAuthStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
