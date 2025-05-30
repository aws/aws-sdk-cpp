﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/CrlConfiguration.h>
#include <aws/acm-pca/model/OcspConfiguration.h>
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
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Certificate revocation information used by the <a
   * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>
   * and <a
   * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_UpdateCertificateAuthority.html">UpdateCertificateAuthority</a>
   * actions. Your private certificate authority (CA) can configure Online
   * Certificate Status Protocol (OCSP) support and/or maintain a certificate
   * revocation list (CRL). OCSP returns validation information about certificates as
   * requested by clients, and a CRL contains an updated list of certificates revoked
   * by your CA. For more information, see <a
   * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_RevokeCertificate.html">RevokeCertificate</a>
   * and <a
   * href="https://docs.aws.amazon.com/privateca/latest/userguide/revocation-setup.html">Setting
   * up a certificate revocation method</a> in the <i>Amazon Web Services Private
   * Certificate Authority User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/RevocationConfiguration">AWS
   * API Reference</a></p>
   */
  class RevocationConfiguration
  {
  public:
    AWS_ACMPCA_API RevocationConfiguration() = default;
    AWS_ACMPCA_API RevocationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API RevocationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration of the certificate revocation list (CRL), if any, maintained by
     * your private CA. A CRL is typically updated approximately 30 minutes after a
     * certificate is revoked. If for any reason a CRL update fails, Amazon Web
     * Services Private CA makes further attempts every 15 minutes.</p>
     */
    inline const CrlConfiguration& GetCrlConfiguration() const { return m_crlConfiguration; }
    inline bool CrlConfigurationHasBeenSet() const { return m_crlConfigurationHasBeenSet; }
    template<typename CrlConfigurationT = CrlConfiguration>
    void SetCrlConfiguration(CrlConfigurationT&& value) { m_crlConfigurationHasBeenSet = true; m_crlConfiguration = std::forward<CrlConfigurationT>(value); }
    template<typename CrlConfigurationT = CrlConfiguration>
    RevocationConfiguration& WithCrlConfiguration(CrlConfigurationT&& value) { SetCrlConfiguration(std::forward<CrlConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of Online Certificate Status Protocol (OCSP) support, if any,
     * maintained by your private CA. When you revoke a certificate, OCSP responses may
     * take up to 60 minutes to reflect the new status.</p>
     */
    inline const OcspConfiguration& GetOcspConfiguration() const { return m_ocspConfiguration; }
    inline bool OcspConfigurationHasBeenSet() const { return m_ocspConfigurationHasBeenSet; }
    template<typename OcspConfigurationT = OcspConfiguration>
    void SetOcspConfiguration(OcspConfigurationT&& value) { m_ocspConfigurationHasBeenSet = true; m_ocspConfiguration = std::forward<OcspConfigurationT>(value); }
    template<typename OcspConfigurationT = OcspConfiguration>
    RevocationConfiguration& WithOcspConfiguration(OcspConfigurationT&& value) { SetOcspConfiguration(std::forward<OcspConfigurationT>(value)); return *this;}
    ///@}
  private:

    CrlConfiguration m_crlConfiguration;
    bool m_crlConfigurationHasBeenSet = false;

    OcspConfiguration m_ocspConfiguration;
    bool m_ocspConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
