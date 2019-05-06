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
#include <aws/acm/model/ValidationMethod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/CertificateOptions.h>
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
     * <p> Fully qualified domain name (FQDN), such as www.example.com, that you want
     * to secure with an ACM certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The first domain name you enter cannot exceed 63
     * octets, including periods. Each subsequent Subject Alternative Name (SAN),
     * however, can be up to 253 octets in length. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, that you want
     * to secure with an ACM certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The first domain name you enter cannot exceed 63
     * octets, including periods. Each subsequent Subject Alternative Name (SAN),
     * however, can be up to 253 octets in length. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, that you want
     * to secure with an ACM certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The first domain name you enter cannot exceed 63
     * octets, including periods. Each subsequent Subject Alternative Name (SAN),
     * however, can be up to 253 octets in length. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, that you want
     * to secure with an ACM certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The first domain name you enter cannot exceed 63
     * octets, including periods. Each subsequent Subject Alternative Name (SAN),
     * however, can be up to 253 octets in length. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, that you want
     * to secure with an ACM certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The first domain name you enter cannot exceed 63
     * octets, including periods. Each subsequent Subject Alternative Name (SAN),
     * however, can be up to 253 octets in length. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, that you want
     * to secure with an ACM certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The first domain name you enter cannot exceed 63
     * octets, including periods. Each subsequent Subject Alternative Name (SAN),
     * however, can be up to 253 octets in length. </p>
     */
    inline RequestCertificateRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, that you want
     * to secure with an ACM certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The first domain name you enter cannot exceed 63
     * octets, including periods. Each subsequent Subject Alternative Name (SAN),
     * however, can be up to 253 octets in length. </p>
     */
    inline RequestCertificateRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> Fully qualified domain name (FQDN), such as www.example.com, that you want
     * to secure with an ACM certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p> The first domain name you enter cannot exceed 63
     * octets, including periods. Each subsequent Subject Alternative Name (SAN),
     * however, can be up to 253 octets in length. </p>
     */
    inline RequestCertificateRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The method you want to use if you are requesting a public certificate to
     * validate that you own or control domain. You can <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">validate
     * with DNS</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-email.html">validate
     * with email</a>. We recommend that you use DNS validation. </p>
     */
    inline const ValidationMethod& GetValidationMethod() const{ return m_validationMethod; }

    /**
     * <p>The method you want to use if you are requesting a public certificate to
     * validate that you own or control domain. You can <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">validate
     * with DNS</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-email.html">validate
     * with email</a>. We recommend that you use DNS validation. </p>
     */
    inline bool ValidationMethodHasBeenSet() const { return m_validationMethodHasBeenSet; }

    /**
     * <p>The method you want to use if you are requesting a public certificate to
     * validate that you own or control domain. You can <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">validate
     * with DNS</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-email.html">validate
     * with email</a>. We recommend that you use DNS validation. </p>
     */
    inline void SetValidationMethod(const ValidationMethod& value) { m_validationMethodHasBeenSet = true; m_validationMethod = value; }

    /**
     * <p>The method you want to use if you are requesting a public certificate to
     * validate that you own or control domain. You can <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">validate
     * with DNS</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-email.html">validate
     * with email</a>. We recommend that you use DNS validation. </p>
     */
    inline void SetValidationMethod(ValidationMethod&& value) { m_validationMethodHasBeenSet = true; m_validationMethod = std::move(value); }

    /**
     * <p>The method you want to use if you are requesting a public certificate to
     * validate that you own or control domain. You can <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">validate
     * with DNS</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-email.html">validate
     * with email</a>. We recommend that you use DNS validation. </p>
     */
    inline RequestCertificateRequest& WithValidationMethod(const ValidationMethod& value) { SetValidationMethod(value); return *this;}

    /**
     * <p>The method you want to use if you are requesting a public certificate to
     * validate that you own or control domain. You can <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">validate
     * with DNS</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-email.html">validate
     * with email</a>. We recommend that you use DNS validation. </p>
     */
    inline RequestCertificateRequest& WithValidationMethod(ValidationMethod&& value) { SetValidationMethod(std::move(value)); return *this;}


    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     * <p> The maximum length of a SAN DNS name is 253 octets. The name is made up of
     * multiple labels separated by periods. No label can be longer than 63 octets.
     * Consider the following examples: </p> <ul> <li> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets.</p> </li> <li> <p>
     * <code>(64 octets).(63 octets).(63 octets).(61 octets)</code> is not legal
     * because the total length exceeds 253 octets (64+1+63+1+63+1+61) and the first
     * label exceeds 63 octets.</p> </li> <li> <p> <code>(63 octets).(63 octets).(63
     * octets).(62 octets)</code> is not legal because the total length of the DNS name
     * (63+1+63+1+63+1+62) exceeds 253 octets.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const{ return m_subjectAlternativeNames; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     * <p> The maximum length of a SAN DNS name is 253 octets. The name is made up of
     * multiple labels separated by periods. No label can be longer than 63 octets.
     * Consider the following examples: </p> <ul> <li> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets.</p> </li> <li> <p>
     * <code>(64 octets).(63 octets).(63 octets).(61 octets)</code> is not legal
     * because the total length exceeds 253 octets (64+1+63+1+63+1+61) and the first
     * label exceeds 63 octets.</p> </li> <li> <p> <code>(63 octets).(63 octets).(63
     * octets).(62 octets)</code> is not legal because the total length of the DNS name
     * (63+1+63+1+63+1+62) exceeds 253 octets.</p> </li> </ul>
     */
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     * <p> The maximum length of a SAN DNS name is 253 octets. The name is made up of
     * multiple labels separated by periods. No label can be longer than 63 octets.
     * Consider the following examples: </p> <ul> <li> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets.</p> </li> <li> <p>
     * <code>(64 octets).(63 octets).(63 octets).(61 octets)</code> is not legal
     * because the total length exceeds 253 octets (64+1+63+1+63+1+61) and the first
     * label exceeds 63 octets.</p> </li> <li> <p> <code>(63 octets).(63 octets).(63
     * octets).(62 octets)</code> is not legal because the total length of the DNS name
     * (63+1+63+1+63+1+62) exceeds 253 octets.</p> </li> </ul>
     */
    inline void SetSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     * <p> The maximum length of a SAN DNS name is 253 octets. The name is made up of
     * multiple labels separated by periods. No label can be longer than 63 octets.
     * Consider the following examples: </p> <ul> <li> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets.</p> </li> <li> <p>
     * <code>(64 octets).(63 octets).(63 octets).(61 octets)</code> is not legal
     * because the total length exceeds 253 octets (64+1+63+1+63+1+61) and the first
     * label exceeds 63 octets.</p> </li> <li> <p> <code>(63 octets).(63 octets).(63
     * octets).(62 octets)</code> is not legal because the total length of the DNS name
     * (63+1+63+1+63+1+62) exceeds 253 octets.</p> </li> </ul>
     */
    inline void SetSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::move(value); }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     * <p> The maximum length of a SAN DNS name is 253 octets. The name is made up of
     * multiple labels separated by periods. No label can be longer than 63 octets.
     * Consider the following examples: </p> <ul> <li> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets.</p> </li> <li> <p>
     * <code>(64 octets).(63 octets).(63 octets).(61 octets)</code> is not legal
     * because the total length exceeds 253 octets (64+1+63+1+63+1+61) and the first
     * label exceeds 63 octets.</p> </li> <li> <p> <code>(63 octets).(63 octets).(63
     * octets).(62 octets)</code> is not legal because the total length of the DNS name
     * (63+1+63+1+63+1+62) exceeds 253 octets.</p> </li> </ul>
     */
    inline RequestCertificateRequest& WithSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { SetSubjectAlternativeNames(value); return *this;}

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     * <p> The maximum length of a SAN DNS name is 253 octets. The name is made up of
     * multiple labels separated by periods. No label can be longer than 63 octets.
     * Consider the following examples: </p> <ul> <li> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets.</p> </li> <li> <p>
     * <code>(64 octets).(63 octets).(63 octets).(61 octets)</code> is not legal
     * because the total length exceeds 253 octets (64+1+63+1+63+1+61) and the first
     * label exceeds 63 octets.</p> </li> <li> <p> <code>(63 octets).(63 octets).(63
     * octets).(62 octets)</code> is not legal because the total length of the DNS name
     * (63+1+63+1+63+1+62) exceeds 253 octets.</p> </li> </ul>
     */
    inline RequestCertificateRequest& WithSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { SetSubjectAlternativeNames(std::move(value)); return *this;}

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     * <p> The maximum length of a SAN DNS name is 253 octets. The name is made up of
     * multiple labels separated by periods. No label can be longer than 63 octets.
     * Consider the following examples: </p> <ul> <li> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets.</p> </li> <li> <p>
     * <code>(64 octets).(63 octets).(63 octets).(61 octets)</code> is not legal
     * because the total length exceeds 253 octets (64+1+63+1+63+1+61) and the first
     * label exceeds 63 octets.</p> </li> <li> <p> <code>(63 octets).(63 octets).(63
     * octets).(62 octets)</code> is not legal because the total length of the DNS name
     * (63+1+63+1+63+1+62) exceeds 253 octets.</p> </li> </ul>
     */
    inline RequestCertificateRequest& AddSubjectAlternativeNames(const Aws::String& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     * <p> The maximum length of a SAN DNS name is 253 octets. The name is made up of
     * multiple labels separated by periods. No label can be longer than 63 octets.
     * Consider the following examples: </p> <ul> <li> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets.</p> </li> <li> <p>
     * <code>(64 octets).(63 octets).(63 octets).(61 octets)</code> is not legal
     * because the total length exceeds 253 octets (64+1+63+1+63+1+61) and the first
     * label exceeds 63 octets.</p> </li> <li> <p> <code>(63 octets).(63 octets).(63
     * octets).(62 octets)</code> is not legal because the total length of the DNS name
     * (63+1+63+1+63+1+62) exceeds 253 octets.</p> </li> </ul>
     */
    inline RequestCertificateRequest& AddSubjectAlternativeNames(Aws::String&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM certificate is 100. However, the initial limit is 10
     * domain names. If you need more than 10 names, you must request a limit increase.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Limits</a>.</p>
     * <p> The maximum length of a SAN DNS name is 253 octets. The name is made up of
     * multiple labels separated by periods. No label can be longer than 63 octets.
     * Consider the following examples: </p> <ul> <li> <p> <code>(63 octets).(63
     * octets).(63 octets).(61 octets)</code> is legal because the total length is 253
     * octets (63+1+63+1+63+1+61) and no label exceeds 63 octets.</p> </li> <li> <p>
     * <code>(64 octets).(63 octets).(63 octets).(61 octets)</code> is not legal
     * because the total length exceeds 253 octets (64+1+63+1+63+1+61) and the first
     * label exceeds 63 octets.</p> </li> <li> <p> <code>(63 octets).(63 octets).(63
     * octets).(62 octets)</code> is not legal because the total length of the DNS name
     * (63+1+63+1+63+1+62) exceeds 253 octets.</p> </li> </ul>
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
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

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
     * <p>The domain name that you want ACM to use to send you emails so that you can
     * validate domain ownership.</p>
     */
    inline const Aws::Vector<DomainValidationOption>& GetDomainValidationOptions() const{ return m_domainValidationOptions; }

    /**
     * <p>The domain name that you want ACM to use to send you emails so that you can
     * validate domain ownership.</p>
     */
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }

    /**
     * <p>The domain name that you want ACM to use to send you emails so that you can
     * validate domain ownership.</p>
     */
    inline void SetDomainValidationOptions(const Aws::Vector<DomainValidationOption>& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }

    /**
     * <p>The domain name that you want ACM to use to send you emails so that you can
     * validate domain ownership.</p>
     */
    inline void SetDomainValidationOptions(Aws::Vector<DomainValidationOption>&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::move(value); }

    /**
     * <p>The domain name that you want ACM to use to send you emails so that you can
     * validate domain ownership.</p>
     */
    inline RequestCertificateRequest& WithDomainValidationOptions(const Aws::Vector<DomainValidationOption>& value) { SetDomainValidationOptions(value); return *this;}

    /**
     * <p>The domain name that you want ACM to use to send you emails so that you can
     * validate domain ownership.</p>
     */
    inline RequestCertificateRequest& WithDomainValidationOptions(Aws::Vector<DomainValidationOption>&& value) { SetDomainValidationOptions(std::move(value)); return *this;}

    /**
     * <p>The domain name that you want ACM to use to send you emails so that you can
     * validate domain ownership.</p>
     */
    inline RequestCertificateRequest& AddDomainValidationOptions(const DomainValidationOption& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }

    /**
     * <p>The domain name that you want ACM to use to send you emails so that you can
     * validate domain ownership.</p>
     */
    inline RequestCertificateRequest& AddDomainValidationOptions(DomainValidationOption&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>Currently, you can use this parameter to specify whether to add the
     * certificate to a certificate transparency log. Certificate transparency makes it
     * possible to detect SSL/TLS certificates that have been mistakenly or maliciously
     * issued. Certificates that have not been logged typically produce an error
     * message in a browser. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-bestpractices.html#best-practices-transparency">Opting
     * Out of Certificate Transparency Logging</a>.</p>
     */
    inline const CertificateOptions& GetOptions() const{ return m_options; }

    /**
     * <p>Currently, you can use this parameter to specify whether to add the
     * certificate to a certificate transparency log. Certificate transparency makes it
     * possible to detect SSL/TLS certificates that have been mistakenly or maliciously
     * issued. Certificates that have not been logged typically produce an error
     * message in a browser. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-bestpractices.html#best-practices-transparency">Opting
     * Out of Certificate Transparency Logging</a>.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>Currently, you can use this parameter to specify whether to add the
     * certificate to a certificate transparency log. Certificate transparency makes it
     * possible to detect SSL/TLS certificates that have been mistakenly or maliciously
     * issued. Certificates that have not been logged typically produce an error
     * message in a browser. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-bestpractices.html#best-practices-transparency">Opting
     * Out of Certificate Transparency Logging</a>.</p>
     */
    inline void SetOptions(const CertificateOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>Currently, you can use this parameter to specify whether to add the
     * certificate to a certificate transparency log. Certificate transparency makes it
     * possible to detect SSL/TLS certificates that have been mistakenly or maliciously
     * issued. Certificates that have not been logged typically produce an error
     * message in a browser. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-bestpractices.html#best-practices-transparency">Opting
     * Out of Certificate Transparency Logging</a>.</p>
     */
    inline void SetOptions(CertificateOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>Currently, you can use this parameter to specify whether to add the
     * certificate to a certificate transparency log. Certificate transparency makes it
     * possible to detect SSL/TLS certificates that have been mistakenly or maliciously
     * issued. Certificates that have not been logged typically produce an error
     * message in a browser. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-bestpractices.html#best-practices-transparency">Opting
     * Out of Certificate Transparency Logging</a>.</p>
     */
    inline RequestCertificateRequest& WithOptions(const CertificateOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>Currently, you can use this parameter to specify whether to add the
     * certificate to a certificate transparency log. Certificate transparency makes it
     * possible to detect SSL/TLS certificates that have been mistakenly or maliciously
     * issued. Certificates that have not been logged typically produce an error
     * message in a browser. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-bestpractices.html#best-practices-transparency">Opting
     * Out of Certificate Transparency Logging</a>.</p>
     */
    inline RequestCertificateRequest& WithOptions(CertificateOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the private certificate authority (CA) that
     * will be used to issue the certificate. If you do not provide an ARN and you are
     * trying to request a private certificate, ACM will attempt to issue a public
     * certificate. For more information about private CAs, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaWelcome.html">AWS
     * Certificate Manager Private Certificate Authority (PCA)</a> user guide. The ARN
     * must have the following form: </p> <p>
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the private certificate authority (CA) that
     * will be used to issue the certificate. If you do not provide an ARN and you are
     * trying to request a private certificate, ACM will attempt to issue a public
     * certificate. For more information about private CAs, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaWelcome.html">AWS
     * Certificate Manager Private Certificate Authority (PCA)</a> user guide. The ARN
     * must have the following form: </p> <p>
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the private certificate authority (CA) that
     * will be used to issue the certificate. If you do not provide an ARN and you are
     * trying to request a private certificate, ACM will attempt to issue a public
     * certificate. For more information about private CAs, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaWelcome.html">AWS
     * Certificate Manager Private Certificate Authority (PCA)</a> user guide. The ARN
     * must have the following form: </p> <p>
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the private certificate authority (CA) that
     * will be used to issue the certificate. If you do not provide an ARN and you are
     * trying to request a private certificate, ACM will attempt to issue a public
     * certificate. For more information about private CAs, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaWelcome.html">AWS
     * Certificate Manager Private Certificate Authority (PCA)</a> user guide. The ARN
     * must have the following form: </p> <p>
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the private certificate authority (CA) that
     * will be used to issue the certificate. If you do not provide an ARN and you are
     * trying to request a private certificate, ACM will attempt to issue a public
     * certificate. For more information about private CAs, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaWelcome.html">AWS
     * Certificate Manager Private Certificate Authority (PCA)</a> user guide. The ARN
     * must have the following form: </p> <p>
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the private certificate authority (CA) that
     * will be used to issue the certificate. If you do not provide an ARN and you are
     * trying to request a private certificate, ACM will attempt to issue a public
     * certificate. For more information about private CAs, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaWelcome.html">AWS
     * Certificate Manager Private Certificate Authority (PCA)</a> user guide. The ARN
     * must have the following form: </p> <p>
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline RequestCertificateRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the private certificate authority (CA) that
     * will be used to issue the certificate. If you do not provide an ARN and you are
     * trying to request a private certificate, ACM will attempt to issue a public
     * certificate. For more information about private CAs, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaWelcome.html">AWS
     * Certificate Manager Private Certificate Authority (PCA)</a> user guide. The ARN
     * must have the following form: </p> <p>
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline RequestCertificateRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the private certificate authority (CA) that
     * will be used to issue the certificate. If you do not provide an ARN and you are
     * trying to request a private certificate, ACM will attempt to issue a public
     * certificate. For more information about private CAs, see the <a
     * href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaWelcome.html">AWS
     * Certificate Manager Private Certificate Authority (PCA)</a> user guide. The ARN
     * must have the following form: </p> <p>
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline RequestCertificateRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    ValidationMethod m_validationMethod;
    bool m_validationMethodHasBeenSet;

    Aws::Vector<Aws::String> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet;

    Aws::Vector<DomainValidationOption> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet;

    CertificateOptions m_options;
    bool m_optionsHasBeenSet;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
