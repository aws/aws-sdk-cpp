/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>A CA certificate for an AWS account. </p>
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
     * <p>The unique key that identifies a certificate. </p>
     */
    inline const Aws::String& GetCertificateIdentifier() const{ return m_certificateIdentifier; }

    /**
     * <p>The unique key that identifies a certificate. </p>
     */
    inline void SetCertificateIdentifier(const Aws::String& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = value; }

    /**
     * <p>The unique key that identifies a certificate. </p>
     */
    inline void SetCertificateIdentifier(Aws::String&& value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier = value; }

    /**
     * <p>The unique key that identifies a certificate. </p>
     */
    inline void SetCertificateIdentifier(const char* value) { m_certificateIdentifierHasBeenSet = true; m_certificateIdentifier.assign(value); }

    /**
     * <p>The unique key that identifies a certificate. </p>
     */
    inline Certificate& WithCertificateIdentifier(const Aws::String& value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>The unique key that identifies a certificate. </p>
     */
    inline Certificate& WithCertificateIdentifier(Aws::String&& value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>The unique key that identifies a certificate. </p>
     */
    inline Certificate& WithCertificateIdentifier(const char* value) { SetCertificateIdentifier(value); return *this;}

    /**
     * <p>The type of the certificate. </p>
     */
    inline const Aws::String& GetCertificateType() const{ return m_certificateType; }

    /**
     * <p>The type of the certificate. </p>
     */
    inline void SetCertificateType(const Aws::String& value) { m_certificateTypeHasBeenSet = true; m_certificateType = value; }

    /**
     * <p>The type of the certificate. </p>
     */
    inline void SetCertificateType(Aws::String&& value) { m_certificateTypeHasBeenSet = true; m_certificateType = value; }

    /**
     * <p>The type of the certificate. </p>
     */
    inline void SetCertificateType(const char* value) { m_certificateTypeHasBeenSet = true; m_certificateType.assign(value); }

    /**
     * <p>The type of the certificate. </p>
     */
    inline Certificate& WithCertificateType(const Aws::String& value) { SetCertificateType(value); return *this;}

    /**
     * <p>The type of the certificate. </p>
     */
    inline Certificate& WithCertificateType(Aws::String&& value) { SetCertificateType(value); return *this;}

    /**
     * <p>The type of the certificate. </p>
     */
    inline Certificate& WithCertificateType(const char* value) { SetCertificateType(value); return *this;}

    /**
     * <p>The thumbprint of the certificate. </p>
     */
    inline const Aws::String& GetThumbprint() const{ return m_thumbprint; }

    /**
     * <p>The thumbprint of the certificate. </p>
     */
    inline void SetThumbprint(const Aws::String& value) { m_thumbprintHasBeenSet = true; m_thumbprint = value; }

    /**
     * <p>The thumbprint of the certificate. </p>
     */
    inline void SetThumbprint(Aws::String&& value) { m_thumbprintHasBeenSet = true; m_thumbprint = value; }

    /**
     * <p>The thumbprint of the certificate. </p>
     */
    inline void SetThumbprint(const char* value) { m_thumbprintHasBeenSet = true; m_thumbprint.assign(value); }

    /**
     * <p>The thumbprint of the certificate. </p>
     */
    inline Certificate& WithThumbprint(const Aws::String& value) { SetThumbprint(value); return *this;}

    /**
     * <p>The thumbprint of the certificate. </p>
     */
    inline Certificate& WithThumbprint(Aws::String&& value) { SetThumbprint(value); return *this;}

    /**
     * <p>The thumbprint of the certificate. </p>
     */
    inline Certificate& WithThumbprint(const char* value) { SetThumbprint(value); return *this;}

    /**
     * <p>The starting date from which the certificate is valid. </p>
     */
    inline double GetValidFrom() const{ return m_validFrom; }

    /**
     * <p>The starting date from which the certificate is valid. </p>
     */
    inline void SetValidFrom(double value) { m_validFromHasBeenSet = true; m_validFrom = value; }

    /**
     * <p>The starting date from which the certificate is valid. </p>
     */
    inline Certificate& WithValidFrom(double value) { SetValidFrom(value); return *this;}

    /**
     * <p>The final date that the certificate continues to be valid. </p>
     */
    inline double GetValidTill() const{ return m_validTill; }

    /**
     * <p>The final date that the certificate continues to be valid. </p>
     */
    inline void SetValidTill(double value) { m_validTillHasBeenSet = true; m_validTill = value; }

    /**
     * <p>The final date that the certificate continues to be valid. </p>
     */
    inline Certificate& WithValidTill(double value) { SetValidTill(value); return *this;}

  private:
    Aws::String m_certificateIdentifier;
    bool m_certificateIdentifierHasBeenSet;
    Aws::String m_certificateType;
    bool m_certificateTypeHasBeenSet;
    Aws::String m_thumbprint;
    bool m_thumbprintHasBeenSet;
    double m_validFrom;
    bool m_validFromHasBeenSet;
    double m_validTill;
    bool m_validTillHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
