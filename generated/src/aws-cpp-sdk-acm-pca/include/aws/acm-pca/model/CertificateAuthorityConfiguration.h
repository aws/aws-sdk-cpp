﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/KeyAlgorithm.h>
#include <aws/acm-pca/model/SigningAlgorithm.h>
#include <aws/acm-pca/model/ASN1Subject.h>
#include <aws/acm-pca/model/CsrExtensions.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Contains configuration information for your private certificate authority
   * (CA). This includes information about the class of public key algorithm and the
   * key pair that your private CA creates when it issues a certificate. It also
   * includes the signature algorithm that it uses when issuing certificates, and its
   * X.500 distinguished name. You must specify this information when you call the <a
   * href="https://docs.aws.amazon.com/privateca/latest/APIReference/API_CreateCertificateAuthority.html">CreateCertificateAuthority</a>
   * action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CertificateAuthorityConfiguration">AWS
   * API Reference</a></p>
   */
  class CertificateAuthorityConfiguration
  {
  public:
    AWS_ACMPCA_API CertificateAuthorityConfiguration() = default;
    AWS_ACMPCA_API CertificateAuthorityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API CertificateAuthorityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of the public key algorithm and size, in bits, of the key pair that your
     * CA creates when it issues a certificate. When you create a subordinate CA, you
     * must use a key algorithm supported by the parent CA.</p>
     */
    inline KeyAlgorithm GetKeyAlgorithm() const { return m_keyAlgorithm; }
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
    inline void SetKeyAlgorithm(KeyAlgorithm value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }
    inline CertificateAuthorityConfiguration& WithKeyAlgorithm(KeyAlgorithm value) { SetKeyAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the algorithm your private CA uses to sign certificate requests.</p>
     * <p>This parameter should not be confused with the <code>SigningAlgorithm</code>
     * parameter used to sign certificates when they are issued.</p>
     */
    inline SigningAlgorithm GetSigningAlgorithm() const { return m_signingAlgorithm; }
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }
    inline void SetSigningAlgorithm(SigningAlgorithm value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }
    inline CertificateAuthorityConfiguration& WithSigningAlgorithm(SigningAlgorithm value) { SetSigningAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Structure that contains X.500 distinguished name information for your private
     * CA.</p>
     */
    inline const ASN1Subject& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = ASN1Subject>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = ASN1Subject>
    CertificateAuthorityConfiguration& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information to be added to the extension section of the certificate
     * signing request (CSR).</p>
     */
    inline const CsrExtensions& GetCsrExtensions() const { return m_csrExtensions; }
    inline bool CsrExtensionsHasBeenSet() const { return m_csrExtensionsHasBeenSet; }
    template<typename CsrExtensionsT = CsrExtensions>
    void SetCsrExtensions(CsrExtensionsT&& value) { m_csrExtensionsHasBeenSet = true; m_csrExtensions = std::forward<CsrExtensionsT>(value); }
    template<typename CsrExtensionsT = CsrExtensions>
    CertificateAuthorityConfiguration& WithCsrExtensions(CsrExtensionsT&& value) { SetCsrExtensions(std::forward<CsrExtensionsT>(value)); return *this;}
    ///@}
  private:

    KeyAlgorithm m_keyAlgorithm{KeyAlgorithm::NOT_SET};
    bool m_keyAlgorithmHasBeenSet = false;

    SigningAlgorithm m_signingAlgorithm{SigningAlgorithm::NOT_SET};
    bool m_signingAlgorithmHasBeenSet = false;

    ASN1Subject m_subject;
    bool m_subjectHasBeenSet = false;

    CsrExtensions m_csrExtensions;
    bool m_csrExtensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
