/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/CrlConfiguration.h>
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
   * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>
   * and <a
   * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_UpdateCertificateAuthority.html">UpdateCertificateAuthority</a>
   * actions. Your private certificate authority (CA) can create and maintain a
   * certificate revocation list (CRL). A CRL contains information about certificates
   * revoked by your CA. For more information, see <a
   * href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/API_RevokeCertificate.html">RevokeCertificate</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/RevocationConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ACMPCA_API RevocationConfiguration
  {
  public:
    RevocationConfiguration();
    RevocationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    RevocationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration of the certificate revocation list (CRL), if any, maintained by
     * your private CA.</p>
     */
    inline const CrlConfiguration& GetCrlConfiguration() const{ return m_crlConfiguration; }

    /**
     * <p>Configuration of the certificate revocation list (CRL), if any, maintained by
     * your private CA.</p>
     */
    inline bool CrlConfigurationHasBeenSet() const { return m_crlConfigurationHasBeenSet; }

    /**
     * <p>Configuration of the certificate revocation list (CRL), if any, maintained by
     * your private CA.</p>
     */
    inline void SetCrlConfiguration(const CrlConfiguration& value) { m_crlConfigurationHasBeenSet = true; m_crlConfiguration = value; }

    /**
     * <p>Configuration of the certificate revocation list (CRL), if any, maintained by
     * your private CA.</p>
     */
    inline void SetCrlConfiguration(CrlConfiguration&& value) { m_crlConfigurationHasBeenSet = true; m_crlConfiguration = std::move(value); }

    /**
     * <p>Configuration of the certificate revocation list (CRL), if any, maintained by
     * your private CA.</p>
     */
    inline RevocationConfiguration& WithCrlConfiguration(const CrlConfiguration& value) { SetCrlConfiguration(value); return *this;}

    /**
     * <p>Configuration of the certificate revocation list (CRL), if any, maintained by
     * your private CA.</p>
     */
    inline RevocationConfiguration& WithCrlConfiguration(CrlConfiguration&& value) { SetCrlConfiguration(std::move(value)); return *this;}

  private:

    CrlConfiguration m_crlConfiguration;
    bool m_crlConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
