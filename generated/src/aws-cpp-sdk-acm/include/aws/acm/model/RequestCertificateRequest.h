/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/ACMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm/model/ValidationMethod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/CertificateOptions.h>
#include <aws/acm/model/KeyAlgorithm.h>
#include <aws/acm/model/DomainValidationOption.h>
#include <aws/acm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class RequestCertificateRequest : public ACMRequest
  {
  public:
    AWS_ACM_API RequestCertificateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RequestCertificate"; }

    AWS_ACM_API Aws::String SerializePayload() const override;

    AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Fully qualified domain name (FQDN), such as www.example.com, that you want to
     * secure with an ACM certificate. Use an asterisk (*) to create a wildcard
     * certificate that protects several sites in the same domain. For example,
     * *.example.com protects www.example.com, site.example.com, and
     * images.example.com. </p> <p>In compliance with <a
     * href="https://datatracker.ietf.org/doc/html/rfc5280">RFC 5280</a>, the length of
     * the domain name (technically, the Common Name) that you provide cannot exceed 64
     * octets (characters), including periods. To add a longer domain name, specify it
     * in the Subject Alternative Name field, which supports names up to 253 octets in
     * length. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline RequestCertificateRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline RequestCertificateRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline RequestCertificateRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method you want to use if you are requesting a public certificate to
     * validate that you own or control domain. You can <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-dns.html">validate
     * with DNS</a> or <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-validate-email.html">validate
     * with email</a>. We recommend that you use DNS validation. </p>
     */
    inline const ValidationMethod& GetValidationMethod() const{ return m_validationMethod; }
    inline bool ValidationMethodHasBeenSet() const { return m_validationMethodHasBeenSet; }
    inline void SetValidationMethod(const ValidationMethod& value) { m_validationMethodHasBeenSet = true; m_validationMethod = value; }
    inline void SetValidationMethod(ValidationMethod&& value) { m_validationMethodHasBeenSet = true; m_validationMethod = std::move(value); }
    inline RequestCertificateRequest& WithValidationMethod(const ValidationMethod& value) { SetValidationMethod(value); return *this;}
    inline RequestCertificateRequest& WithValidationMethod(ValidationMethod&& value) { SetValidationMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional FQDNs to be included in the Subject Alternative Name extension of
     * the ACM certificate. For example, add the name www.example.net to a certificate
     * for which the <code>DomainName</code> field is www.example.com if users can
     * reach your site by using either name. The maximum number of domain names that
     * you can add to an ACM certificate is 100. However, the initial quota is 10
     * domain names. If you need more than 10 names, you must request a quota increase.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-limits.html">Quotas</a>.</p>
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
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }
    inline void SetSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = value; }
    inline void SetSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::move(value); }
    inline RequestCertificateRequest& WithSubjectAlternativeNames(const Aws::Vector<Aws::String>& value) { SetSubjectAlternativeNames(value); return *this;}
    inline RequestCertificateRequest& WithSubjectAlternativeNames(Aws::Vector<Aws::String>&& value) { SetSubjectAlternativeNames(std::move(value)); return *this;}
    inline RequestCertificateRequest& AddSubjectAlternativeNames(const Aws::String& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }
    inline RequestCertificateRequest& AddSubjectAlternativeNames(Aws::String&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(std::move(value)); return *this; }
    inline RequestCertificateRequest& AddSubjectAlternativeNames(const char* value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.push_back(value); return *this; }
    ///@}

    ///@{
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
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline RequestCertificateRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline RequestCertificateRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline RequestCertificateRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name that you want ACM to use to send you emails so that you can
     * validate domain ownership.</p>
     */
    inline const Aws::Vector<DomainValidationOption>& GetDomainValidationOptions() const{ return m_domainValidationOptions; }
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }
    inline void SetDomainValidationOptions(const Aws::Vector<DomainValidationOption>& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = value; }
    inline void SetDomainValidationOptions(Aws::Vector<DomainValidationOption>&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::move(value); }
    inline RequestCertificateRequest& WithDomainValidationOptions(const Aws::Vector<DomainValidationOption>& value) { SetDomainValidationOptions(value); return *this;}
    inline RequestCertificateRequest& WithDomainValidationOptions(Aws::Vector<DomainValidationOption>&& value) { SetDomainValidationOptions(std::move(value)); return *this;}
    inline RequestCertificateRequest& AddDomainValidationOptions(const DomainValidationOption& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(value); return *this; }
    inline RequestCertificateRequest& AddDomainValidationOptions(DomainValidationOption&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
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
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const CertificateOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(CertificateOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline RequestCertificateRequest& WithOptions(const CertificateOptions& value) { SetOptions(value); return *this;}
    inline RequestCertificateRequest& WithOptions(CertificateOptions&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the private certificate authority (CA) that
     * will be used to issue the certificate. If you do not provide an ARN and you are
     * trying to request a private certificate, ACM will attempt to issue a public
     * certificate. For more information about private CAs, see the <a
     * href="https://docs.aws.amazon.com/privateca/latest/userguide/PcaWelcome.html">Amazon
     * Web Services Private Certificate Authority</a> user guide. The ARN must have the
     * following form: </p> <p>
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * </p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }
    inline RequestCertificateRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}
    inline RequestCertificateRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}
    inline RequestCertificateRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more resource tags to associate with the certificate.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RequestCertificateRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RequestCertificateRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RequestCertificateRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RequestCertificateRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the algorithm of the public and private key pair that your
     * certificate uses to encrypt data. RSA is the default key algorithm for ACM
     * certificates. Elliptic Curve Digital Signature Algorithm (ECDSA) keys are
     * smaller, offering security comparable to RSA keys but with greater computing
     * efficiency. However, ECDSA is not supported by all network clients. Some Amazon
     * Web Services services may require RSA keys, or only support ECDSA keys of a
     * particular size, while others allow the use of either RSA and ECDSA keys to
     * ensure that compatibility is not broken. Check the requirements for the Amazon
     * Web Services service where you plan to deploy your certificate. For more
     * information about selecting an algorithm, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-certificate.html#algorithms">Key
     * algorithms</a>.</p>  <p>Algorithms supported for an ACM certificate
     * request include: </p> <ul> <li> <p> <code>RSA_2048</code> </p> </li> <li> <p>
     * <code>EC_prime256v1</code> </p> </li> <li> <p> <code>EC_secp384r1</code> </p>
     * </li> </ul> <p>Other listed algorithms are for imported certificates only. </p>
     *   <p>When you request a private PKI certificate signed by a CA from
     * Amazon Web Services Private CA, the specified signing algorithm family (RSA or
     * ECDSA) must match the algorithm family of the CA's secret key.</p> 
     * <p>Default: RSA_2048</p>
     */
    inline const KeyAlgorithm& GetKeyAlgorithm() const{ return m_keyAlgorithm; }
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
    inline void SetKeyAlgorithm(const KeyAlgorithm& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }
    inline void SetKeyAlgorithm(KeyAlgorithm&& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = std::move(value); }
    inline RequestCertificateRequest& WithKeyAlgorithm(const KeyAlgorithm& value) { SetKeyAlgorithm(value); return *this;}
    inline RequestCertificateRequest& WithKeyAlgorithm(KeyAlgorithm&& value) { SetKeyAlgorithm(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ValidationMethod m_validationMethod;
    bool m_validationMethodHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    Aws::Vector<DomainValidationOption> m_domainValidationOptions;
    bool m_domainValidationOptionsHasBeenSet = false;

    CertificateOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    KeyAlgorithm m_keyAlgorithm;
    bool m_keyAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
