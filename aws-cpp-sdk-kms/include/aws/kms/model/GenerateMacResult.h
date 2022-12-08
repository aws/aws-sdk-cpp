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


    /**
     * <p>The hash-based message authentication code (HMAC) that was generated for the
     * specified message, HMAC KMS key, and MAC algorithm.</p> <p>This is the standard,
     * raw HMAC defined in <a href="https://datatracker.ietf.org/doc/html/rfc2104">RFC
     * 2104</a>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetMac() const{ return m_mac; }

    /**
     * <p>The hash-based message authentication code (HMAC) that was generated for the
     * specified message, HMAC KMS key, and MAC algorithm.</p> <p>This is the standard,
     * raw HMAC defined in <a href="https://datatracker.ietf.org/doc/html/rfc2104">RFC
     * 2104</a>.</p>
     */
    inline void SetMac(const Aws::Utils::ByteBuffer& value) { m_mac = value; }

    /**
     * <p>The hash-based message authentication code (HMAC) that was generated for the
     * specified message, HMAC KMS key, and MAC algorithm.</p> <p>This is the standard,
     * raw HMAC defined in <a href="https://datatracker.ietf.org/doc/html/rfc2104">RFC
     * 2104</a>.</p>
     */
    inline void SetMac(Aws::Utils::ByteBuffer&& value) { m_mac = std::move(value); }

    /**
     * <p>The hash-based message authentication code (HMAC) that was generated for the
     * specified message, HMAC KMS key, and MAC algorithm.</p> <p>This is the standard,
     * raw HMAC defined in <a href="https://datatracker.ietf.org/doc/html/rfc2104">RFC
     * 2104</a>.</p>
     */
    inline GenerateMacResult& WithMac(const Aws::Utils::ByteBuffer& value) { SetMac(value); return *this;}

    /**
     * <p>The hash-based message authentication code (HMAC) that was generated for the
     * specified message, HMAC KMS key, and MAC algorithm.</p> <p>This is the standard,
     * raw HMAC defined in <a href="https://datatracker.ietf.org/doc/html/rfc2104">RFC
     * 2104</a>.</p>
     */
    inline GenerateMacResult& WithMac(Aws::Utils::ByteBuffer&& value) { SetMac(std::move(value)); return *this;}


    /**
     * <p>The MAC algorithm that was used to generate the HMAC.</p>
     */
    inline const MacAlgorithmSpec& GetMacAlgorithm() const{ return m_macAlgorithm; }

    /**
     * <p>The MAC algorithm that was used to generate the HMAC.</p>
     */
    inline void SetMacAlgorithm(const MacAlgorithmSpec& value) { m_macAlgorithm = value; }

    /**
     * <p>The MAC algorithm that was used to generate the HMAC.</p>
     */
    inline void SetMacAlgorithm(MacAlgorithmSpec&& value) { m_macAlgorithm = std::move(value); }

    /**
     * <p>The MAC algorithm that was used to generate the HMAC.</p>
     */
    inline GenerateMacResult& WithMacAlgorithm(const MacAlgorithmSpec& value) { SetMacAlgorithm(value); return *this;}

    /**
     * <p>The MAC algorithm that was used to generate the HMAC.</p>
     */
    inline GenerateMacResult& WithMacAlgorithm(MacAlgorithmSpec&& value) { SetMacAlgorithm(std::move(value)); return *this;}


    /**
     * <p>The HMAC KMS key used in the operation.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The HMAC KMS key used in the operation.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The HMAC KMS key used in the operation.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The HMAC KMS key used in the operation.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The HMAC KMS key used in the operation.</p>
     */
    inline GenerateMacResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The HMAC KMS key used in the operation.</p>
     */
    inline GenerateMacResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The HMAC KMS key used in the operation.</p>
     */
    inline GenerateMacResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_mac;

    MacAlgorithmSpec m_macAlgorithm;

    Aws::String m_keyId;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
