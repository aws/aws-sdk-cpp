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
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ACM
{
namespace Model
{

  /**
   * <p>This structure is used in the request object of the <a>RequestCertificate</a>
   * action.</p>
   */
  class AWS_ACM_API DomainValidationOption
  {
  public:
    DomainValidationOption();
    DomainValidationOption(const Aws::Utils::Json::JsonValue& jsonValue);
    DomainValidationOption& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the certificate being requested.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the certificate being requested.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the certificate being requested.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the certificate being requested.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the certificate being requested.</p>
     */
    inline DomainValidationOption& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the certificate being requested.</p>
     */
    inline DomainValidationOption& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>Fully Qualified Domain Name (FQDN) of the certificate being requested.</p>
     */
    inline DomainValidationOption& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain to which validation email is sent. This is the base validation
     * domain that will act as the suffix of the email addresses. This must be the same
     * as the <code>DomainName</code> value or a superdomain of the
     * <code>DomainName</code> value. For example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS for the base domain and
     * the following five addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p>
     * </li> <li> <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline const Aws::String& GetValidationDomain() const{ return m_validationDomain; }

    /**
     * <p>The domain to which validation email is sent. This is the base validation
     * domain that will act as the suffix of the email addresses. This must be the same
     * as the <code>DomainName</code> value or a superdomain of the
     * <code>DomainName</code> value. For example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS for the base domain and
     * the following five addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p>
     * </li> <li> <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline void SetValidationDomain(const Aws::String& value) { m_validationDomainHasBeenSet = true; m_validationDomain = value; }

    /**
     * <p>The domain to which validation email is sent. This is the base validation
     * domain that will act as the suffix of the email addresses. This must be the same
     * as the <code>DomainName</code> value or a superdomain of the
     * <code>DomainName</code> value. For example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS for the base domain and
     * the following five addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p>
     * </li> <li> <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline void SetValidationDomain(Aws::String&& value) { m_validationDomainHasBeenSet = true; m_validationDomain = value; }

    /**
     * <p>The domain to which validation email is sent. This is the base validation
     * domain that will act as the suffix of the email addresses. This must be the same
     * as the <code>DomainName</code> value or a superdomain of the
     * <code>DomainName</code> value. For example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS for the base domain and
     * the following five addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p>
     * </li> <li> <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline void SetValidationDomain(const char* value) { m_validationDomainHasBeenSet = true; m_validationDomain.assign(value); }

    /**
     * <p>The domain to which validation email is sent. This is the base validation
     * domain that will act as the suffix of the email addresses. This must be the same
     * as the <code>DomainName</code> value or a superdomain of the
     * <code>DomainName</code> value. For example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS for the base domain and
     * the following five addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p>
     * </li> <li> <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline DomainValidationOption& WithValidationDomain(const Aws::String& value) { SetValidationDomain(value); return *this;}

    /**
     * <p>The domain to which validation email is sent. This is the base validation
     * domain that will act as the suffix of the email addresses. This must be the same
     * as the <code>DomainName</code> value or a superdomain of the
     * <code>DomainName</code> value. For example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS for the base domain and
     * the following five addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p>
     * </li> <li> <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline DomainValidationOption& WithValidationDomain(Aws::String&& value) { SetValidationDomain(value); return *this;}

    /**
     * <p>The domain to which validation email is sent. This is the base validation
     * domain that will act as the suffix of the email addresses. This must be the same
     * as the <code>DomainName</code> value or a superdomain of the
     * <code>DomainName</code> value. For example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS for the base domain and
     * the following five addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p>
     * </li> <li> <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline DomainValidationOption& WithValidationDomain(const char* value) { SetValidationDomain(value); return *this;}

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::String m_validationDomain;
    bool m_validationDomainHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
