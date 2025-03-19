/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace DocDB
{
namespace Model
{

  /**
   * <p>A certificate authority (CA) certificate for an Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/Certificate">AWS
   * API Reference</a></p>
   */
  class Certificate
  {
  public:
    AWS_DOCDB_API Certificate() = default;
    AWS_DOCDB_API Certificate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API Certificate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique key that identifies a certificate.</p> <p>Example:
     * <code>rds-ca-2019</code> </p>
     */
    inline const Aws::String& GetCertificateIdentifier() const { return m_certificateIdentifier; }
    inline bool CertificateIdentifierHasBeenSet() const { return m_certificateIdentifierHasBeenSet; }
    template<typename CertificateIdentifierT = Aws::String>
    void SetCertificateIdentifier(CertificateIdentifierT&& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = std::forward<CertificateIdentifierT>(value); }
    template<typename CertificateIdentifierT = Aws::String>
    Certificate& WithCertificateIdentifier(CertificateIdentifierT&& value) { SetCertificateIdentifier(std::forward<CertificateIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the certificate.</p> <p>Example: <code>CA</code> </p>
     */
    inline const Aws::String& GetCertificateType() const { return m_certificateType; }
    inline bool CertificateTypeHasBeenSet() const { return m_certificateTypeHasBeenSet; }
    template<typename CertificateTypeT = Aws::String>
    void SetCertificateType(CertificateTypeT&& value) { m_certificateTypeHasBeenSet = true; m_certificateType = std::forward<CertificateTypeT>(value); }
    template<typename CertificateTypeT = Aws::String>
    Certificate& WithCertificateType(CertificateTypeT&& value) { SetCertificateType(std::forward<CertificateTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thumbprint of the certificate.</p>
     */
    inline const Aws::String& GetThumbprint() const { return m_thumbprint; }
    inline bool ThumbprintHasBeenSet() const { return m_thumbprintHasBeenSet; }
    template<typename ThumbprintT = Aws::String>
    void SetThumbprint(ThumbprintT&& value) { m_thumbprintHasBeenSet = true; m_thumbprint = std::forward<ThumbprintT>(value); }
    template<typename ThumbprintT = Aws::String>
    Certificate& WithThumbprint(ThumbprintT&& value) { SetThumbprint(std::forward<ThumbprintT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting date-time from which the certificate is valid.</p> <p>Example:
     * <code>2019-07-31T17:57:09Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const { return m_validFrom; }
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }
    template<typename ValidFromT = Aws::Utils::DateTime>
    void SetValidFrom(ValidFromT&& value) { m_validFromHasBeenSet = true; m_validFrom = std::forward<ValidFromT>(value); }
    template<typename ValidFromT = Aws::Utils::DateTime>
    Certificate& WithValidFrom(ValidFromT&& value) { SetValidFrom(std::forward<ValidFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date-time after which the certificate is no longer valid.</p> <p>Example:
     * <code>2024-07-31T17:57:09Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetValidTill() const { return m_validTill; }
    inline bool ValidTillHasBeenSet() const { return m_validTillHasBeenSet; }
    template<typename ValidTillT = Aws::Utils::DateTime>
    void SetValidTill(ValidTillT&& value) { m_validTillHasBeenSet = true; m_validTill = std::forward<ValidTillT>(value); }
    template<typename ValidTillT = Aws::Utils::DateTime>
    Certificate& WithValidTill(ValidTillT&& value) { SetValidTill(std::forward<ValidTillT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p> <p>Example:
     * <code>arn:aws:rds:us-east-1::cert:rds-ca-2019</code> </p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    Certificate& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_certificateIdentifier;
    bool m_certificateIdentifierHasBeenSet = false;

    Aws::String m_certificateType;
    bool m_certificateTypeHasBeenSet = false;

    Aws::String m_thumbprint;
    bool m_thumbprintHasBeenSet = false;

    Aws::Utils::DateTime m_validFrom{};
    bool m_validFromHasBeenSet = false;

    Aws::Utils::DateTime m_validTill{};
    bool m_validTillHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
