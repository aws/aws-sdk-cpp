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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/ContactDetail.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The RegisterDomain request includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RegisterDomainRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API RegisterDomainRequest : public Route53DomainsRequest
  {
  public:
    RegisterDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterDomain"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The domain name that you want to register.</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Internationalized Domain Names are not supported.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name that you want to register.</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Internationalized Domain Names are not supported.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name that you want to register.</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Internationalized Domain Names are not supported.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name that you want to register.</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Internationalized Domain Names are not supported.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name that you want to register.</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Internationalized Domain Names are not supported.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name that you want to register.</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Internationalized Domain Names are not supported.</p>
     */
    inline RegisterDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name that you want to register.</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Internationalized Domain Names are not supported.</p>
     */
    inline RegisterDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name that you want to register.</p> <p>Constraints: The domain
     * name can contain only the letters a through z, the numbers 0 through 9, and
     * hyphen (-). Internationalized Domain Names are not supported.</p>
     */
    inline RegisterDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetIdnLangCode() const{ return m_idnLangCode; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool IdnLangCodeHasBeenSet() const { return m_idnLangCodeHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIdnLangCode(const Aws::String& value) { m_idnLangCodeHasBeenSet = true; m_idnLangCode = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIdnLangCode(Aws::String&& value) { m_idnLangCodeHasBeenSet = true; m_idnLangCode = std::move(value); }

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
    inline RegisterDomainRequest& WithIdnLangCode(Aws::String&& value) { SetIdnLangCode(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline RegisterDomainRequest& WithIdnLangCode(const char* value) { SetIdnLangCode(value); return *this;}


    /**
     * <p>The number of years that you want to register the domain for. Domains are
     * registered for a minimum of one year. The maximum period depends on the
     * top-level domain. For the range of valid values for your domain, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p> <p>Default: 1</p>
     */
    inline int GetDurationInYears() const{ return m_durationInYears; }

    /**
     * <p>The number of years that you want to register the domain for. Domains are
     * registered for a minimum of one year. The maximum period depends on the
     * top-level domain. For the range of valid values for your domain, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p> <p>Default: 1</p>
     */
    inline bool DurationInYearsHasBeenSet() const { return m_durationInYearsHasBeenSet; }

    /**
     * <p>The number of years that you want to register the domain for. Domains are
     * registered for a minimum of one year. The maximum period depends on the
     * top-level domain. For the range of valid values for your domain, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p> <p>Default: 1</p>
     */
    inline void SetDurationInYears(int value) { m_durationInYearsHasBeenSet = true; m_durationInYears = value; }

    /**
     * <p>The number of years that you want to register the domain for. Domains are
     * registered for a minimum of one year. The maximum period depends on the
     * top-level domain. For the range of valid values for your domain, see <a
     * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p> <p>Default: 1</p>
     */
    inline RegisterDomainRequest& WithDurationInYears(int value) { SetDurationInYears(value); return *this;}


    /**
     * <p>Indicates whether the domain will be automatically renewed
     * (<code>true</code>) or not (<code>false</code>). Autorenewal only takes effect
     * after the account is charged.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetAutoRenew() const{ return m_autoRenew; }

    /**
     * <p>Indicates whether the domain will be automatically renewed
     * (<code>true</code>) or not (<code>false</code>). Autorenewal only takes effect
     * after the account is charged.</p> <p>Default: <code>true</code> </p>
     */
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }

    /**
     * <p>Indicates whether the domain will be automatically renewed
     * (<code>true</code>) or not (<code>false</code>). Autorenewal only takes effect
     * after the account is charged.</p> <p>Default: <code>true</code> </p>
     */
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }

    /**
     * <p>Indicates whether the domain will be automatically renewed
     * (<code>true</code>) or not (<code>false</code>). Autorenewal only takes effect
     * after the account is charged.</p> <p>Default: <code>true</code> </p>
     */
    inline RegisterDomainRequest& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}


    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetAdminContact() const{ return m_adminContact; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline bool AdminContactHasBeenSet() const { return m_adminContactHasBeenSet; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetAdminContact(const ContactDetail& value) { m_adminContactHasBeenSet = true; m_adminContact = value; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetAdminContact(ContactDetail&& value) { m_adminContactHasBeenSet = true; m_adminContact = std::move(value); }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline RegisterDomainRequest& WithAdminContact(const ContactDetail& value) { SetAdminContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline RegisterDomainRequest& WithAdminContact(ContactDetail&& value) { SetAdminContact(std::move(value)); return *this;}


    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetRegistrantContact() const{ return m_registrantContact; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline bool RegistrantContactHasBeenSet() const { return m_registrantContactHasBeenSet; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetRegistrantContact(const ContactDetail& value) { m_registrantContactHasBeenSet = true; m_registrantContact = value; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetRegistrantContact(ContactDetail&& value) { m_registrantContactHasBeenSet = true; m_registrantContact = std::move(value); }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline RegisterDomainRequest& WithRegistrantContact(const ContactDetail& value) { SetRegistrantContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline RegisterDomainRequest& WithRegistrantContact(ContactDetail&& value) { SetRegistrantContact(std::move(value)); return *this;}


    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetTechContact() const{ return m_techContact; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline bool TechContactHasBeenSet() const { return m_techContactHasBeenSet; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetTechContact(const ContactDetail& value) { m_techContactHasBeenSet = true; m_techContact = value; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetTechContact(ContactDetail&& value) { m_techContactHasBeenSet = true; m_techContact = std::move(value); }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline RegisterDomainRequest& WithTechContact(const ContactDetail& value) { SetTechContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline RegisterDomainRequest& WithTechContact(ContactDetail&& value) { SetTechContact(std::move(value)); return *this;}


    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetPrivacyProtectAdminContact() const{ return m_privacyProtectAdminContact; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p> <p>Default: <code>true</code> </p>
     */
    inline bool PrivacyProtectAdminContactHasBeenSet() const { return m_privacyProtectAdminContactHasBeenSet; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p> <p>Default: <code>true</code> </p>
     */
    inline void SetPrivacyProtectAdminContact(bool value) { m_privacyProtectAdminContactHasBeenSet = true; m_privacyProtectAdminContact = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p> <p>Default: <code>true</code> </p>
     */
    inline RegisterDomainRequest& WithPrivacyProtectAdminContact(bool value) { SetPrivacyProtectAdminContact(value); return *this;}


    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (the domain owner).</p> <p>Default: <code>true</code>
     * </p>
     */
    inline bool GetPrivacyProtectRegistrantContact() const{ return m_privacyProtectRegistrantContact; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (the domain owner).</p> <p>Default: <code>true</code>
     * </p>
     */
    inline bool PrivacyProtectRegistrantContactHasBeenSet() const { return m_privacyProtectRegistrantContactHasBeenSet; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (the domain owner).</p> <p>Default: <code>true</code>
     * </p>
     */
    inline void SetPrivacyProtectRegistrantContact(bool value) { m_privacyProtectRegistrantContactHasBeenSet = true; m_privacyProtectRegistrantContact = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (the domain owner).</p> <p>Default: <code>true</code>
     * </p>
     */
    inline RegisterDomainRequest& WithPrivacyProtectRegistrantContact(bool value) { SetPrivacyProtectRegistrantContact(value); return *this;}


    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetPrivacyProtectTechContact() const{ return m_privacyProtectTechContact; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p> <p>Default: <code>true</code> </p>
     */
    inline bool PrivacyProtectTechContactHasBeenSet() const { return m_privacyProtectTechContactHasBeenSet; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p> <p>Default: <code>true</code> </p>
     */
    inline void SetPrivacyProtectTechContact(bool value) { m_privacyProtectTechContactHasBeenSet = true; m_privacyProtectTechContact = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p> <p>Default: <code>true</code> </p>
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
