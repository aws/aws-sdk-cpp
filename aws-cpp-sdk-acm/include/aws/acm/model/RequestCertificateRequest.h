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
#include <aws/acm/ACMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/DomainValidationOption.h>

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class AWS_ACM_API RequestCertificateRequest : public ACMRequest
  {
  public:
    RequestCertificateRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com, of the site you
     * want to secure with an ACM Certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com, of the site you
     * want to secure with an ACM Certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com, of the site you
     * want to secure with an ACM Certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com, of the site you
     * want to secure with an ACM Certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com, of the site you
     * want to secure with an ACM Certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com.</p>
     */
    inline RequestCertificateRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com, of the site you
     * want to secure with an ACM Certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com.</p>
     */
    inline RequestCertificateRequest& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com, of the site you
     * want to secure with an ACM Certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com.</p>
     */
    inline RequestCertificateRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const{ return m_subjectAlternativeNames; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name.</p>
     */
    inline void SetSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name.</p>
     */
    inline void SetSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name.</p>
     */
    inline RequestCertificateRequest& WithSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { SetSubjectAlternativeNames(value); return *this;}

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name.</p>
     */
    inline RequestCertificateRequest& WithSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { SetSubjectAlternativeNames(value); return *this;}

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name.</p>
     */
    inline RequestCertificateRequest& AddSubjectAlternativeNames(const Aws::String& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name.</p>
     */
    inline RequestCertificateRequest& AddSubjectAlternativeNames(Aws::String&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name.</p>
     */
    inline RequestCertificateRequest& AddSubjectAlternativeNames(const char* value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }

    /**
     * <p>Customer chosen string that can be used to distinguish between calls to
     * <code>RequestCertificate</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>RequestCertificate</code> multiple times with the
     * same idempotency token within one hour, ACM recognizes that you are requesting
     * only one certificate and will issue only one. If you change the idempotency
     * token for each call, ACM recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>Customer chosen string that can be used to distinguish between calls to
     * <code>RequestCertificate</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>RequestCertificate</code> multiple times with the
     * same idempotency token within one hour, ACM recognizes that you are requesting
     * only one certificate and will issue only one. If you change the idempotency
     * token for each call, ACM recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>Customer chosen string that can be used to distinguish between calls to
     * <code>RequestCertificate</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>RequestCertificate</code> multiple times with the
     * same idempotency token within one hour, ACM recognizes that you are requesting
     * only one certificate and will issue only one. If you change the idempotency
     * token for each call, ACM recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>Customer chosen string that can be used to distinguish between calls to
     * <code>RequestCertificate</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>RequestCertificate</code> multiple times with the
     * same idempotency token within one hour, ACM recognizes that you are requesting
     * only one certificate and will issue only one. If you change the idempotency
     * token for each call, ACM recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>Customer chosen string that can be used to distinguish between calls to
     * <code>RequestCertificate</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>RequestCertificate</code> multiple times with the
     * same idempotency token within one hour, ACM recognizes that you are requesting
     * only one certificate and will issue only one. If you change the idempotency
     * token for each call, ACM recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline RequestCertificateRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>Customer chosen string that can be used to distinguish between calls to
     * <code>RequestCertificate</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>RequestCertificate</code> multiple times with the
     * same idempotency token within one hour, ACM recognizes that you are requesting
     * only one certificate and will issue only one. If you change the idempotency
     * token for each call, ACM recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline RequestCertificateRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>Customer chosen string that can be used to distinguish between calls to
     * <code>RequestCertificate</code>. Idempotency tokens time out after one hour.
     * Therefore, if you call <code>RequestCertificate</code> multiple times with the
     * same idempotency token within one hour, ACM recognizes that you are requesting
     * only one certificate and will issue only one. If you change the idempotency
     * token for each call, ACM recognizes that you are requesting multiple
     * certificates.</p>
     */
    inline RequestCertificateRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for <code>test.example.com</code> and
     * specify <b>DomainValidationOptions</b> of <code>example.com</code>, ACM sends
     * email to the domain registrant, technical contact, and administrative contact in
     * WHOIS and the following five addresses:</p> <ul> <li> <p>admin@example.com</p>
     * </li> <li> <p>administrator@example.com</p> </li> <li>
     * <p>hostmaster@example.com</p> </li> <li> <p>postmaster@example.com</p> </li>
     * <li> <p>webmaster@example.com</p> </li> </ul>
     */
    inline const Aws::Vector<DomainValidationOption>& GetDomainValidationOptions() const{ return m_domainValidationOptions; }

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for <code>test.example.com</code> and
     * specify <b>DomainValidationOptions</b> of <code>example.com</code>, ACM sends
     * email to the domain registrant, technical contact, and administrative contact in
     * WHOIS and the following five addresses:</p> <ul> <li> <p>admin@example.com</p>
     * </li> <li> <p>administrator@example.com</p> </li> <li>
     * <p>hostmaster@example.com</p> </li> <li> <p>postmaster@example.com</p> </li>
     * <li> <p>webmaster@example.com</p> </li> </ul>
     */
    inline void SetDomainValidationOptions(const Aws::Vector<DomainValidationOption>& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for <code>test.example.com</code> and
     * specify <b>DomainValidationOptions</b> of <code>example.com</code>, ACM sends
     * email to the domain registrant, technical contact, and administrative contact in
     * WHOIS and the following five addresses:</p> <ul> <li> <p>admin@example.com</p>
     * </li> <li> <p>administrator@example.com</p> </li> <li>
     * <p>hostmaster@example.com</p> </li> <li> <p>postmaster@example.com</p> </li>
     * <li> <p>webmaster@example.com</p> </li> </ul>
     */
    inline void SetDomainValidationOptions(Aws::Vector<DomainValidationOption>&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for <code>test.example.com</code> and
     * specify <b>DomainValidationOptions</b> of <code>example.com</code>, ACM sends
     * email to the domain registrant, technical contact, and administrative contact in
     * WHOIS and the following five addresses:</p> <ul> <li> <p>admin@example.com</p>
     * </li> <li> <p>administrator@example.com</p> </li> <li>
     * <p>hostmaster@example.com</p> </li> <li> <p>postmaster@example.com</p> </li>
     * <li> <p>webmaster@example.com</p> </li> </ul>
     */
    inline RequestCertificateRequest& WithDomainValidationOptions(const Aws::Vector<DomainValidationOption>& value) { SetDomainValidationOptions(value); return *this;}

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for <code>test.example.com</code> and
     * specify <b>DomainValidationOptions</b> of <code>example.com</code>, ACM sends
     * email to the domain registrant, technical contact, and administrative contact in
     * WHOIS and the following five addresses:</p> <ul> <li> <p>admin@example.com</p>
     * </li> <li> <p>administrator@example.com</p> </li> <li>
     * <p>hostmaster@example.com</p> </li> <li> <p>postmaster@example.com</p> </li>
     * <li> <p>webmaster@example.com</p> </li> </ul>
     */
    inline RequestCertificateRequest& WithDomainValidationOptions(Aws::Vector<DomainValidationOption>&& value) { SetDomainValidationOptions(value); return *this;}

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for <code>test.example.com</code> and
     * specify <b>DomainValidationOptions</b> of <code>example.com</code>, ACM sends
     * email to the domain registrant, technical contact, and administrative contact in
     * WHOIS and the following five addresses:</p> <ul> <li> <p>admin@example.com</p>
     * </li> <li> <p>administrator@example.com</p> </li> <li>
     * <p>hostmaster@example.com</p> </li> <li> <p>postmaster@example.com</p> </li>
     * <li> <p>webmaster@example.com</p> </li> </ul>
     */
    inline RequestCertificateRequest& AddDomainValidationOptions(const DomainValidationOption& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for <code>test.example.com</code> and
     * specify <b>DomainValidationOptions</b> of <code>example.com</code>, ACM sends
     * email to the domain registrant, technical contact, and administrative contact in
     * WHOIS and the following five addresses:</p> <ul> <li> <p>admin@example.com</p>
     * </li> <li> <p>administrator@example.com</p> </li> <li>
     * <p>hostmaster@example.com</p> </li> <li> <p>postmaster@example.com</p> </li>
     * <li> <p>webmaster@example.com</p> </li> </ul>
     */
    inline RequestCertificateRequest& AddDomainValidationOptions(DomainValidationOption&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }

  private:
    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;
    Aws::Vector<Aws::String> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet;
    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;
    Aws::Vector<DomainValidationOption> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
