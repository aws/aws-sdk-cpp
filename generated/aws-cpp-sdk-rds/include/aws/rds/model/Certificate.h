﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>A CA certificate for an Amazon Web Services account.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/Certificate">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API Certificate
  {
  public:
    Certificate();
    Certificate(const Aws::Utils::Xml::XmlNode& xmlNode);
    Certificate& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique key that identifies a certificate.</p>
     */
    inline const Aws::String& GetCertificateIdentifier() const{ return m_certificateIdentifier; }

    /**
     * <p>The unique key that identifies a certificate.</p>
     */
    inline bool CertificateIdentifierHasBeenSet() const { return m_certificateIdentifierHasBeenSet; }

    /**
     * <p>The unique key that identifies a certificate.</p>
     */
    inline void SetCertificateIdentifier(const Aws::String& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = value; }

    /**
     * <p>The unique key that identifies a certificate.</p>
     */
    inline void SetCertificateIdentifier(Aws::String&& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = std::move(value); }

    /**
     * <p>The unique key that identifies a certificate.</p>
     */
    inline void SetCertificateIdentifier(const char* value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier.assign(value); }

    /**
     * <p>The unique key that identifies a certificate.</p>
     */
    inline Certificate& WithCertificateIdentifier(const Aws::String& value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>The unique key that identifies a certificate.</p>
     */
    inline Certificate& WithCertificateIdentifier(Aws::String&& value) { SetCertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique key that identifies a certificate.</p>
     */
    inline Certificate& WithCertificateIdentifier(const char* value) { SetCertificateIdentifier(value); return *this;}


    /**
     * <p>The type of the certificate.</p>
     */
    inline const Aws::String& GetCertificateType() const{ return m_certificateType; }

    /**
     * <p>The type of the certificate.</p>
     */
    inline bool CertificateTypeHasBeenSet() const { return m_certificateTypeHasBeenSet; }

    /**
     * <p>The type of the certificate.</p>
     */
    inline void SetCertificateType(const Aws::String& value) { m_certificateTypeHasBeenSet = true; m_certificateType = value; }

    /**
     * <p>The type of the certificate.</p>
     */
    inline void SetCertificateType(Aws::String&& value) { m_certificateTypeHasBeenSet = true; m_certificateType = std::move(value); }

    /**
     * <p>The type of the certificate.</p>
     */
    inline void SetCertificateType(const char* value) { m_certificateTypeHasBeenSet = true; m_certificateType.assign(value); }

    /**
     * <p>The type of the certificate.</p>
     */
    inline Certificate& WithCertificateType(const Aws::String& value) { SetCertificateType(value); return *this;}

    /**
     * <p>The type of the certificate.</p>
     */
    inline Certificate& WithCertificateType(Aws::String&& value) { SetCertificateType(std::move(value)); return *this;}

    /**
     * <p>The type of the certificate.</p>
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
     * <p>The starting date from which the certificate is valid.</p>
     */
    inline const Aws::Utils::DateTime& GetValidFrom() const{ return m_validFrom; }

    /**
     * <p>The starting date from which the certificate is valid.</p>
     */
    inline bool ValidFromHasBeenSet() const { return m_validFromHasBeenSet; }

    /**
     * <p>The starting date from which the certificate is valid.</p>
     */
    inline void SetValidFrom(const Aws::Utils::DateTime& value) { m_validFromHasBeenSet = true; m_validFrom = value; }

    /**
     * <p>The starting date from which the certificate is valid.</p>
     */
    inline void SetValidFrom(Aws::Utils::DateTime&& value) { m_validFromHasBeenSet = true; m_validFrom = std::move(value); }

    /**
     * <p>The starting date from which the certificate is valid.</p>
     */
    inline Certificate& WithValidFrom(const Aws::Utils::DateTime& value) { SetValidFrom(value); return *this;}

    /**
     * <p>The starting date from which the certificate is valid.</p>
     */
    inline Certificate& WithValidFrom(Aws::Utils::DateTime&& value) { SetValidFrom(std::move(value)); return *this;}


    /**
     * <p>The final date that the certificate continues to be valid.</p>
     */
    inline const Aws::Utils::DateTime& GetValidTill() const{ return m_validTill; }

    /**
     * <p>The final date that the certificate continues to be valid.</p>
     */
    inline bool ValidTillHasBeenSet() const { return m_validTillHasBeenSet; }

    /**
     * <p>The final date that the certificate continues to be valid.</p>
     */
    inline void SetValidTill(const Aws::Utils::DateTime& value) { m_validTillHasBeenSet = true; m_validTill = value; }

    /**
     * <p>The final date that the certificate continues to be valid.</p>
     */
    inline void SetValidTill(Aws::Utils::DateTime&& value) { m_validTillHasBeenSet = true; m_validTill = std::move(value); }

    /**
     * <p>The final date that the certificate continues to be valid.</p>
     */
    inline Certificate& WithValidTill(const Aws::Utils::DateTime& value) { SetValidTill(value); return *this;}

    /**
     * <p>The final date that the certificate continues to be valid.</p>
     */
    inline Certificate& WithValidTill(Aws::Utils::DateTime&& value) { SetValidTill(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline Certificate& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline Certificate& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the certificate.</p>
     */
    inline Certificate& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>Whether there is an override for the default certificate identifier.</p>
     */
    inline bool GetCustomerOverride() const{ return m_customerOverride; }

    /**
     * <p>Whether there is an override for the default certificate identifier.</p>
     */
    inline bool CustomerOverrideHasBeenSet() const { return m_customerOverrideHasBeenSet; }

    /**
     * <p>Whether there is an override for the default certificate identifier.</p>
     */
    inline void SetCustomerOverride(bool value) { m_customerOverrideHasBeenSet = true; m_customerOverride = value; }

    /**
     * <p>Whether there is an override for the default certificate identifier.</p>
     */
    inline Certificate& WithCustomerOverride(bool value) { SetCustomerOverride(value); return *this;}


    /**
     * <p>If there is an override for the default certificate identifier, when the
     * override expires.</p>
     */
    inline const Aws::Utils::DateTime& GetCustomerOverrideValidTill() const{ return m_customerOverrideValidTill; }

    /**
     * <p>If there is an override for the default certificate identifier, when the
     * override expires.</p>
     */
    inline bool CustomerOverrideValidTillHasBeenSet() const { return m_customerOverrideValidTillHasBeenSet; }

    /**
     * <p>If there is an override for the default certificate identifier, when the
     * override expires.</p>
     */
    inline void SetCustomerOverrideValidTill(const Aws::Utils::DateTime& value) { m_customerOverrideValidTillHasBeenSet = true; m_customerOverrideValidTill = value; }

    /**
     * <p>If there is an override for the default certificate identifier, when the
     * override expires.</p>
     */
    inline void SetCustomerOverrideValidTill(Aws::Utils::DateTime&& value) { m_customerOverrideValidTillHasBeenSet = true; m_customerOverrideValidTill = std::move(value); }

    /**
     * <p>If there is an override for the default certificate identifier, when the
     * override expires.</p>
     */
    inline Certificate& WithCustomerOverrideValidTill(const Aws::Utils::DateTime& value) { SetCustomerOverrideValidTill(value); return *this;}

    /**
     * <p>If there is an override for the default certificate identifier, when the
     * override expires.</p>
     */
    inline Certificate& WithCustomerOverrideValidTill(Aws::Utils::DateTime&& value) { SetCustomerOverrideValidTill(std::move(value)); return *this;}

  private:

    Aws::String m_certificateIdentifier;
    bool m_certificateIdentifierHasBeenSet;

    Aws::String m_certificateType;
    bool m_certificateTypeHasBeenSet;

    Aws::String m_thumbprint;
    bool m_thumbprintHasBeenSet;

    Aws::Utils::DateTime m_validFrom;
    bool m_validFromHasBeenSet;

    Aws::Utils::DateTime m_validTill;
    bool m_validTillHasBeenSet;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    bool m_customerOverride;
    bool m_customerOverrideHasBeenSet;

    Aws::Utils::DateTime m_customerOverrideValidTill;
    bool m_customerOverrideValidTillHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
