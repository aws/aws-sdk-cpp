/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/CertificateStatus.h>
#include <aws/acm/model/CertificateType.h>
#include <aws/acm/model/KeyAlgorithm.h>
#include <aws/acm/model/RenewalEligibility.h>
#include <aws/core/utils/DateTime.h>
#include <aws/acm/model/KeyUsageName.h>
#include <aws/acm/model/ExtendedKeyUsageName.h>
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
namespace ACM
{
namespace Model
{

  /**
   * <p>This structure is returned in the response object of <a>ListCertificates</a>
   * action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/CertificateSummary">AWS
   * API Reference</a></p>
   */
  class CertificateSummary
  {
  public:
    AWS_ACM_API CertificateSummary();
    AWS_ACM_API CertificateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API CertificateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the certificate. This is of the form:</p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the certificate. This is of the form:</p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the certificate. This is of the form:</p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the certificate. This is of the form:</p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the certificate. This is of the form:</p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the certificate. This is of the form:</p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline CertificateSummary& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the certificate. This is of the form:</p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline CertificateSummary& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the certificate. This is of the form:</p> <p>
     * <code>arn:aws:acm:region:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a>.</p>
     */
    inline CertificateSummary& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate.</p>
     */
    inline CertificateSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate.</p>
     */
    inline CertificateSummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com or example.com,
     * for the certificate.</p>
     */
    inline CertificateSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate. The subject alternative names include
     * the canonical domain name (CN) of the certificate and additional domain names
     * that can be used to connect to the website. </p> <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * this parameter will only return the first 100 subject alternative names included
     * in the certificate. To display the full list of subject alternative names, use
     * <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNameSummaries() const{ return m_subjectAlternativeNameSummaries; }

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate. The subject alternative names include
     * the canonical domain name (CN) of the certificate and additional domain names
     * that can be used to connect to the website. </p> <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * this parameter will only return the first 100 subject alternative names included
     * in the certificate. To display the full list of subject alternative names, use
     * <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline bool SubjectAlternativeNameSummariesHasBeenSet() const { return m_subjectAlternativeNameSummariesHasBeenSet; }

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate. The subject alternative names include
     * the canonical domain name (CN) of the certificate and additional domain names
     * that can be used to connect to the website. </p> <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * this parameter will only return the first 100 subject alternative names included
     * in the certificate. To display the full list of subject alternative names, use
     * <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline void SetSubjectAlternativeNameSummaries(const Aws::Vector<Aws::String>& value) { m_subjectAlternativeNameSummariesHasBeenSet = true; m_subjectAlternativeNameSummaries = value; }

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate. The subject alternative names include
     * the canonical domain name (CN) of the certificate and additional domain names
     * that can be used to connect to the website. </p> <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * this parameter will only return the first 100 subject alternative names included
     * in the certificate. To display the full list of subject alternative names, use
     * <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline void SetSubjectAlternativeNameSummaries(Aws::Vector<Aws::String>&& value) { m_subjectAlternativeNameSummariesHasBeenSet = true; m_subjectAlternativeNameSummaries = std::move(value); }

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate. The subject alternative names include
     * the canonical domain name (CN) of the certificate and additional domain names
     * that can be used to connect to the website. </p> <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * this parameter will only return the first 100 subject alternative names included
     * in the certificate. To display the full list of subject alternative names, use
     * <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline CertificateSummary& WithSubjectAlternativeNameSummaries(const Aws::Vector<Aws::String>& value) { SetSubjectAlternativeNameSummaries(value); return *this;}

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate. The subject alternative names include
     * the canonical domain name (CN) of the certificate and additional domain names
     * that can be used to connect to the website. </p> <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * this parameter will only return the first 100 subject alternative names included
     * in the certificate. To display the full list of subject alternative names, use
     * <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline CertificateSummary& WithSubjectAlternativeNameSummaries(Aws::Vector<Aws::String>&& value) { SetSubjectAlternativeNameSummaries(std::move(value)); return *this;}

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate. The subject alternative names include
     * the canonical domain name (CN) of the certificate and additional domain names
     * that can be used to connect to the website. </p> <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * this parameter will only return the first 100 subject alternative names included
     * in the certificate. To display the full list of subject alternative names, use
     * <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline CertificateSummary& AddSubjectAlternativeNameSummaries(const Aws::String& value) { m_subjectAlternativeNameSummariesHasBeenSet = true; m_subjectAlternativeNameSummaries.push_back(value); return *this; }

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate. The subject alternative names include
     * the canonical domain name (CN) of the certificate and additional domain names
     * that can be used to connect to the website. </p> <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * this parameter will only return the first 100 subject alternative names included
     * in the certificate. To display the full list of subject alternative names, use
     * <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline CertificateSummary& AddSubjectAlternativeNameSummaries(Aws::String&& value) { m_subjectAlternativeNameSummariesHasBeenSet = true; m_subjectAlternativeNameSummaries.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more domain names (subject alternative names) included in the
     * certificate. This list contains the domain names that are bound to the public
     * key that is contained in the certificate. The subject alternative names include
     * the canonical domain name (CN) of the certificate and additional domain names
     * that can be used to connect to the website. </p> <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * this parameter will only return the first 100 subject alternative names included
     * in the certificate. To display the full list of subject alternative names, use
     * <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline CertificateSummary& AddSubjectAlternativeNameSummaries(const char* value) { m_subjectAlternativeNameSummariesHasBeenSet = true; m_subjectAlternativeNameSummaries.push_back(value); return *this; }


    /**
     * <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * indicates whether the full list of subject alternative names has been included
     * in the response. If false, the response includes all of the subject alternative
     * names included in the certificate. If true, the response only includes the first
     * 100 subject alternative names included in the certificate. To display the full
     * list of subject alternative names, use <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline bool GetHasAdditionalSubjectAlternativeNames() const{ return m_hasAdditionalSubjectAlternativeNames; }

    /**
     * <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * indicates whether the full list of subject alternative names has been included
     * in the response. If false, the response includes all of the subject alternative
     * names included in the certificate. If true, the response only includes the first
     * 100 subject alternative names included in the certificate. To display the full
     * list of subject alternative names, use <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline bool HasAdditionalSubjectAlternativeNamesHasBeenSet() const { return m_hasAdditionalSubjectAlternativeNamesHasBeenSet; }

    /**
     * <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * indicates whether the full list of subject alternative names has been included
     * in the response. If false, the response includes all of the subject alternative
     * names included in the certificate. If true, the response only includes the first
     * 100 subject alternative names included in the certificate. To display the full
     * list of subject alternative names, use <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline void SetHasAdditionalSubjectAlternativeNames(bool value) { m_hasAdditionalSubjectAlternativeNamesHasBeenSet = true; m_hasAdditionalSubjectAlternativeNames = value; }

    /**
     * <p>When called by <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_ListCertificates.html">ListCertificates</a>,
     * indicates whether the full list of subject alternative names has been included
     * in the response. If false, the response includes all of the subject alternative
     * names included in the certificate. If true, the response only includes the first
     * 100 subject alternative names included in the certificate. To display the full
     * list of subject alternative names, use <a
     * href="https://docs.aws.amazon.com/acm/latestAPIReference/API_DescribeCertificate.html">DescribeCertificate</a>.</p>
     */
    inline CertificateSummary& WithHasAdditionalSubjectAlternativeNames(bool value) { SetHasAdditionalSubjectAlternativeNames(value); return *this;}


    /**
     * <p>The status of the certificate.</p> <p>A certificate enters status
     * PENDING_VALIDATION upon being requested, unless it fails for any of the reasons
     * given in the troubleshooting topic <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/troubleshooting-failed.html">Certificate
     * request fails</a>. ACM makes repeated attempts to validate a certificate for 72
     * hours and then times out. If a certificate shows status FAILED or
     * VALIDATION_TIMED_OUT, delete the request, correct the issue with <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/dns-validation.html">DNS
     * validation</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/email-validation.html">Email
     * validation</a>, and try again. If validation succeeds, the certificate enters
     * status ISSUED. </p>
     */
    inline const CertificateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the certificate.</p> <p>A certificate enters status
     * PENDING_VALIDATION upon being requested, unless it fails for any of the reasons
     * given in the troubleshooting topic <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/troubleshooting-failed.html">Certificate
     * request fails</a>. ACM makes repeated attempts to validate a certificate for 72
     * hours and then times out. If a certificate shows status FAILED or
     * VALIDATION_TIMED_OUT, delete the request, correct the issue with <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/dns-validation.html">DNS
     * validation</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/email-validation.html">Email
     * validation</a>, and try again. If validation succeeds, the certificate enters
     * status ISSUED. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the certificate.</p> <p>A certificate enters status
     * PENDING_VALIDATION upon being requested, unless it fails for any of the reasons
     * given in the troubleshooting topic <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/troubleshooting-failed.html">Certificate
     * request fails</a>. ACM makes repeated attempts to validate a certificate for 72
     * hours and then times out. If a certificate shows status FAILED or
     * VALIDATION_TIMED_OUT, delete the request, correct the issue with <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/dns-validation.html">DNS
     * validation</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/email-validation.html">Email
     * validation</a>, and try again. If validation succeeds, the certificate enters
     * status ISSUED. </p>
     */
    inline void SetStatus(const CertificateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the certificate.</p> <p>A certificate enters status
     * PENDING_VALIDATION upon being requested, unless it fails for any of the reasons
     * given in the troubleshooting topic <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/troubleshooting-failed.html">Certificate
     * request fails</a>. ACM makes repeated attempts to validate a certificate for 72
     * hours and then times out. If a certificate shows status FAILED or
     * VALIDATION_TIMED_OUT, delete the request, correct the issue with <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/dns-validation.html">DNS
     * validation</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/email-validation.html">Email
     * validation</a>, and try again. If validation succeeds, the certificate enters
     * status ISSUED. </p>
     */
    inline void SetStatus(CertificateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the certificate.</p> <p>A certificate enters status
     * PENDING_VALIDATION upon being requested, unless it fails for any of the reasons
     * given in the troubleshooting topic <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/troubleshooting-failed.html">Certificate
     * request fails</a>. ACM makes repeated attempts to validate a certificate for 72
     * hours and then times out. If a certificate shows status FAILED or
     * VALIDATION_TIMED_OUT, delete the request, correct the issue with <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/dns-validation.html">DNS
     * validation</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/email-validation.html">Email
     * validation</a>, and try again. If validation succeeds, the certificate enters
     * status ISSUED. </p>
     */
    inline CertificateSummary& WithStatus(const CertificateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the certificate.</p> <p>A certificate enters status
     * PENDING_VALIDATION upon being requested, unless it fails for any of the reasons
     * given in the troubleshooting topic <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/troubleshooting-failed.html">Certificate
     * request fails</a>. ACM makes repeated attempts to validate a certificate for 72
     * hours and then times out. If a certificate shows status FAILED or
     * VALIDATION_TIMED_OUT, delete the request, correct the issue with <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/dns-validation.html">DNS
     * validation</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/email-validation.html">Email
     * validation</a>, and try again. If validation succeeds, the certificate enters
     * status ISSUED. </p>
     */
    inline CertificateSummary& WithStatus(CertificateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The source of the certificate. For certificates provided by ACM, this value
     * is <code>AMAZON_ISSUED</code>. For certificates that you imported with
     * <a>ImportCertificate</a>, this value is <code>IMPORTED</code>. ACM does not
     * provide <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> for imported certificates. For more information about the
     * differences between certificates that you import and those that ACM provides,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * Certificates</a> in the <i>Certificate Manager User Guide</i>. </p>
     */
    inline const CertificateType& GetType() const{ return m_type; }

    /**
     * <p>The source of the certificate. For certificates provided by ACM, this value
     * is <code>AMAZON_ISSUED</code>. For certificates that you imported with
     * <a>ImportCertificate</a>, this value is <code>IMPORTED</code>. ACM does not
     * provide <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> for imported certificates. For more information about the
     * differences between certificates that you import and those that ACM provides,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * Certificates</a> in the <i>Certificate Manager User Guide</i>. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The source of the certificate. For certificates provided by ACM, this value
     * is <code>AMAZON_ISSUED</code>. For certificates that you imported with
     * <a>ImportCertificate</a>, this value is <code>IMPORTED</code>. ACM does not
     * provide <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> for imported certificates. For more information about the
     * differences between certificates that you import and those that ACM provides,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * Certificates</a> in the <i>Certificate Manager User Guide</i>. </p>
     */
    inline void SetType(const CertificateType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The source of the certificate. For certificates provided by ACM, this value
     * is <code>AMAZON_ISSUED</code>. For certificates that you imported with
     * <a>ImportCertificate</a>, this value is <code>IMPORTED</code>. ACM does not
     * provide <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> for imported certificates. For more information about the
     * differences between certificates that you import and those that ACM provides,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * Certificates</a> in the <i>Certificate Manager User Guide</i>. </p>
     */
    inline void SetType(CertificateType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The source of the certificate. For certificates provided by ACM, this value
     * is <code>AMAZON_ISSUED</code>. For certificates that you imported with
     * <a>ImportCertificate</a>, this value is <code>IMPORTED</code>. ACM does not
     * provide <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> for imported certificates. For more information about the
     * differences between certificates that you import and those that ACM provides,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * Certificates</a> in the <i>Certificate Manager User Guide</i>. </p>
     */
    inline CertificateSummary& WithType(const CertificateType& value) { SetType(value); return *this;}

    /**
     * <p>The source of the certificate. For certificates provided by ACM, this value
     * is <code>AMAZON_ISSUED</code>. For certificates that you imported with
     * <a>ImportCertificate</a>, this value is <code>IMPORTED</code>. ACM does not
     * provide <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-renewal.html">managed
     * renewal</a> for imported certificates. For more information about the
     * differences between certificates that you import and those that ACM provides,
     * see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
     * Certificates</a> in the <i>Certificate Manager User Guide</i>. </p>
     */
    inline CertificateSummary& WithType(CertificateType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     */
    inline const KeyAlgorithm& GetKeyAlgorithm() const{ return m_keyAlgorithm; }

    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     */
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     */
    inline void SetKeyAlgorithm(const KeyAlgorithm& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }

    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     */
    inline void SetKeyAlgorithm(KeyAlgorithm&& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = std::move(value); }

    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     */
    inline CertificateSummary& WithKeyAlgorithm(const KeyAlgorithm& value) { SetKeyAlgorithm(value); return *this;}

    /**
     * <p>The algorithm that was used to generate the public-private key pair.</p>
     */
    inline CertificateSummary& WithKeyAlgorithm(KeyAlgorithm&& value) { SetKeyAlgorithm(std::move(value)); return *this;}


    /**
     * <p>A list of Key Usage X.509 v3 extension objects. Each object is a string value
     * that identifies the purpose of the public key contained in the certificate.
     * Possible extension values include DIGITAL_SIGNATURE, KEY_ENCHIPHERMENT,
     * NON_REPUDIATION, and more.</p>
     */
    inline const Aws::Vector<KeyUsageName>& GetKeyUsages() const{ return m_keyUsages; }

    /**
     * <p>A list of Key Usage X.509 v3 extension objects. Each object is a string value
     * that identifies the purpose of the public key contained in the certificate.
     * Possible extension values include DIGITAL_SIGNATURE, KEY_ENCHIPHERMENT,
     * NON_REPUDIATION, and more.</p>
     */
    inline bool KeyUsagesHasBeenSet() const { return m_keyUsagesHasBeenSet; }

    /**
     * <p>A list of Key Usage X.509 v3 extension objects. Each object is a string value
     * that identifies the purpose of the public key contained in the certificate.
     * Possible extension values include DIGITAL_SIGNATURE, KEY_ENCHIPHERMENT,
     * NON_REPUDIATION, and more.</p>
     */
    inline void SetKeyUsages(const Aws::Vector<KeyUsageName>& value) { m_keyUsagesHasBeenSet = true; m_keyUsages = value; }

    /**
     * <p>A list of Key Usage X.509 v3 extension objects. Each object is a string value
     * that identifies the purpose of the public key contained in the certificate.
     * Possible extension values include DIGITAL_SIGNATURE, KEY_ENCHIPHERMENT,
     * NON_REPUDIATION, and more.</p>
     */
    inline void SetKeyUsages(Aws::Vector<KeyUsageName>&& value) { m_keyUsagesHasBeenSet = true; m_keyUsages = std::move(value); }

    /**
     * <p>A list of Key Usage X.509 v3 extension objects. Each object is a string value
     * that identifies the purpose of the public key contained in the certificate.
     * Possible extension values include DIGITAL_SIGNATURE, KEY_ENCHIPHERMENT,
     * NON_REPUDIATION, and more.</p>
     */
    inline CertificateSummary& WithKeyUsages(const Aws::Vector<KeyUsageName>& value) { SetKeyUsages(value); return *this;}

    /**
     * <p>A list of Key Usage X.509 v3 extension objects. Each object is a string value
     * that identifies the purpose of the public key contained in the certificate.
     * Possible extension values include DIGITAL_SIGNATURE, KEY_ENCHIPHERMENT,
     * NON_REPUDIATION, and more.</p>
     */
    inline CertificateSummary& WithKeyUsages(Aws::Vector<KeyUsageName>&& value) { SetKeyUsages(std::move(value)); return *this;}

    /**
     * <p>A list of Key Usage X.509 v3 extension objects. Each object is a string value
     * that identifies the purpose of the public key contained in the certificate.
     * Possible extension values include DIGITAL_SIGNATURE, KEY_ENCHIPHERMENT,
     * NON_REPUDIATION, and more.</p>
     */
    inline CertificateSummary& AddKeyUsages(const KeyUsageName& value) { m_keyUsagesHasBeenSet = true; m_keyUsages.push_back(value); return *this; }

    /**
     * <p>A list of Key Usage X.509 v3 extension objects. Each object is a string value
     * that identifies the purpose of the public key contained in the certificate.
     * Possible extension values include DIGITAL_SIGNATURE, KEY_ENCHIPHERMENT,
     * NON_REPUDIATION, and more.</p>
     */
    inline CertificateSummary& AddKeyUsages(KeyUsageName&& value) { m_keyUsagesHasBeenSet = true; m_keyUsages.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID). </p>
     */
    inline const Aws::Vector<ExtendedKeyUsageName>& GetExtendedKeyUsages() const{ return m_extendedKeyUsages; }

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID). </p>
     */
    inline bool ExtendedKeyUsagesHasBeenSet() const { return m_extendedKeyUsagesHasBeenSet; }

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID). </p>
     */
    inline void SetExtendedKeyUsages(const Aws::Vector<ExtendedKeyUsageName>& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages = value; }

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID). </p>
     */
    inline void SetExtendedKeyUsages(Aws::Vector<ExtendedKeyUsageName>&& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages = std::move(value); }

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID). </p>
     */
    inline CertificateSummary& WithExtendedKeyUsages(const Aws::Vector<ExtendedKeyUsageName>& value) { SetExtendedKeyUsages(value); return *this;}

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID). </p>
     */
    inline CertificateSummary& WithExtendedKeyUsages(Aws::Vector<ExtendedKeyUsageName>&& value) { SetExtendedKeyUsages(std::move(value)); return *this;}

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID). </p>
     */
    inline CertificateSummary& AddExtendedKeyUsages(const ExtendedKeyUsageName& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages.push_back(value); return *this; }

    /**
     * <p>Contains a list of Extended Key Usage X.509 v3 extension objects. Each object
     * specifies a purpose for which the certificate public key can be used and
     * consists of a name and an object identifier (OID). </p>
     */
    inline CertificateSummary& AddExtendedKeyUsages(ExtendedKeyUsageName&& value) { m_extendedKeyUsagesHasBeenSet = true; m_extendedKeyUsages.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether the certificate is currently in use by any Amazon Web
     * Services resources.</p>
     */
    inline bool GetInUse() const{ return m_inUse; }

    /**
     * <p>Indicates whether the certificate is currently in use by any Amazon Web
     * Services resources.</p>
     */
    inline bool InUseHasBeenSet() const { return m_inUseHasBeenSet; }

    /**
     * <p>Indicates whether the certificate is currently in use by any Amazon Web
     * Services resources.</p>
     */
    inline void SetInUse(bool value) { m_inUseHasBeenSet = true; m_inUse = value; }

    /**
     * <p>Indicates whether the certificate is currently in use by any Amazon Web
     * Services resources.</p>
     */
    inline CertificateSummary& WithInUse(bool value) { SetInUse(value); return *this;}


    /**
     * <p>Indicates whether the certificate has been exported. This value exists only
     * when the certificate type is <code>PRIVATE</code>.</p>
     */
    inline bool GetExported() const{ return m_exported; }

    /**
     * <p>Indicates whether the certificate has been exported. This value exists only
     * when the certificate type is <code>PRIVATE</code>.</p>
     */
    inline bool ExportedHasBeenSet() const { return m_exportedHasBeenSet; }

    /**
     * <p>Indicates whether the certificate has been exported. This value exists only
     * when the certificate type is <code>PRIVATE</code>.</p>
     */
    inline void SetExported(bool value) { m_exportedHasBeenSet = true; m_exported = value; }

    /**
     * <p>Indicates whether the certificate has been exported. This value exists only
     * when the certificate type is <code>PRIVATE</code>.</p>
     */
    inline CertificateSummary& WithExported(bool value) { SetExported(value); return *this;}


    /**
     * <p>Specifies whether the certificate is eligible for renewal. At this time, only
     * exported private certificates can be renewed with the <a>RenewCertificate</a>
     * command.</p>
     */
    inline const RenewalEligibility& GetRenewalEligibility() const{ return m_renewalEligibility; }

    /**
     * <p>Specifies whether the certificate is eligible for renewal. At this time, only
     * exported private certificates can be renewed with the <a>RenewCertificate</a>
     * command.</p>
     */
    inline bool RenewalEligibilityHasBeenSet() const { return m_renewalEligibilityHasBeenSet; }

    /**
     * <p>Specifies whether the certificate is eligible for renewal. At this time, only
     * exported private certificates can be renewed with the <a>RenewCertificate</a>
     * command.</p>
     */
    inline void SetRenewalEligibility(const RenewalEligibility& value) { m_renewalEligibilityHasBeenSet = true; m_renewalEligibility = value; }

    /**
     * <p>Specifies whether the certificate is eligible for renewal. At this time, only
     * exported private certificates can be renewed with the <a>RenewCertificate</a>
     * command.</p>
     */
    inline void SetRenewalEligibility(RenewalEligibility&& value) { m_renewalEligibilityHasBeenSet = true; m_renewalEligibility = std::move(value); }

    /**
     * <p>Specifies whether the certificate is eligible for renewal. At this time, only
     * exported private certificates can be renewed with the <a>RenewCertificate</a>
     * command.</p>
     */
    inline CertificateSummary& WithRenewalEligibility(const RenewalEligibility& value) { SetRenewalEligibility(value); return *this;}

    /**
     * <p>Specifies whether the certificate is eligible for renewal. At this time, only
     * exported private certificates can be renewed with the <a>RenewCertificate</a>
     * command.</p>
     */
    inline CertificateSummary& WithRenewalEligibility(RenewalEligibility&& value) { SetRenewalEligibility(std::move(value)); return *this;}


    /**
     * <p>The time before which the certificate is not valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const{ return m_notBefore; }

    /**
     * <p>The time before which the certificate is not valid.</p>
     */
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }

    /**
     * <p>The time before which the certificate is not valid.</p>
     */
    inline void SetNotBefore(const Aws::Utils::DateTime& value) { m_notBeforeHasBeenSet = true; m_notBefore = value; }

    /**
     * <p>The time before which the certificate is not valid.</p>
     */
    inline void SetNotBefore(Aws::Utils::DateTime&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::move(value); }

    /**
     * <p>The time before which the certificate is not valid.</p>
     */
    inline CertificateSummary& WithNotBefore(const Aws::Utils::DateTime& value) { SetNotBefore(value); return *this;}

    /**
     * <p>The time before which the certificate is not valid.</p>
     */
    inline CertificateSummary& WithNotBefore(Aws::Utils::DateTime&& value) { SetNotBefore(std::move(value)); return *this;}


    /**
     * <p>The time after which the certificate is not valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const{ return m_notAfter; }

    /**
     * <p>The time after which the certificate is not valid.</p>
     */
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }

    /**
     * <p>The time after which the certificate is not valid.</p>
     */
    inline void SetNotAfter(const Aws::Utils::DateTime& value) { m_notAfterHasBeenSet = true; m_notAfter = value; }

    /**
     * <p>The time after which the certificate is not valid.</p>
     */
    inline void SetNotAfter(Aws::Utils::DateTime&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::move(value); }

    /**
     * <p>The time after which the certificate is not valid.</p>
     */
    inline CertificateSummary& WithNotAfter(const Aws::Utils::DateTime& value) { SetNotAfter(value); return *this;}

    /**
     * <p>The time after which the certificate is not valid.</p>
     */
    inline CertificateSummary& WithNotAfter(Aws::Utils::DateTime&& value) { SetNotAfter(std::move(value)); return *this;}


    /**
     * <p>The time at which the certificate was requested.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the certificate was requested.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the certificate was requested.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the certificate was requested.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the certificate was requested.</p>
     */
    inline CertificateSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the certificate was requested.</p>
     */
    inline CertificateSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time at which the certificate was issued. This value exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetIssuedAt() const{ return m_issuedAt; }

    /**
     * <p>The time at which the certificate was issued. This value exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>. </p>
     */
    inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }

