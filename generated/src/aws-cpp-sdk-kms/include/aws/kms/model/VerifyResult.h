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
    AWS_KMS_API VerifyResult() = default;
    AWS_KMS_API VerifyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API VerifyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the asymmetric KMS key that was used to verify the signature.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    VerifyResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether the signature was verified. A value of
     * <code>True</code> indicates that the <code>Signature</code> was produced by
     * signing the <code>Message</code> with the specified <code>KeyID</code> and
     * <code>SigningAlgorithm.</code> If the signature is not verified, the
     * <code>Verify</code> operation fails with a
     * <code>KMSInvalidSignatureException</code> exception. </p>
     */
    inline bool GetSignatureValid() const { return m_signatureValid; }
    inline void SetSignatureValid(bool value) { m_signatureValidHasBeenSet = true; m_signatureValid = value; }
    inline VerifyResult& WithSignatureValid(bool value) { SetSignatureValid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing algorithm that was used to verify the signature.</p>
     */
    inline SigningAlgorithmSpec GetSigningAlgorithm() const { return m_signingAlgorithm; }
    inline void SetSigningAlgorithm(SigningAlgorithmSpec value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }
    inline VerifyResult& WithSigningAlgorithm(SigningAlgorithmSpec value) { SetSigningAlgorithm(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    VerifyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    bool m_signatureValid{false};
    bool m_signatureValidHasBeenSet = false;

    SigningAlgorithmSpec m_signingAlgorithm{SigningAlgorithmSpec::NOT_SET};
    bool m_signingAlgorithmHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
