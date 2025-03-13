/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/kms/model/SigningAlgorithmSpec.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  class SignResult
  {
  public:
    AWS_KMS_API SignResult() = default;
    AWS_KMS_API SignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API SignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to sign the message.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    SignResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cryptographic signature that was generated for the message. </p> <ul>
     * <li> <p>When used with the supported RSA signing algorithms, the encoding of
     * this value is defined by <a href="https://tools.ietf.org/html/rfc8017">PKCS #1
     * in RFC 8017</a>.</p> </li> <li> <p>When used with the
     * <code>ECDSA_SHA_256</code>, <code>ECDSA_SHA_384</code>, or
     * <code>ECDSA_SHA_512</code> signing algorithms, this value is a DER-encoded
     * object as defined by ANSI X9.62–2005 and <a
     * href="https://tools.ietf.org/html/rfc3279#section-2.2.3">RFC 3279 Section
     * 2.2.3</a>. This is the most commonly used signature format and is appropriate
     * for most uses. </p> </li> </ul> <p>When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetSignature() const { return m_signature; }
    template<typename SignatureT = Aws::Utils::ByteBuffer>
    void SetSignature(SignatureT&& value) { m_signatureHasBeenSet = true; m_signature = std::forward<SignatureT>(value); }
    template<typename SignatureT = Aws::Utils::ByteBuffer>
    SignResult& WithSignature(SignatureT&& value) { SetSignature(std::forward<SignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing algorithm that was used to sign the message.</p>
     */
    inline SigningAlgorithmSpec GetSigningAlgorithm() const { return m_signingAlgorithm; }
    inline void SetSigningAlgorithm(SigningAlgorithmSpec value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }
    inline SignResult& WithSigningAlgorithm(SigningAlgorithmSpec value) { SetSigningAlgorithm(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SignResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::ByteBuffer m_signature{};
    bool m_signatureHasBeenSet = false;

    SigningAlgorithmSpec m_signingAlgorithm{SigningAlgorithmSpec::NOT_SET};
    bool m_signingAlgorithmHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