    /**
     * <p>The time at which the certificate was issued. This value exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>. </p>
     */
    inline void SetIssuedAt(const Aws::Utils::DateTime& value) { m_issuedAtHasBeenSet = true; m_issuedAt = value; }

    /**
     * <p>The time at which the certificate was issued. This value exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>. </p>
     */
    inline void SetIssuedAt(Aws::Utils::DateTime&& value) { m_issuedAtHasBeenSet = true; m_issuedAt = std::move(value); }

    /**
     * <p>The time at which the certificate was issued. This value exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>. </p>
     */
    inline CertificateSummary& WithIssuedAt(const Aws::Utils::DateTime& value) { SetIssuedAt(value); return *this;}

    /**
     * <p>The time at which the certificate was issued. This value exists only when the
     * certificate type is <code>AMAZON_ISSUED</code>. </p>
     */
    inline CertificateSummary& WithIssuedAt(Aws::Utils::DateTime&& value) { SetIssuedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time when the certificate was imported. This value exists only
     * when the certificate type is <code>IMPORTED</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetImportedAt() const{ return m_importedAt; }

    /**
     * <p>The date and time when the certificate was imported. This value exists only
     * when the certificate type is <code>IMPORTED</code>. </p>
     */
    inline bool ImportedAtHasBeenSet() const { return m_importedAtHasBeenSet; }

    /**
     * <p>The date and time when the certificate was imported. This value exists only
     * when the certificate type is <code>IMPORTED</code>. </p>
     */
    inline void SetImportedAt(const Aws::Utils::DateTime& value) { m_importedAtHasBeenSet = true; m_importedAt = value; }

    /**
     * <p>The date and time when the certificate was imported. This value exists only
     * when the certificate type is <code>IMPORTED</code>. </p>
     */
    inline void SetImportedAt(Aws::Utils::DateTime&& value) { m_importedAtHasBeenSet = true; m_importedAt = std::move(value); }

    /**
     * <p>The date and time when the certificate was imported. This value exists only
     * when the certificate type is <code>IMPORTED</code>. </p>
     */
    inline CertificateSummary& WithImportedAt(const Aws::Utils::DateTime& value) { SetImportedAt(value); return *this;}

    /**
     * <p>The date and time when the certificate was imported. This value exists only
     * when the certificate type is <code>IMPORTED</code>. </p>
     */
    inline CertificateSummary& WithImportedAt(Aws::Utils::DateTime&& value) { SetImportedAt(std::move(value)); return *this;}


    /**
     * <p>The time at which the certificate was revoked. This value exists only when
     * the certificate status is <code>REVOKED</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const{ return m_revokedAt; }

    /**
     * <p>The time at which the certificate was revoked. This value exists only when
     * the certificate status is <code>REVOKED</code>. </p>
     */
    inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }

