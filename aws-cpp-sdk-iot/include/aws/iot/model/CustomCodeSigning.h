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
  class AWS_IOT_API CustomCodeSigning
  {
  public:
    CustomCodeSigning();
    CustomCodeSigning(Aws::Utils::Json::JsonView jsonValue);
    CustomCodeSigning& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The hash algorithm used to code sign the file.</p>
     */
    inline const Aws::String& GetHashAlgorithm() const{ return m_hashAlgorithm; }

    /**
     * <p>The hash algorithm used to code sign the file.</p>
     */
    inline bool HashAlgorithmHasBeenSet() const { return m_hashAlgorithmHasBeenSet; }

    /**
     * <p>The hash algorithm used to code sign the file.</p>
     */
    inline void SetHashAlgorithm(const Aws::String& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = value; }

    /**
     * <p>The hash algorithm used to code sign the file.</p>
     */
    inline void SetHashAlgorithm(Aws::String&& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = std::move(value); }

    /**
     * <p>The hash algorithm used to code sign the file.</p>
     */
    inline void SetHashAlgorithm(const char* value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm.assign(value); }

    /**
     * <p>The hash algorithm used to code sign the file.</p>
     */
    inline CustomCodeSigning& WithHashAlgorithm(const Aws::String& value) { SetHashAlgorithm(value); return *this;}

    /**
     * <p>The hash algorithm used to code sign the file.</p>
     */
    inline CustomCodeSigning& WithHashAlgorithm(Aws::String&& value) { SetHashAlgorithm(std::move(value)); return *this;}

    /**
     * <p>The hash algorithm used to code sign the file.</p>
     */
    inline CustomCodeSigning& WithHashAlgorithm(const char* value) { SetHashAlgorithm(value); return *this;}


    /**
     * <p>The signature algorithm used to code sign the file.</p>
     */
    inline const Aws::String& GetSignatureAlgorithm() const{ return m_signatureAlgorithm; }

    /**
     * <p>The signature algorithm used to code sign the file.</p>
     */
    inline bool SignatureAlgorithmHasBeenSet() const { return m_signatureAlgorithmHasBeenSet; }

    /**
     * <p>The signature algorithm used to code sign the file.</p>
     */
    inline void SetSignatureAlgorithm(const Aws::String& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = value; }

    /**
     * <p>The signature algorithm used to code sign the file.</p>
     */
    inline void SetSignatureAlgorithm(Aws::String&& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = std::move(value); }

    /**
     * <p>The signature algorithm used to code sign the file.</p>
     */
    inline void SetSignatureAlgorithm(const char* value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm.assign(value); }

    /**
     * <p>The signature algorithm used to code sign the file.</p>
     */
    inline CustomCodeSigning& WithSignatureAlgorithm(const Aws::String& value) { SetSignatureAlgorithm(value); return *this;}

    /**
     * <p>The signature algorithm used to code sign the file.</p>
     */
    inline CustomCodeSigning& WithSignatureAlgorithm(Aws::String&& value) { SetSignatureAlgorithm(std::move(value)); return *this;}

    /**
     * <p>The signature algorithm used to code sign the file.</p>
     */
    inline CustomCodeSigning& WithSignatureAlgorithm(const char* value) { SetSignatureAlgorithm(value); return *this;}

  private:

    CodeSigningSignature m_signature;
    bool m_signatureHasBeenSet;

    CodeSigningCertificateChain m_certificateChain;
    bool m_certificateChainHasBeenSet;

    Aws::String m_hashAlgorithm;
    bool m_hashAlgorithmHasBeenSet;

    Aws::String m_signatureAlgorithm;
    bool m_signatureAlgorithmHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
