/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/CodeSigningSignature.h>
#include <aws/iot/model/CodeSigningCertificateChain.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes a custom method used to code sign a file.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CustomCodeSigning">AWS
   * API Reference</a></p>
   */
  class CustomCodeSigning
  {
  public:
    AWS_IOT_API CustomCodeSigning() = default;
    AWS_IOT_API CustomCodeSigning(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CustomCodeSigning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The signature for the file.</p>
     */
    inline const CodeSigningSignature& GetSignature() const { return m_signature; }
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }
    template<typename SignatureT = CodeSigningSignature>
    void SetSignature(SignatureT&& value) { m_signatureHasBeenSet = true; m_signature = std::forward<SignatureT>(value); }
    template<typename SignatureT = CodeSigningSignature>
    CustomCodeSigning& WithSignature(SignatureT&& value) { SetSignature(std::forward<SignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate chain.</p>
     */
    inline const CodeSigningCertificateChain& GetCertificateChain() const { return m_certificateChain; }
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }
    template<typename CertificateChainT = CodeSigningCertificateChain>
    void SetCertificateChain(CertificateChainT&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::forward<CertificateChainT>(value); }
    template<typename CertificateChainT = CodeSigningCertificateChain>
    CustomCodeSigning& WithCertificateChain(CertificateChainT&& value) { SetCertificateChain(std::forward<CertificateChainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash algorithm used to code sign the file. You can use a string as the
     * algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>SHA256</code> or <code>SHA1</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline const Aws::String& GetHashAlgorithm() const { return m_hashAlgorithm; }
    inline bool HashAlgorithmHasBeenSet() const { return m_hashAlgorithmHasBeenSet; }
    template<typename HashAlgorithmT = Aws::String>
    void SetHashAlgorithm(HashAlgorithmT&& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = std::forward<HashAlgorithmT>(value); }
    template<typename HashAlgorithmT = Aws::String>
    CustomCodeSigning& WithHashAlgorithm(HashAlgorithmT&& value) { SetHashAlgorithm(std::forward<HashAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signature algorithm used to code sign the file. You can use a string as
     * the algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>ECDSA</code> or <code>RSA</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline const Aws::String& GetSignatureAlgorithm() const { return m_signatureAlgorithm; }
    inline bool SignatureAlgorithmHasBeenSet() const { return m_signatureAlgorithmHasBeenSet; }
    template<typename SignatureAlgorithmT = Aws::String>
    void SetSignatureAlgorithm(SignatureAlgorithmT&& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = std::forward<SignatureAlgorithmT>(value); }
    template<typename SignatureAlgorithmT = Aws::String>
    CustomCodeSigning& WithSignatureAlgorithm(SignatureAlgorithmT&& value) { SetSignatureAlgorithm(std::forward<SignatureAlgorithmT>(value)); return *this;}
    ///@}
  private:

    CodeSigningSignature m_signature;
    bool m_signatureHasBeenSet = false;

    CodeSigningCertificateChain m_certificateChain;
    bool m_certificateChainHasBeenSet = false;

    Aws::String m_hashAlgorithm;
    bool m_hashAlgorithmHasBeenSet = false;

    Aws::String m_signatureAlgorithm;
    bool m_signatureAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
