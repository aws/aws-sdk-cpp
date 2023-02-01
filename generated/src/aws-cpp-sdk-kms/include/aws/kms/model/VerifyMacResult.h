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
    AWS_KMS_API VerifyMacResult();
    AWS_KMS_API VerifyMacResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API VerifyMacResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The HMAC KMS key used in the verification.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The HMAC KMS key used in the verification.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyId = value; }

    /**
     * <p>The HMAC KMS key used in the verification.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyId = std::move(value); }

    /**
     * <p>The HMAC KMS key used in the verification.</p>
     */
    inline void SetKeyId(const char* value) { m_keyId.assign(value); }

    /**
     * <p>The HMAC KMS key used in the verification.</p>
     */
    inline VerifyMacResult& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The HMAC KMS key used in the verification.</p>
     */
    inline VerifyMacResult& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The HMAC KMS key used in the verification.</p>
     */
    inline VerifyMacResult& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>A Boolean value that indicates whether the HMAC was verified. A value of
     * <code>True</code> indicates that the HMAC (<code>Mac</code>) was generated with
     * the specified <code>Message</code>, HMAC KMS key (<code>KeyID</code>) and
     * <code>MacAlgorithm.</code>.</p> <p>If the HMAC is not verified, the
     * <code>VerifyMac</code> operation fails with a
     * <code>KMSInvalidMacException</code> exception. This exception indicates that one
     * or more of the inputs changed since the HMAC was computed.</p>
     */
    inline bool GetMacValid() const{ return m_macValid; }

    /**
     * <p>A Boolean value that indicates whether the HMAC was verified. A value of
     * <code>True</code> indicates that the HMAC (<code>Mac</code>) was generated with
     * the specified <code>Message</code>, HMAC KMS key (<code>KeyID</code>) and
     * <code>MacAlgorithm.</code>.</p> <p>If the HMAC is not verified, the
     * <code>VerifyMac</code> operation fails with a
     * <code>KMSInvalidMacException</code> exception. This exception indicates that one
     * or more of the inputs changed since the HMAC was computed.</p>
     */
    inline void SetMacValid(bool value) { m_macValid = value; }

    /**
     * <p>A Boolean value that indicates whether the HMAC was verified. A value of
     * <code>True</code> indicates that the HMAC (<code>Mac</code>) was generated with
     * the specified <code>Message</code>, HMAC KMS key (<code>KeyID</code>) and
     * <code>MacAlgorithm.</code>.</p> <p>If the HMAC is not verified, the
     * <code>VerifyMac</code> operation fails with a
     * <code>KMSInvalidMacException</code> exception. This exception indicates that one
     * or more of the inputs changed since the HMAC was computed.</p>
     */
    inline VerifyMacResult& WithMacValid(bool value) { SetMacValid(value); return *this;}


    /**
     * <p>The MAC algorithm used in the verification.</p>
     */
    inline const MacAlgorithmSpec& GetMacAlgorithm() const{ return m_macAlgorithm; }

    /**
     * <p>The MAC algorithm used in the verification.</p>
     */
    inline void SetMacAlgorithm(const MacAlgorithmSpec& value) { m_macAlgorithm = value; }

    /**
     * <p>The MAC algorithm used in the verification.</p>
     */
    inline void SetMacAlgorithm(MacAlgorithmSpec&& value) { m_macAlgorithm = std::move(value); }

    /**
     * <p>The MAC algorithm used in the verification.</p>
     */
    inline VerifyMacResult& WithMacAlgorithm(const MacAlgorithmSpec& value) { SetMacAlgorithm(value); return *this;}

    /**
     * <p>The MAC algorithm used in the verification.</p>
     */
    inline VerifyMacResult& WithMacAlgorithm(MacAlgorithmSpec&& value) { SetMacAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;

    bool m_macValid;

    MacAlgorithmSpec m_macAlgorithm;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
