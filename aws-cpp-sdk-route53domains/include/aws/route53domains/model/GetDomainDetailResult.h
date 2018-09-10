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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/ContactDetail.h>
#include <aws/core/utils/DateTime.h>
#include <aws/route53domains/model/Nameserver.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The GetDomainDetail response includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetDomainDetailResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53DOMAINS_API GetDomainDetailResult
  {
  public:
    GetDomainDetailResult();
    GetDomainDetailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDomainDetailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of a domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of a domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The name of a domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The name of a domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The name of a domain.</p>
     */
    inline GetDomainDetailResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain.</p>
     */
    inline GetDomainDetailResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of a domain.</p>
     */
    inline GetDomainDetailResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::Vector<Nameserver>& GetNameservers() const{ return m_nameservers; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetNameservers(const Aws::Vector<Nameserver>& value) { m_nameservers = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetNameservers(Aws::Vector<Nameserver>&& value) { m_nameservers = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline GetDomainDetailResult& WithNameservers(const Aws::Vector<Nameserver>& value) { SetNameservers(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline GetDomainDetailResult& WithNameservers(Aws::Vector<Nameserver>&& value) { SetNameservers(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline GetDomainDetailResult& AddNameservers(const Nameserver& value) { m_nameservers.push_back(value); return *this; }

    /**
     * <p>The name of the domain.</p>
     */
    inline GetDomainDetailResult& AddNameservers(Nameserver&& value) { m_nameservers.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether the domain registration is set to renew automatically.</p>
     */
    inline bool GetAutoRenew() const{ return m_autoRenew; }

    /**
     * <p>Specifies whether the domain registration is set to renew automatically.</p>
     */
    inline void SetAutoRenew(bool value) { m_autoRenew = value; }

    /**
     * <p>Specifies whether the domain registration is set to renew automatically.</p>
     */
    inline GetDomainDetailResult& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}


    /**
     * <p>Provides details about the domain administrative contact.</p>
     */
    inline const ContactDetail& GetAdminContact() const{ return m_adminContact; }

    /**
     * <p>Provides details about the domain administrative contact.</p>
     */
    inline void SetAdminContact(const ContactDetail& value) { m_adminContact = value; }

    /**
     * <p>Provides details about the domain administrative contact.</p>
     */
    inline void SetAdminContact(ContactDetail&& value) { m_adminContact = std::move(value); }

    /**
     * <p>Provides details about the domain administrative contact.</p>
     */
    inline GetDomainDetailResult& WithAdminContact(const ContactDetail& value) { SetAdminContact(value); return *this;}

    /**
     * <p>Provides details about the domain administrative contact.</p>
     */
    inline GetDomainDetailResult& WithAdminContact(ContactDetail&& value) { SetAdminContact(std::move(value)); return *this;}


    /**
     * <p>Provides details about the domain registrant.</p>
     */
    inline const ContactDetail& GetRegistrantContact() const{ return m_registrantContact; }

    /**
     * <p>Provides details about the domain registrant.</p>
     */
    inline void SetRegistrantContact(const ContactDetail& value) { m_registrantContact = value; }

    /**
     * <p>Provides details about the domain registrant.</p>
     */
    inline void SetRegistrantContact(ContactDetail&& value) { m_registrantContact = std::move(value); }

    /**
     * <p>Provides details about the domain registrant.</p>
     */
    inline GetDomainDetailResult& WithRegistrantContact(const ContactDetail& value) { SetRegistrantContact(value); return *this;}

    /**
     * <p>Provides details about the domain registrant.</p>
     */
    inline GetDomainDetailResult& WithRegistrantContact(ContactDetail&& value) { SetRegistrantContact(std::move(value)); return *this;}


    /**
     * <p>Provides details about the domain technical contact.</p>
     */
    inline const ContactDetail& GetTechContact() const{ return m_techContact; }

    /**
     * <p>Provides details about the domain technical contact.</p>
     */
    inline void SetTechContact(const ContactDetail& value) { m_techContact = value; }

    /**
     * <p>Provides details about the domain technical contact.</p>
     */
    inline void SetTechContact(ContactDetail&& value) { m_techContact = std::move(value); }

    /**
     * <p>Provides details about the domain technical contact.</p>
     */
    inline GetDomainDetailResult& WithTechContact(const ContactDetail& value) { SetTechContact(value); return *this;}

    /**
     * <p>Provides details about the domain technical contact.</p>
     */
    inline GetDomainDetailResult& WithTechContact(ContactDetail&& value) { SetTechContact(std::move(value)); return *this;}


    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If the value is
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>
     */
    inline bool GetAdminPrivacy() const{ return m_adminPrivacy; }

    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If the value is
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>
     */
    inline void SetAdminPrivacy(bool value) { m_adminPrivacy = value; }

    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If the value is
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>
     */
    inline GetDomainDetailResult& WithAdminPrivacy(bool value) { SetAdminPrivacy(value); return *this;}


    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If the value is
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (domain owner).</p>
     */
    inline bool GetRegistrantPrivacy() const{ return m_registrantPrivacy; }

    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If the value is
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (domain owner).</p>
     */
    inline void SetRegistrantPrivacy(bool value) { m_registrantPrivacy = value; }

    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If the value is
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (domain owner).</p>
     */
    inline GetDomainDetailResult& WithRegistrantPrivacy(bool value) { SetRegistrantPrivacy(value); return *this;}


    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If the value is
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p>
     */
    inline bool GetTechPrivacy() const{ return m_techPrivacy; }

    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If the value is
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p>
     */
    inline void SetTechPrivacy(bool value) { m_techPrivacy = value; }

    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If the value is
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p>
     */
    inline GetDomainDetailResult& WithTechPrivacy(bool value) { SetTechPrivacy(value); return *this;}


    /**
     * <p>Name of the registrar of the domain as identified in the registry. Domains
     * with a .com, .net, or .org TLD are registered by Amazon Registrar. All other
     * domains are registered by our registrar associate, Gandi. The value for domains
     * that are registered by Gandi is <code>"GANDI SAS"</code>. </p>
     */
    inline const Aws::String& GetRegistrarName() const{ return m_registrarName; }

    /**
     * <p>Name of the registrar of the domain as identified in the registry. Domains
     * with a .com, .net, or .org TLD are registered by Amazon Registrar. All other
     * domains are registered by our registrar associate, Gandi. The value for domains
     * that are registered by Gandi is <code>"GANDI SAS"</code>. </p>
     */
    inline void SetRegistrarName(const Aws::String& value) { m_registrarName = value; }

    /**
     * <p>Name of the registrar of the domain as identified in the registry. Domains
     * with a .com, .net, or .org TLD are registered by Amazon Registrar. All other
     * domains are registered by our registrar associate, Gandi. The value for domains
     * that are registered by Gandi is <code>"GANDI SAS"</code>. </p>
     */
    inline void SetRegistrarName(Aws::String&& value) { m_registrarName = std::move(value); }

    /**
     * <p>Name of the registrar of the domain as identified in the registry. Domains
     * with a .com, .net, or .org TLD are registered by Amazon Registrar. All other
     * domains are registered by our registrar associate, Gandi. The value for domains
     * that are registered by Gandi is <code>"GANDI SAS"</code>. </p>
     */
    inline void SetRegistrarName(const char* value) { m_registrarName.assign(value); }

    /**
     * <p>Name of the registrar of the domain as identified in the registry. Domains
     * with a .com, .net, or .org TLD are registered by Amazon Registrar. All other
     * domains are registered by our registrar associate, Gandi. The value for domains
     * that are registered by Gandi is <code>"GANDI SAS"</code>. </p>
     */
    inline GetDomainDetailResult& WithRegistrarName(const Aws::String& value) { SetRegistrarName(value); return *this;}

    /**
     * <p>Name of the registrar of the domain as identified in the registry. Domains
     * with a .com, .net, or .org TLD are registered by Amazon Registrar. All other
     * domains are registered by our registrar associate, Gandi. The value for domains
     * that are registered by Gandi is <code>"GANDI SAS"</code>. </p>
     */
    inline GetDomainDetailResult& WithRegistrarName(Aws::String&& value) { SetRegistrarName(std::move(value)); return *this;}

    /**
     * <p>Name of the registrar of the domain as identified in the registry. Domains
     * with a .com, .net, or .org TLD are registered by Amazon Registrar. All other
     * domains are registered by our registrar associate, Gandi. The value for domains
     * that are registered by Gandi is <code>"GANDI SAS"</code>. </p>
     */
    inline GetDomainDetailResult& WithRegistrarName(const char* value) { SetRegistrarName(value); return *this;}


    /**
     * <p>The fully qualified name of the WHOIS server that can answer the WHOIS query
     * for the domain.</p>
     */
    inline const Aws::String& GetWhoIsServer() const{ return m_whoIsServer; }

    /**
     * <p>The fully qualified name of the WHOIS server that can answer the WHOIS query
     * for the domain.</p>
     */
    inline void SetWhoIsServer(const Aws::String& value) { m_whoIsServer = value; }

    /**
     * <p>The fully qualified name of the WHOIS server that can answer the WHOIS query
     * for the domain.</p>
     */
    inline void SetWhoIsServer(Aws::String&& value) { m_whoIsServer = std::move(value); }

    /**
     * <p>The fully qualified name of the WHOIS server that can answer the WHOIS query
     * for the domain.</p>
     */
    inline void SetWhoIsServer(const char* value) { m_whoIsServer.assign(value); }

    /**
     * <p>The fully qualified name of the WHOIS server that can answer the WHOIS query
     * for the domain.</p>
     */
    inline GetDomainDetailResult& WithWhoIsServer(const Aws::String& value) { SetWhoIsServer(value); return *this;}

    /**
     * <p>The fully qualified name of the WHOIS server that can answer the WHOIS query
     * for the domain.</p>
     */
    inline GetDomainDetailResult& WithWhoIsServer(Aws::String&& value) { SetWhoIsServer(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the WHOIS server that can answer the WHOIS query
     * for the domain.</p>
     */
    inline GetDomainDetailResult& WithWhoIsServer(const char* value) { SetWhoIsServer(value); return *this;}


    /**
     * <p>Web address of the registrar.</p>
     */
    inline const Aws::String& GetRegistrarUrl() const{ return m_registrarUrl; }

    /**
     * <p>Web address of the registrar.</p>
     */
    inline void SetRegistrarUrl(const Aws::String& value) { m_registrarUrl = value; }

    /**
     * <p>Web address of the registrar.</p>
     */
    inline void SetRegistrarUrl(Aws::String&& value) { m_registrarUrl = std::move(value); }

    /**
     * <p>Web address of the registrar.</p>
     */
    inline void SetRegistrarUrl(const char* value) { m_registrarUrl.assign(value); }

    /**
     * <p>Web address of the registrar.</p>
     */
    inline GetDomainDetailResult& WithRegistrarUrl(const Aws::String& value) { SetRegistrarUrl(value); return *this;}

    /**
     * <p>Web address of the registrar.</p>
     */
    inline GetDomainDetailResult& WithRegistrarUrl(Aws::String&& value) { SetRegistrarUrl(std::move(value)); return *this;}

    /**
     * <p>Web address of the registrar.</p>
     */
    inline GetDomainDetailResult& WithRegistrarUrl(const char* value) { SetRegistrarUrl(value); return *this;}


    /**
     * <p>Email address to contact to report incorrect contact information for a
     * domain, to report that the domain is being used to send spam, to report that
     * someone is cybersquatting on a domain name, or report some other type of
     * abuse.</p>
     */
    inline const Aws::String& GetAbuseContactEmail() const{ return m_abuseContactEmail; }

    /**
     * <p>Email address to contact to report incorrect contact information for a
     * domain, to report that the domain is being used to send spam, to report that
     * someone is cybersquatting on a domain name, or report some other type of
     * abuse.</p>
     */
    inline void SetAbuseContactEmail(const Aws::String& value) { m_abuseContactEmail = value; }

    /**
     * <p>Email address to contact to report incorrect contact information for a
     * domain, to report that the domain is being used to send spam, to report that
     * someone is cybersquatting on a domain name, or report some other type of
     * abuse.</p>
     */
    inline void SetAbuseContactEmail(Aws::String&& value) { m_abuseContactEmail = std::move(value); }

    /**
     * <p>Email address to contact to report incorrect contact information for a
     * domain, to report that the domain is being used to send spam, to report that
     * someone is cybersquatting on a domain name, or report some other type of
     * abuse.</p>
     */
    inline void SetAbuseContactEmail(const char* value) { m_abuseContactEmail.assign(value); }

    /**
     * <p>Email address to contact to report incorrect contact information for a
     * domain, to report that the domain is being used to send spam, to report that
     * someone is cybersquatting on a domain name, or report some other type of
     * abuse.</p>
     */
    inline GetDomainDetailResult& WithAbuseContactEmail(const Aws::String& value) { SetAbuseContactEmail(value); return *this;}

    /**
     * <p>Email address to contact to report incorrect contact information for a
     * domain, to report that the domain is being used to send spam, to report that
     * someone is cybersquatting on a domain name, or report some other type of
     * abuse.</p>
     */
    inline GetDomainDetailResult& WithAbuseContactEmail(Aws::String&& value) { SetAbuseContactEmail(std::move(value)); return *this;}

    /**
     * <p>Email address to contact to report incorrect contact information for a
     * domain, to report that the domain is being used to send spam, to report that
     * someone is cybersquatting on a domain name, or report some other type of
     * abuse.</p>
     */
    inline GetDomainDetailResult& WithAbuseContactEmail(const char* value) { SetAbuseContactEmail(value); return *this;}


    /**
     * <p>Phone number for reporting abuse.</p>
     */
    inline const Aws::String& GetAbuseContactPhone() const{ return m_abuseContactPhone; }

    /**
     * <p>Phone number for reporting abuse.</p>
     */
    inline void SetAbuseContactPhone(const Aws::String& value) { m_abuseContactPhone = value; }

    /**
     * <p>Phone number for reporting abuse.</p>
     */
    inline void SetAbuseContactPhone(Aws::String&& value) { m_abuseContactPhone = std::move(value); }

    /**
     * <p>Phone number for reporting abuse.</p>
     */
    inline void SetAbuseContactPhone(const char* value) { m_abuseContactPhone.assign(value); }

    /**
     * <p>Phone number for reporting abuse.</p>
     */
    inline GetDomainDetailResult& WithAbuseContactPhone(const Aws::String& value) { SetAbuseContactPhone(value); return *this;}

    /**
     * <p>Phone number for reporting abuse.</p>
     */
    inline GetDomainDetailResult& WithAbuseContactPhone(Aws::String&& value) { SetAbuseContactPhone(std::move(value)); return *this;}

    /**
     * <p>Phone number for reporting abuse.</p>
     */
    inline GetDomainDetailResult& WithAbuseContactPhone(const char* value) { SetAbuseContactPhone(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetRegistryDomainId() const{ return m_registryDomainId; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetRegistryDomainId(const Aws::String& value) { m_registryDomainId = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetRegistryDomainId(Aws::String&& value) { m_registryDomainId = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetRegistryDomainId(const char* value) { m_registryDomainId.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline GetDomainDetailResult& WithRegistryDomainId(const Aws::String& value) { SetRegistryDomainId(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline GetDomainDetailResult& WithRegistryDomainId(Aws::String&& value) { SetRegistryDomainId(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline GetDomainDetailResult& WithRegistryDomainId(const char* value) { SetRegistryDomainId(value); return *this;}


    /**
     * <p>The date when the domain was created as found in the response to a WHOIS
     * query. The date and time is in Coordinated Universal time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date when the domain was created as found in the response to a WHOIS
     * query. The date and time is in Coordinated Universal time (UTC).</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date when the domain was created as found in the response to a WHOIS
     * query. The date and time is in Coordinated Universal time (UTC).</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date when the domain was created as found in the response to a WHOIS
     * query. The date and time is in Coordinated Universal time (UTC).</p>
     */
    inline GetDomainDetailResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date when the domain was created as found in the response to a WHOIS
     * query. The date and time is in Coordinated Universal time (UTC).</p>
     */
    inline GetDomainDetailResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The last updated date of the domain as found in the response to a WHOIS
     * query. The date and time is in Coordinated Universal time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedDate() const{ return m_updatedDate; }

    /**
     * <p>The last updated date of the domain as found in the response to a WHOIS
     * query. The date and time is in Coordinated Universal time (UTC).</p>
     */
    inline void SetUpdatedDate(const Aws::Utils::DateTime& value) { m_updatedDate = value; }

    /**
     * <p>The last updated date of the domain as found in the response to a WHOIS
     * query. The date and time is in Coordinated Universal time (UTC).</p>
     */
    inline void SetUpdatedDate(Aws::Utils::DateTime&& value) { m_updatedDate = std::move(value); }

    /**
     * <p>The last updated date of the domain as found in the response to a WHOIS
     * query. The date and time is in Coordinated Universal time (UTC).</p>
     */
    inline GetDomainDetailResult& WithUpdatedDate(const Aws::Utils::DateTime& value) { SetUpdatedDate(value); return *this;}

    /**
     * <p>The last updated date of the domain as found in the response to a WHOIS
     * query. The date and time is in Coordinated Universal time (UTC).</p>
     */
    inline GetDomainDetailResult& WithUpdatedDate(Aws::Utils::DateTime&& value) { SetUpdatedDate(std::move(value)); return *this;}


    /**
     * <p>The date when the registration for the domain is set to expire. The date and
     * time is in Coordinated Universal time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The date when the registration for the domain is set to expire. The date and
     * time is in Coordinated Universal time (UTC).</p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDate = value; }

    /**
     * <p>The date when the registration for the domain is set to expire. The date and
     * time is in Coordinated Universal time (UTC).</p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDate = std::move(value); }

    /**
     * <p>The date when the registration for the domain is set to expire. The date and
     * time is in Coordinated Universal time (UTC).</p>
     */
    inline GetDomainDetailResult& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The date when the registration for the domain is set to expire. The date and
     * time is in Coordinated Universal time (UTC).</p>
     */
    inline GetDomainDetailResult& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}


    /**
     * <p>Reseller of the domain. Domains registered or transferred using Amazon Route
     * 53 domains will have <code>"Amazon"</code> as the reseller. </p>
     */
    inline const Aws::String& GetReseller() const{ return m_reseller; }

    /**
     * <p>Reseller of the domain. Domains registered or transferred using Amazon Route
     * 53 domains will have <code>"Amazon"</code> as the reseller. </p>
     */
    inline void SetReseller(const Aws::String& value) { m_reseller = value; }

    /**
     * <p>Reseller of the domain. Domains registered or transferred using Amazon Route
     * 53 domains will have <code>"Amazon"</code> as the reseller. </p>
     */
    inline void SetReseller(Aws::String&& value) { m_reseller = std::move(value); }

    /**
     * <p>Reseller of the domain. Domains registered or transferred using Amazon Route
     * 53 domains will have <code>"Amazon"</code> as the reseller. </p>
     */
    inline void SetReseller(const char* value) { m_reseller.assign(value); }

    /**
     * <p>Reseller of the domain. Domains registered or transferred using Amazon Route
     * 53 domains will have <code>"Amazon"</code> as the reseller. </p>
     */
    inline GetDomainDetailResult& WithReseller(const Aws::String& value) { SetReseller(value); return *this;}

    /**
     * <p>Reseller of the domain. Domains registered or transferred using Amazon Route
     * 53 domains will have <code>"Amazon"</code> as the reseller. </p>
     */
    inline GetDomainDetailResult& WithReseller(Aws::String&& value) { SetReseller(std::move(value)); return *this;}

    /**
     * <p>Reseller of the domain. Domains registered or transferred using Amazon Route
     * 53 domains will have <code>"Amazon"</code> as the reseller. </p>
     */
    inline GetDomainDetailResult& WithReseller(const char* value) { SetReseller(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetDnsSec() const{ return m_dnsSec; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetDnsSec(const Aws::String& value) { m_dnsSec = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetDnsSec(Aws::String&& value) { m_dnsSec = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetDnsSec(const char* value) { m_dnsSec.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline GetDomainDetailResult& WithDnsSec(const Aws::String& value) { SetDnsSec(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline GetDomainDetailResult& WithDnsSec(Aws::String&& value) { SetDnsSec(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline GetDomainDetailResult& WithDnsSec(const char* value) { SetDnsSec(value); return *this;}


    /**
     * <p>An array of domain name status codes, also known as Extensible Provisioning
     * Protocol (EPP) status codes.</p> <p>ICANN, the organization that maintains a
     * central database of domain names, has developed a set of domain name status
     * codes that tell you the status of a variety of operations on a domain name, for
     * example, registering a domain name, transferring a domain name to another
     * registrar, renewing the registration for a domain name, and so on. All
     * registrars use this same set of status codes.</p> <p>For a current list of
     * domain name status codes and an explanation of what each code means, go to the
     * <a href="https://www.icann.org/">ICANN website</a> and search for <code>epp
     * status codes</code>. (Search on the ICANN website; web searches sometimes return
     * an old version of the document.)</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatusList() const{ return m_statusList; }

    /**
     * <p>An array of domain name status codes, also known as Extensible Provisioning
     * Protocol (EPP) status codes.</p> <p>ICANN, the organization that maintains a
     * central database of domain names, has developed a set of domain name status
     * codes that tell you the status of a variety of operations on a domain name, for
     * example, registering a domain name, transferring a domain name to another
     * registrar, renewing the registration for a domain name, and so on. All
     * registrars use this same set of status codes.</p> <p>For a current list of
     * domain name status codes and an explanation of what each code means, go to the
     * <a href="https://www.icann.org/">ICANN website</a> and search for <code>epp
     * status codes</code>. (Search on the ICANN website; web searches sometimes return
     * an old version of the document.)</p>
     */
    inline void SetStatusList(const Aws::Vector<Aws::String>& value) { m_statusList = value; }

    /**
     * <p>An array of domain name status codes, also known as Extensible Provisioning
     * Protocol (EPP) status codes.</p> <p>ICANN, the organization that maintains a
     * central database of domain names, has developed a set of domain name status
     * codes that tell you the status of a variety of operations on a domain name, for
     * example, registering a domain name, transferring a domain name to another
     * registrar, renewing the registration for a domain name, and so on. All
     * registrars use this same set of status codes.</p> <p>For a current list of
     * domain name status codes and an explanation of what each code means, go to the
     * <a href="https://www.icann.org/">ICANN website</a> and search for <code>epp
     * status codes</code>. (Search on the ICANN website; web searches sometimes return
     * an old version of the document.)</p>
     */
    inline void SetStatusList(Aws::Vector<Aws::String>&& value) { m_statusList = std::move(value); }

    /**
     * <p>An array of domain name status codes, also known as Extensible Provisioning
     * Protocol (EPP) status codes.</p> <p>ICANN, the organization that maintains a
     * central database of domain names, has developed a set of domain name status
     * codes that tell you the status of a variety of operations on a domain name, for
     * example, registering a domain name, transferring a domain name to another
     * registrar, renewing the registration for a domain name, and so on. All
     * registrars use this same set of status codes.</p> <p>For a current list of
     * domain name status codes and an explanation of what each code means, go to the
     * <a href="https://www.icann.org/">ICANN website</a> and search for <code>epp
     * status codes</code>. (Search on the ICANN website; web searches sometimes return
     * an old version of the document.)</p>
     */
    inline GetDomainDetailResult& WithStatusList(const Aws::Vector<Aws::String>& value) { SetStatusList(value); return *this;}

    /**
     * <p>An array of domain name status codes, also known as Extensible Provisioning
     * Protocol (EPP) status codes.</p> <p>ICANN, the organization that maintains a
     * central database of domain names, has developed a set of domain name status
     * codes that tell you the status of a variety of operations on a domain name, for
     * example, registering a domain name, transferring a domain name to another
     * registrar, renewing the registration for a domain name, and so on. All
     * registrars use this same set of status codes.</p> <p>For a current list of
     * domain name status codes and an explanation of what each code means, go to the
     * <a href="https://www.icann.org/">ICANN website</a> and search for <code>epp
     * status codes</code>. (Search on the ICANN website; web searches sometimes return
     * an old version of the document.)</p>
     */
    inline GetDomainDetailResult& WithStatusList(Aws::Vector<Aws::String>&& value) { SetStatusList(std::move(value)); return *this;}

    /**
     * <p>An array of domain name status codes, also known as Extensible Provisioning
     * Protocol (EPP) status codes.</p> <p>ICANN, the organization that maintains a
     * central database of domain names, has developed a set of domain name status
     * codes that tell you the status of a variety of operations on a domain name, for
     * example, registering a domain name, transferring a domain name to another
     * registrar, renewing the registration for a domain name, and so on. All
     * registrars use this same set of status codes.</p> <p>For a current list of
     * domain name status codes and an explanation of what each code means, go to the
     * <a href="https://www.icann.org/">ICANN website</a> and search for <code>epp
     * status codes</code>. (Search on the ICANN website; web searches sometimes return
     * an old version of the document.)</p>
     */
    inline GetDomainDetailResult& AddStatusList(const Aws::String& value) { m_statusList.push_back(value); return *this; }

    /**
     * <p>An array of domain name status codes, also known as Extensible Provisioning
     * Protocol (EPP) status codes.</p> <p>ICANN, the organization that maintains a
     * central database of domain names, has developed a set of domain name status
     * codes that tell you the status of a variety of operations on a domain name, for
     * example, registering a domain name, transferring a domain name to another
     * registrar, renewing the registration for a domain name, and so on. All
     * registrars use this same set of status codes.</p> <p>For a current list of
     * domain name status codes and an explanation of what each code means, go to the
     * <a href="https://www.icann.org/">ICANN website</a> and search for <code>epp
     * status codes</code>. (Search on the ICANN website; web searches sometimes return
     * an old version of the document.)</p>
     */
    inline GetDomainDetailResult& AddStatusList(Aws::String&& value) { m_statusList.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of domain name status codes, also known as Extensible Provisioning
     * Protocol (EPP) status codes.</p> <p>ICANN, the organization that maintains a
     * central database of domain names, has developed a set of domain name status
     * codes that tell you the status of a variety of operations on a domain name, for
     * example, registering a domain name, transferring a domain name to another
     * registrar, renewing the registration for a domain name, and so on. All
     * registrars use this same set of status codes.</p> <p>For a current list of
     * domain name status codes and an explanation of what each code means, go to the
     * <a href="https://www.icann.org/">ICANN website</a> and search for <code>epp
     * status codes</code>. (Search on the ICANN website; web searches sometimes return
     * an old version of the document.)</p>
     */
    inline GetDomainDetailResult& AddStatusList(const char* value) { m_statusList.push_back(value); return *this; }

  private:

    Aws::String m_domainName;

    Aws::Vector<Nameserver> m_nameservers;

    bool m_autoRenew;

    ContactDetail m_adminContact;

    ContactDetail m_registrantContact;

    ContactDetail m_techContact;

    bool m_adminPrivacy;

    bool m_registrantPrivacy;

    bool m_techPrivacy;

    Aws::String m_registrarName;

    Aws::String m_whoIsServer;

    Aws::String m_registrarUrl;

    Aws::String m_abuseContactEmail;

    Aws::String m_abuseContactPhone;

    Aws::String m_registryDomainId;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_updatedDate;

    Aws::Utils::DateTime m_expirationDate;

    Aws::String m_reseller;

    Aws::String m_dnsSec;

    Aws::Vector<Aws::String> m_statusList;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