    /**
     * <p>The time at which the certificate was revoked. This value exists only when
     * the certificate status is <code>REVOKED</code>. </p>
     */
    inline void SetRevokedAt(const Aws::Utils::DateTime& value) { m_revokedAtHasBeenSet = true; m_revokedAt = value; }

    /**
     * <p>The time at which the certificate was revoked. This value exists only when
     * the certificate status is <code>REVOKED</code>. </p>
     */
    inline void SetRevokedAt(Aws::Utils::DateTime&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = std::move(value); }

    /**
     * <p>The time at which the certificate was revoked. This value exists only when
     * the certificate status is <code>REVOKED</code>. </p>
     */
    inline CertificateSummary& WithRevokedAt(const Aws::Utils::DateTime& value) { SetRevokedAt(value); return *this;}

    /**
     * <p>The time at which the certificate was revoked. This value exists only when
     * the certificate status is <code>REVOKED</code>. </p>
     */
    inline CertificateSummary& WithRevokedAt(Aws::Utils::DateTime&& value) { SetRevokedAt(std::move(value)); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjectAlternativeNameSummaries;
    bool m_subjectAlternativeNameSummariesHasBeenSet = false;

    bool m_hasAdditionalSubjectAlternativeNames;
    bool m_hasAdditionalSubjectAlternativeNamesHasBeenSet = false;

    CertificateStatus m_status;
    bool m_statusHasBeenSet = false;

    CertificateType m_type;
    bool m_typeHasBeenSet = false;

    KeyAlgorithm m_keyAlgorithm;
    bool m_keyAlgorithmHasBeenSet = false;

    Aws::Vector<KeyUsageName> m_keyUsages;
    bool m_keyUsagesHasBeenSet = false;

    Aws::Vector<ExtendedKeyUsageName> m_extendedKeyUsages;
    bool m_extendedKeyUsagesHasBeenSet = false;

    bool m_inUse;
    bool m_inUseHasBeenSet = false;

    bool m_exported;
    bool m_exportedHasBeenSet = false;

    RenewalEligibility m_renewalEligibility;
    bool m_renewalEligibilityHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore;
    bool m_notBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter;
    bool m_notAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_issuedAt;
    bool m_issuedAtHasBeenSet = false;

    Aws::Utils::DateTime m_importedAt;
    bool m_importedAtHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt;
    bool m_revokedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
