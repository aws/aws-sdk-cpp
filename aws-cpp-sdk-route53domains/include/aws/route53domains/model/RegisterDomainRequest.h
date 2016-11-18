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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/ContactDetail.h>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The RegisterDomain request includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API RegisterDomainRequest : public Route53DomainsRequest
  {
  public:
    RegisterDomainRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline RegisterDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline RegisterDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline RegisterDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetIdnLangCode() const{ return m_idnLangCode; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIdnLangCode(const Aws::String& value) { m_idnLangCodeHasBeenSet = true; m_idnLangCode = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIdnLangCode(Aws::String&& value) { m_idnLangCodeHasBeenSet = true; m_idnLangCode = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIdnLangCode(const char* value) { m_idnLangCodeHasBeenSet = true; m_idnLangCode.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline RegisterDomainRequest& WithIdnLangCode(const Aws::String& value) { SetIdnLangCode(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline RegisterDomainRequest& WithIdnLangCode(Aws::String&& value) { SetIdnLangCode(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline RegisterDomainRequest& WithIdnLangCode(const char* value) { SetIdnLangCode(value); return *this;}

    /**
     * <p>The number of years the domain will be registered. Domains are registered for
     * a minimum of one year. The maximum period depends on the top-level domain.</p>
     * <p>Type: Integer</p> <p>Default: 1</p> <p>Valid values: Integer from 1 to 10</p>
     * <p>Required: Yes</p>
     */
    inline int GetDurationInYears() const{ return m_durationInYears; }

    /**
     * <p>The number of years the domain will be registered. Domains are registered for
     * a minimum of one year. The maximum period depends on the top-level domain.</p>
     * <p>Type: Integer</p> <p>Default: 1</p> <p>Valid values: Integer from 1 to 10</p>
     * <p>Required: Yes</p>
     */
    inline void SetDurationInYears(int value) { m_durationInYearsHasBeenSet = true; m_durationInYears = value; }

    /**
     * <p>The number of years the domain will be registered. Domains are registered for
     * a minimum of one year. The maximum period depends on the top-level domain.</p>
     * <p>Type: Integer</p> <p>Default: 1</p> <p>Valid values: Integer from 1 to 10</p>
     * <p>Required: Yes</p>
     */
    inline RegisterDomainRequest& WithDurationInYears(int value) { SetDurationInYears(value); return *this;}

    /**
     * <p>Indicates whether the domain will be automatically renewed
     * (<code>true</code>) or not (<code>false</code>). Autorenewal only takes effect
     * after the account is charged.</p> <p>Type: Boolean</p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <p>Default: <code>true</code></p>
     * <p>Required: No</p>
     */
    inline bool GetAutoRenew() const{ return m_autoRenew; }

    /**
     * <p>Indicates whether the domain will be automatically renewed
     * (<code>true</code>) or not (<code>false</code>). Autorenewal only takes effect
     * after the account is charged.</p> <p>Type: Boolean</p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <p>Default: <code>true</code></p>
     * <p>Required: No</p>
     */
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }

    /**
     * <p>Indicates whether the domain will be automatically renewed
     * (<code>true</code>) or not (<code>false</code>). Autorenewal only takes effect
     * after the account is charged.</p> <p>Type: Boolean</p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <p>Default: <code>true</code></p>
     * <p>Required: No</p>
     */
    inline RegisterDomainRequest& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline const ContactDetail& GetAdminContact() const{ return m_adminContact; }

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline void SetAdminContact(const ContactDetail& value) { m_adminContactHasBeenSet = true; m_adminContact = value; }

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline void SetAdminContact(ContactDetail&& value) { m_adminContactHasBeenSet = true; m_adminContact = value; }

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline RegisterDomainRequest& WithAdminContact(const ContactDetail& value) { SetAdminContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline RegisterDomainRequest& WithAdminContact(ContactDetail&& value) { SetAdminContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline const ContactDetail& GetRegistrantContact() const{ return m_registrantContact; }

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline void SetRegistrantContact(const ContactDetail& value) { m_registrantContactHasBeenSet = true; m_registrantContact = value; }

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline void SetRegistrantContact(ContactDetail&& value) { m_registrantContactHasBeenSet = true; m_registrantContact = value; }

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline RegisterDomainRequest& WithRegistrantContact(const ContactDetail& value) { SetRegistrantContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline RegisterDomainRequest& WithRegistrantContact(ContactDetail&& value) { SetRegistrantContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline const ContactDetail& GetTechContact() const{ return m_techContact; }

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline void SetTechContact(const ContactDetail& value) { m_techContactHasBeenSet = true; m_techContact = value; }

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline void SetTechContact(ContactDetail&& value) { m_techContactHasBeenSet = true; m_techContact = value; }

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline RegisterDomainRequest& WithTechContact(const ContactDetail& value) { SetTechContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline RegisterDomainRequest& WithTechContact(ContactDetail&& value) { SetTechContact(value); return *this;}

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: <code>true</code></p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <p>Required: No</p>
     */
    inline bool GetPrivacyProtectAdminContact() const{ return m_privacyProtectAdminContact; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: <code>true</code></p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <p>Required: No</p>
     */
    inline void SetPrivacyProtectAdminContact(bool value) { m_privacyProtectAdminContactHasBeenSet = true; m_privacyProtectAdminContact = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: <code>true</code></p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <p>Required: No</p>
     */
    inline RegisterDomainRequest& WithPrivacyProtectAdminContact(bool value) { SetPrivacyProtectAdminContact(value); return *this;}

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: <code>true</code></p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <p>Required: No</p>
     */
    inline bool GetPrivacyProtectRegistrantContact() const{ return m_privacyProtectRegistrantContact; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: <code>true</code></p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <p>Required: No</p>
     */
    inline void SetPrivacyProtectRegistrantContact(bool value) { m_privacyProtectRegistrantContactHasBeenSet = true; m_privacyProtectRegistrantContact = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: <code>true</code></p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <p>Required: No</p>
     */
    inline RegisterDomainRequest& WithPrivacyProtectRegistrantContact(bool value) { SetPrivacyProtectRegistrantContact(value); return *this;}

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: <code>true</code></p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <p>Required: No</p>
     */
    inline bool GetPrivacyProtectTechContact() const{ return m_privacyProtectTechContact; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: <code>true</code></p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <p>Required: No</p>
     */
    inline void SetPrivacyProtectTechContact(bool value) { m_privacyProtectTechContactHasBeenSet = true; m_privacyProtectTechContact = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: <code>true</code></p> <p>Valid values:
     * <code>true</code> | <code>false</code></p> <p>Required: No</p>
     */
    inline RegisterDomainRequest& WithPrivacyProtectTechContact(bool value) { SetPrivacyProtectTechContact(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_idnLangCode;
    bool m_idnLangCodeHasBeenSet;
    int m_durationInYears;
    bool m_durationInYearsHasBeenSet;
    bool m_autoRenew;
    bool m_autoRenewHasBeenSet;
    ContactDetail m_adminContact;
    bool m_adminContactHasBeenSet;
    ContactDetail m_registrantContact;
    bool m_registrantContactHasBeenSet;
    ContactDetail m_techContact;
    bool m_techContactHasBeenSet;
    bool m_privacyProtectAdminContact;
    bool m_privacyProtectAdminContactHasBeenSet;
    bool m_privacyProtectRegistrantContact;
    bool m_privacyProtectRegistrantContactHasBeenSet;
    bool m_privacyProtectTechContact;
    bool m_privacyProtectTechContactHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
