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
    AWS_KMS_API GenerateMacResult();
    AWS_KMS_API GenerateMacResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GenerateMacResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The hash-based message authentication code (HMAC) that was generated for the
     * specified message, HMAC KMS key, and MAC algorithm.</p> <p>This is the standard,
     * raw HMAC defined in <a href="https://datatracker.ietf.org/doc/html/rfc2104">RFC
     * 2104</a>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetMac() const{ return m_mac; }
    inline void SetMac(const Aws::Utils::ByteBuffer& value) { m_mac = value; }
    inline void SetMac(Aws::Utils::ByteBuffer&& value) { m_mac = std::move(value); }
    inline GenerateMacResult& WithMac(const Aws::Utils::ByteBuffer& value) { SetMac(value); return *this;}
    inline GenerateMacResult& WithMac(Aws::Utils::ByteBuffer&& value) { SetMac(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MAC algorithm that was used to generate the HMAC.</p>
     */
    inline const MacAlgorithmSpec& GetMacAlgorithm() const{ return m_macAlgorithm; }
    inline void SetMacAlgorithm(const MacAlgorithmSpec& value) { m_macAlgorithm = value; }
    inline void SetMacAlgorithm(MacAlgorithmSpec&& value) { m_macAlgorithm = std::move(value); }
    inline GenerateMacResult& WithMacAlgorithm(const MacAlgorithmSpec& value) { SetMacAlgorithm(value); return *this;}
    inline GenerateMacResult& WithMacAlgorithm(MacAlgorithmSpec&& value) { SetMacAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HMAC KMS key used in the operation.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }
    inline GenerateMacResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline GenerateMacResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline GenerateMacResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GenerateMacResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GenerateMacResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GenerateMacResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_mac;

    MacAlgorithmSpec m_macAlgorithm;

    Aws::String m_keyId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
