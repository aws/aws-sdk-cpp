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
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/KeyAlgorithm.h>
#include <aws/acm-pca/model/SigningAlgorithm.h>
#include <aws/acm-pca/model/ASN1Subject.h>
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
   * X.500 distinguished name. You must specify this information when you call the
   * <a>CreateCertificateAuthority</a> action. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CertificateAuthorityConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ACMPCA_API CertificateAuthorityConfiguration
  {
  public:
    CertificateAuthorityConfiguration();
    CertificateAuthorityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CertificateAuthorityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Type of the public key algorithm and size, in bits, of the key pair that your
     * CA creates when it issues a certificate. When you create a subordinate CA, you
     * must use a key algorithm supported by the parent CA.</p>
     */
    inline const KeyAlgorithm& GetKeyAlgorithm() const{ return m_keyAlgorithm; }

    /**
     * <p>Type of the public key algorithm and size, in bits, of the key pair that your
     * CA creates when it issues a certificate. When you create a subordinate CA, you
     * must use a key algorithm supported by the parent CA.</p>
     */
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }

    /**
     * <p>Type of the public key algorithm and size, in bits, of the key pair that your
     * CA creates when it issues a certificate. When you create a subordinate CA, you
     * must use a key algorithm supported by the parent CA.</p>
     */
    inline void SetKeyAlgorithm(const KeyAlgorithm& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = value; }

    /**
     * <p>Type of the public key algorithm and size, in bits, of the key pair that your
     * CA creates when it issues a certificate. When you create a subordinate CA, you
     * must use a key algorithm supported by the parent CA.</p>
     */
    inline void SetKeyAlgorithm(KeyAlgorithm&& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = std::move(value); }

    /**
     * <p>Type of the public key algorithm and size, in bits, of the key pair that your
     * CA creates when it issues a certificate. When you create a subordinate CA, you
     * must use a key algorithm supported by the parent CA.</p>
     */
    inline CertificateAuthorityConfiguration& WithKeyAlgorithm(const KeyAlgorithm& value) { SetKeyAlgorithm(value); return *this;}

    /**
     * <p>Type of the public key algorithm and size, in bits, of the key pair that your
     * CA creates when it issues a certificate. When you create a subordinate CA, you
     * must use a key algorithm supported by the parent CA.</p>
     */
    inline CertificateAuthorityConfiguration& WithKeyAlgorithm(KeyAlgorithm&& value) { SetKeyAlgorithm(std::move(value)); return *this;}


    /**
     * <p>Name of the algorithm your private CA uses to sign certificate requests.</p>
     */
    inline const SigningAlgorithm& GetSigningAlgorithm() const{ return m_signingAlgorithm; }

    /**
     * <p>Name of the algorithm your private CA uses to sign certificate requests.</p>
     */
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }

    /**
     * <p>Name of the algorithm your private CA uses to sign certificate requests.</p>
     */
    inline void SetSigningAlgorithm(const SigningAlgorithm& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }

    /**
     * <p>Name of the algorithm your private CA uses to sign certificate requests.</p>
     */
    inline void SetSigningAlgorithm(SigningAlgorithm&& value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = std::move(value); }

    /**
     * <p>Name of the algorithm your private CA uses to sign certificate requests.</p>
     */
    inline CertificateAuthorityConfiguration& WithSigningAlgorithm(const SigningAlgorithm& value) { SetSigningAlgorithm(value); return *this;}

    /**
     * <p>Name of the algorithm your private CA uses to sign certificate requests.</p>
     */
    inline CertificateAuthorityConfiguration& WithSigningAlgorithm(SigningAlgorithm&& value) { SetSigningAlgorithm(std::move(value)); return *this;}


    /**
     * <p>Structure that contains X.500 distinguished name information for your private
     * CA.</p>
     */
    inline const ASN1Subject& GetSubject() const{ return m_subject; }

    /**
     * <p>Structure that contains X.500 distinguished name information for your private
     * CA.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>Structure that contains X.500 distinguished name information for your private
     * CA.</p>
     */
    inline void SetSubject(const ASN1Subject& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>Structure that contains X.500 distinguished name information for your private
     * CA.</p>
     */
    inline void SetSubject(ASN1Subject&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>Structure that contains X.500 distinguished name information for your private
     * CA.</p>
     */
    inline CertificateAuthorityConfiguration& WithSubject(const ASN1Subject& value) { SetSubject(value); return *this;}

    /**
     * <p>Structure that contains X.500 distinguished name information for your private
     * CA.</p>
     */
    inline CertificateAuthorityConfiguration& WithSubject(ASN1Subject&& value) { SetSubject(std::move(value)); return *this;}

  private:

    KeyAlgorithm m_keyAlgorithm;
    bool m_keyAlgorithmHasBeenSet;

    SigningAlgorithm m_signingAlgorithm;
    bool m_signingAlgorithmHasBeenSet;

    ASN1Subject m_subject;
    bool m_subjectHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
