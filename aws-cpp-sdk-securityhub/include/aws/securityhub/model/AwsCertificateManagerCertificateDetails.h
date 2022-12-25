/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateOptions.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateRenewalSummary.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateDomainValidationOption.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateExtendedKeyUsage.h>
#include <aws/securityhub/model/AwsCertificateManagerCertificateKeyUsage.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about an Certificate Manager certificate.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCertificateManagerCertificateDetails">AWS
   * API Reference</a></p>
   */
  class AwsCertificateManagerCertificateDetails
  {
  public:
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateDetails();
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the private certificate authority (CA) that will be used to issue
     * the certificate.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The ARN of the private certificate authority (CA) that will be used to issue
     * the certificate.</p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The ARN of the private certificate authority (CA) that will be used to issue
     * the certificate.</p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The ARN of the private certificate authority (CA) that will be used to issue
     * the certificate.</p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The ARN of the private certificate authority (CA) that will be used to issue
     * the certificate.</p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The ARN of the private certificate authority (CA) that will be used to issue
     * the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The ARN of the private certificate authority (CA) that will be used to issue
     * the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the private certificate authority (CA) that will be used to issue
     * the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>Indicates when the certificate was requested.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Indicates when the certificate was requested.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Indicates when the certificate was requested.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Indicates when the certificate was requested.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Indicates when the certificate was requested.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>Indicates when the certificate was requested.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Indicates when the certificate was requested.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>Indicates when the certificate was requested.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * <p>The fully qualified domain name (FQDN), such as www.example.com, that is
     * secured by the certificate.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The fully qualified domain name (FQDN), such as www.example.com, that is
     * secured by the certificate.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The fully qualified domain name (FQDN), such as www.example.com, that is
     * secured by the certificate.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The fully qualified domain name (FQDN), such as www.example.com, that is
     * secured by the certificate.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The fully qualified domain name (FQDN), such as www.example.com, that is
     * secured by the certificate.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The fully qualified domain name (FQDN), such as www.example.com, that is
     * secured by the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN), such as www.example.com, that is
     * secured by the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN), such as www.example.com, that is
     * secured by the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Contains information about the initial validation of each domain name that
     * occurs as a result of the <code>RequestCertificate</code> request.</p> <p>Only
     * provided if the certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline const Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>& GetDomainValidationOptions() const{ return m_domainValidationOptions; }

    /**
     * <p>Contains information about the initial validation of each domain name that
     * occurs as a result of the <code>RequestCertificate</code> request.</p> <p>Only
     * provided if the certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }

    /**
     * <p>Contains information about the initial validation of each domain name that
     * occurs as a result of the <code>RequestCertificate</code> request.</p> <p>Only
     * provided if the certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline void SetDomainValidationOptions(const Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }

    /**
     * <p>Contains information about the initial validation of each domain name that
     * occurs as a result of the <code>RequestCertificate</code> request.</p> <p>Only
     * provided if the certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline void SetDomainValidationOptions(Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::move(value); }

    /**
     * <p>Contains information about the initial validation of each domain name that
     * occurs as a result of the <code>RequestCertificate</code> request.</p> <p>Only
     * provided if the certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithDomainValidationOptions(const Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>& value) { SetDomainValidationOptions(value); return *this;}

    /**
     * <p>Contains information about the initial validation of each domain name that
     * occurs as a result of the <code>RequestCertificate</code> request.</p> <p>Only
     * provided if the certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithDomainValidationOptions(Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption>&& value) { SetDomainValidationOptions(std::move(value)); return *this;}

    /**
     * <p>Contains information about the initial validation of each domain name that
     * occurs as a result of the <code>RequestCertificate</code> request.</p> <p>Only
     * provided if the certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& AddDomainValidationOptions(const AwsCertificateManagerCertificateDomainValidationOption& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }

    /**
     * <p>Contains information about the initial validation of each domain name that
     * occurs as a result of the <code>RequestCertificate</code> request.</p> <p>Only
     * provided if the certificate type is <code>AMAZON_ISSUED</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& AddDomainValidationOptions(AwsCertificateManagerCertificateDomainValidationOption&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID).</p>
     */
    inline const Aws::Vector<AwsCertificateManagerCertificateExtendedKeyUsage>& GetExtendedKeyUsages() const{ return m_extendedKeyUsages; }

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID).</p>
     */
    inline bool ExtendedKeyUsagesHasBeenSet() const { return m_extendedKeyUsagesHasBeenSet; }

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID).</p>
     */
    inline void SetExtendedKeyUsages(const Aws::Vector<AwsCertificateManagerCertificateExtendedKeyUsage>& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages = value; }

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID).</p>
     */
    inline void SetExtendedKeyUsages(Aws::Vector<AwsCertificateManagerCertificateExtendedKeyUsage>&& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages = std::move(value); }

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID).</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithExtendedKeyUsages(const Aws::Vector<AwsCertificateManagerCertificateExtendedKeyUsage>& value) { SetExtendedKeyUsages(value); return *this;}

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID).</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithExtendedKeyUsages(Aws::Vector<AwsCertificateManagerCertificateExtendedKeyUsage>&& value) { SetExtendedKeyUsages(std::move(value)); return *this;}

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID).</p>
     */
    inline AwsCertificateManagerCertificateDetails& AddExtendedKeyUsages(const AwsCertificateManagerCertificateExtendedKeyUsage& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages.push_back(value); return *this; }

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID).</p>
     */
    inline AwsCertificateManagerCertificateDetails& AddExtendedKeyUsages(AwsCertificateManagerCertificateExtendedKeyUsage&& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages.push_back(std::move(value)); return *this; }


    /**
     * <p>For a failed certificate request, the reason for the failure.</p> <p>Valid
     * values: <code>NO_AVAILABLE_CONTACTS</code> |
     * <code>ADDITIONAL_VERIFICATION_REQUIRED</code> | <code>DOMAIN_NOT_ALLOWED</code>
     * | <code>INVALID_PUBLIC_DOMAIN</code> | <code>DOMAIN_VALIDATION_DENIED</code> |
     * <code>CAA_ERROR</code> | <code>PCA_LIMIT_EXCEEDED</code> |
     * <code>PCA_INVALID_ARN</code> | <code>PCA_INVALID_STATE</code> |
     * <code>PCA_REQUEST_FAILED</code> | <code>PCA_NAME_CONSTRAINTS_VALIDATION</code> |
     * <code>PCA_RESOURCE_NOT_FOUND</code> | <code>PCA_INVALID_ARGS</code> |
     * <code>PCA_INVALID_DURATION</code> | <code>PCA_ACCESS_DENIED</code> |
     * <code>SLR_NOT_FOUND</code> | <code>OTHER</code> </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>For a failed certificate request, the reason for the failure.</p> <p>Valid
     * values: <code>NO_AVAILABLE_CONTACTS</code> |
     * <code>ADDITIONAL_VERIFICATION_REQUIRED</code> | <code>DOMAIN_NOT_ALLOWED</code>
     * | <code>INVALID_PUBLIC_DOMAIN</code> | <code>DOMAIN_VALIDATION_DENIED</code> |
     * <code>CAA_ERROR</code> | <code>PCA_LIMIT_EXCEEDED</code> |
     * <code>PCA_INVALID_ARN</code> | <code>PCA_INVALID_STATE</code> |
     * <code>PCA_REQUEST_FAILED</code> | <code>PCA_NAME_CONSTRAINTS_VALIDATION</code> |
     * <code>PCA_RESOURCE_NOT_FOUND</code> | <code>PCA_INVALID_ARGS</code> |
     * <code>PCA_INVALID_DURATION</code> | <code>PCA_ACCESS_DENIED</code> |
     * <code>SLR_NOT_FOUND</code> | <code>OTHER</code> </p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>For a failed certificate request, the reason for the failure.</p> <p>Valid
     * values: <code>NO_AVAILABLE_CONTACTS</code> |
     * <code>ADDITIONAL_VERIFICATION_REQUIRED</code> | <code>DOMAIN_NOT_ALLOWED</code>
     * | <code>INVALID_PUBLIC_DOMAIN</code> | <code>DOMAIN_VALIDATION_DENIED</code> |
     * <code>CAA_ERROR</code> | <code>PCA_LIMIT_EXCEEDED</code> |
     * <code>PCA_INVALID_ARN</code> | <code>PCA_INVALID_STATE</code> |
     * <code>PCA_REQUEST_FAILED</code> | <code>PCA_NAME_CONSTRAINTS_VALIDATION</code> |
     * <code>PCA_RESOURCE_NOT_FOUND</code> | <code>PCA_INVALID_ARGS</code> |
     * <code>PCA_INVALID_DURATION</code> | <code>PCA_ACCESS_DENIED</code> |
     * <code>SLR_NOT_FOUND</code> | <code>OTHER</code> </p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>For a failed certificate request, the reason for the failure.</p> <p>Valid
     * values: <code>NO_AVAILABLE_CONTACTS</code> |
     * <code>ADDITIONAL_VERIFICATION_REQUIRED</code> | <code>DOMAIN_NOT_ALLOWED</code>
     * | <code>INVALID_PUBLIC_DOMAIN</code> | <code>DOMAIN_VALIDATION_DENIED</code> |
     * <code>CAA_ERROR</code> | <code>PCA_LIMIT_EXCEEDED</code> |
     * <code>PCA_INVALID_ARN</code> | <code>PCA_INVALID_STATE</code> |
     * <code>PCA_REQUEST_FAILED</code> | <code>PCA_NAME_CONSTRAINTS_VALIDATION</code> |
     * <code>PCA_RESOURCE_NOT_FOUND</code> | <code>PCA_INVALID_ARGS</code> |
     * <code>PCA_INVALID_DURATION</code> | <code>PCA_ACCESS_DENIED</code> |
     * <code>SLR_NOT_FOUND</code> | <code>OTHER</code> </p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>For a failed certificate request, the reason for the failure.</p> <p>Valid
     * values: <code>NO_AVAILABLE_CONTACTS</code> |
     * <code>ADDITIONAL_VERIFICATION_REQUIRED</code> | <code>DOMAIN_NOT_ALLOWED</code>
     * | <code>INVALID_PUBLIC_DOMAIN</code> | <code>DOMAIN_VALIDATION_DENIED</code> |
     * <code>CAA_ERROR</code> | <code>PCA_LIMIT_EXCEEDED</code> |
     * <code>PCA_INVALID_ARN</code> | <code>PCA_INVALID_STATE</code> |
     * <code>PCA_REQUEST_FAILED</code> | <code>PCA_NAME_CONSTRAINTS_VALIDATION</code> |
     * <code>PCA_RESOURCE_NOT_FOUND</code> | <code>PCA_INVALID_ARGS</code> |
     * <code>PCA_INVALID_DURATION</code> | <code>PCA_ACCESS_DENIED</code> |
     * <code>SLR_NOT_FOUND</code> | <code>OTHER</code> </p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>For a failed certificate request, the reason for the failure.</p> <p>Valid
     * values: <code>NO_AVAILABLE_CONTACTS</code> |
     * <code>ADDITIONAL_VERIFICATION_REQUIRED</code> | <code>DOMAIN_NOT_ALLOWED</code>
     * | <code>INVALID_PUBLIC_DOMAIN</code> | <code>DOMAIN_VALIDATION_DENIED</code> |
     * <code>CAA_ERROR</code> | <code>PCA_LIMIT_EXCEEDED</code> |
     * <code>PCA_INVALID_ARN</code> | <code>PCA_INVALID_STATE</code> |
     * <code>PCA_REQUEST_FAILED</code> | <code>PCA_NAME_CONSTRAINTS_VALIDATION</code> |
     * <code>PCA_RESOURCE_NOT_FOUND</code> | <code>PCA_INVALID_ARGS</code> |
     * <code>PCA_INVALID_DURATION</code> | <code>PCA_ACCESS_DENIED</code> |
     * <code>SLR_NOT_FOUND</code> | <code>OTHER</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>For a failed certificate request, the reason for the failure.</p> <p>Valid
     * values: <code>NO_AVAILABLE_CONTACTS</code> |
     * <code>ADDITIONAL_VERIFICATION_REQUIRED</code> | <code>DOMAIN_NOT_ALLOWED</code>
     * | <code>INVALID_PUBLIC_DOMAIN</code> | <code>DOMAIN_VALIDATION_DENIED</code> |
     * <code>CAA_ERROR</code> | <code>PCA_LIMIT_EXCEEDED</code> |
     * <code>PCA_INVALID_ARN</code> | <code>PCA_INVALID_STATE</code> |
     * <code>PCA_REQUEST_FAILED</code> | <code>PCA_NAME_CONSTRAINTS_VALIDATION</code> |
     * <code>PCA_RESOURCE_NOT_FOUND</code> | <code>PCA_INVALID_ARGS</code> |
     * <code>PCA_INVALID_DURATION</code> | <code>PCA_ACCESS_DENIED</code> |
     * <code>SLR_NOT_FOUND</code> | <code>OTHER</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>For a failed certificate request, the reason for the failure.</p> <p>Valid
     * values: <code>NO_AVAILABLE_CONTACTS</code> |
     * <code>ADDITIONAL_VERIFICATION_REQUIRED</code> | <code>DOMAIN_NOT_ALLOWED</code>
     * | <code>INVALID_PUBLIC_DOMAIN</code> | <code>DOMAIN_VALIDATION_DENIED</code> |
     * <code>CAA_ERROR</code> | <code>PCA_LIMIT_EXCEEDED</code> |
     * <code>PCA_INVALID_ARN</code> | <code>PCA_INVALID_STATE</code> |
     * <code>PCA_REQUEST_FAILED</code> | <code>PCA_NAME_CONSTRAINTS_VALIDATION</code> |
     * <code>PCA_RESOURCE_NOT_FOUND</code> | <code>PCA_INVALID_ARGS</code> |
     * <code>PCA_INVALID_DURATION</code> | <code>PCA_ACCESS_DENIED</code> |
     * <code>SLR_NOT_FOUND</code> | <code>OTHER</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Indicates when the certificate was imported. Provided if the certificate type
     * is <code>IMPORTED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetImportedAt() const{ return m_importedAt; }

    /**
     * <p>Indicates when the certificate was imported. Provided if the certificate type
     * is <code>IMPORTED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool ImportedAtHasBeenSet() const { return m_importedAtHasBeenSet; }

    /**
     * <p>Indicates when the certificate was imported. Provided if the certificate type
     * is <code>IMPORTED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetImportedAt(const Aws::String& value) { m_importedAtHasBeenSet = true; m_importedAt = value; }

    /**
     * <p>Indicates when the certificate was imported. Provided if the certificate type
     * is <code>IMPORTED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetImportedAt(Aws::String&& value) { m_importedAtHasBeenSet = true; m_importedAt = std::move(value); }

    /**
     * <p>Indicates when the certificate was imported. Provided if the certificate type
     * is <code>IMPORTED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetImportedAt(const char* value) { m_importedAtHasBeenSet = true; m_importedAt.assign(value); }

    /**
     * <p>Indicates when the certificate was imported. Provided if the certificate type
     * is <code>IMPORTED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithImportedAt(const Aws::String& value) { SetImportedAt(value); return *this;}

    /**
     * <p>Indicates when the certificate was imported. Provided if the certificate type
     * is <code>IMPORTED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithImportedAt(Aws::String&& value) { SetImportedAt(std::move(value)); return *this;}

    /**
     * <p>Indicates when the certificate was imported. Provided if the certificate type
     * is <code>IMPORTED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithImportedAt(const char* value) { SetImportedAt(value); return *this;}


    /**
     * <p>The list of ARNs for the Amazon Web Services resources that use the
     * certificate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInUseBy() const{ return m_inUseBy; }

    /**
     * <p>The list of ARNs for the Amazon Web Services resources that use the
     * certificate.</p>
     */
    inline bool InUseByHasBeenSet() const { return m_inUseByHasBeenSet; }

    /**
     * <p>The list of ARNs for the Amazon Web Services resources that use the
     * certificate.</p>
     */
    inline void SetInUseBy(const Aws::Vector<Aws::String>& value) { m_inUseByHasBeenSet = true; m_inUseBy = value; }

    /**
     * <p>The list of ARNs for the Amazon Web Services resources that use the
     * certificate.</p>
     */
    inline void SetInUseBy(Aws::Vector<Aws::String>&& value) { m_inUseByHasBeenSet = true; m_inUseBy = std::move(value); }

    /**
     * <p>The list of ARNs for the Amazon Web Services resources that use the
     * certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithInUseBy(const Aws::Vector<Aws::String>& value) { SetInUseBy(value); return *this;}

    /**
     * <p>The list of ARNs for the Amazon Web Services resources that use the
     * certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithInUseBy(Aws::Vector<Aws::String>&& value) { SetInUseBy(std::move(value)); return *this;}

    /**
     * <p>The list of ARNs for the Amazon Web Services resources that use the
     * certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& AddInUseBy(const Aws::String& value) { m_inUseByHasBeenSet = true; m_inUseBy.push_back(value); return *this; }

    /**
     * <p>The list of ARNs for the Amazon Web Services resources that use the
     * certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& AddInUseBy(Aws::String&& value) { m_inUseByHasBeenSet = true; m_inUseBy.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of ARNs for the Amazon Web Services resources that use the
     * certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& AddInUseBy(const char* value) { m_inUseByHasBeenSet = true; m_inUseBy.push_back(value); return *this; }


    /**
     * <p>Indicates when the certificate was issued. Provided if the certificate type
     * is <code>AMAZON_ISSUED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetIssuedAt() const{ return m_issuedAt; }

    /**
     * <p>Indicates when the certificate was issued. Provided if the certificate type
     * is <code>AMAZON_ISSUED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }

    /**
     * <p>Indicates when the certificate was issued. Provided if the certificate type
     * is <code>AMAZON_ISSUED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetIssuedAt(const Aws::String& value) { m_issuedAtHasBeenSet = true; m_issuedAt = value; }

    /**
     * <p>Indicates when the certificate was issued. Provided if the certificate type
     * is <code>AMAZON_ISSUED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetIssuedAt(Aws::String&& value) { m_issuedAtHasBeenSet = true; m_issuedAt = std::move(value); }

    /**
     * <p>Indicates when the certificate was issued. Provided if the certificate type
     * is <code>AMAZON_ISSUED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetIssuedAt(const char* value) { m_issuedAtHasBeenSet = true; m_issuedAt.assign(value); }

    /**
     * <p>Indicates when the certificate was issued. Provided if the certificate type
     * is <code>AMAZON_ISSUED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithIssuedAt(const Aws::String& value) { SetIssuedAt(value); return *this;}

    /**
     * <p>Indicates when the certificate was issued. Provided if the certificate type
     * is <code>AMAZON_ISSUED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithIssuedAt(Aws::String&& value) { SetIssuedAt(std::move(value)); return *this;}

    /**
     * <p>Indicates when the certificate was issued. Provided if the certificate type
     * is <code>AMAZON_ISSUED</code>.</p> <p>Uses the <code>date-time</code> format
     * specified in <a href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339
     * section 5.6, Internet Date/Time Format</a>. The value cannot contain spaces. For
     * example, <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithIssuedAt(const char* value) { SetIssuedAt(value); return *this;}


    /**
     * <p>The name of the certificate authority that issued and signed the
     * certificate.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }

    /**
     * <p>The name of the certificate authority that issued and signed the
     * certificate.</p>
     */
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }

    /**
     * <p>The name of the certificate authority that issued and signed the
     * certificate.</p>
     */
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }

    /**
     * <p>The name of the certificate authority that issued and signed the
     * certificate.</p>
     */
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }

    /**
     * <p>The name of the certificate authority that issued and signed the
     * certificate.</p>
     */
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }

    /**
     * <p>The name of the certificate authority that issued and signed the
     * certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}

    /**
     * <p>The name of the certificate authority that issued and signed the
     * certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate authority that issued and signed the
     * certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithIssuer(const char* value) { SetIssuer(value); return *this;}


    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     * <p>Valid values: <code>RSA_2048</code> | <code>RSA_1024</code> |<code>
     * RSA_4096</code> | <code>EC_prime256v1</code> | <code>EC_secp384r1</code> |
     * <code>EC_secp521r1</code> </p>
     */
    inline const Aws::String& GetKeyAlgorithm() const{ return m_keyAlgorithm; }

    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     * <p>Valid values: <code>RSA_2048</code> | <code>RSA_1024</code> |<code>
     * RSA_4096</code> | <code>EC_prime256v1</code> | <code>EC_secp384r1</code> |
     * <code>EC_secp521r1</code> </p>
     */
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     * <p>Valid values: <code>RSA_2048</code> | <code>RSA_1024</code> |<code>
     * RSA_4096</code> | <code>EC_prime256v1</code> | <code>EC_secp384r1</code> |
     * <code>EC_secp521r1</code> </p>
     */
    inline void SetKeyAlgorithm(const Aws::String& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }

    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     * <p>Valid values: <code>RSA_2048</code> | <code>RSA_1024</code> |<code>
     * RSA_4096</code> | <code>EC_prime256v1</code> | <code>EC_secp384r1</code> |
     * <code>EC_secp521r1</code> </p>
     */
    inline void SetKeyAlgorithm(Aws::String&& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = std::move(value); }

    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     * <p>Valid values: <code>RSA_2048</code> | <code>RSA_1024</code> |<code>
     * RSA_4096</code> | <code>EC_prime256v1</code> | <code>EC_secp384r1</code> |
     * <code>EC_secp521r1</code> </p>
     */
    inline void SetKeyAlgorithm(const char* value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm.assign(value); }

    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     * <p>Valid values: <code>RSA_2048</code> | <code>RSA_1024</code> |<code>
     * RSA_4096</code> | <code>EC_prime256v1</code> | <code>EC_secp384r1</code> |
     * <code>EC_secp521r1</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithKeyAlgorithm(const Aws::String& value) { SetKeyAlgorithm(value); return *this;}

    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     * <p>Valid values: <code>RSA_2048</code> | <code>RSA_1024</code> |<code>
     * RSA_4096</code> | <code>EC_prime256v1</code> | <code>EC_secp384r1</code> |
     * <code>EC_secp521r1</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithKeyAlgorithm(Aws::String&& value) { SetKeyAlgorithm(std::move(value)); return *this;}

    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     * <p>Valid values: <code>RSA_2048</code> | <code>RSA_1024</code> |<code>
     * RSA_4096</code> | <code>EC_prime256v1</code> | <code>EC_secp384r1</code> |
     * <code>EC_secp521r1</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithKeyAlgorithm(const char* value) { SetKeyAlgorithm(value); return *this;}


    /**
     * <p>A list of key usage X.509 v3 extension objects.</p>
     */
    inline const Aws::Vector<AwsCertificateManagerCertificateKeyUsage>& GetKeyUsages() const{ return m_keyUsages; }

    /**
     * <p>A list of key usage X.509 v3 extension objects.</p>
     */
    inline bool KeyUsagesHasBeenSet() const { return m_keyUsagesHasBeenSet; }

    /**
     * <p>A list of key usage X.509 v3 extension objects.</p>
     */
    inline void SetKeyUsages(const Aws::Vector<AwsCertificateManagerCertificateKeyUsage>& value) { m_keyUsagesHasBeenSet = true; m_keyUsages = value; }

    /**
     * <p>A list of key usage X.509 v3 extension objects.</p>
     */
    inline void SetKeyUsages(Aws::Vector<AwsCertificateManagerCertificateKeyUsage>&& value) { m_keyUsagesHasBeenSet = true; m_keyUsages = std::move(value); }

    /**
     * <p>A list of key usage X.509 v3 extension objects.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithKeyUsages(const Aws::Vector<AwsCertificateManagerCertificateKeyUsage>& value) { SetKeyUsages(value); return *this;}

    /**
     * <p>A list of key usage X.509 v3 extension objects.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithKeyUsages(Aws::Vector<AwsCertificateManagerCertificateKeyUsage>&& value) { SetKeyUsages(std::move(value)); return *this;}

    /**
     * <p>A list of key usage X.509 v3 extension objects.</p>
     */
    inline AwsCertificateManagerCertificateDetails& AddKeyUsages(const AwsCertificateManagerCertificateKeyUsage& value) { m_keyUsagesHasBeenSet = true; m_keyUsages.push_back(value); return *this; }

    /**
     * <p>A list of key usage X.509 v3 extension objects.</p>
     */
    inline AwsCertificateManagerCertificateDetails& AddKeyUsages(AwsCertificateManagerCertificateKeyUsage&& value) { m_keyUsagesHasBeenSet = true; m_keyUsages.push_back(std::move(value)); return *this; }


    /**
     * <p>The time after which the certificate becomes invalid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetNotAfter() const{ return m_notAfter; }

    /**
     * <p>The time after which the certificate becomes invalid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }

    /**
     * <p>The time after which the certificate becomes invalid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetNotAfter(const Aws::String& value) { m_notAfterHasBeenSet = true; m_notAfter = value; }

    /**
     * <p>The time after which the certificate becomes invalid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetNotAfter(Aws::String&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::move(value); }

    /**
     * <p>The time after which the certificate becomes invalid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetNotAfter(const char* value) { m_notAfterHasBeenSet = true; m_notAfter.assign(value); }

    /**
     * <p>The time after which the certificate becomes invalid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithNotAfter(const Aws::String& value) { SetNotAfter(value); return *this;}

    /**
     * <p>The time after which the certificate becomes invalid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithNotAfter(Aws::String&& value) { SetNotAfter(std::move(value)); return *this;}

    /**
     * <p>The time after which the certificate becomes invalid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithNotAfter(const char* value) { SetNotAfter(value); return *this;}


    /**
     * <p>The time before which the certificate is not valid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetNotBefore() const{ return m_notBefore; }

    /**
     * <p>The time before which the certificate is not valid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }

    /**
     * <p>The time before which the certificate is not valid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetNotBefore(const Aws::String& value) { m_notBeforeHasBeenSet = true; m_notBefore = value; }

    /**
     * <p>The time before which the certificate is not valid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetNotBefore(Aws::String&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::move(value); }

    /**
     * <p>The time before which the certificate is not valid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetNotBefore(const char* value) { m_notBeforeHasBeenSet = true; m_notBefore.assign(value); }

    /**
     * <p>The time before which the certificate is not valid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithNotBefore(const Aws::String& value) { SetNotBefore(value); return *this;}

    /**
     * <p>The time before which the certificate is not valid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithNotBefore(Aws::String&& value) { SetNotBefore(std::move(value)); return *this;}

    /**
     * <p>The time before which the certificate is not valid.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithNotBefore(const char* value) { SetNotBefore(value); return *this;}


    /**
     * <p>Provides a value that specifies whether to add the certificate to a
     * transparency log.</p>
     */
    inline const AwsCertificateManagerCertificateOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Provides a value that specifies whether to add the certificate to a
     * transparency log.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Provides a value that specifies whether to add the certificate to a
     * transparency log.</p>
     */
    inline void SetOptions(const AwsCertificateManagerCertificateOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Provides a value that specifies whether to add the certificate to a
     * transparency log.</p>
     */
    inline void SetOptions(AwsCertificateManagerCertificateOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Provides a value that specifies whether to add the certificate to a
     * transparency log.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithOptions(const AwsCertificateManagerCertificateOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Provides a value that specifies whether to add the certificate to a
     * transparency log.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithOptions(AwsCertificateManagerCertificateOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>Whether the certificate is eligible for renewal.</p> <p>Valid values:
     * <code>ELIGIBLE</code> | <code>INELIGIBLE</code> </p>
     */
    inline const Aws::String& GetRenewalEligibility() const{ return m_renewalEligibility; }

    /**
     * <p>Whether the certificate is eligible for renewal.</p> <p>Valid values:
     * <code>ELIGIBLE</code> | <code>INELIGIBLE</code> </p>
     */
    inline bool RenewalEligibilityHasBeenSet() const { return m_renewalEligibilityHasBeenSet; }

    /**
     * <p>Whether the certificate is eligible for renewal.</p> <p>Valid values:
     * <code>ELIGIBLE</code> | <code>INELIGIBLE</code> </p>
     */
    inline void SetRenewalEligibility(const Aws::String& value) { m_renewalEligibilityHasBeenSet = true; m_renewalEligibility = value; }

    /**
     * <p>Whether the certificate is eligible for renewal.</p> <p>Valid values:
     * <code>ELIGIBLE</code> | <code>INELIGIBLE</code> </p>
     */
    inline void SetRenewalEligibility(Aws::String&& value) { m_renewalEligibilityHasBeenSet = true; m_renewalEligibility = std::move(value); }

    /**
     * <p>Whether the certificate is eligible for renewal.</p> <p>Valid values:
     * <code>ELIGIBLE</code> | <code>INELIGIBLE</code> </p>
     */
    inline void SetRenewalEligibility(const char* value) { m_renewalEligibilityHasBeenSet = true; m_renewalEligibility.assign(value); }

    /**
     * <p>Whether the certificate is eligible for renewal.</p> <p>Valid values:
     * <code>ELIGIBLE</code> | <code>INELIGIBLE</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithRenewalEligibility(const Aws::String& value) { SetRenewalEligibility(value); return *this;}

    /**
     * <p>Whether the certificate is eligible for renewal.</p> <p>Valid values:
     * <code>ELIGIBLE</code> | <code>INELIGIBLE</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithRenewalEligibility(Aws::String&& value) { SetRenewalEligibility(std::move(value)); return *this;}

    /**
     * <p>Whether the certificate is eligible for renewal.</p> <p>Valid values:
     * <code>ELIGIBLE</code> | <code>INELIGIBLE</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithRenewalEligibility(const char* value) { SetRenewalEligibility(value); return *this;}


    /**
     * <p>Information about the status of the Certificate Manager managed renewal for
     * the certificate. Provided only when the certificate type is
     * <code>AMAZON_ISSUED</code>.</p>
     */
    inline const AwsCertificateManagerCertificateRenewalSummary& GetRenewalSummary() const{ return m_renewalSummary; }

    /**
     * <p>Information about the status of the Certificate Manager managed renewal for
     * the certificate. Provided only when the certificate type is
     * <code>AMAZON_ISSUED</code>.</p>
     */
    inline bool RenewalSummaryHasBeenSet() const { return m_renewalSummaryHasBeenSet; }

    /**
     * <p>Information about the status of the Certificate Manager managed renewal for
     * the certificate. Provided only when the certificate type is
     * <code>AMAZON_ISSUED</code>.</p>
     */
    inline void SetRenewalSummary(const AwsCertificateManagerCertificateRenewalSummary& value) { m_renewalSummaryHasBeenSet = true; m_renewalSummary = value; }

    /**
     * <p>Information about the status of the Certificate Manager managed renewal for
     * the certificate. Provided only when the certificate type is
     * <code>AMAZON_ISSUED</code>.</p>
     */
    inline void SetRenewalSummary(AwsCertificateManagerCertificateRenewalSummary&& value) { m_renewalSummaryHasBeenSet = true; m_renewalSummary = std::move(value); }

    /**
     * <p>Information about the status of the Certificate Manager managed renewal for
     * the certificate. Provided only when the certificate type is
     * <code>AMAZON_ISSUED</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithRenewalSummary(const AwsCertificateManagerCertificateRenewalSummary& value) { SetRenewalSummary(value); return *this;}

    /**
     * <p>Information about the status of the Certificate Manager managed renewal for
     * the certificate. Provided only when the certificate type is
     * <code>AMAZON_ISSUED</code>.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithRenewalSummary(AwsCertificateManagerCertificateRenewalSummary&& value) { SetRenewalSummary(std::move(value)); return *this;}


    /**
     * <p>The serial number of the certificate.</p>
     */
    inline const Aws::String& GetSerial() const{ return m_serial; }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline bool SerialHasBeenSet() const { return m_serialHasBeenSet; }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline void SetSerial(const Aws::String& value) { m_serialHasBeenSet = true; m_serial = value; }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline void SetSerial(Aws::String&& value) { m_serialHasBeenSet = true; m_serial = std::move(value); }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline void SetSerial(const char* value) { m_serialHasBeenSet = true; m_serial.assign(value); }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithSerial(const Aws::String& value) { SetSerial(value); return *this;}

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithSerial(Aws::String&& value) { SetSerial(std::move(value)); return *this;}

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithSerial(const char* value) { SetSerial(value); return *this;}


    /**
     * <p>The algorithm that was used to sign the certificate.</p>
     */
    inline const Aws::String& GetSignatureAlgorithm() const{ return m_signatureAlgorithm; }

    /**
     * <p>The algorithm that was used to sign the certificate.</p>
     */
    inline bool SignatureAlgorithmHasBeenSet() const { return m_signatureAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm that was used to sign the certificate.</p>
     */
    inline void SetSignatureAlgorithm(const Aws::String& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = value; }

    /**
     * <p>The algorithm that was used to sign the certificate.</p>
     */
    inline void SetSignatureAlgorithm(Aws::String&& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = std::move(value); }

    /**
     * <p>The algorithm that was used to sign the certificate.</p>
     */
    inline void SetSignatureAlgorithm(const char* value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm.assign(value); }

    /**
     * <p>The algorithm that was used to sign the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithSignatureAlgorithm(const Aws::String& value) { SetSignatureAlgorithm(value); return *this;}

    /**
     * <p>The algorithm that was used to sign the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithSignatureAlgorithm(Aws::String&& value) { SetSignatureAlgorithm(std::move(value)); return *this;}

    /**
     * <p>The algorithm that was used to sign the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithSignatureAlgorithm(const char* value) { SetSignatureAlgorithm(value); return *this;}


    /**
     * <p>The status of the certificate.</p> <p>Valid values:
     * <code>PENDING_VALIDATION</code> | <code>ISSUED</code> | <code>INACTIVE</code> |
     * <code>EXPIRED</code> | <code>VALIDATION_TIMED_OUT</code> | <code>REVOKED</code>
     * | <code>FAILED</code> </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the certificate.</p> <p>Valid values:
     * <code>PENDING_VALIDATION</code> | <code>ISSUED</code> | <code>INACTIVE</code> |
     * <code>EXPIRED</code> | <code>VALIDATION_TIMED_OUT</code> | <code>REVOKED</code>
     * | <code>FAILED</code> </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the certificate.</p> <p>Valid values:
     * <code>PENDING_VALIDATION</code> | <code>ISSUED</code> | <code>INACTIVE</code> |
     * <code>EXPIRED</code> | <code>VALIDATION_TIMED_OUT</code> | <code>REVOKED</code>
     * | <code>FAILED</code> </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the certificate.</p> <p>Valid values:
     * <code>PENDING_VALIDATION</code> | <code>ISSUED</code> | <code>INACTIVE</code> |
     * <code>EXPIRED</code> | <code>VALIDATION_TIMED_OUT</code> | <code>REVOKED</code>
     * | <code>FAILED</code> </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the certificate.</p> <p>Valid values:
     * <code>PENDING_VALIDATION</code> | <code>ISSUED</code> | <code>INACTIVE</code> |
     * <code>EXPIRED</code> | <code>VALIDATION_TIMED_OUT</code> | <code>REVOKED</code>
     * | <code>FAILED</code> </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the certificate.</p> <p>Valid values:
     * <code>PENDING_VALIDATION</code> | <code>ISSUED</code> | <code>INACTIVE</code> |
     * <code>EXPIRED</code> | <code>VALIDATION_TIMED_OUT</code> | <code>REVOKED</code>
     * | <code>FAILED</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the certificate.</p> <p>Valid values:
     * <code>PENDING_VALIDATION</code> | <code>ISSUED</code> | <code>INACTIVE</code> |
     * <code>EXPIRED</code> | <code>VALIDATION_TIMED_OUT</code> | <code>REVOKED</code>
     * | <code>FAILED</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the certificate.</p> <p>Valid values:
     * <code>PENDING_VALIDATION</code> | <code>ISSUED</code> | <code>INACTIVE</code> |
     * <code>EXPIRED</code> | <code>VALIDATION_TIMED_OUT</code> | <code>REVOKED</code>
     * | <code>FAILED</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The name of the entity that is associated with the public key contained in
     * the certificate.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }

    /**
     * <p>The name of the entity that is associated with the public key contained in
     * the certificate.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The name of the entity that is associated with the public key contained in
     * the certificate.</p>
     */
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The name of the entity that is associated with the public key contained in
     * the certificate.</p>
     */
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The name of the entity that is associated with the public key contained in
     * the certificate.</p>
     */
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }

    /**
     * <p>The name of the entity that is associated with the public key contained in
     * the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}

    /**
     * <p>The name of the entity that is associated with the public key contained in
     * the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}

    /**
     * <p>The name of the entity that is associated with the public key contained in
     * the certificate.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithSubject(const char* value) { SetSubject(value); return *this;}


    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate.</p> <p>The subject alternative names
     * include the canonical domain name (CN) of the certificate and additional domain
     * names that can be used to connect to the website.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const{ return m_subjectAlternativeNames; }

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate.</p> <p>The subject alternative names
     * include the canonical domain name (CN) of the certificate and additional domain
     * names that can be used to connect to the website.</p>
     */
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate.</p> <p>The subject alternative names
     * include the canonical domain name (CN) of the certificate and additional domain
     * names that can be used to connect to the website.</p>
     */
    inline void SetSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate.</p> <p>The subject alternative names
     * include the canonical domain name (CN) of the certificate and additional domain
     * names that can be used to connect to the website.</p>
     */
    inline void SetSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::move(value); }

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate.</p> <p>The subject alternative names
     * include the canonical domain name (CN) of the certificate and additional domain
     * names that can be used to connect to the website.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { SetSubjectAlternativeNames(value); return *this;}

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate.</p> <p>The subject alternative names
     * include the canonical domain name (CN) of the certificate and additional domain
     * names that can be used to connect to the website.</p>
     */
    inline AwsCertificateManagerCertificateDetails& WithSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { SetSubjectAlternativeNames(std::move(value)); return *this;}

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate.</p> <p>The subject alternative names
     * include the canonical domain name (CN) of the certificate and additional domain
     * names that can be used to connect to the website.</p>
     */
    inline AwsCertificateManagerCertificateDetails& AddSubjectAlternativeNames(const Aws::String& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate.</p> <p>The subject alternative names
     * include the canonical domain name (CN) of the certificate and additional domain
     * names that can be used to connect to the website.</p>
     */
    inline AwsCertificateManagerCertificateDetails& AddSubjectAlternativeNames(Aws::String&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate.</p> <p>The subject alternative names
     * include the canonical domain name (CN) of the certificate and additional domain
     * names that can be used to connect to the website.</p>
     */
    inline AwsCertificateManagerCertificateDetails& AddSubjectAlternativeNames(const char* value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }


    /**
     * <p>The source of the certificate. For certificates that Certificate Manager
     * provides, <code>Type</code> is <code>AMAZON_ISSUED</code>. For certificates that
     * are imported with <code>ImportCertificate</code>, <code>Type</code> is
     * <code>IMPORTED</code>.</p> <p>Valid values: <code>IMPORTED</code> |
     * <code>AMAZON_ISSUED</code> | <code>PRIVATE</code> </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The source of the certificate. For certificates that Certificate Manager
     * provides, <code>Type</code> is <code>AMAZON_ISSUED</code>. For certificates that
     * are imported with <code>ImportCertificate</code>, <code>Type</code> is
     * <code>IMPORTED</code>.</p> <p>Valid values: <code>IMPORTED</code> |
     * <code>AMAZON_ISSUED</code> | <code>PRIVATE</code> </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The source of the certificate. For certificates that Certificate Manager
     * provides, <code>Type</code> is <code>AMAZON_ISSUED</code>. For certificates that
     * are imported with <code>ImportCertificate</code>, <code>Type</code> is
     * <code>IMPORTED</code>.</p> <p>Valid values: <code>IMPORTED</code> |
     * <code>AMAZON_ISSUED</code> | <code>PRIVATE</code> </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The source of the certificate. For certificates that Certificate Manager
     * provides, <code>Type</code> is <code>AMAZON_ISSUED</code>. For certificates that
     * are imported with <code>ImportCertificate</code>, <code>Type</code> is
     * <code>IMPORTED</code>.</p> <p>Valid values: <code>IMPORTED</code> |
     * <code>AMAZON_ISSUED</code> | <code>PRIVATE</code> </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The source of the certificate. For certificates that Certificate Manager
     * provides, <code>Type</code> is <code>AMAZON_ISSUED</code>. For certificates that
     * are imported with <code>ImportCertificate</code>, <code>Type</code> is
     * <code>IMPORTED</code>.</p> <p>Valid values: <code>IMPORTED</code> |
     * <code>AMAZON_ISSUED</code> | <code>PRIVATE</code> </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The source of the certificate. For certificates that Certificate Manager
     * provides, <code>Type</code> is <code>AMAZON_ISSUED</code>. For certificates that
     * are imported with <code>ImportCertificate</code>, <code>Type</code> is
     * <code>IMPORTED</code>.</p> <p>Valid values: <code>IMPORTED</code> |
     * <code>AMAZON_ISSUED</code> | <code>PRIVATE</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The source of the certificate. For certificates that Certificate Manager
     * provides, <code>Type</code> is <code>AMAZON_ISSUED</code>. For certificates that
     * are imported with <code>ImportCertificate</code>, <code>Type</code> is
     * <code>IMPORTED</code>.</p> <p>Valid values: <code>IMPORTED</code> |
     * <code>AMAZON_ISSUED</code> | <code>PRIVATE</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The source of the certificate. For certificates that Certificate Manager
     * provides, <code>Type</code> is <code>AMAZON_ISSUED</code>. For certificates that
     * are imported with <code>ImportCertificate</code>, <code>Type</code> is
     * <code>IMPORTED</code>.</p> <p>Valid values: <code>IMPORTED</code> |
     * <code>AMAZON_ISSUED</code> | <code>PRIVATE</code> </p>
     */
    inline AwsCertificateManagerCertificateDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<AwsCertificateManagerCertificateDomainValidationOption> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet = false;

    Aws::Vector<AwsCertificateManagerCertificateExtendedKeyUsage> m_extendedKeyUsages;
    bool m_extendedKeyUsagesHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_importedAt;
    bool m_importedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_inUseBy;
    bool m_inUseByHasBeenSet = false;

    Aws::String m_issuedAt;
    bool m_issuedAtHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_keyAlgorithm;
    bool m_keyAlgorithmHasBeenSet = false;

    Aws::Vector<AwsCertificateManagerCertificateKeyUsage> m_keyUsages;
    bool m_keyUsagesHasBeenSet = false;

    Aws::String m_notAfter;
    bool m_notAfterHasBeenSet = false;

    Aws::String m_notBefore;
    bool m_notBeforeHasBeenSet = false;

    AwsCertificateManagerCertificateOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::String m_renewalEligibility;
    bool m_renewalEligibilityHasBeenSet = false;

    AwsCertificateManagerCertificateRenewalSummary m_renewalSummary;
    bool m_renewalSummaryHasBeenSet = false;

    Aws::String m_serial;
    bool m_serialHasBeenSet = false;

    Aws::String m_signatureAlgorithm;
    bool m_signatureAlgorithmHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
