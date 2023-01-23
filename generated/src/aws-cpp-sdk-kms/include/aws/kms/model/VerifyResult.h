/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class VerifyResult
  {
  public:
    AWS_KMS_API VerifyResult();
    AWS_KMS_API VerifyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API VerifyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to verify the signature.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to verify the signature.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to verify the signature.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to verify the signature.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to verify the signature.</p>
     */
    inline VerifyResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to verify the signature.</p>
     */
    inline VerifyResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to verify the signature.</p>
     */
    inline VerifyResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>A Boolean value that indicates whether the signature was verified. A value of
     * <code>True</code> indicates that the <code>Signature</code> was produced by
     * signing the <code>Message</code> with the specified <code>KeyID</code> and
     * <code>SigningAlgorithm.</code> If the signature is not verified, the
     * <code>Verify</code> operation fails with a
     * <code>KMSInvalidSignatureException</code> exception. </p>
     */
    inline bool GetSignatureValid() const{ return m_signatureValid; }

    /**
     * <p>A Boolean value that indicates whether the signature was verified. A value of
     * <code>True</code> indicates that the <code>Signature</code> was produced by
     * signing the <code>Message</code> with the specified <code>KeyID</code> and
     * <code>SigningAlgorithm.</code> If the signature is not verified, the
     * <code>Verify</code> operation fails with a
     * <code>KMSInvalidSignatureException</code> exception. </p>
     */
    inline void SetSignatureValid(bool value) { m_signatureValid = value; }

    /**
     * <p>A Boolean value that indicates whether the signature was verified. A value of
     * <code>True</code> indicates that the <code>Signature</code> was produced by
     * signing the <code>Message</code> with the specified <code>KeyID</code> and
     * <code>SigningAlgorithm.</code> If the signature is not verified, the
     * <code>Verify</code> operation fails with a
     * <code>KMSInvalidSignatureException</code> exception. </p>
     */
    inline VerifyResult& WithSignatureValid(bool value) { SetSignatureValid(value); return *this;}


    /**
     * <p>The signing algorithm that was used to verify the signature.</p>
     */
    inline const SigningAlgorithmSpec& GetSigningAlgorithm() const{ return m_signingAlgorithm; }

    /**
     * <p>The signing algorithm that was used to verify the signature.</p>
     */
    inline void SetSigningAlgorithm(const SigningAlgorithmSpec& value) { m_signingAlgorithm = value; }

    /**
     * <p>The signing algorithm that was used to verify the signature.</p>
     */
    inline void SetSigningAlgorithm(SigningAlgorithmSpec&& value) { m_signingAlgorithm = std::move(value); }

    /**
     * <p>The signing algorithm that was used to verify the signature.</p>
     */
    inline VerifyResult& WithSigningAlgorithm(const SigningAlgorithmSpec& value) { SetSigningAlgorithm(value); return *this;}

    /**
     * <p>The signing algorithm that was used to verify the signature.</p>
     */
    inline VerifyResult& WithSigningAlgorithm(SigningAlgorithmSpec&& value) { SetSigningAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;

    bool m_signatureValid;

    SigningAlgorithmSpec m_signingAlgorithm;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
