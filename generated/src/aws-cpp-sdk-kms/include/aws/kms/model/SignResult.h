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
    AWS_KMS_API SignResult();
    AWS_KMS_API SignResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API SignResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to sign the message.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to sign the message.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to sign the message.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to sign the message.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to sign the message.</p>
     */
    inline SignResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to sign the message.</p>
     */
    inline SignResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to sign the message.</p>
     */
    inline SignResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The cryptographic signature that was generated for the message. </p> <ul>
     * <li> <p>When used with the supported RSA signing algorithms, the encoding of
     * this value is defined by <a href="https://tools.ietf.org/html/rfc8017">PKCS #1
     * in RFC 8017</a>.</p> </li> <li> <p>When used with the
     * <code>ECDSA_SHA_256</code>, <code>ECDSA_SHA_384</code>, or
     * <code>ECDSA_SHA_512</code> signing algorithms, this value is a DER-encoded
     * object as defined by ANS X9.62–2005 and <a
     * href="https://tools.ietf.org/html/rfc3279#section-2.2.3">RFC 3279 Section
     * 2.2.3</a>. This is the most commonly used signature format and is appropriate
     * for most uses. </p> </li> </ul> <p>When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetSignature() const{ return m_signature; }

    /**
     * <p>The cryptographic signature that was generated for the message. </p> <ul>
     * <li> <p>When used with the supported RSA signing algorithms, the encoding of
     * this value is defined by <a href="https://tools.ietf.org/html/rfc8017">PKCS #1
     * in RFC 8017</a>.</p> </li> <li> <p>When used with the
     * <code>ECDSA_SHA_256</code>, <code>ECDSA_SHA_384</code>, or
     * <code>ECDSA_SHA_512</code> signing algorithms, this value is a DER-encoded
     * object as defined by ANS X9.62–2005 and <a
     * href="https://tools.ietf.org/html/rfc3279#section-2.2.3">RFC 3279 Section
     * 2.2.3</a>. This is the most commonly used signature format and is appropriate
     * for most uses. </p> </li> </ul> <p>When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline void SetSignature(const Aws::Utils::ByteBuffer& value) { m_signature = value; }

    /**
     * <p>The cryptographic signature that was generated for the message. </p> <ul>
     * <li> <p>When used with the supported RSA signing algorithms, the encoding of
     * this value is defined by <a href="https://tools.ietf.org/html/rfc8017">PKCS #1
     * in RFC 8017</a>.</p> </li> <li> <p>When used with the
     * <code>ECDSA_SHA_256</code>, <code>ECDSA_SHA_384</code>, or
     * <code>ECDSA_SHA_512</code> signing algorithms, this value is a DER-encoded
     * object as defined by ANS X9.62–2005 and <a
     * href="https://tools.ietf.org/html/rfc3279#section-2.2.3">RFC 3279 Section
     * 2.2.3</a>. This is the most commonly used signature format and is appropriate
     * for most uses. </p> </li> </ul> <p>When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline void SetSignature(Aws::Utils::ByteBuffer&& value) { m_signature = std::move(value); }

    /**
     * <p>The cryptographic signature that was generated for the message. </p> <ul>
     * <li> <p>When used with the supported RSA signing algorithms, the encoding of
     * this value is defined by <a href="https://tools.ietf.org/html/rfc8017">PKCS #1
     * in RFC 8017</a>.</p> </li> <li> <p>When used with the
     * <code>ECDSA_SHA_256</code>, <code>ECDSA_SHA_384</code>, or
     * <code>ECDSA_SHA_512</code> signing algorithms, this value is a DER-encoded
     * object as defined by ANS X9.62–2005 and <a
     * href="https://tools.ietf.org/html/rfc3279#section-2.2.3">RFC 3279 Section
     * 2.2.3</a>. This is the most commonly used signature format and is appropriate
     * for most uses. </p> </li> </ul> <p>When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline SignResult& WithSignature(const Aws::Utils::ByteBuffer& value) { SetSignature(value); return *this;}

    /**
     * <p>The cryptographic signature that was generated for the message. </p> <ul>
     * <li> <p>When used with the supported RSA signing algorithms, the encoding of
     * this value is defined by <a href="https://tools.ietf.org/html/rfc8017">PKCS #1
     * in RFC 8017</a>.</p> </li> <li> <p>When used with the
     * <code>ECDSA_SHA_256</code>, <code>ECDSA_SHA_384</code>, or
     * <code>ECDSA_SHA_512</code> signing algorithms, this value is a DER-encoded
     * object as defined by ANS X9.62–2005 and <a
     * href="https://tools.ietf.org/html/rfc3279#section-2.2.3">RFC 3279 Section
     * 2.2.3</a>. This is the most commonly used signature format and is appropriate
     * for most uses. </p> </li> </ul> <p>When you use the HTTP API or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not
     * Base64-encoded.</p>
     */
    inline SignResult& WithSignature(Aws::Utils::ByteBuffer&& value) { SetSignature(std::move(value)); return *this;}


    /**
     * <p>The signing algorithm that was used to sign the message.</p>
     */
    inline const SigningAlgorithmSpec& GetSigningAlgorithm() const{ return m_signingAlgorithm; }

    /**
     * <p>The signing algorithm that was used to sign the message.</p>
     */
    inline void SetSigningAlgorithm(const SigningAlgorithmSpec& value) { m_signingAlgorithm = value; }

    /**
     * <p>The signing algorithm that was used to sign the message.</p>
     */
    inline void SetSigningAlgorithm(SigningAlgorithmSpec&& value) { m_signingAlgorithm = std::move(value); }

    /**
     * <p>The signing algorithm that was used to sign the message.</p>
     */
    inline SignResult& WithSigningAlgorithm(const SigningAlgorithmSpec& value) { SetSigningAlgorithm(value); return *this;}

    /**
     * <p>The signing algorithm that was used to sign the message.</p>
     */
    inline SignResult& WithSigningAlgorithm(SigningAlgorithmSpec&& value) { SetSigningAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;

    Aws::Utils::ByteBuffer m_signature;

    SigningAlgorithmSpec m_signingAlgorithm;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
