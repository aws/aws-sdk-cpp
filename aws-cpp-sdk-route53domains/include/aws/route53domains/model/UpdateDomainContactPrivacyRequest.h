/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The UpdateDomainContactPrivacy request includes the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainContactPrivacyRequest">AWS
   * API Reference</a></p>
   */
  class UpdateDomainContactPrivacyRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API UpdateDomainContactPrivacyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainContactPrivacy"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain that you want to update the privacy setting for.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that you want to update the privacy setting for.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain that you want to update the privacy setting for.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that you want to update the privacy setting for.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that you want to update the privacy setting for.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that you want to update the privacy setting for.</p>
     */
    inline UpdateDomainContactPrivacyRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that you want to update the privacy setting for.</p>
     */
    inline UpdateDomainContactPrivacyRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that you want to update the privacy setting for.</p>
     */
    inline UpdateDomainContactPrivacyRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>  <p>You must specify the same privacy setting for
     * the administrative, registrant, and technical contacts.</p> 
     */
    inline bool GetAdminPrivacy() const{ return m_adminPrivacy; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>  <p>You must specify the same privacy setting for
     * the administrative, registrant, and technical contacts.</p> 
     */
    inline bool AdminPrivacyHasBeenSet() const { return m_adminPrivacyHasBeenSet; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>  <p>You must specify the same privacy setting for
     * the administrative, registrant, and technical contacts.</p> 
     */
    inline void SetAdminPrivacy(bool value) { m_adminPrivacyHasBeenSet = true; m_adminPrivacy = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>  <p>You must specify the same privacy setting for
     * the administrative, registrant, and technical contacts.</p> 
     */
    inline UpdateDomainContactPrivacyRequest& WithAdminPrivacy(bool value) { SetAdminPrivacy(value); return *this;}


    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (domain owner).</p>  <p>You must specify the same
     * privacy setting for the administrative, registrant, and technical contacts.</p>
     * 
     */
    inline bool GetRegistrantPrivacy() const{ return m_registrantPrivacy; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (domain owner).</p>  <p>You must specify the same
     * privacy setting for the administrative, registrant, and technical contacts.</p>
     * 
     */
    inline bool RegistrantPrivacyHasBeenSet() const { return m_registrantPrivacyHasBeenSet; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (domain owner).</p>  <p>You must specify the same
     * privacy setting for the administrative, registrant, and technical contacts.</p>
     * 
     */
    inline void SetRegistrantPrivacy(bool value) { m_registrantPrivacyHasBeenSet = true; m_registrantPrivacy = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (domain owner).</p>  <p>You must specify the same
     * privacy setting for the administrative, registrant, and technical contacts.</p>
     * 
     */
    inline UpdateDomainContactPrivacyRequest& WithRegistrantPrivacy(bool value) { SetRegistrantPrivacy(value); return *this;}


    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p>  <p>You must specify the same privacy setting
     * for the administrative, registrant, and technical contacts.</p> 
     */
    inline bool GetTechPrivacy() const{ return m_techPrivacy; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p>  <p>You must specify the same privacy setting
     * for the administrative, registrant, and technical contacts.</p> 
     */
    inline bool TechPrivacyHasBeenSet() const { return m_techPrivacyHasBeenSet; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p>  <p>You must specify the same privacy setting
     * for the administrative, registrant, and technical contacts.</p> 
     */
    inline void SetTechPrivacy(bool value) { m_techPrivacyHasBeenSet = true; m_techPrivacy = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p>  <p>You must specify the same privacy setting
     * for the administrative, registrant, and technical contacts.</p> 
     */
    inline UpdateDomainContactPrivacyRequest& WithTechPrivacy(bool value) { SetTechPrivacy(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_adminPrivacy;
    bool m_adminPrivacyHasBeenSet = false;

    bool m_registrantPrivacy;
    bool m_registrantPrivacyHasBeenSet = false;

    bool m_techPrivacy;
    bool m_techPrivacyHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
