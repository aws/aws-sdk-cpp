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
    AWS_DOCDB_API Certificate();
    AWS_DOCDB_API Certificate(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API Certificate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique key that identifies a certificate.</p> <p>Example:
     * <code>rds-ca-2019</code> </p>
     */
    inline const Aws::String& GetCertificateIdentifier() const{ return m_certificateIdentifier; }

    /**
     * <p>The unique key that identifies a certificate.</p> <p>Example:
     * <code>rds-ca-2019</code> </p>
     */
    inline bool CertificateIdentifierHasBeenSet() const { return m_certificateIdentifierHasBeenSet; }

    /**
     * <p>The unique key that identifies a certificate.</p> <p>Example:
     * <code>rds-ca-2019</code> </p>
     */
    inline void SetCertificateIdentifier(const Aws::String& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = value; }

    /**
     * <p>The unique key that identifies a certificate.</p> <p>Example:
     * <code>rds-ca-2019</code> </p>
     */
    inline void SetCertificateIdentifier(Aws::String&& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = std::move(value); }

    /**
     * <p>The unique key that identifies a certificate.</p> <p>Example:
     * <code>rds-ca-2019</code> </p>
     */
    inline void SetCertificateIdentifier(const char* value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier.assign(value); }

    /**
     * <p>The unique key that identifies a certificate.</p> <p>Example:
     * <code>rds-ca-2019</code> </p>
     */
    inline Certificate& WithCertificateIdentifier(const Aws::String& value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>The unique key that identifies a certificate.</p> <p>Example:
     * <code>rds-ca-2019</code> </p>
     */
    inline Certificate& WithCertificateIdentifier(Aws::String&& value) { SetCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique key that identifies a certificate.</p> <p>Example:
     * <code>rds-ca-2019</code> </p>
     */
    inline Certificate& WithCertificateIdentifier(const char* value) { SetCertificateIdentifier(value); return *this;}


    /**
     * <p>The type of the certificate.</p> <p>Example: <code>CA</code> </p>
     */
    inline const Aws::String& GetCertificateType() const{ return m_certificateType; }

    /**
     * <p>The type of the certificate.</p> <p>Example: <code>CA</code> </p>
     */
    inline bool CertificateTypeHasBeenSet() const { return m_certificateTypeHasBeenSet; }

    /**
     * <p>The type of the certificate.</p> <p>Example: <code>CA</code> </p>
     */
    inline void SetCertificateType(const Aws::String& value) { m_certificateTypeHasBeenSet = true; m_certificateType = value; }

    /**
     * <p>The type of the certificate.</p> <p>Example: <code>CA</code> </p>
     */
    inline void SetCertificateType(Aws::String&& value) { m_certificateTypeHasBeenSet = true; m_certificateType = std::move(value); }

    /**
     * <p>The type of the certificate.</p> <p>Example: <code>CA</code> </p>
     */
    inline void SetCertificateType(const char* value) { m_certificateTypeHasBeenSet = true; m_certificateType.assign(value); }

    /**
     * <p>The type of the certificate.</p> <p>Example: <code>CA</code> </p>
     */
    inline Certificate& WithCertificateType(const Aws::String& value) { SetCertificateType(value); return *this;}

    /**
     * <p>The type of the certificate.</p> <p>Example: <code>CA</code> </p>
     */
    inline Certificate& WithCertificateType(Aws::String&& value) { SetCertificateType(std::move(value)); return *this;}

    /**
     * <p>The type of the certificate.</p> <p>Example: <code>CA</code> </p>
     */
    inline Certificate& WithCertificateType(const char* value) { SetCertificateType(value); return *this;}


    /**
     * <p>The thumbprint of the certificate.</p>
     */
    inline const Aws::String& GetThumbprint() const{ return m_thumbprint; }

    /**
     * <p>The thumbprint of the certificate.</p>
     */
    inline bool ThumbprintHasBeenSet() const { return m_thumbprintHasBeenSet; }

    /**
     * <p>The thumbprint of the certificate.</p>
     */
    inline void SetThumbprint(const Aws::String& value) { m_thumbprintHasBeenSet = true; m_thumbprint = value; }

    /**
     * <p>The thumbprint of the certificate.</p>
     */
    inline void SetThumbprint(Aws::String&& value) { m_thumbprintHasBeenSet = true; m_thumbprint = std::move(value); }

    /**
     * <p>The thumbprint of the certificate.</p>
     */
    inline void SetThumbprint(const char* value) { m_thumbprintHasBeenSet = true; m_thumbprint.assign(value); }

    /**
     * <p>The thumbprint of the certificate.</p>
     */
    inline Certificate& WithThumbprint(const Aws::String& value) { SetThumbprint(value); return *this;}

    /**
     * <p>The thumbprint of the certificate.</p>
     */
    inline Certificate& WithThumbprint(Aws::String&& value) { SetThumbprint(std::move(value)); return *this;}

    /**
     * <p>The thumbprint of the certificate.</p>
     */
    inline Certificate& WithThumbprint(const char* value) { SetThumbprint(value); return *this;}


    /**
     * <p>The starting date-time from which the certificate is valid.</p> <p>Example:
     * <code>2019-07-31T17:57:09Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const{ return m_validFrom; }

    /**
     * <p>The starting date-time from which the certificate is valid.</p> <p>Example:
     * <code>2019-07-31T17:57:09Z</code> </p>
     */
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }

    /**
     * <p>The starting date-time from which the certificate is valid.</p> <p>Example:
     * <code>2019-07-31T17:57:09Z</code> </p>
     */
    inline void SetValidFrom(const Aws::Utils::DateTime& value) { m_validFromHasBeenSet = true; m_validFrom = value; }

    /**
     * <p>The starting date-time from which the certificate is valid.</p> <p>Example:
     * <code>2019-07-31T17:57:09Z</code> </p>
     */
    inline void SetValidFrom(Aws::Utils::DateTime&& value) { m_validFromHasBeenSet = true; m_validFrom = std::move(value); }

    /**
     * <p>The starting date-time from which the certificate is valid.</p> <p>Example:
     * <code>2019-07-31T17:57:09Z</code> </p>
     */
    inline Certificate& WithValidFrom(const Aws::Utils::DateTime& value) { SetValidFrom(value); return *this;}

    /**
     * <p>The starting date-time from which the certificate is valid.</p> <p>Example:
     * <code>2019-07-31T17:57:09Z</code> </p>
     */
    inline Certificate& WithValidFrom(Aws::Utils::DateTime&& value) { SetValidFrom(std::move(value)); return *this;}


    /**
     * <p>The date-time after which the certificate is no longer valid.</p> <p>Example:
     * <code>2024-07-31T17:57:09Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetValidTill() const{ return m_validTill; }

    /**
     * <p>The date-time after which the certificate is no longer valid.</p> <p>Example:
     * <code>2024-07-31T17:57:09Z</code> </p>
     */
    inline bool ValidTillHasBeenSet() const { return m_validTillHasBeenSet; }

    /**
     * <p>The date-time after which the certificate is no longer valid.</p> <p>Example:
     * <code>2024-07-31T17:57:09Z</code> </p>
     */
    inline void SetValidTill(const Aws::Utils::DateTime& value) { m_validTillHasBeenSet = true; m_validTill = value; }

    /**
     * <p>The date-time after which the certificate is no longer valid.</p> <p>Example:
     * <code>2024-07-31T17:57:09Z</code> </p>
     */
    inline void SetValidTill(Aws::Utils::DateTime&& value) { m_validTillHasBeenSet = true; m_validTill = std::move(value); }

    /**
     * <p>The date-time after which the certificate is no longer valid.</p> <p>Example:
     * <code>2024-07-31T17:57:09Z</code> </p>
     */
    inline Certificate& WithValidTill(const Aws::Utils::DateTime& value) { SetValidTill(value); return *this;}

    /**
     * <p>The date-time after which the certificate is no longer valid.</p> <p>Example:
     * <code>2024-07-31T17:57:09Z</code> </p>
     */
    inline Certificate& WithValidTill(Aws::Utils::DateTime&& value) { SetValidTill(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p> <p>Example:
     * <code>arn:aws:rds:us-east-1::cert:rds-ca-2019</code> </p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p> <p>Example:
     * <code>arn:aws:rds:us-east-1::cert:rds-ca-2019</code> </p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p> <p>Example:
     * <code>arn:aws:rds:us-east-1::cert:rds-ca-2019</code> </p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p> <p>Example:
     * <code>arn:aws:rds:us-east-1::cert:rds-ca-2019</code> </p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p> <p>Example:
     * <code>arn:aws:rds:us-east-1::cert:rds-ca-2019</code> </p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p> <p>Example:
     * <code>arn:aws:rds:us-east-1::cert:rds-ca-2019</code> </p>
     */
    inline Certificate& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p> <p>Example:
     * <code>arn:aws:rds:us-east-1::cert:rds-ca-2019</code> </p>
     */
    inline Certificate& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p> <p>Example:
     * <code>arn:aws:rds:us-east-1::cert:rds-ca-2019</code> </p>
     */
    inline Certificate& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}

  private:

    Aws::String m_certificateIdentifier;
    bool m_certificateIdentifierHasBeenSet = false;

    Aws::String m_certificateType;
    bool m_certificateTypeHasBeenSet = false;

    Aws::String m_thumbprint;
    bool m_thumbprintHasBeenSet = false;

    Aws::Utils::DateTime m_validFrom;
    bool m_validFromHasBeenSet = false;

    Aws::Utils::DateTime m_validTill;
    bool m_validTillHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
