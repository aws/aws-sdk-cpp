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
  class AWS_KMS_API VerifyResult
  {
  public:
    VerifyResult();
    VerifyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    VerifyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the asymmetric CMK that was used to verify the
     * signature.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The unique identifier for the asymmetric CMK that was used to verify the
     * signature.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The unique identifier for the asymmetric CMK that was used to verify the
     * signature.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The unique identifier for the asymmetric CMK that was used to verify the
     * signature.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The unique identifier for the asymmetric CMK that was used to verify the
     * signature.</p>
     */
    inline VerifyResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The unique identifier for the asymmetric CMK that was used to verify the
     * signature.</p>
     */
    inline VerifyResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the asymmetric CMK that was used to verify the
     * signature.</p>
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
