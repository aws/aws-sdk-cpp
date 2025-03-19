/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/kms/model/MacAlgorithmSpec.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GenerateMacResult
  {
  public:
    AWS_KMS_API GenerateMacResult() = default;
    AWS_KMS_API GenerateMacResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateMacResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The hash-based message authentication code (HMAC) that was generated for the
     * specified message, HMAC KMS key, and MAC algorithm.</p> <p>This is the standard,
     * raw HMAC defined in <a href="https://datatracker.ietf.org/doc/html/rfc2104">RFC
     * 2104</a>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetMac() const { return m_mac; }
    template<typename MacT = Aws::Utils::ByteBuffer>
    void SetMac(MacT&& value) { m_macHasBeenSet = true; m_mac = std::forward<MacT>(value); }
    template<typename MacT = Aws::Utils::ByteBuffer>
    GenerateMacResult& WithMac(MacT&& value) { SetMac(std::forward<MacT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC algorithm that was used to generate the HMAC.</p>
     */
    inline MacAlgorithmSpec GetMacAlgorithm() const { return m_macAlgorithm; }
    inline void SetMacAlgorithm(MacAlgorithmSpec value) { m_macAlgorithmHasBeenSet = true; m_macAlgorithm = value; }
    inline GenerateMacResult& WithMacAlgorithm(MacAlgorithmSpec value) { SetMacAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HMAC KMS key used in the operation.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    GenerateMacResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GenerateMacResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_mac{};
    bool m_macHasBeenSet = false;

    MacAlgorithmSpec m_macAlgorithm{MacAlgorithmSpec::NOT_SET};
    bool m_macAlgorithmHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
