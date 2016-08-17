/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Contains information about a returned public key.</p>
   */
  class AWS_CLOUDTRAIL_API PublicKey
  {
  public:
    PublicKey();
    PublicKey(const Aws::Utils::Json::JsonValue& jsonValue);
    PublicKey& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The DER encoded public key value in PKCS#1 format.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetValue() const{ return m_value; }

    /**
     * <p>The DER encoded public key value in PKCS#1 format.</p>
     */
    inline void SetValue(const Aws::Utils::ByteBuffer& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The DER encoded public key value in PKCS#1 format.</p>
     */
    inline void SetValue(Aws::Utils::ByteBuffer&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The DER encoded public key value in PKCS#1 format.</p>
     */
    inline PublicKey& WithValue(const Aws::Utils::ByteBuffer& value) { SetValue(value); return *this;}

    /**
     * <p>The DER encoded public key value in PKCS#1 format.</p>
     */
    inline PublicKey& WithValue(Aws::Utils::ByteBuffer&& value) { SetValue(value); return *this;}

    /**
     * <p>The starting time of validity of the public key.</p>
     */
    inline const Aws::Utils::DateTime& GetValidityStartTime() const{ return m_validityStartTime; }

    /**
     * <p>The starting time of validity of the public key.</p>
     */
    inline void SetValidityStartTime(const Aws::Utils::DateTime& value) { m_validityStartTimeHasBeenSet = true; m_validityStartTime = value; }

    /**
     * <p>The starting time of validity of the public key.</p>
     */
    inline void SetValidityStartTime(Aws::Utils::DateTime&& value) { m_validityStartTimeHasBeenSet = true; m_validityStartTime = value; }

    /**
     * <p>The starting time of validity of the public key.</p>
     */
    inline PublicKey& WithValidityStartTime(const Aws::Utils::DateTime& value) { SetValidityStartTime(value); return *this;}

    /**
     * <p>The starting time of validity of the public key.</p>
     */
    inline PublicKey& WithValidityStartTime(Aws::Utils::DateTime&& value) { SetValidityStartTime(value); return *this;}

    /**
     * <p>The ending time of validity of the public key.</p>
     */
    inline const Aws::Utils::DateTime& GetValidityEndTime() const{ return m_validityEndTime; }

    /**
     * <p>The ending time of validity of the public key.</p>
     */
    inline void SetValidityEndTime(const Aws::Utils::DateTime& value) { m_validityEndTimeHasBeenSet = true; m_validityEndTime = value; }

    /**
     * <p>The ending time of validity of the public key.</p>
     */
    inline void SetValidityEndTime(Aws::Utils::DateTime&& value) { m_validityEndTimeHasBeenSet = true; m_validityEndTime = value; }

    /**
     * <p>The ending time of validity of the public key.</p>
     */
    inline PublicKey& WithValidityEndTime(const Aws::Utils::DateTime& value) { SetValidityEndTime(value); return *this;}

    /**
     * <p>The ending time of validity of the public key.</p>
     */
    inline PublicKey& WithValidityEndTime(Aws::Utils::DateTime&& value) { SetValidityEndTime(value); return *this;}

    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline const Aws::String& GetFingerprint() const{ return m_fingerprint; }

    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline void SetFingerprint(const Aws::String& value) { m_fingerprintHasBeenSet = true; m_fingerprint = value; }

    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline void SetFingerprint(Aws::String&& value) { m_fingerprintHasBeenSet = true; m_fingerprint = value; }

    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline void SetFingerprint(const char* value) { m_fingerprintHasBeenSet = true; m_fingerprint.assign(value); }

    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline PublicKey& WithFingerprint(const Aws::String& value) { SetFingerprint(value); return *this;}

    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline PublicKey& WithFingerprint(Aws::String&& value) { SetFingerprint(value); return *this;}

    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline PublicKey& WithFingerprint(const char* value) { SetFingerprint(value); return *this;}

  private:
    Aws::Utils::ByteBuffer m_value;
    bool m_valueHasBeenSet;
    Aws::Utils::DateTime m_validityStartTime;
    bool m_validityStartTimeHasBeenSet;
    Aws::Utils::DateTime m_validityEndTime;
    bool m_validityEndTimeHasBeenSet;
    Aws::String m_fingerprint;
    bool m_fingerprintHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
