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
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/acm/model/CertificateStatus.h>
#include <aws/acm/model/RevocationReason.h>
#include <aws/acm/model/KeyAlgorithm.h>
#include <aws/acm/model/DomainValidation.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ACM
{
namespace Model
{

  /**
   * <p> This structure is returned in the response object of the
   * <a>DescribeCertificate</a> action. </p>
   */
  class AWS_ACM_API CertificateDetail
  {
  public:
    CertificateDetail();
    CertificateDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    CertificateDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p> Amazon Resource Name (ARN) of the certificate. This is of the form: </p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p> For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>. </p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p> Amazon Resource Name (ARN) of the certificate. This is of the form: </p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p> For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>. </p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p> Amazon Resource Name (ARN) of the certificate. This is of the form: </p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p> For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>. </p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p> Amazon Resource Name (ARN) of the certificate. This is of the form: </p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p> For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>. </p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p> Amazon Resource Name (ARN) of the certificate. This is of the form: </p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p> For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>. </p>
     */
    inline CertificateDetail& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p> Amazon Resource Name (ARN) of the certificate. This is of the form: </p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p> For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>. </p>
     */
    inline CertificateDetail& WithCertificateArn(Aws::String&& value) { SetCertificateArn(value); return *this;}

    /**
     * <p> Amazon Resource Name (ARN) of the certificate. This is of the form: </p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p> For more information about ARNs, see <a
     * href="http://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs) and AWS Service Namespaces</a>. </p>
     */
    inline CertificateDetail& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate. </p>
     */
    inline CertificateDetail& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate. </p>
     */
    inline CertificateDetail& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate. </p>
     */
    inline CertificateDetail& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p> One or more domain names (subject alternative names) included in the
     * certificate request. After the certificate is issued, this list includes the
     * domain names bound to the public key contained in the certificate. The subject
     * alternative names include the canonical domain name (CN) of the certificate and
     * additional domain names that can be used to connect to the website. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const{ return m_subjectAlternativeNames; }

    /**
     * <p> One or more domain names (subject alternative names) included in the
     * certificate request. After the certificate is issued, this list includes the
     * domain names bound to the public key contained in the certificate. The subject
     * alternative names include the canonical domain name (CN) of the certificate and
     * additional domain names that can be used to connect to the website. </p>
     */
    inline void SetSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }

    /**
     * <p> One or more domain names (subject alternative names) included in the
     * certificate request. After the certificate is issued, this list includes the
     * domain names bound to the public key contained in the certificate. The subject
     * alternative names include the canonical domain name (CN) of the certificate and
     * additional domain names that can be used to connect to the website. </p>
     */
    inline void SetSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }

    /**
     * <p> One or more domain names (subject alternative names) included in the
     * certificate request. After the certificate is issued, this list includes the
     * domain names bound to the public key contained in the certificate. The subject
     * alternative names include the canonical domain name (CN) of the certificate and
     * additional domain names that can be used to connect to the website. </p>
     */
    inline CertificateDetail& WithSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { SetSubjectAlternativeNames(value); return *this;}

    /**
     * <p> One or more domain names (subject alternative names) included in the
     * certificate request. After the certificate is issued, this list includes the
     * domain names bound to the public key contained in the certificate. The subject
     * alternative names include the canonical domain name (CN) of the certificate and
     * additional domain names that can be used to connect to the website. </p>
     */
    inline CertificateDetail& WithSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { SetSubjectAlternativeNames(value); return *this;}

    /**
     * <p> One or more domain names (subject alternative names) included in the
     * certificate request. After the certificate is issued, this list includes the
     * domain names bound to the public key contained in the certificate. The subject
     * alternative names include the canonical domain name (CN) of the certificate and
     * additional domain names that can be used to connect to the website. </p>
     */
    inline CertificateDetail& AddSubjectAlternativeNames(const Aws::String& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }

    /**
     * <p> One or more domain names (subject alternative names) included in the
     * certificate request. After the certificate is issued, this list includes the
     * domain names bound to the public key contained in the certificate. The subject
     * alternative names include the canonical domain name (CN) of the certificate and
     * additional domain names that can be used to connect to the website. </p>
     */
    inline CertificateDetail& AddSubjectAlternativeNames(Aws::String&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }

    /**
     * <p> One or more domain names (subject alternative names) included in the
     * certificate request. After the certificate is issued, this list includes the
     * domain names bound to the public key contained in the certificate. The subject
     * alternative names include the canonical domain name (CN) of the certificate and
     * additional domain names that can be used to connect to the website. </p>
     */
    inline CertificateDetail& AddSubjectAlternativeNames(const char* value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }

    /**
     * <p> References a <a>DomainValidation</a> structure that contains the domain name
     * in the certificate and the email address that can be used for validation. </p>
     */
    inline const Aws::Vector<DomainValidation>& GetDomainValidationOptions() const{ return m_domainValidationOptions; }

    /**
     * <p> References a <a>DomainValidation</a> structure that contains the domain name
     * in the certificate and the email address that can be used for validation. </p>
     */
    inline void SetDomainValidationOptions(const Aws::Vector<DomainValidation>& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }

    /**
     * <p> References a <a>DomainValidation</a> structure that contains the domain name
     * in the certificate and the email address that can be used for validation. </p>
     */
    inline void SetDomainValidationOptions(Aws::Vector<DomainValidation>&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }

    /**
     * <p> References a <a>DomainValidation</a> structure that contains the domain name
     * in the certificate and the email address that can be used for validation. </p>
     */
    inline CertificateDetail& WithDomainValidationOptions(const Aws::Vector<DomainValidation>& value) { SetDomainValidationOptions(value); return *this;}

    /**
     * <p> References a <a>DomainValidation</a> structure that contains the domain name
     * in the certificate and the email address that can be used for validation. </p>
     */
    inline CertificateDetail& WithDomainValidationOptions(Aws::Vector<DomainValidation>&& value) { SetDomainValidationOptions(value); return *this;}

    /**
     * <p> References a <a>DomainValidation</a> structure that contains the domain name
     * in the certificate and the email address that can be used for validation. </p>
     */
    inline CertificateDetail& AddDomainValidationOptions(const DomainValidation& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }

    /**
     * <p> References a <a>DomainValidation</a> structure that contains the domain name
     * in the certificate and the email address that can be used for validation. </p>
     */
    inline CertificateDetail& AddDomainValidationOptions(DomainValidation&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }

    /**
     * <p> String that contains the serial number of the certificate. </p>
     */
    inline const Aws::String& GetSerial() const{ return m_serial; }

    /**
     * <p> String that contains the serial number of the certificate. </p>
     */
    inline void SetSerial(const Aws::String& value) { m_serialHasBeenSet = true; m_serial = value; }

    /**
     * <p> String that contains the serial number of the certificate. </p>
     */
    inline void SetSerial(Aws::String&& value) { m_serialHasBeenSet = true; m_serial = value; }

    /**
     * <p> String that contains the serial number of the certificate. </p>
     */
    inline void SetSerial(const char* value) { m_serialHasBeenSet = true; m_serial.assign(value); }

    /**
     * <p> String that contains the serial number of the certificate. </p>
     */
    inline CertificateDetail& WithSerial(const Aws::String& value) { SetSerial(value); return *this;}

    /**
     * <p> String that contains the serial number of the certificate. </p>
     */
    inline CertificateDetail& WithSerial(Aws::String&& value) { SetSerial(value); return *this;}

    /**
     * <p> String that contains the serial number of the certificate. </p>
     */
    inline CertificateDetail& WithSerial(const char* value) { SetSerial(value); return *this;}

    /**
     * <p> The X.500 distinguished name of the entity associated with the public key
     * contained in the certificate. </p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p> The X.500 distinguished name of the entity associated with the public key
     * contained in the certificate. </p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p> The X.500 distinguished name of the entity associated with the public key
     * contained in the certificate. </p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p> The X.500 distinguished name of the entity associated with the public key
     * contained in the certificate. </p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p> The X.500 distinguished name of the entity associated with the public key
     * contained in the certificate. </p>
     */
    inline CertificateDetail& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p> The X.500 distinguished name of the entity associated with the public key
     * contained in the certificate. </p>
     */
    inline CertificateDetail& WithSubject(Aws::String&& value) { SetSubject(value); return *this;}

    /**
     * <p> The X.500 distinguished name of the entity associated with the public key
     * contained in the certificate. </p>
     */
    inline CertificateDetail& WithSubject(const char* value) { SetSubject(value); return *this;}

    /**
     * <p> The X.500 distinguished name of the CA that issued and signed the
     * certificate. </p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }

    /**
     * <p> The X.500 distinguished name of the CA that issued and signed the
     * certificate. </p>
     */
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p> The X.500 distinguished name of the CA that issued and signed the
     * certificate. </p>
     */
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p> The X.500 distinguished name of the CA that issued and signed the
     * certificate. </p>
     */
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }

    /**
     * <p> The X.500 distinguished name of the CA that issued and signed the
     * certificate. </p>
     */
    inline CertificateDetail& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}

    /**
     * <p> The X.500 distinguished name of the CA that issued and signed the
     * certificate. </p>
     */
    inline CertificateDetail& WithIssuer(Aws::String&& value) { SetIssuer(value); return *this;}

    /**
     * <p> The X.500 distinguished name of the CA that issued and signed the
     * certificate. </p>
     */
    inline CertificateDetail& WithIssuer(const char* value) { SetIssuer(value); return *this;}

    /**
     * <p> Time at which the certificate was requested. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p> Time at which the certificate was requested. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p> Time at which the certificate was requested. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p> Time at which the certificate was requested. </p>
     */
    inline CertificateDetail& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> Time at which the certificate was requested. </p>
     */
    inline CertificateDetail& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(value); return *this;}

    /**
     * <p> Time at which the certificate was issued. </p>
     */
    inline const Aws::Utils::DateTime& GetIssuedAt() const{ return m_issuedAt; }

    /**
     * <p> Time at which the certificate was issued. </p>
     */
    inline void SetIssuedAt(const Aws::Utils::DateTime& value) { m_issuedAtHasBeenSet = true; m_issuedAt = value; }

    /**
     * <p> Time at which the certificate was issued. </p>
     */
    inline void SetIssuedAt(Aws::Utils::DateTime&& value) { m_issuedAtHasBeenSet = true; m_issuedAt = value; }

    /**
     * <p> Time at which the certificate was issued. </p>
     */
    inline CertificateDetail& WithIssuedAt(const Aws::Utils::DateTime& value) { SetIssuedAt(value); return *this;}

    /**
     * <p> Time at which the certificate was issued. </p>
     */
    inline CertificateDetail& WithIssuedAt(Aws::Utils::DateTime&& value) { SetIssuedAt(value); return *this;}

    /**
     * <p> A <code>CertificateStatus</code> enumeration value that can contain one of
     * the following: <ul> <li>PENDING_VALIDATION</li> <li>ISSUED</li>
     * <li>INACTIVE</li> <li>EXPIRED</li> <li>REVOKED</li> <li>FAILED</li>
     * <li>VALIDATION_TIMED_OUT</li> </ul> </p>
     */
    inline const CertificateStatus& GetStatus() const{ return m_status; }

    /**
     * <p> A <code>CertificateStatus</code> enumeration value that can contain one of
     * the following: <ul> <li>PENDING_VALIDATION</li> <li>ISSUED</li>
     * <li>INACTIVE</li> <li>EXPIRED</li> <li>REVOKED</li> <li>FAILED</li>
     * <li>VALIDATION_TIMED_OUT</li> </ul> </p>
     */
    inline void SetStatus(const CertificateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> A <code>CertificateStatus</code> enumeration value that can contain one of
     * the following: <ul> <li>PENDING_VALIDATION</li> <li>ISSUED</li>
     * <li>INACTIVE</li> <li>EXPIRED</li> <li>REVOKED</li> <li>FAILED</li>
     * <li>VALIDATION_TIMED_OUT</li> </ul> </p>
     */
    inline void SetStatus(CertificateStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> A <code>CertificateStatus</code> enumeration value that can contain one of
     * the following: <ul> <li>PENDING_VALIDATION</li> <li>ISSUED</li>
     * <li>INACTIVE</li> <li>EXPIRED</li> <li>REVOKED</li> <li>FAILED</li>
     * <li>VALIDATION_TIMED_OUT</li> </ul> </p>
     */
    inline CertificateDetail& WithStatus(const CertificateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> A <code>CertificateStatus</code> enumeration value that can contain one of
     * the following: <ul> <li>PENDING_VALIDATION</li> <li>ISSUED</li>
     * <li>INACTIVE</li> <li>EXPIRED</li> <li>REVOKED</li> <li>FAILED</li>
     * <li>VALIDATION_TIMED_OUT</li> </ul> </p>
     */
    inline CertificateDetail& WithStatus(CertificateStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p> The time, if any, at which the certificate was revoked. This value exists
     * only if the certificate has been revoked. </p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const{ return m_revokedAt; }

    /**
     * <p> The time, if any, at which the certificate was revoked. This value exists
     * only if the certificate has been revoked. </p>
     */
    inline void SetRevokedAt(const Aws::Utils::DateTime& value) { m_revokedAtHasBeenSet = true; m_revokedAt = value; }

    /**
     * <p> The time, if any, at which the certificate was revoked. This value exists
     * only if the certificate has been revoked. </p>
     */
    inline void SetRevokedAt(Aws::Utils::DateTime&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = value; }

    /**
     * <p> The time, if any, at which the certificate was revoked. This value exists
     * only if the certificate has been revoked. </p>
     */
    inline CertificateDetail& WithRevokedAt(const Aws::Utils::DateTime& value) { SetRevokedAt(value); return *this;}

    /**
     * <p> The time, if any, at which the certificate was revoked. This value exists
     * only if the certificate has been revoked. </p>
     */
    inline CertificateDetail& WithRevokedAt(Aws::Utils::DateTime&& value) { SetRevokedAt(value); return *this;}

    /**
     * <p> A <code>RevocationReason</code> enumeration value that indicates why the
     * certificate was revoked. This value exists only if the certificate has been
     * revoked. This can be one of the following vales: <ul> <li>UNSPECIFIED</li>
     * <li>KEY_COMPROMISE</li> <li>CA_COMPROMISE</li> <li>AFFILIATION_CHANGED</li>
     * <li>SUPERCEDED</li> <li>CESSATION_OF_OPERATION</li> <li>CERTIFICATE_HOLD</li>
     * <li>REMOVE_FROM_CRL</li> <li>PRIVILEGE_WITHDRAWN</li> <li>A_A_COMPROMISE</li>
     * </ul> </p>
     */
    inline const RevocationReason& GetRevocationReason() const{ return m_revocationReason; }

    /**
     * <p> A <code>RevocationReason</code> enumeration value that indicates why the
     * certificate was revoked. This value exists only if the certificate has been
     * revoked. This can be one of the following vales: <ul> <li>UNSPECIFIED</li>
     * <li>KEY_COMPROMISE</li> <li>CA_COMPROMISE</li> <li>AFFILIATION_CHANGED</li>
     * <li>SUPERCEDED</li> <li>CESSATION_OF_OPERATION</li> <li>CERTIFICATE_HOLD</li>
     * <li>REMOVE_FROM_CRL</li> <li>PRIVILEGE_WITHDRAWN</li> <li>A_A_COMPROMISE</li>
     * </ul> </p>
     */
    inline void SetRevocationReason(const RevocationReason& value) { m_revocationReasonHasBeenSet = true; m_revocationReason = value; }

    /**
     * <p> A <code>RevocationReason</code> enumeration value that indicates why the
     * certificate was revoked. This value exists only if the certificate has been
     * revoked. This can be one of the following vales: <ul> <li>UNSPECIFIED</li>
     * <li>KEY_COMPROMISE</li> <li>CA_COMPROMISE</li> <li>AFFILIATION_CHANGED</li>
     * <li>SUPERCEDED</li> <li>CESSATION_OF_OPERATION</li> <li>CERTIFICATE_HOLD</li>
     * <li>REMOVE_FROM_CRL</li> <li>PRIVILEGE_WITHDRAWN</li> <li>A_A_COMPROMISE</li>
     * </ul> </p>
     */
    inline void SetRevocationReason(RevocationReason&& value) { m_revocationReasonHasBeenSet = true; m_revocationReason = value; }

    /**
     * <p> A <code>RevocationReason</code> enumeration value that indicates why the
     * certificate was revoked. This value exists only if the certificate has been
     * revoked. This can be one of the following vales: <ul> <li>UNSPECIFIED</li>
     * <li>KEY_COMPROMISE</li> <li>CA_COMPROMISE</li> <li>AFFILIATION_CHANGED</li>
     * <li>SUPERCEDED</li> <li>CESSATION_OF_OPERATION</li> <li>CERTIFICATE_HOLD</li>
     * <li>REMOVE_FROM_CRL</li> <li>PRIVILEGE_WITHDRAWN</li> <li>A_A_COMPROMISE</li>
     * </ul> </p>
     */
    inline CertificateDetail& WithRevocationReason(const RevocationReason& value) { SetRevocationReason(value); return *this;}

    /**
     * <p> A <code>RevocationReason</code> enumeration value that indicates why the
     * certificate was revoked. This value exists only if the certificate has been
     * revoked. This can be one of the following vales: <ul> <li>UNSPECIFIED</li>
     * <li>KEY_COMPROMISE</li> <li>CA_COMPROMISE</li> <li>AFFILIATION_CHANGED</li>
     * <li>SUPERCEDED</li> <li>CESSATION_OF_OPERATION</li> <li>CERTIFICATE_HOLD</li>
     * <li>REMOVE_FROM_CRL</li> <li>PRIVILEGE_WITHDRAWN</li> <li>A_A_COMPROMISE</li>
     * </ul> </p>
     */
    inline CertificateDetail& WithRevocationReason(RevocationReason&& value) { SetRevocationReason(value); return *this;}

    /**
     * <p> Time before which the certificate is not valid. </p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const{ return m_notBefore; }

    /**
     * <p> Time before which the certificate is not valid. </p>
     */
    inline void SetNotBefore(const Aws::Utils::DateTime& value) { m_notBeforeHasBeenSet = true; m_notBefore = value; }

    /**
     * <p> Time before which the certificate is not valid. </p>
     */
    inline void SetNotBefore(Aws::Utils::DateTime&& value) { m_notBeforeHasBeenSet = true; m_notBefore = value; }

    /**
     * <p> Time before which the certificate is not valid. </p>
     */
    inline CertificateDetail& WithNotBefore(const Aws::Utils::DateTime& value) { SetNotBefore(value); return *this;}

    /**
     * <p> Time before which the certificate is not valid. </p>
     */
    inline CertificateDetail& WithNotBefore(Aws::Utils::DateTime&& value) { SetNotBefore(value); return *this;}

    /**
     * <p> Time after which the certificate is not valid. </p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const{ return m_notAfter; }

    /**
     * <p> Time after which the certificate is not valid. </p>
     */
    inline void SetNotAfter(const Aws::Utils::DateTime& value) { m_notAfterHasBeenSet = true; m_notAfter = value; }

    /**
     * <p> Time after which the certificate is not valid. </p>
     */
    inline void SetNotAfter(Aws::Utils::DateTime&& value) { m_notAfterHasBeenSet = true; m_notAfter = value; }

    /**
     * <p> Time after which the certificate is not valid. </p>
     */
    inline CertificateDetail& WithNotAfter(const Aws::Utils::DateTime& value) { SetNotAfter(value); return *this;}

    /**
     * <p> Time after which the certificate is not valid. </p>
     */
    inline CertificateDetail& WithNotAfter(Aws::Utils::DateTime&& value) { SetNotAfter(value); return *this;}

    /**
     * <p> Asymmetric algorithm used to generate the public and private key pair.
     * Currently the only supported value is <code>RSA_2048</code>. </p>
     */
    inline const KeyAlgorithm& GetKeyAlgorithm() const{ return m_keyAlgorithm; }

    /**
     * <p> Asymmetric algorithm used to generate the public and private key pair.
     * Currently the only supported value is <code>RSA_2048</code>. </p>
     */
    inline void SetKeyAlgorithm(const KeyAlgorithm& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }

    /**
     * <p> Asymmetric algorithm used to generate the public and private key pair.
     * Currently the only supported value is <code>RSA_2048</code>. </p>
     */
    inline void SetKeyAlgorithm(KeyAlgorithm&& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }

    /**
     * <p> Asymmetric algorithm used to generate the public and private key pair.
     * Currently the only supported value is <code>RSA_2048</code>. </p>
     */
    inline CertificateDetail& WithKeyAlgorithm(const KeyAlgorithm& value) { SetKeyAlgorithm(value); return *this;}

    /**
     * <p> Asymmetric algorithm used to generate the public and private key pair.
     * Currently the only supported value is <code>RSA_2048</code>. </p>
     */
    inline CertificateDetail& WithKeyAlgorithm(KeyAlgorithm&& value) { SetKeyAlgorithm(value); return *this;}

    /**
     * <p> Algorithm used to generate a signature. Currently the only supported value
     * is <code>SHA256WITHRSA</code>. </p>
     */
    inline const Aws::String& GetSignatureAlgorithm() const{ return m_signatureAlgorithm; }

    /**
     * <p> Algorithm used to generate a signature. Currently the only supported value
     * is <code>SHA256WITHRSA</code>. </p>
     */
    inline void SetSignatureAlgorithm(const Aws::String& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = value; }

    /**
     * <p> Algorithm used to generate a signature. Currently the only supported value
     * is <code>SHA256WITHRSA</code>. </p>
     */
    inline void SetSignatureAlgorithm(Aws::String&& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = value; }

    /**
     * <p> Algorithm used to generate a signature. Currently the only supported value
     * is <code>SHA256WITHRSA</code>. </p>
     */
    inline void SetSignatureAlgorithm(const char* value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm.assign(value); }

    /**
     * <p> Algorithm used to generate a signature. Currently the only supported value
     * is <code>SHA256WITHRSA</code>. </p>
     */
    inline CertificateDetail& WithSignatureAlgorithm(const Aws::String& value) { SetSignatureAlgorithm(value); return *this;}

    /**
     * <p> Algorithm used to generate a signature. Currently the only supported value
     * is <code>SHA256WITHRSA</code>. </p>
     */
    inline CertificateDetail& WithSignatureAlgorithm(Aws::String&& value) { SetSignatureAlgorithm(value); return *this;}

    /**
     * <p> Algorithm used to generate a signature. Currently the only supported value
     * is <code>SHA256WITHRSA</code>. </p>
     */
    inline CertificateDetail& WithSignatureAlgorithm(const char* value) { SetSignatureAlgorithm(value); return *this;}

    /**
     * <p> List that identifies ARNs that are using the certificate. A single ACM
     * Certificate can be used by multiple AWS resources. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInUseBy() const{ return m_inUseBy; }

    /**
     * <p> List that identifies ARNs that are using the certificate. A single ACM
     * Certificate can be used by multiple AWS resources. </p>
     */
    inline void SetInUseBy(const Aws::Vector<Aws::String>& value) { m_inUseByHasBeenSet = true; m_inUseBy = value; }

    /**
     * <p> List that identifies ARNs that are using the certificate. A single ACM
     * Certificate can be used by multiple AWS resources. </p>
     */
    inline void SetInUseBy(Aws::Vector<Aws::String>&& value) { m_inUseByHasBeenSet = true; m_inUseBy = value; }

    /**
     * <p> List that identifies ARNs that are using the certificate. A single ACM
     * Certificate can be used by multiple AWS resources. </p>
     */
    inline CertificateDetail& WithInUseBy(const Aws::Vector<Aws::String>& value) { SetInUseBy(value); return *this;}

    /**
     * <p> List that identifies ARNs that are using the certificate. A single ACM
     * Certificate can be used by multiple AWS resources. </p>
     */
    inline CertificateDetail& WithInUseBy(Aws::Vector<Aws::String>&& value) { SetInUseBy(value); return *this;}

    /**
     * <p> List that identifies ARNs that are using the certificate. A single ACM
     * Certificate can be used by multiple AWS resources. </p>
     */
    inline CertificateDetail& AddInUseBy(const Aws::String& value) { m_inUseByHasBeenSet = true; m_inUseBy.push_back(value); return *this; }

    /**
     * <p> List that identifies ARNs that are using the certificate. A single ACM
     * Certificate can be used by multiple AWS resources. </p>
     */
    inline CertificateDetail& AddInUseBy(Aws::String&& value) { m_inUseByHasBeenSet = true; m_inUseBy.push_back(value); return *this; }

    /**
     * <p> List that identifies ARNs that are using the certificate. A single ACM
     * Certificate can be used by multiple AWS resources. </p>
     */
    inline CertificateDetail& AddInUseBy(const char* value) { m_inUseByHasBeenSet = true; m_inUseBy.push_back(value); return *this; }

  private:
    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::Vector<Aws::String> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet;
    Aws::Vector<DomainValidation> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet;
    Aws::String m_serial;
    bool m_serialHasBeenSet;
    Aws::String m_subject;
    bool m_subjectHasBeenSet;
    Aws::String m_issuer;
    bool m_issuerHasBeenSet;
    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;
    Aws::Utils::DateTime m_issuedAt;
    bool m_issuedAtHasBeenSet;
    CertificateStatus m_status;
    bool m_statusHasBeenSet;
    Aws::Utils::DateTime m_revokedAt;
    bool m_revokedAtHasBeenSet;
    RevocationReason m_revocationReason;
    bool m_revocationReasonHasBeenSet;
    Aws::Utils::DateTime m_notBefore;
    bool m_notBeforeHasBeenSet;
    Aws::Utils::DateTime m_notAfter;
    bool m_notAfterHasBeenSet;
    KeyAlgorithm m_keyAlgorithm;
    bool m_keyAlgorithmHasBeenSet;
    Aws::String m_signatureAlgorithm;
    bool m_signatureAlgorithmHasBeenSet;
    Aws::Vector<Aws::String> m_inUseBy;
    bool m_inUseByHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
