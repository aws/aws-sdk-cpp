/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/acm/model/DomainStatus.h>
#include <aws/acm/model/ResourceRecord.h>
#include <aws/acm/model/ValidationMethod.h>
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
   * <p>Contains information about the validation of each domain name in the
   * certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DomainValidation">AWS
   * API Reference</a></p>
   */
  class AWS_ACM_API DomainValidation
  {
  public:
    DomainValidation();
    DomainValidation(Aws::Utils::Json::JsonView jsonValue);
    DomainValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A fully qualified domain name (FQDN) in the certificate. For example,
     * <code>www.example.com</code> or <code>example.com</code>. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>A fully qualified domain name (FQDN) in the certificate. For example,
     * <code>www.example.com</code> or <code>example.com</code>. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>A fully qualified domain name (FQDN) in the certificate. For example,
     * <code>www.example.com</code> or <code>example.com</code>. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>A fully qualified domain name (FQDN) in the certificate. For example,
     * <code>www.example.com</code> or <code>example.com</code>. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>A fully qualified domain name (FQDN) in the certificate. For example,
     * <code>www.example.com</code> or <code>example.com</code>. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>A fully qualified domain name (FQDN) in the certificate. For example,
     * <code>www.example.com</code> or <code>example.com</code>. </p>
     */
    inline DomainValidation& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>A fully qualified domain name (FQDN) in the certificate. For example,
     * <code>www.example.com</code> or <code>example.com</code>. </p>
     */
    inline DomainValidation& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>A fully qualified domain name (FQDN) in the certificate. For example,
     * <code>www.example.com</code> or <code>example.com</code>. </p>
     */
    inline DomainValidation& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>A list of email addresses that ACM used to send domain validation emails.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidationEmails() const{ return m_validationEmails; }

    /**
     * <p>A list of email addresses that ACM used to send domain validation emails.</p>
     */
    inline bool ValidationEmailsHasBeenSet() const { return m_validationEmailsHasBeenSet; }

    /**
     * <p>A list of email addresses that ACM used to send domain validation emails.</p>
     */
    inline void SetValidationEmails(const Aws::Vector<Aws::String>& value) { m_validationEmailsHasBeenSet = true; m_validationEmails = value; }

    /**
     * <p>A list of email addresses that ACM used to send domain validation emails.</p>
     */
    inline void SetValidationEmails(Aws::Vector<Aws::String>&& value) { m_validationEmailsHasBeenSet = true; m_validationEmails = std::move(value); }

    /**
     * <p>A list of email addresses that ACM used to send domain validation emails.</p>
     */
    inline DomainValidation& WithValidationEmails(const Aws::Vector<Aws::String>& value) { SetValidationEmails(value); return *this;}

    /**
     * <p>A list of email addresses that ACM used to send domain validation emails.</p>
     */
    inline DomainValidation& WithValidationEmails(Aws::Vector<Aws::String>&& value) { SetValidationEmails(std::move(value)); return *this;}

    /**
     * <p>A list of email addresses that ACM used to send domain validation emails.</p>
     */
    inline DomainValidation& AddValidationEmails(const Aws::String& value) { m_validationEmailsHasBeenSet = true; m_validationEmails.push_back(value); return *this; }

    /**
     * <p>A list of email addresses that ACM used to send domain validation emails.</p>
     */
    inline DomainValidation& AddValidationEmails(Aws::String&& value) { m_validationEmailsHasBeenSet = true; m_validationEmails.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of email addresses that ACM used to send domain validation emails.</p>
     */
    inline DomainValidation& AddValidationEmails(const char* value) { m_validationEmailsHasBeenSet = true; m_validationEmails.push_back(value); return *this; }


    /**
     * <p>The domain name that ACM used to send domain validation emails.</p>
     */
    inline const Aws::String& GetValidationDomain() const{ return m_validationDomain; }

    /**
     * <p>The domain name that ACM used to send domain validation emails.</p>
     */
    inline bool ValidationDomainHasBeenSet() const { return m_validationDomainHasBeenSet; }

    /**
     * <p>The domain name that ACM used to send domain validation emails.</p>
     */
    inline void SetValidationDomain(const Aws::String& value) { m_validationDomainHasBeenSet = true; m_validationDomain = value; }

    /**
     * <p>The domain name that ACM used to send domain validation emails.</p>
     */
    inline void SetValidationDomain(Aws::String&& value) { m_validationDomainHasBeenSet = true; m_validationDomain = std::move(value); }

    /**
     * <p>The domain name that ACM used to send domain validation emails.</p>
     */
    inline void SetValidationDomain(const char* value) { m_validationDomainHasBeenSet = true; m_validationDomain.assign(value); }

    /**
     * <p>The domain name that ACM used to send domain validation emails.</p>
     */
    inline DomainValidation& WithValidationDomain(const Aws::String& value) { SetValidationDomain(value); return *this;}

    /**
     * <p>The domain name that ACM used to send domain validation emails.</p>
     */
    inline DomainValidation& WithValidationDomain(Aws::String&& value) { SetValidationDomain(std::move(value)); return *this;}

    /**
     * <p>The domain name that ACM used to send domain validation emails.</p>
     */
    inline DomainValidation& WithValidationDomain(const char* value) { SetValidationDomain(value); return *this;}


    /**
     * <p>The validation status of the domain name. This can be one of the following
     * values:</p> <ul> <li> <p> <code>PENDING_VALIDATION</code> </p> </li> <li> <p>
     * <code/>SUCCESS</p> </li> <li> <p> <code/>FAILED</p> </li> </ul>
     */
    inline const DomainStatus& GetValidationStatus() const{ return m_validationStatus; }

    /**
     * <p>The validation status of the domain name. This can be one of the following
     * values:</p> <ul> <li> <p> <code>PENDING_VALIDATION</code> </p> </li> <li> <p>
     * <code/>SUCCESS</p> </li> <li> <p> <code/>FAILED</p> </li> </ul>
     */
    inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }

    /**
     * <p>The validation status of the domain name. This can be one of the following
     * values:</p> <ul> <li> <p> <code>PENDING_VALIDATION</code> </p> </li> <li> <p>
     * <code/>SUCCESS</p> </li> <li> <p> <code/>FAILED</p> </li> </ul>
     */
    inline void SetValidationStatus(const DomainStatus& value) { m_validationStatusHasBeenSet = true; m_validationStatus = value; }

    /**
     * <p>The validation status of the domain name. This can be one of the following
     * values:</p> <ul> <li> <p> <code>PENDING_VALIDATION</code> </p> </li> <li> <p>
     * <code/>SUCCESS</p> </li> <li> <p> <code/>FAILED</p> </li> </ul>
     */
    inline void SetValidationStatus(DomainStatus&& value) { m_validationStatusHasBeenSet = true; m_validationStatus = std::move(value); }

    /**
     * <p>The validation status of the domain name. This can be one of the following
     * values:</p> <ul> <li> <p> <code>PENDING_VALIDATION</code> </p> </li> <li> <p>
     * <code/>SUCCESS</p> </li> <li> <p> <code/>FAILED</p> </li> </ul>
     */
    inline DomainValidation& WithValidationStatus(const DomainStatus& value) { SetValidationStatus(value); return *this;}

    /**
     * <p>The validation status of the domain name. This can be one of the following
     * values:</p> <ul> <li> <p> <code>PENDING_VALIDATION</code> </p> </li> <li> <p>
     * <code/>SUCCESS</p> </li> <li> <p> <code/>FAILED</p> </li> </ul>
     */
    inline DomainValidation& WithValidationStatus(DomainStatus&& value) { SetValidationStatus(std::move(value)); return *this;}


    /**
     * <p>Contains the CNAME record that you add to your DNS database for domain
     * validation. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">Use
     * DNS to Validate Domain Ownership</a>.</p>
     */
    inline const ResourceRecord& GetResourceRecord() const{ return m_resourceRecord; }

    /**
     * <p>Contains the CNAME record that you add to your DNS database for domain
     * validation. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">Use
     * DNS to Validate Domain Ownership</a>.</p>
     */
    inline bool ResourceRecordHasBeenSet() const { return m_resourceRecordHasBeenSet; }

    /**
     * <p>Contains the CNAME record that you add to your DNS database for domain
     * validation. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">Use
     * DNS to Validate Domain Ownership</a>.</p>
     */
    inline void SetResourceRecord(const ResourceRecord& value) { m_resourceRecordHasBeenSet = true; m_resourceRecord = value; }

    /**
     * <p>Contains the CNAME record that you add to your DNS database for domain
     * validation. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">Use
     * DNS to Validate Domain Ownership</a>.</p>
     */
    inline void SetResourceRecord(ResourceRecord&& value) { m_resourceRecordHasBeenSet = true; m_resourceRecord = std::move(value); }

    /**
     * <p>Contains the CNAME record that you add to your DNS database for domain
     * validation. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">Use
     * DNS to Validate Domain Ownership</a>.</p>
     */
    inline DomainValidation& WithResourceRecord(const ResourceRecord& value) { SetResourceRecord(value); return *this;}

    /**
     * <p>Contains the CNAME record that you add to your DNS database for domain
     * validation. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">Use
     * DNS to Validate Domain Ownership</a>.</p>
     */
    inline DomainValidation& WithResourceRecord(ResourceRecord&& value) { SetResourceRecord(std::move(value)); return *this;}


    /**
     * <p>Specifies the domain validation method.</p>
     */
    inline const ValidationMethod& GetValidationMethod() const{ return m_validationMethod; }

    /**
     * <p>Specifies the domain validation method.</p>
     */
    inline bool ValidationMethodHasBeenSet() const { return m_validationMethodHasBeenSet; }

    /**
     * <p>Specifies the domain validation method.</p>
     */
    inline void SetValidationMethod(const ValidationMethod& value) { m_validationMethodHasBeenSet = true; m_validationMethod = value; }

    /**
     * <p>Specifies the domain validation method.</p>
     */
    inline void SetValidationMethod(ValidationMethod&& value) { m_validationMethodHasBeenSet = true; m_validationMethod = std::move(value); }

    /**
     * <p>Specifies the domain validation method.</p>
     */
    inline DomainValidation& WithValidationMethod(const ValidationMethod& value) { SetValidationMethod(value); return *this;}

    /**
     * <p>Specifies the domain validation method.</p>
     */
    inline DomainValidation& WithValidationMethod(ValidationMethod&& value) { SetValidationMethod(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::Vector<Aws::String> m_validationEmails;
    bool m_validationEmailsHasBeenSet;

    Aws::String m_validationDomain;
    bool m_validationDomainHasBeenSet;

    DomainStatus m_validationStatus;
    bool m_validationStatusHasBeenSet;

    ResourceRecord m_resourceRecord;
    bool m_resourceRecordHasBeenSet;

    ValidationMethod m_validationMethod;
    bool m_validationMethodHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
