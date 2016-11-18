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
   * <p>The UpdateDomainContact request includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API UpdateDomainContactRequest : public Route53DomainsRequest
  {
  public:
    UpdateDomainContactRequest();
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
    inline UpdateDomainContactRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline UpdateDomainContactRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline UpdateDomainContactRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

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
    inline UpdateDomainContactRequest& WithAdminContact(const ContactDetail& value) { SetAdminContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline UpdateDomainContactRequest& WithAdminContact(ContactDetail&& value) { SetAdminContact(value); return *this;}

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
    inline UpdateDomainContactRequest& WithRegistrantContact(const ContactDetail& value) { SetRegistrantContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline UpdateDomainContactRequest& WithRegistrantContact(ContactDetail&& value) { SetRegistrantContact(value); return *this;}

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
    inline UpdateDomainContactRequest& WithTechContact(const ContactDetail& value) { SetTechContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p> <p>Type: Complex</p> <p>Children:
     * <code>FirstName</code>, <code>MiddleName</code>, <code>LastName</code>,
     * <code>ContactType</code>, <code>OrganizationName</code>,
     * <code>AddressLine1</code>, <code>AddressLine2</code>, <code>City</code>,
     * <code>State</code>, <code>CountryCode</code>, <code>ZipCode</code>,
     * <code>PhoneNumber</code>, <code>Email</code>, <code>Fax</code>,
     * <code>ExtraParams</code></p> <p>Required: Yes</p>
     */
    inline UpdateDomainContactRequest& WithTechContact(ContactDetail&& value) { SetTechContact(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    ContactDetail m_adminContact;
    bool m_adminContactHasBeenSet;
    ContactDetail m_registrantContact;
    bool m_registrantContactHasBeenSet;
    ContactDetail m_techContact;
    bool m_techContactHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
