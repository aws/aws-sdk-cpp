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
#include <aws/acm/ACMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class AWS_ACM_API ResendValidationEmailRequest : public ACMRequest
  {
  public:
    ResendValidationEmailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResendValidationEmail"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>String that contains the ARN of the requested certificate. The certificate
     * ARN is generated and returned by the <a>RequestCertificate</a> action as soon as
     * the request is made. By default, using this parameter causes email to be sent to
     * all top-level domains you specified in the certificate request. The ARN must be
     * of the form: </p> <p>
     * <code>arn:aws:acm:us-east-1:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>String that contains the ARN of the requested certificate. The certificate
     * ARN is generated and returned by the <a>RequestCertificate</a> action as soon as
     * the request is made. By default, using this parameter causes email to be sent to
     * all top-level domains you specified in the certificate request. The ARN must be
     * of the form: </p> <p>
     * <code>arn:aws:acm:us-east-1:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>String that contains the ARN of the requested certificate. The certificate
     * ARN is generated and returned by the <a>RequestCertificate</a> action as soon as
     * the request is made. By default, using this parameter causes email to be sent to
     * all top-level domains you specified in the certificate request. The ARN must be
     * of the form: </p> <p>
     * <code>arn:aws:acm:us-east-1:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>String that contains the ARN of the requested certificate. The certificate
     * ARN is generated and returned by the <a>RequestCertificate</a> action as soon as
     * the request is made. By default, using this parameter causes email to be sent to
     * all top-level domains you specified in the certificate request. The ARN must be
     * of the form: </p> <p>
     * <code>arn:aws:acm:us-east-1:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>String that contains the ARN of the requested certificate. The certificate
     * ARN is generated and returned by the <a>RequestCertificate</a> action as soon as
     * the request is made. By default, using this parameter causes email to be sent to
     * all top-level domains you specified in the certificate request. The ARN must be
     * of the form: </p> <p>
     * <code>arn:aws:acm:us-east-1:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>String that contains the ARN of the requested certificate. The certificate
     * ARN is generated and returned by the <a>RequestCertificate</a> action as soon as
     * the request is made. By default, using this parameter causes email to be sent to
     * all top-level domains you specified in the certificate request. The ARN must be
     * of the form: </p> <p>
     * <code>arn:aws:acm:us-east-1:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline ResendValidationEmailRequest& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>String that contains the ARN of the requested certificate. The certificate
     * ARN is generated and returned by the <a>RequestCertificate</a> action as soon as
     * the request is made. By default, using this parameter causes email to be sent to
     * all top-level domains you specified in the certificate request. The ARN must be
     * of the form: </p> <p>
     * <code>arn:aws:acm:us-east-1:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline ResendValidationEmailRequest& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>String that contains the ARN of the requested certificate. The certificate
     * ARN is generated and returned by the <a>RequestCertificate</a> action as soon as
     * the request is made. By default, using this parameter causes email to be sent to
     * all top-level domains you specified in the certificate request. The ARN must be
     * of the form: </p> <p>
     * <code>arn:aws:acm:us-east-1:123456789012:certificate/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline ResendValidationEmailRequest& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The fully qualified domain name (FQDN) of the certificate that needs to be
     * validated.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The fully qualified domain name (FQDN) of the certificate that needs to be
     * validated.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The fully qualified domain name (FQDN) of the certificate that needs to be
     * validated.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The fully qualified domain name (FQDN) of the certificate that needs to be
     * validated.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The fully qualified domain name (FQDN) of the certificate that needs to be
     * validated.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The fully qualified domain name (FQDN) of the certificate that needs to be
     * validated.</p>
     */
    inline ResendValidationEmailRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN) of the certificate that needs to be
     * validated.</p>
     */
    inline ResendValidationEmailRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN) of the certificate that needs to be
     * validated.</p>
     */
    inline ResendValidationEmailRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS and the following five
     * addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p> </li> <li>
     * <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline const Aws::String& GetValidationDomain() const{ return m_validationDomain; }

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS and the following five
     * addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p> </li> <li>
     * <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline bool ValidationDomainHasBeenSet() const { return m_validationDomainHasBeenSet; }

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS and the following five
     * addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p> </li> <li>
     * <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline void SetValidationDomain(const Aws::String& value) { m_validationDomainHasBeenSet = true; m_validationDomain = value; }

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS and the following five
     * addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p> </li> <li>
     * <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline void SetValidationDomain(Aws::String&& value) { m_validationDomainHasBeenSet = true; m_validationDomain = std::move(value); }

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS and the following five
     * addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p> </li> <li>
     * <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline void SetValidationDomain(const char* value) { m_validationDomainHasBeenSet = true; m_validationDomain.assign(value); }

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS and the following five
     * addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p> </li> <li>
     * <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline ResendValidationEmailRequest& WithValidationDomain(const Aws::String& value) { SetValidationDomain(value); return *this;}

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS and the following five
     * addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p> </li> <li>
     * <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline ResendValidationEmailRequest& WithValidationDomain(Aws::String&& value) { SetValidationDomain(std::move(value)); return *this;}

    /**
     * <p>The base validation domain that will act as the suffix of the email addresses
     * that are used to send the emails. This must be the same as the
     * <code>Domain</code> value or a superdomain of the <code>Domain</code> value. For
     * example, if you requested a certificate for
     * <code>site.subdomain.example.com</code> and specify a <b>ValidationDomain</b> of
     * <code>subdomain.example.com</code>, ACM sends email to the domain registrant,
     * technical contact, and administrative contact in WHOIS and the following five
     * addresses:</p> <ul> <li> <p>admin@subdomain.example.com</p> </li> <li>
     * <p>administrator@subdomain.example.com</p> </li> <li>
     * <p>hostmaster@subdomain.example.com</p> </li> <li>
     * <p>postmaster@subdomain.example.com</p> </li> <li>
     * <p>webmaster@subdomain.example.com</p> </li> </ul>
     */
    inline ResendValidationEmailRequest& WithValidationDomain(const char* value) { SetValidationDomain(value); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet;

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_validationDomain;
    bool m_validationDomainHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
