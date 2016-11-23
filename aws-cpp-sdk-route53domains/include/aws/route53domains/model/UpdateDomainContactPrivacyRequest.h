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

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The UpdateDomainContactPrivacy request includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API UpdateDomainContactPrivacyRequest : public Route53DomainsRequest
  {
  public:
    UpdateDomainContactPrivacyRequest();
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
    inline UpdateDomainContactPrivacyRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline UpdateDomainContactPrivacyRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain.</p> <p>Type: String</p> <p>Default: None</p>
     * <p>Constraints: The domain name can contain only the letters a through z, the
     * numbers 0 through 9, and hyphen (-). Internationalized Domain Names are not
     * supported.</p> <p>Required: Yes</p>
     */
    inline UpdateDomainContactPrivacyRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: None</p> <p>Valid values: <code>true</code> |
     * <code>false</code></p> <p>Required: No</p>
     */
    inline bool GetAdminPrivacy() const{ return m_adminPrivacy; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: None</p> <p>Valid values: <code>true</code> |
     * <code>false</code></p> <p>Required: No</p>
     */
    inline void SetAdminPrivacy(bool value) { m_adminPrivacyHasBeenSet = true; m_adminPrivacy = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: None</p> <p>Valid values: <code>true</code> |
     * <code>false</code></p> <p>Required: No</p>
     */
    inline UpdateDomainContactPrivacyRequest& WithAdminPrivacy(bool value) { SetAdminPrivacy(value); return *this;}

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: None</p> <p>Valid values: <code>true</code> |
     * <code>false</code></p> <p>Required: No</p>
     */
    inline bool GetRegistrantPrivacy() const{ return m_registrantPrivacy; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: None</p> <p>Valid values: <code>true</code> |
     * <code>false</code></p> <p>Required: No</p>
     */
    inline void SetRegistrantPrivacy(bool value) { m_registrantPrivacyHasBeenSet = true; m_registrantPrivacy = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: None</p> <p>Valid values: <code>true</code> |
     * <code>false</code></p> <p>Required: No</p>
     */
    inline UpdateDomainContactPrivacyRequest& WithRegistrantPrivacy(bool value) { SetRegistrantPrivacy(value); return *this;}

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: None</p> <p>Valid values: <code>true</code> |
     * <code>false</code></p> <p>Required: No</p>
     */
    inline bool GetTechPrivacy() const{ return m_techPrivacy; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: None</p> <p>Valid values: <code>true</code> |
     * <code>false</code></p> <p>Required: No</p>
     */
    inline void SetTechPrivacy(bool value) { m_techPrivacyHasBeenSet = true; m_techPrivacy = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify true, WHOIS ("who is") queries will return contact information for our
     * registrar partner, Gandi, instead of the contact information that you enter.</p>
     * <p>Type: Boolean</p> <p>Default: None</p> <p>Valid values: <code>true</code> |
     * <code>false</code></p> <p>Required: No</p>
     */
    inline UpdateDomainContactPrivacyRequest& WithTechPrivacy(bool value) { SetTechPrivacy(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    bool m_adminPrivacy;
    bool m_adminPrivacyHasBeenSet;
    bool m_registrantPrivacy;
    bool m_registrantPrivacyHasBeenSet;
    bool m_techPrivacy;
    bool m_techPrivacyHasBeenSet;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
