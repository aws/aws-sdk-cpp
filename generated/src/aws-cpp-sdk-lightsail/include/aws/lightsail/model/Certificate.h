/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/CertificateStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/RenewalSummary.h>
#include <aws/lightsail/model/DomainValidationRecord.h>
#include <aws/lightsail/model/Tag.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the full details of an Amazon Lightsail SSL/TLS certificate.</p>
   *  <p>To get a summary of a certificate, use the
   * <code>GetCertificates</code> action and ommit
   * <code>includeCertificateDetails</code> from your request. The response will
   * include only the certificate Amazon Resource Name (ARN), certificate name,
   * domain name, and tags.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/Certificate">AWS
   * API Reference</a></p>
   */
  class Certificate
  {
  public:
    AWS_LIGHTSAIL_API Certificate();
    AWS_LIGHTSAIL_API Certificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline Certificate& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline Certificate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline Certificate& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the certificate (e.g., <code>my-certificate</code>).</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the certificate (e.g., <code>my-certificate</code>).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the certificate (e.g., <code>my-certificate</code>).</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the certificate (e.g., <code>my-certificate</code>).</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the certificate (e.g., <code>my-certificate</code>).</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the certificate (e.g., <code>my-certificate</code>).</p>
     */
    inline Certificate& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the certificate (e.g., <code>my-certificate</code>).</p>
     */
    inline Certificate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate (e.g., <code>my-certificate</code>).</p>
     */
    inline Certificate& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The domain name of the certificate.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name of the certificate.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name of the certificate.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of the certificate.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name of the certificate.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name of the certificate.</p>
     */
    inline Certificate& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of the certificate.</p>
     */
    inline Certificate& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name of the certificate.</p>
     */
    inline Certificate& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The validation status of the certificate.</p>
     */
    inline const CertificateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The validation status of the certificate.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The validation status of the certificate.</p>
     */
    inline void SetStatus(const CertificateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The validation status of the certificate.</p>
     */
    inline void SetStatus(CertificateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The validation status of the certificate.</p>
     */
    inline Certificate& WithStatus(const CertificateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The validation status of the certificate.</p>
     */
    inline Certificate& WithStatus(CertificateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The serial number of the certificate.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline Certificate& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline Certificate& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline Certificate& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}


    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * of the certificate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const{ return m_subjectAlternativeNames; }

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * of the certificate.</p>
     */
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * of the certificate.</p>
     */
    inline void SetSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * of the certificate.</p>
     */
    inline void SetSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::move(value); }

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * of the certificate.</p>
     */
    inline Certificate& WithSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { SetSubjectAlternativeNames(value); return *this;}

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * of the certificate.</p>
     */
    inline Certificate& WithSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { SetSubjectAlternativeNames(std::move(value)); return *this;}

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * of the certificate.</p>
     */
    inline Certificate& AddSubjectAlternativeNames(const Aws::String& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * of the certificate.</p>
     */
    inline Certificate& AddSubjectAlternativeNames(Aws::String&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings that specify the alternate domains (e.g.,
     * <code>example2.com</code>) and subdomains (e.g., <code>blog.example.com</code>)
     * of the certificate.</p>
     */
    inline Certificate& AddSubjectAlternativeNames(const char* value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }


    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline const Aws::Vector<DomainValidationRecord>& GetDomainValidationRecords() const{ return m_domainValidationRecords; }

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline bool DomainValidationRecordsHasBeenSet() const { return m_domainValidationRecordsHasBeenSet; }

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline void SetDomainValidationRecords(const Aws::Vector<DomainValidationRecord>& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords = value; }

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline void SetDomainValidationRecords(Aws::Vector<DomainValidationRecord>&& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords = std::move(value); }

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline Certificate& WithDomainValidationRecords(const Aws::Vector<DomainValidationRecord>& value) { SetDomainValidationRecords(value); return *this;}

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline Certificate& WithDomainValidationRecords(Aws::Vector<DomainValidationRecord>&& value) { SetDomainValidationRecords(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline Certificate& AddDomainValidationRecords(const DomainValidationRecord& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the domain validation records of the
     * certificate.</p>
     */
    inline Certificate& AddDomainValidationRecords(DomainValidationRecord&& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords.push_back(std::move(value)); return *this; }


    /**
     * <p>The validation failure reason, if any, of the certificate.</p> <p>The
     * following failure reasons are possible:</p> <ul> <li> <p> <b>
     * <code>NO_AVAILABLE_CONTACTS</code> </b> - This failure applies to email
     * validation, which is not available for Lightsail certificates.</p> </li> <li>
     * <p> <b> <code>ADDITIONAL_VERIFICATION_REQUIRED</code> </b> - Lightsail requires
     * additional information to process this certificate request. This can happen as a
     * fraud-protection measure, such as when the domain ranks within the Alexa top
     * 1000 websites. To provide the required information, use the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> to contact Amazon Web Services Support.</p>  <p>You cannot
     * request a certificate for Amazon-owned domain names such as those ending in
     * amazonaws.com, cloudfront.net, or elasticbeanstalk.com.</p>  </li> <li>
     * <p> <b> <code>DOMAIN_NOT_ALLOWED</code> </b> - One or more of the domain names
     * in the certificate request was reported as an unsafe domain by <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a>. To correct the
     * problem, search for your domain name on the <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a> website. If your
     * domain is reported as suspicious, see <a
     * href="https://developers.google.com/web/fundamentals/security/hacked">Google
     * Help for Hacked Websites</a> to learn what you can do.</p> <p>If you believe
     * that the result is a false positive, notify the organization that is reporting
     * the domain. VirusTotal is an aggregate of several antivirus and URL scanners and
     * cannot remove your domain from a block list itself. After you correct the
     * problem and the VirusTotal registry has been updated, request a new
     * certificate.</p> <p>If you see this error and your domain is not included in the
     * VirusTotal list, visit the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> and create a case.</p> </li> <li> <p> <b>
     * <code>INVALID_PUBLIC_DOMAIN</code> </b> - One or more of the domain names in the
     * certificate request is not valid. Typically, this is because a domain name in
     * the request is not a valid top-level domain. Try to request a certificate again,
     * correcting any spelling errors or typos that were in the failed request, and
     * ensure that all domain names in the request are for valid top-level domains. For
     * example, you cannot request a certificate for
     * <code>example.invalidpublicdomain</code> because
     * <code>invalidpublicdomain</code> is not a valid top-level domain.</p> </li> <li>
     * <p> <b> <code>OTHER</code> </b> - Typically, this failure occurs when there is a
     * typographical error in one or more of the domain names in the certificate
     * request. Try to request a certificate again, correcting any spelling errors or
     * typos that were in the failed request. </p> </li> </ul>
     */
    inline const Aws::String& GetRequestFailureReason() const{ return m_requestFailureReason; }

    /**
     * <p>The validation failure reason, if any, of the certificate.</p> <p>The
     * following failure reasons are possible:</p> <ul> <li> <p> <b>
     * <code>NO_AVAILABLE_CONTACTS</code> </b> - This failure applies to email
     * validation, which is not available for Lightsail certificates.</p> </li> <li>
     * <p> <b> <code>ADDITIONAL_VERIFICATION_REQUIRED</code> </b> - Lightsail requires
     * additional information to process this certificate request. This can happen as a
     * fraud-protection measure, such as when the domain ranks within the Alexa top
     * 1000 websites. To provide the required information, use the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> to contact Amazon Web Services Support.</p>  <p>You cannot
     * request a certificate for Amazon-owned domain names such as those ending in
     * amazonaws.com, cloudfront.net, or elasticbeanstalk.com.</p>  </li> <li>
     * <p> <b> <code>DOMAIN_NOT_ALLOWED</code> </b> - One or more of the domain names
     * in the certificate request was reported as an unsafe domain by <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a>. To correct the
     * problem, search for your domain name on the <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a> website. If your
     * domain is reported as suspicious, see <a
     * href="https://developers.google.com/web/fundamentals/security/hacked">Google
     * Help for Hacked Websites</a> to learn what you can do.</p> <p>If you believe
     * that the result is a false positive, notify the organization that is reporting
     * the domain. VirusTotal is an aggregate of several antivirus and URL scanners and
     * cannot remove your domain from a block list itself. After you correct the
     * problem and the VirusTotal registry has been updated, request a new
     * certificate.</p> <p>If you see this error and your domain is not included in the
     * VirusTotal list, visit the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> and create a case.</p> </li> <li> <p> <b>
     * <code>INVALID_PUBLIC_DOMAIN</code> </b> - One or more of the domain names in the
     * certificate request is not valid. Typically, this is because a domain name in
     * the request is not a valid top-level domain. Try to request a certificate again,
     * correcting any spelling errors or typos that were in the failed request, and
     * ensure that all domain names in the request are for valid top-level domains. For
     * example, you cannot request a certificate for
     * <code>example.invalidpublicdomain</code> because
     * <code>invalidpublicdomain</code> is not a valid top-level domain.</p> </li> <li>
     * <p> <b> <code>OTHER</code> </b> - Typically, this failure occurs when there is a
     * typographical error in one or more of the domain names in the certificate
     * request. Try to request a certificate again, correcting any spelling errors or
     * typos that were in the failed request. </p> </li> </ul>
     */
    inline bool RequestFailureReasonHasBeenSet() const { return m_requestFailureReasonHasBeenSet; }

    /**
     * <p>The validation failure reason, if any, of the certificate.</p> <p>The
     * following failure reasons are possible:</p> <ul> <li> <p> <b>
     * <code>NO_AVAILABLE_CONTACTS</code> </b> - This failure applies to email
     * validation, which is not available for Lightsail certificates.</p> </li> <li>
     * <p> <b> <code>ADDITIONAL_VERIFICATION_REQUIRED</code> </b> - Lightsail requires
     * additional information to process this certificate request. This can happen as a
     * fraud-protection measure, such as when the domain ranks within the Alexa top
     * 1000 websites. To provide the required information, use the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> to contact Amazon Web Services Support.</p>  <p>You cannot
     * request a certificate for Amazon-owned domain names such as those ending in
     * amazonaws.com, cloudfront.net, or elasticbeanstalk.com.</p>  </li> <li>
     * <p> <b> <code>DOMAIN_NOT_ALLOWED</code> </b> - One or more of the domain names
     * in the certificate request was reported as an unsafe domain by <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a>. To correct the
     * problem, search for your domain name on the <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a> website. If your
     * domain is reported as suspicious, see <a
     * href="https://developers.google.com/web/fundamentals/security/hacked">Google
     * Help for Hacked Websites</a> to learn what you can do.</p> <p>If you believe
     * that the result is a false positive, notify the organization that is reporting
     * the domain. VirusTotal is an aggregate of several antivirus and URL scanners and
     * cannot remove your domain from a block list itself. After you correct the
     * problem and the VirusTotal registry has been updated, request a new
     * certificate.</p> <p>If you see this error and your domain is not included in the
     * VirusTotal list, visit the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> and create a case.</p> </li> <li> <p> <b>
     * <code>INVALID_PUBLIC_DOMAIN</code> </b> - One or more of the domain names in the
     * certificate request is not valid. Typically, this is because a domain name in
     * the request is not a valid top-level domain. Try to request a certificate again,
     * correcting any spelling errors or typos that were in the failed request, and
     * ensure that all domain names in the request are for valid top-level domains. For
     * example, you cannot request a certificate for
     * <code>example.invalidpublicdomain</code> because
     * <code>invalidpublicdomain</code> is not a valid top-level domain.</p> </li> <li>
     * <p> <b> <code>OTHER</code> </b> - Typically, this failure occurs when there is a
     * typographical error in one or more of the domain names in the certificate
     * request. Try to request a certificate again, correcting any spelling errors or
     * typos that were in the failed request. </p> </li> </ul>
     */
    inline void SetRequestFailureReason(const Aws::String& value) { m_requestFailureReasonHasBeenSet = true; m_requestFailureReason = value; }

    /**
     * <p>The validation failure reason, if any, of the certificate.</p> <p>The
     * following failure reasons are possible:</p> <ul> <li> <p> <b>
     * <code>NO_AVAILABLE_CONTACTS</code> </b> - This failure applies to email
     * validation, which is not available for Lightsail certificates.</p> </li> <li>
     * <p> <b> <code>ADDITIONAL_VERIFICATION_REQUIRED</code> </b> - Lightsail requires
     * additional information to process this certificate request. This can happen as a
     * fraud-protection measure, such as when the domain ranks within the Alexa top
     * 1000 websites. To provide the required information, use the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> to contact Amazon Web Services Support.</p>  <p>You cannot
     * request a certificate for Amazon-owned domain names such as those ending in
     * amazonaws.com, cloudfront.net, or elasticbeanstalk.com.</p>  </li> <li>
     * <p> <b> <code>DOMAIN_NOT_ALLOWED</code> </b> - One or more of the domain names
     * in the certificate request was reported as an unsafe domain by <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a>. To correct the
     * problem, search for your domain name on the <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a> website. If your
     * domain is reported as suspicious, see <a
     * href="https://developers.google.com/web/fundamentals/security/hacked">Google
     * Help for Hacked Websites</a> to learn what you can do.</p> <p>If you believe
     * that the result is a false positive, notify the organization that is reporting
     * the domain. VirusTotal is an aggregate of several antivirus and URL scanners and
     * cannot remove your domain from a block list itself. After you correct the
     * problem and the VirusTotal registry has been updated, request a new
     * certificate.</p> <p>If you see this error and your domain is not included in the
     * VirusTotal list, visit the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> and create a case.</p> </li> <li> <p> <b>
     * <code>INVALID_PUBLIC_DOMAIN</code> </b> - One or more of the domain names in the
     * certificate request is not valid. Typically, this is because a domain name in
     * the request is not a valid top-level domain. Try to request a certificate again,
     * correcting any spelling errors or typos that were in the failed request, and
     * ensure that all domain names in the request are for valid top-level domains. For
     * example, you cannot request a certificate for
     * <code>example.invalidpublicdomain</code> because
     * <code>invalidpublicdomain</code> is not a valid top-level domain.</p> </li> <li>
     * <p> <b> <code>OTHER</code> </b> - Typically, this failure occurs when there is a
     * typographical error in one or more of the domain names in the certificate
     * request. Try to request a certificate again, correcting any spelling errors or
     * typos that were in the failed request. </p> </li> </ul>
     */
    inline void SetRequestFailureReason(Aws::String&& value) { m_requestFailureReasonHasBeenSet = true; m_requestFailureReason = std::move(value); }

    /**
     * <p>The validation failure reason, if any, of the certificate.</p> <p>The
     * following failure reasons are possible:</p> <ul> <li> <p> <b>
     * <code>NO_AVAILABLE_CONTACTS</code> </b> - This failure applies to email
     * validation, which is not available for Lightsail certificates.</p> </li> <li>
     * <p> <b> <code>ADDITIONAL_VERIFICATION_REQUIRED</code> </b> - Lightsail requires
     * additional information to process this certificate request. This can happen as a
     * fraud-protection measure, such as when the domain ranks within the Alexa top
     * 1000 websites. To provide the required information, use the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> to contact Amazon Web Services Support.</p>  <p>You cannot
     * request a certificate for Amazon-owned domain names such as those ending in
     * amazonaws.com, cloudfront.net, or elasticbeanstalk.com.</p>  </li> <li>
     * <p> <b> <code>DOMAIN_NOT_ALLOWED</code> </b> - One or more of the domain names
     * in the certificate request was reported as an unsafe domain by <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a>. To correct the
     * problem, search for your domain name on the <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a> website. If your
     * domain is reported as suspicious, see <a
     * href="https://developers.google.com/web/fundamentals/security/hacked">Google
     * Help for Hacked Websites</a> to learn what you can do.</p> <p>If you believe
     * that the result is a false positive, notify the organization that is reporting
     * the domain. VirusTotal is an aggregate of several antivirus and URL scanners and
     * cannot remove your domain from a block list itself. After you correct the
     * problem and the VirusTotal registry has been updated, request a new
     * certificate.</p> <p>If you see this error and your domain is not included in the
     * VirusTotal list, visit the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> and create a case.</p> </li> <li> <p> <b>
     * <code>INVALID_PUBLIC_DOMAIN</code> </b> - One or more of the domain names in the
     * certificate request is not valid. Typically, this is because a domain name in
     * the request is not a valid top-level domain. Try to request a certificate again,
     * correcting any spelling errors or typos that were in the failed request, and
     * ensure that all domain names in the request are for valid top-level domains. For
     * example, you cannot request a certificate for
     * <code>example.invalidpublicdomain</code> because
     * <code>invalidpublicdomain</code> is not a valid top-level domain.</p> </li> <li>
     * <p> <b> <code>OTHER</code> </b> - Typically, this failure occurs when there is a
     * typographical error in one or more of the domain names in the certificate
     * request. Try to request a certificate again, correcting any spelling errors or
     * typos that were in the failed request. </p> </li> </ul>
     */
    inline void SetRequestFailureReason(const char* value) { m_requestFailureReasonHasBeenSet = true; m_requestFailureReason.assign(value); }

    /**
     * <p>The validation failure reason, if any, of the certificate.</p> <p>The
     * following failure reasons are possible:</p> <ul> <li> <p> <b>
     * <code>NO_AVAILABLE_CONTACTS</code> </b> - This failure applies to email
     * validation, which is not available for Lightsail certificates.</p> </li> <li>
     * <p> <b> <code>ADDITIONAL_VERIFICATION_REQUIRED</code> </b> - Lightsail requires
     * additional information to process this certificate request. This can happen as a
     * fraud-protection measure, such as when the domain ranks within the Alexa top
     * 1000 websites. To provide the required information, use the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> to contact Amazon Web Services Support.</p>  <p>You cannot
     * request a certificate for Amazon-owned domain names such as those ending in
     * amazonaws.com, cloudfront.net, or elasticbeanstalk.com.</p>  </li> <li>
     * <p> <b> <code>DOMAIN_NOT_ALLOWED</code> </b> - One or more of the domain names
     * in the certificate request was reported as an unsafe domain by <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a>. To correct the
     * problem, search for your domain name on the <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a> website. If your
     * domain is reported as suspicious, see <a
     * href="https://developers.google.com/web/fundamentals/security/hacked">Google
     * Help for Hacked Websites</a> to learn what you can do.</p> <p>If you believe
     * that the result is a false positive, notify the organization that is reporting
     * the domain. VirusTotal is an aggregate of several antivirus and URL scanners and
     * cannot remove your domain from a block list itself. After you correct the
     * problem and the VirusTotal registry has been updated, request a new
     * certificate.</p> <p>If you see this error and your domain is not included in the
     * VirusTotal list, visit the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> and create a case.</p> </li> <li> <p> <b>
     * <code>INVALID_PUBLIC_DOMAIN</code> </b> - One or more of the domain names in the
     * certificate request is not valid. Typically, this is because a domain name in
     * the request is not a valid top-level domain. Try to request a certificate again,
     * correcting any spelling errors or typos that were in the failed request, and
     * ensure that all domain names in the request are for valid top-level domains. For
     * example, you cannot request a certificate for
     * <code>example.invalidpublicdomain</code> because
     * <code>invalidpublicdomain</code> is not a valid top-level domain.</p> </li> <li>
     * <p> <b> <code>OTHER</code> </b> - Typically, this failure occurs when there is a
     * typographical error in one or more of the domain names in the certificate
     * request. Try to request a certificate again, correcting any spelling errors or
     * typos that were in the failed request. </p> </li> </ul>
     */
    inline Certificate& WithRequestFailureReason(const Aws::String& value) { SetRequestFailureReason(value); return *this;}

    /**
     * <p>The validation failure reason, if any, of the certificate.</p> <p>The
     * following failure reasons are possible:</p> <ul> <li> <p> <b>
     * <code>NO_AVAILABLE_CONTACTS</code> </b> - This failure applies to email
     * validation, which is not available for Lightsail certificates.</p> </li> <li>
     * <p> <b> <code>ADDITIONAL_VERIFICATION_REQUIRED</code> </b> - Lightsail requires
     * additional information to process this certificate request. This can happen as a
     * fraud-protection measure, such as when the domain ranks within the Alexa top
     * 1000 websites. To provide the required information, use the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> to contact Amazon Web Services Support.</p>  <p>You cannot
     * request a certificate for Amazon-owned domain names such as those ending in
     * amazonaws.com, cloudfront.net, or elasticbeanstalk.com.</p>  </li> <li>
     * <p> <b> <code>DOMAIN_NOT_ALLOWED</code> </b> - One or more of the domain names
     * in the certificate request was reported as an unsafe domain by <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a>. To correct the
     * problem, search for your domain name on the <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a> website. If your
     * domain is reported as suspicious, see <a
     * href="https://developers.google.com/web/fundamentals/security/hacked">Google
     * Help for Hacked Websites</a> to learn what you can do.</p> <p>If you believe
     * that the result is a false positive, notify the organization that is reporting
     * the domain. VirusTotal is an aggregate of several antivirus and URL scanners and
     * cannot remove your domain from a block list itself. After you correct the
     * problem and the VirusTotal registry has been updated, request a new
     * certificate.</p> <p>If you see this error and your domain is not included in the
     * VirusTotal list, visit the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> and create a case.</p> </li> <li> <p> <b>
     * <code>INVALID_PUBLIC_DOMAIN</code> </b> - One or more of the domain names in the
     * certificate request is not valid. Typically, this is because a domain name in
     * the request is not a valid top-level domain. Try to request a certificate again,
     * correcting any spelling errors or typos that were in the failed request, and
     * ensure that all domain names in the request are for valid top-level domains. For
     * example, you cannot request a certificate for
     * <code>example.invalidpublicdomain</code> because
     * <code>invalidpublicdomain</code> is not a valid top-level domain.</p> </li> <li>
     * <p> <b> <code>OTHER</code> </b> - Typically, this failure occurs when there is a
     * typographical error in one or more of the domain names in the certificate
     * request. Try to request a certificate again, correcting any spelling errors or
     * typos that were in the failed request. </p> </li> </ul>
     */
    inline Certificate& WithRequestFailureReason(Aws::String&& value) { SetRequestFailureReason(std::move(value)); return *this;}

    /**
     * <p>The validation failure reason, if any, of the certificate.</p> <p>The
     * following failure reasons are possible:</p> <ul> <li> <p> <b>
     * <code>NO_AVAILABLE_CONTACTS</code> </b> - This failure applies to email
     * validation, which is not available for Lightsail certificates.</p> </li> <li>
     * <p> <b> <code>ADDITIONAL_VERIFICATION_REQUIRED</code> </b> - Lightsail requires
     * additional information to process this certificate request. This can happen as a
     * fraud-protection measure, such as when the domain ranks within the Alexa top
     * 1000 websites. To provide the required information, use the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> to contact Amazon Web Services Support.</p>  <p>You cannot
     * request a certificate for Amazon-owned domain names such as those ending in
     * amazonaws.com, cloudfront.net, or elasticbeanstalk.com.</p>  </li> <li>
     * <p> <b> <code>DOMAIN_NOT_ALLOWED</code> </b> - One or more of the domain names
     * in the certificate request was reported as an unsafe domain by <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a>. To correct the
     * problem, search for your domain name on the <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a> website. If your
     * domain is reported as suspicious, see <a
     * href="https://developers.google.com/web/fundamentals/security/hacked">Google
     * Help for Hacked Websites</a> to learn what you can do.</p> <p>If you believe
     * that the result is a false positive, notify the organization that is reporting
     * the domain. VirusTotal is an aggregate of several antivirus and URL scanners and
     * cannot remove your domain from a block list itself. After you correct the
     * problem and the VirusTotal registry has been updated, request a new
     * certificate.</p> <p>If you see this error and your domain is not included in the
     * VirusTotal list, visit the <a
     * href="https://console.aws.amazon.com/support/home">Amazon Web Services Support
     * Center</a> and create a case.</p> </li> <li> <p> <b>
     * <code>INVALID_PUBLIC_DOMAIN</code> </b> - One or more of the domain names in the
     * certificate request is not valid. Typically, this is because a domain name in
     * the request is not a valid top-level domain. Try to request a certificate again,
     * correcting any spelling errors or typos that were in the failed request, and
     * ensure that all domain names in the request are for valid top-level domains. For
     * example, you cannot request a certificate for
     * <code>example.invalidpublicdomain</code> because
     * <code>invalidpublicdomain</code> is not a valid top-level domain.</p> </li> <li>
     * <p> <b> <code>OTHER</code> </b> - Typically, this failure occurs when there is a
     * typographical error in one or more of the domain names in the certificate
     * request. Try to request a certificate again, correcting any spelling errors or
     * typos that were in the failed request. </p> </li> </ul>
     */
    inline Certificate& WithRequestFailureReason(const char* value) { SetRequestFailureReason(value); return *this;}


    /**
     * <p>The number of Lightsail resources that the certificate is attached to.</p>
     */
    inline int GetInUseResourceCount() const{ return m_inUseResourceCount; }

    /**
     * <p>The number of Lightsail resources that the certificate is attached to.</p>
     */
    inline bool InUseResourceCountHasBeenSet() const { return m_inUseResourceCountHasBeenSet; }

    /**
     * <p>The number of Lightsail resources that the certificate is attached to.</p>
     */
    inline void SetInUseResourceCount(int value) { m_inUseResourceCountHasBeenSet = true; m_inUseResourceCount = value; }

    /**
     * <p>The number of Lightsail resources that the certificate is attached to.</p>
     */
    inline Certificate& WithInUseResourceCount(int value) { SetInUseResourceCount(value); return *this;}


    /**
     * <p>The algorithm used to generate the key pair (the public and private key) of
     * the certificate.</p>
     */
    inline const Aws::String& GetKeyAlgorithm() const{ return m_keyAlgorithm; }

    /**
     * <p>The algorithm used to generate the key pair (the public and private key) of
     * the certificate.</p>
     */
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm used to generate the key pair (the public and private key) of
     * the certificate.</p>
     */
    inline void SetKeyAlgorithm(const Aws::String& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }

    /**
     * <p>The algorithm used to generate the key pair (the public and private key) of
     * the certificate.</p>
     */
    inline void SetKeyAlgorithm(Aws::String&& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = std::move(value); }

    /**
     * <p>The algorithm used to generate the key pair (the public and private key) of
     * the certificate.</p>
     */
    inline void SetKeyAlgorithm(const char* value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm.assign(value); }

    /**
     * <p>The algorithm used to generate the key pair (the public and private key) of
     * the certificate.</p>
     */
    inline Certificate& WithKeyAlgorithm(const Aws::String& value) { SetKeyAlgorithm(value); return *this;}

    /**
     * <p>The algorithm used to generate the key pair (the public and private key) of
     * the certificate.</p>
     */
    inline Certificate& WithKeyAlgorithm(Aws::String&& value) { SetKeyAlgorithm(std::move(value)); return *this;}

    /**
     * <p>The algorithm used to generate the key pair (the public and private key) of
     * the certificate.</p>
     */
    inline Certificate& WithKeyAlgorithm(const char* value) { SetKeyAlgorithm(value); return *this;}


    /**
     * <p>The timestamp when the certificate was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the certificate was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the certificate was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the certificate was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the certificate was created.</p>
     */
    inline Certificate& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the certificate was created.</p>
     */
    inline Certificate& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the certificate was issued.</p>
     */
    inline const Aws::Utils::DateTime& GetIssuedAt() const{ return m_issuedAt; }

    /**
     * <p>The timestamp when the certificate was issued.</p>
     */
    inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }

    /**
     * <p>The timestamp when the certificate was issued.</p>
     */
    inline void SetIssuedAt(const Aws::Utils::DateTime& value) { m_issuedAtHasBeenSet = true; m_issuedAt = value; }

    /**
     * <p>The timestamp when the certificate was issued.</p>
     */
    inline void SetIssuedAt(Aws::Utils::DateTime&& value) { m_issuedAtHasBeenSet = true; m_issuedAt = std::move(value); }

    /**
     * <p>The timestamp when the certificate was issued.</p>
     */
    inline Certificate& WithIssuedAt(const Aws::Utils::DateTime& value) { SetIssuedAt(value); return *this;}

    /**
     * <p>The timestamp when the certificate was issued.</p>
     */
    inline Certificate& WithIssuedAt(Aws::Utils::DateTime&& value) { SetIssuedAt(std::move(value)); return *this;}


    /**
     * <p>The certificate authority that issued the certificate.</p>
     */
    inline const Aws::String& GetIssuerCA() const{ return m_issuerCA; }

    /**
     * <p>The certificate authority that issued the certificate.</p>
     */
    inline bool IssuerCAHasBeenSet() const { return m_issuerCAHasBeenSet; }

    /**
     * <p>The certificate authority that issued the certificate.</p>
     */
    inline void SetIssuerCA(const Aws::String& value) { m_issuerCAHasBeenSet = true; m_issuerCA = value; }

    /**
     * <p>The certificate authority that issued the certificate.</p>
     */
    inline void SetIssuerCA(Aws::String&& value) { m_issuerCAHasBeenSet = true; m_issuerCA = std::move(value); }

    /**
     * <p>The certificate authority that issued the certificate.</p>
     */
    inline void SetIssuerCA(const char* value) { m_issuerCAHasBeenSet = true; m_issuerCA.assign(value); }

    /**
     * <p>The certificate authority that issued the certificate.</p>
     */
    inline Certificate& WithIssuerCA(const Aws::String& value) { SetIssuerCA(value); return *this;}

    /**
     * <p>The certificate authority that issued the certificate.</p>
     */
    inline Certificate& WithIssuerCA(Aws::String&& value) { SetIssuerCA(std::move(value)); return *this;}

    /**
     * <p>The certificate authority that issued the certificate.</p>
     */
    inline Certificate& WithIssuerCA(const char* value) { SetIssuerCA(value); return *this;}


    /**
     * <p>The timestamp when the certificate is first valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const{ return m_notBefore; }

    /**
     * <p>The timestamp when the certificate is first valid.</p>
     */
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }

    /**
     * <p>The timestamp when the certificate is first valid.</p>
     */
    inline void SetNotBefore(const Aws::Utils::DateTime& value) { m_notBeforeHasBeenSet = true; m_notBefore = value; }

    /**
     * <p>The timestamp when the certificate is first valid.</p>
     */
    inline void SetNotBefore(Aws::Utils::DateTime&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::move(value); }

    /**
     * <p>The timestamp when the certificate is first valid.</p>
     */
    inline Certificate& WithNotBefore(const Aws::Utils::DateTime& value) { SetNotBefore(value); return *this;}

    /**
     * <p>The timestamp when the certificate is first valid.</p>
     */
    inline Certificate& WithNotBefore(Aws::Utils::DateTime&& value) { SetNotBefore(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the certificate expires.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const{ return m_notAfter; }

    /**
     * <p>The timestamp when the certificate expires.</p>
     */
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }

    /**
     * <p>The timestamp when the certificate expires.</p>
     */
    inline void SetNotAfter(const Aws::Utils::DateTime& value) { m_notAfterHasBeenSet = true; m_notAfter = value; }

    /**
     * <p>The timestamp when the certificate expires.</p>
     */
    inline void SetNotAfter(Aws::Utils::DateTime&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::move(value); }

    /**
     * <p>The timestamp when the certificate expires.</p>
     */
    inline Certificate& WithNotAfter(const Aws::Utils::DateTime& value) { SetNotAfter(value); return *this;}

    /**
     * <p>The timestamp when the certificate expires.</p>
     */
    inline Certificate& WithNotAfter(Aws::Utils::DateTime&& value) { SetNotAfter(std::move(value)); return *this;}


    /**
     * <p>The renewal eligibility of the certificate.</p>
     */
    inline const Aws::String& GetEligibleToRenew() const{ return m_eligibleToRenew; }

    /**
     * <p>The renewal eligibility of the certificate.</p>
     */
    inline bool EligibleToRenewHasBeenSet() const { return m_eligibleToRenewHasBeenSet; }

    /**
     * <p>The renewal eligibility of the certificate.</p>
     */
    inline void SetEligibleToRenew(const Aws::String& value) { m_eligibleToRenewHasBeenSet = true; m_eligibleToRenew = value; }

    /**
     * <p>The renewal eligibility of the certificate.</p>
     */
    inline void SetEligibleToRenew(Aws::String&& value) { m_eligibleToRenewHasBeenSet = true; m_eligibleToRenew = std::move(value); }

    /**
     * <p>The renewal eligibility of the certificate.</p>
     */
    inline void SetEligibleToRenew(const char* value) { m_eligibleToRenewHasBeenSet = true; m_eligibleToRenew.assign(value); }

    /**
     * <p>The renewal eligibility of the certificate.</p>
     */
    inline Certificate& WithEligibleToRenew(const Aws::String& value) { SetEligibleToRenew(value); return *this;}

    /**
     * <p>The renewal eligibility of the certificate.</p>
     */
    inline Certificate& WithEligibleToRenew(Aws::String&& value) { SetEligibleToRenew(std::move(value)); return *this;}

    /**
     * <p>The renewal eligibility of the certificate.</p>
     */
    inline Certificate& WithEligibleToRenew(const char* value) { SetEligibleToRenew(value); return *this;}


    /**
     * <p>An object that describes the status of the certificate renewal managed by
     * Lightsail.</p>
     */
    inline const RenewalSummary& GetRenewalSummary() const{ return m_renewalSummary; }

    /**
     * <p>An object that describes the status of the certificate renewal managed by
     * Lightsail.</p>
     */
    inline bool RenewalSummaryHasBeenSet() const { return m_renewalSummaryHasBeenSet; }

    /**
     * <p>An object that describes the status of the certificate renewal managed by
     * Lightsail.</p>
     */
    inline void SetRenewalSummary(const RenewalSummary& value) { m_renewalSummaryHasBeenSet = true; m_renewalSummary = value; }

    /**
     * <p>An object that describes the status of the certificate renewal managed by
     * Lightsail.</p>
     */
    inline void SetRenewalSummary(RenewalSummary&& value) { m_renewalSummaryHasBeenSet = true; m_renewalSummary = std::move(value); }

    /**
     * <p>An object that describes the status of the certificate renewal managed by
     * Lightsail.</p>
     */
    inline Certificate& WithRenewalSummary(const RenewalSummary& value) { SetRenewalSummary(value); return *this;}

    /**
     * <p>An object that describes the status of the certificate renewal managed by
     * Lightsail.</p>
     */
    inline Certificate& WithRenewalSummary(RenewalSummary&& value) { SetRenewalSummary(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the certificate was revoked. This value is present only
     * when the certificate status is <code>REVOKED</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const{ return m_revokedAt; }

    /**
     * <p>The timestamp when the certificate was revoked. This value is present only
     * when the certificate status is <code>REVOKED</code>.</p>
     */
    inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }

    /**
     * <p>The timestamp when the certificate was revoked. This value is present only
     * when the certificate status is <code>REVOKED</code>.</p>
     */
    inline void SetRevokedAt(const Aws::Utils::DateTime& value) { m_revokedAtHasBeenSet = true; m_revokedAt = value; }

    /**
     * <p>The timestamp when the certificate was revoked. This value is present only
     * when the certificate status is <code>REVOKED</code>.</p>
     */
    inline void SetRevokedAt(Aws::Utils::DateTime&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = std::move(value); }

    /**
     * <p>The timestamp when the certificate was revoked. This value is present only
     * when the certificate status is <code>REVOKED</code>.</p>
     */
    inline Certificate& WithRevokedAt(const Aws::Utils::DateTime& value) { SetRevokedAt(value); return *this;}

    /**
     * <p>The timestamp when the certificate was revoked. This value is present only
     * when the certificate status is <code>REVOKED</code>.</p>
     */
    inline Certificate& WithRevokedAt(Aws::Utils::DateTime&& value) { SetRevokedAt(std::move(value)); return *this;}


    /**
     * <p>The reason the certificate was revoked. This value is present only when the
     * certificate status is <code>REVOKED</code>.</p>
     */
    inline const Aws::String& GetRevocationReason() const{ return m_revocationReason; }

    /**
     * <p>The reason the certificate was revoked. This value is present only when the
     * certificate status is <code>REVOKED</code>.</p>
     */
    inline bool RevocationReasonHasBeenSet() const { return m_revocationReasonHasBeenSet; }

    /**
     * <p>The reason the certificate was revoked. This value is present only when the
     * certificate status is <code>REVOKED</code>.</p>
     */
    inline void SetRevocationReason(const Aws::String& value) { m_revocationReasonHasBeenSet = true; m_revocationReason = value; }

    /**
     * <p>The reason the certificate was revoked. This value is present only when the
     * certificate status is <code>REVOKED</code>.</p>
     */
    inline void SetRevocationReason(Aws::String&& value) { m_revocationReasonHasBeenSet = true; m_revocationReason = std::move(value); }

    /**
     * <p>The reason the certificate was revoked. This value is present only when the
     * certificate status is <code>REVOKED</code>.</p>
     */
    inline void SetRevocationReason(const char* value) { m_revocationReasonHasBeenSet = true; m_revocationReason.assign(value); }

    /**
     * <p>The reason the certificate was revoked. This value is present only when the
     * certificate status is <code>REVOKED</code>.</p>
     */
    inline Certificate& WithRevocationReason(const Aws::String& value) { SetRevocationReason(value); return *this;}

    /**
     * <p>The reason the certificate was revoked. This value is present only when the
     * certificate status is <code>REVOKED</code>.</p>
     */
    inline Certificate& WithRevocationReason(Aws::String&& value) { SetRevocationReason(std::move(value)); return *this;}

    /**
     * <p>The reason the certificate was revoked. This value is present only when the
     * certificate status is <code>REVOKED</code>.</p>
     */
    inline Certificate& WithRevocationReason(const char* value) { SetRevocationReason(value); return *this;}


    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline Certificate& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline Certificate& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline Certificate& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline Certificate& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail certificate. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const{ return m_supportCode; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail certificate. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail certificate. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const Aws::String& value) { m_supportCodeHasBeenSet = true; m_supportCode = value; }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail certificate. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(Aws::String&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::move(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail certificate. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline void SetSupportCode(const char* value) { m_supportCodeHasBeenSet = true; m_supportCode.assign(value); }

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail certificate. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline Certificate& WithSupportCode(const Aws::String& value) { SetSupportCode(value); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail certificate. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline Certificate& WithSupportCode(Aws::String&& value) { SetSupportCode(std::move(value)); return *this;}

    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail certificate. This code enables our support team
     * to look up your Lightsail information more easily.</p>
     */
    inline Certificate& WithSupportCode(const char* value) { SetSupportCode(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    CertificateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;

    Aws::Vector<DomainValidationRecord> m_domainValidationRecords;
    bool m_domainValidationRecordsHasBeenSet = false;

    Aws::String m_requestFailureReason;
    bool m_requestFailureReasonHasBeenSet = false;

    int m_inUseResourceCount;
    bool m_inUseResourceCountHasBeenSet = false;

    Aws::String m_keyAlgorithm;
    bool m_keyAlgorithmHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_issuedAt;
    bool m_issuedAtHasBeenSet = false;

    Aws::String m_issuerCA;
    bool m_issuerCAHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore;
    bool m_notBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter;
    bool m_notAfterHasBeenSet = false;

    Aws::String m_eligibleToRenew;
    bool m_eligibleToRenewHasBeenSet = false;

    RenewalSummary m_renewalSummary;
    bool m_renewalSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt;
    bool m_revokedAtHasBeenSet = false;

    Aws::String m_revocationReason;
    bool m_revocationReasonHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
