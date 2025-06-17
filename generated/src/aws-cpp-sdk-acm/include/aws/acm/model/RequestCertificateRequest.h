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
#include <aws/acm/model/CertificateManagedBy.h>
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
    AWS_ACM_API RequestCertificateRequest() = default;

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
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    RequestCertificateRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
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
    inline ValidationMethod GetValidationMethod() const { return m_validationMethod; }
    inline bool ValidationMethodHasBeenSet() const { return m_validationMethodHasBeenSet; }
    inline void SetValidationMethod(ValidationMethod value) { m_validationMethodHasBeenSet = true; m_validationMethod = value; }
    inline RequestCertificateRequest& WithValidationMethod(ValidationMethod value) { SetValidationMethod(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const { return m_subjectAlternativeNames; }
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }
    template<typename SubjectAlternativeNamesT = Aws::Vector<Aws::String>>
    void SetSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::forward<SubjectAlternativeNamesT>(value); }
    template<typename SubjectAlternativeNamesT = Aws::Vector<Aws::String>>
    RequestCertificateRequest& WithSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { SetSubjectAlternativeNames(std::forward<SubjectAlternativeNamesT>(value)); return *this;}
    template<typename SubjectAlternativeNamesT = Aws::String>
    RequestCertificateRequest& AddSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.emplace_back(std::forward<SubjectAlternativeNamesT>(value)); return *this; }
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
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    RequestCertificateRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name that you want ACM to use to send you emails so that you can
     * validate domain ownership.</p>
     */
    inline const Aws::Vector<DomainValidationOption>& GetDomainValidationOptions() const { return m_domainValidationOptions; }
    inline bool DomainValidationOptionsHasBeenSet() const { return m_domainValidationOptionsHasBeenSet; }
    template<typename DomainValidationOptionsT = Aws::Vector<DomainValidationOption>>
    void SetDomainValidationOptions(DomainValidationOptionsT&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions = std::forward<DomainValidationOptionsT>(value); }
    template<typename DomainValidationOptionsT = Aws::Vector<DomainValidationOption>>
    RequestCertificateRequest& WithDomainValidationOptions(DomainValidationOptionsT&& value) { SetDomainValidationOptions(std::forward<DomainValidationOptionsT>(value)); return *this;}
    template<typename DomainValidationOptionsT = DomainValidationOption>
    RequestCertificateRequest& AddDomainValidationOptions(DomainValidationOptionsT&& value) { m_domainValidationOptionsHasBeenSet = true; m_domainValidationOptions.emplace_back(std::forward<DomainValidationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>You can use this parameter to specify whether to add the certificate to a
     * certificate transparency log and export your certificate.</p> <p>Certificate
     * transparency makes it possible to detect SSL/TLS certificates that have been
     * mistakenly or maliciously issued. Certificates that have not been logged
     * typically produce an error message in a browser. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-bestpractices.html#best-practices-transparency">Opting
     * Out of Certificate Transparency Logging</a>.</p> <p>You can export public ACM
     * certificates to use with Amazon Web Services services as well as outside the
     * Amazon Web Services Cloud. For more information, see <a
     * href="https://docs.aws.amazon.com/acm/latest/userguide/acm-exportable-certificates.html">Certificate
     * Manager exportable public certificate</a>.</p>
     */
    inline const CertificateOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = CertificateOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = CertificateOptions>
    RequestCertificateRequest& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
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
    inline const Aws::String& GetCertificateAuthorityArn() const { return m_certificateAuthorityArn; }
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }
    template<typename CertificateAuthorityArnT = Aws::String>
    void SetCertificateAuthorityArn(CertificateAuthorityArnT&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::forward<CertificateAuthorityArnT>(value); }
    template<typename CertificateAuthorityArnT = Aws::String>
    RequestCertificateRequest& WithCertificateAuthorityArn(CertificateAuthorityArnT&& value) { SetCertificateAuthorityArn(std::forward<CertificateAuthorityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more resource tags to associate with the certificate.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RequestCertificateRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RequestCertificateRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    inline KeyAlgorithm GetKeyAlgorithm() const { return m_keyAlgorithm; }
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
    inline void SetKeyAlgorithm(KeyAlgorithm value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }
    inline RequestCertificateRequest& WithKeyAlgorithm(KeyAlgorithm value) { SetKeyAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon Web Services service that manages the certificate
     * issued by ACM.</p>
     */
    inline CertificateManagedBy GetManagedBy() const { return m_managedBy; }
    inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
    inline void SetManagedBy(CertificateManagedBy value) { m_managedByHasBeenSet = true; m_managedBy = value; }
    inline RequestCertificateRequest& WithManagedBy(CertificateManagedBy value) { SetManagedBy(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ValidationMethod m_validationMethod{ValidationMethod::NOT_SET};
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

    KeyAlgorithm m_keyAlgorithm{KeyAlgorithm::NOT_SET};
    bool m_keyAlgorithmHasBeenSet = false;

    CertificateManagedBy m_managedBy{CertificateManagedBy::NOT_SET};
    bool m_managedByHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
