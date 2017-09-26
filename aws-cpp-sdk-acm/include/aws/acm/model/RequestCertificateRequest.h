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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/DomainValidationOption.h>
#include <utility>

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
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RequestCertificate"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, of the site
     * that you want to secure with an ACM Certificate. Use an asterisk (*) to create a
     * wildcard certificate that protects several sites in the same domain. For
     * example, *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The maximum length of a DNS name is 253 octets. The
     * name is made up of multiple labels separated by periods. No label can be longer
     * than 63 octets. Consider the following examples: </p> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets. </p> <p> <code>(64
     * octets).(63 octets).(63 octets).(61 octets)</code> is not legal because the
     * total length exceeds 253 octets (64+1+63+1+63+1+61) and the first label exceeds
     * 63 octets. </p> <p> <code>(63 octets).(63 octets).(63 octets).(62 octets)</code>
     * is not legal because the total length of the DNS name (63+1+63+1+63+1+62)
     * exceeds 253 octets. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, of the site
     * that you want to secure with an ACM Certificate. Use an asterisk (*) to create a
     * wildcard certificate that protects several sites in the same domain. For
     * example, *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The maximum length of a DNS name is 253 octets. The
     * name is made up of multiple labels separated by periods. No label can be longer
     * than 63 octets. Consider the following examples: </p> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets. </p> <p> <code>(64
     * octets).(63 octets).(63 octets).(61 octets)</code> is not legal because the
     * total length exceeds 253 octets (64+1+63+1+63+1+61) and the first label exceeds
     * 63 octets. </p> <p> <code>(63 octets).(63 octets).(63 octets).(62 octets)</code>
     * is not legal because the total length of the DNS name (63+1+63+1+63+1+62)
     * exceeds 253 octets. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, of the site
     * that you want to secure with an ACM Certificate. Use an asterisk (*) to create a
     * wildcard certificate that protects several sites in the same domain. For
     * example, *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The maximum length of a DNS name is 253 octets. The
     * name is made up of multiple labels separated by periods. No label can be longer
     * than 63 octets. Consider the following examples: </p> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets. </p> <p> <code>(64
     * octets).(63 octets).(63 octets).(61 octets)</code> is not legal because the
     * total length exceeds 253 octets (64+1+63+1+63+1+61) and the first label exceeds
     * 63 octets. </p> <p> <code>(63 octets).(63 octets).(63 octets).(62 octets)</code>
     * is not legal because the total length of the DNS name (63+1+63+1+63+1+62)
     * exceeds 253 octets. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, of the site
     * that you want to secure with an ACM Certificate. Use an asterisk (*) to create a
     * wildcard certificate that protects several sites in the same domain. For
     * example, *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The maximum length of a DNS name is 253 octets. The
     * name is made up of multiple labels separated by periods. No label can be longer
     * than 63 octets. Consider the following examples: </p> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets. </p> <p> <code>(64
     * octets).(63 octets).(63 octets).(61 octets)</code> is not legal because the
     * total length exceeds 253 octets (64+1+63+1+63+1+61) and the first label exceeds
     * 63 octets. </p> <p> <code>(63 octets).(63 octets).(63 octets).(62 octets)</code>
     * is not legal because the total length of the DNS name (63+1+63+1+63+1+62)
     * exceeds 253 octets. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, of the site
     * that you want to secure with an ACM Certificate. Use an asterisk (*) to create a
     * wildcard certificate that protects several sites in the same domain. For
     * example, *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The maximum length of a DNS name is 253 octets. The
     * name is made up of multiple labels separated by periods. No label can be longer
     * than 63 octets. Consider the following examples: </p> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets. </p> <p> <code>(64
     * octets).(63 octets).(63 octets).(61 octets)</code> is not legal because the
     * total length exceeds 253 octets (64+1+63+1+63+1+61) and the first label exceeds
     * 63 octets. </p> <p> <code>(63 octets).(63 octets).(63 octets).(62 octets)</code>
     * is not legal because the total length of the DNS name (63+1+63+1+63+1+62)
     * exceeds 253 octets. </p>
     */
    inline RequestCertificateRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, of the site
     * that you want to secure with an ACM Certificate. Use an asterisk (*) to create a
     * wildcard certificate that protects several sites in the same domain. For
     * example, *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The maximum length of a DNS name is 253 octets. The
     * name is made up of multiple labels separated by periods. No label can be longer
     * than 63 octets. Consider the following examples: </p> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets. </p> <p> <code>(64
     * octets).(63 octets).(63 octets).(61 octets)</code> is not legal because the
     * total length exceeds 253 octets (64+1+63+1+63+1+61) and the first label exceeds
     * 63 octets. </p> <p> <code>(63 octets).(63 octets).(63 octets).(62 octets)</code>
     * is not legal because the total length of the DNS name (63+1+63+1+63+1+62)
     * exceeds 253 octets. </p>
     */
    inline RequestCertificateRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, of the site
     * that you want to secure with an ACM Certificate. Use an asterisk (*) to create a
     * wildcard certificate that protects several sites in the same domain. For
     * example, *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The maximum length of a DNS name is 253 octets. The
     * name is made up of multiple labels separated by periods. No label can be longer
     * than 63 octets. Consider the following examples: </p> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets. </p> <p> <code>(64
     * octets).(63 octets).(63 octets).(61 octets)</code> is not legal because the
     * total length exceeds 253 octets (64+1+63+1+63+1+61) and the first label exceeds
     * 63 octets. </p> <p> <code>(63 octets).(63 octets).(63 octets).(62 octets)</code>
     * is not legal because the total length of the DNS name (63+1+63+1+63+1+62)
     * exceeds 253 octets. </p>
     */
    inline RequestCertificateRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM Certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const{ return m_subjectAlternativeNames; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM Certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline void SetSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM Certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline void SetSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::move(value); }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM Certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline RequestCertificateRequest& WithSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { SetSubjectAlternativeNames(value); return *this;}

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM Certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline RequestCertificateRequest& WithSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { SetSubjectAlternativeNames(std::move(value)); return *this;}

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM Certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline RequestCertificateRequest& AddSubjectAlternativeNames(const Aws::String& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM Certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     */
    inline RequestCertificateRequest& AddSubjectAlternativeNames(Aws::String&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM Certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM Certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="http://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
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
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

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
    inline RequestCertificateRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

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
     * <p>The domain name that you want ACM to use to send you emails to validate your
     * ownership of the domain.</p>
     */
    inline const Aws::Vector<DomainValidationOption>& GetDomainValidationOptions() const{ return m_domainValidationOptions; }

    /**
     * <p>The domain name that you want ACM to use to send you emails to validate your
     * ownership of the domain.</p>
     */
    inline void SetDomainValidationOptions(const Aws::Vector<DomainValidationOption>& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }

    /**
     * <p>The domain name that you want ACM to use to send you emails to validate your
     * ownership of the domain.</p>
     */
    inline void SetDomainValidationOptions(Aws::Vector<DomainValidationOption>&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::move(value); }

    /**
     * <p>The domain name that you want ACM to use to send you emails to validate your
     * ownership of the domain.</p>
     */
    inline RequestCertificateRequest& WithDomainValidationOptions(const Aws::Vector<DomainValidationOption>& value) { SetDomainValidationOptions(value); return *this;}

    /**
     * <p>The domain name that you want ACM to use to send you emails to validate your
     * ownership of the domain.</p>
     */
    inline RequestCertificateRequest& WithDomainValidationOptions(Aws::Vector<DomainValidationOption>&& value) { SetDomainValidationOptions(std::move(value)); return *this;}

    /**
     * <p>The domain name that you want ACM to use to send you emails to validate your
     * ownership of the domain.</p>
     */
    inline RequestCertificateRequest& AddDomainValidationOptions(const DomainValidationOption& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }

    /**
     * <p>The domain name that you want ACM to use to send you emails to validate your
     * ownership of the domain.</p>
     */
    inline RequestCertificateRequest& AddDomainValidationOptions(DomainValidationOption&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(std::move(value)); return *this; }

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
