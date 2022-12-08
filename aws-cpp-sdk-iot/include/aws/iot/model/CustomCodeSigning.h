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
    AWS_IOT_API CustomCodeSigning();
    AWS_IOT_API CustomCodeSigning(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API CustomCodeSigning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The signature for the file.</p>
     */
    inline const CodeSigningSignature& GetSignature() const{ return m_signature; }

    /**
     * <p>The signature for the file.</p>
     */
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }

    /**
     * <p>The signature for the file.</p>
     */
    inline void SetSignature(const CodeSigningSignature& value) { m_signatureHasBeenSet = true; m_signature = value; }

    /**
     * <p>The signature for the file.</p>
     */
    inline void SetSignature(CodeSigningSignature&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }

    /**
     * <p>The signature for the file.</p>
     */
    inline CustomCodeSigning& WithSignature(const CodeSigningSignature& value) { SetSignature(value); return *this;}

    /**
     * <p>The signature for the file.</p>
     */
    inline CustomCodeSigning& WithSignature(CodeSigningSignature&& value) { SetSignature(std::move(value)); return *this;}


    /**
     * <p>The certificate chain.</p>
     */
    inline const CodeSigningCertificateChain& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The certificate chain.</p>
     */
    inline bool CertificateChainHasBeenSet() const { return m_certificateChainHasBeenSet; }

    /**
     * <p>The certificate chain.</p>
     */
    inline void SetCertificateChain(const CodeSigningCertificateChain& value) { m_certificateChainHasBeenSet = true; m_certificateChain = value; }

    /**
     * <p>The certificate chain.</p>
     */
    inline void SetCertificateChain(CodeSigningCertificateChain&& value) { m_certificateChainHasBeenSet = true; m_certificateChain = std::move(value); }

    /**
     * <p>The certificate chain.</p>
     */
    inline CustomCodeSigning& WithCertificateChain(const CodeSigningCertificateChain& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The certificate chain.</p>
     */
    inline CustomCodeSigning& WithCertificateChain(CodeSigningCertificateChain&& value) { SetCertificateChain(std::move(value)); return *this;}


    /**
     * <p>The hash algorithm used to code sign the file. You can use a string as the
     * algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>SHA256</code> or <code>SHA1</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline const Aws::String& GetHashAlgorithm() const{ return m_hashAlgorithm; }

    /**
     * <p>The hash algorithm used to code sign the file. You can use a string as the
     * algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>SHA256</code> or <code>SHA1</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline bool HashAlgorithmHasBeenSet() const { return m_hashAlgorithmHasBeenSet; }

    /**
     * <p>The hash algorithm used to code sign the file. You can use a string as the
     * algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>SHA256</code> or <code>SHA1</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline void SetHashAlgorithm(const Aws::String& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = value; }

    /**
     * <p>The hash algorithm used to code sign the file. You can use a string as the
     * algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>SHA256</code> or <code>SHA1</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline void SetHashAlgorithm(Aws::String&& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = std::move(value); }

    /**
     * <p>The hash algorithm used to code sign the file. You can use a string as the
     * algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>SHA256</code> or <code>SHA1</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline void SetHashAlgorithm(const char* value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm.assign(value); }

    /**
     * <p>The hash algorithm used to code sign the file. You can use a string as the
     * algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>SHA256</code> or <code>SHA1</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline CustomCodeSigning& WithHashAlgorithm(const Aws::String& value) { SetHashAlgorithm(value); return *this;}

    /**
     * <p>The hash algorithm used to code sign the file. You can use a string as the
     * algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>SHA256</code> or <code>SHA1</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline CustomCodeSigning& WithHashAlgorithm(Aws::String&& value) { SetHashAlgorithm(std::move(value)); return *this;}

    /**
     * <p>The hash algorithm used to code sign the file. You can use a string as the
     * algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>SHA256</code> or <code>SHA1</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline CustomCodeSigning& WithHashAlgorithm(const char* value) { SetHashAlgorithm(value); return *this;}


    /**
     * <p>The signature algorithm used to code sign the file. You can use a string as
     * the algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>ECDSA</code> or <code>RSA</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline const Aws::String& GetSignatureAlgorithm() const{ return m_signatureAlgorithm; }

    /**
     * <p>The signature algorithm used to code sign the file. You can use a string as
     * the algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>ECDSA</code> or <code>RSA</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline bool SignatureAlgorithmHasBeenSet() const { return m_signatureAlgorithmHasBeenSet; }

    /**
     * <p>The signature algorithm used to code sign the file. You can use a string as
     * the algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>ECDSA</code> or <code>RSA</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline void SetSignatureAlgorithm(const Aws::String& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = value; }

    /**
     * <p>The signature algorithm used to code sign the file. You can use a string as
     * the algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>ECDSA</code> or <code>RSA</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline void SetSignatureAlgorithm(Aws::String&& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = std::move(value); }

    /**
     * <p>The signature algorithm used to code sign the file. You can use a string as
     * the algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>ECDSA</code> or <code>RSA</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline void SetSignatureAlgorithm(const char* value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm.assign(value); }

    /**
     * <p>The signature algorithm used to code sign the file. You can use a string as
     * the algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>ECDSA</code> or <code>RSA</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline CustomCodeSigning& WithSignatureAlgorithm(const Aws::String& value) { SetSignatureAlgorithm(value); return *this;}

    /**
     * <p>The signature algorithm used to code sign the file. You can use a string as
     * the algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>ECDSA</code> or <code>RSA</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline CustomCodeSigning& WithSignatureAlgorithm(Aws::String&& value) { SetSignatureAlgorithm(std::move(value)); return *this;}

    /**
     * <p>The signature algorithm used to code sign the file. You can use a string as
     * the algorithm name if the target over-the-air (OTA) update devices are able to
     * verify the signature that was generated using the same signature algorithm. For
     * example, FreeRTOS uses <code>ECDSA</code> or <code>RSA</code>, so you can pass
     * either of them based on which was used for generating the signature.</p>
     */
    inline CustomCodeSigning& WithSignatureAlgorithm(const char* value) { SetSignatureAlgorithm(value); return *this;}

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
