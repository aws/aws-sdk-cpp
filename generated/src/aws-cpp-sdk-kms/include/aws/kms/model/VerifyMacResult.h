/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/MacAlgorithmSpec.h>
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
  class VerifyMacResult
  {
  public:
    AWS_KMS_API VerifyMacResult() = default;
    AWS_KMS_API VerifyMacResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API VerifyMacResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HMAC KMS key used in the verification.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    VerifyMacResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether the HMAC was verified. A value of
     * <code>True</code> indicates that the HMAC (<code>Mac</code>) was generated with
     * the specified <code>Message</code>, HMAC KMS key (<code>KeyID</code>) and
     * <code>MacAlgorithm.</code>.</p> <p>If the HMAC is not verified, the
     * <code>VerifyMac</code> operation fails with a
     * <code>KMSInvalidMacException</code> exception. This exception indicates that one
     * or more of the inputs changed since the HMAC was computed.</p>
     */
    inline bool GetMacValid() const { return m_macValid; }
    inline void SetMacValid(bool value) { m_macValidHasBeenSet = true; m_macValid = value; }
    inline VerifyMacResult& WithMacValid(bool value) { SetMacValid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC algorithm used in the verification.</p>
     */
    inline MacAlgorithmSpec GetMacAlgorithm() const { return m_macAlgorithm; }
    inline void SetMacAlgorithm(MacAlgorithmSpec value) { m_macAlgorithmHasBeenSet = true; m_macAlgorithm = value; }
    inline VerifyMacResult& WithMacAlgorithm(MacAlgorithmSpec value) { SetMacAlgorithm(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    VerifyMacResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    bool m_macValid{false};
    bool m_macValidHasBeenSet = false;

    MacAlgorithmSpec m_macAlgorithm{MacAlgorithmSpec::NOT_SET};
    bool m_macAlgorithmHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
