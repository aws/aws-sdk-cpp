/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Contains information about a returned public key.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/PublicKey">AWS
   * API Reference</a></p>
   */
  class PublicKey
  {
  public:
    AWS_CLOUDTRAIL_API PublicKey();
    AWS_CLOUDTRAIL_API PublicKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API PublicKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DER encoded public key value in PKCS#1 format.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetValue() const{ return m_value; }

    /**
     * <p>The DER encoded public key value in PKCS#1 format.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The DER encoded public key value in PKCS#1 format.</p>
     */
    inline void SetValue(const Aws::Utils::ByteBuffer& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The DER encoded public key value in PKCS#1 format.</p>
     */
    inline void SetValue(Aws::Utils::ByteBuffer&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The DER encoded public key value in PKCS#1 format.</p>
     */
    inline PublicKey& WithValue(const Aws::Utils::ByteBuffer& value) { SetValue(value); return *this;}

    /**
     * <p>The DER encoded public key value in PKCS#1 format.</p>
     */
    inline PublicKey& WithValue(Aws::Utils::ByteBuffer&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>The starting time of validity of the public key.</p>
     */
    inline const Aws::Utils::DateTime& GetValidityStartTime() const{ return m_validityStartTime; }

    /**
     * <p>The starting time of validity of the public key.</p>
     */
    inline bool ValidityStartTimeHasBeenSet() const { return m_validityStartTimeHasBeenSet; }

    /**
     * <p>The starting time of validity of the public key.</p>
     */
    inline void SetValidityStartTime(const Aws::Utils::DateTime& value) { m_validityStartTimeHasBeenSet = true; m_validityStartTime = value; }

    /**
     * <p>The starting time of validity of the public key.</p>
     */
    inline void SetValidityStartTime(Aws::Utils::DateTime&& value) { m_validityStartTimeHasBeenSet = true; m_validityStartTime = std::move(value); }

    /**
     * <p>The starting time of validity of the public key.</p>
     */
    inline PublicKey& WithValidityStartTime(const Aws::Utils::DateTime& value) { SetValidityStartTime(value); return *this;}

    /**
     * <p>The starting time of validity of the public key.</p>
     */
    inline PublicKey& WithValidityStartTime(Aws::Utils::DateTime&& value) { SetValidityStartTime(std::move(value)); return *this;}


    /**
     * <p>The ending time of validity of the public key.</p>
     */
    inline const Aws::Utils::DateTime& GetValidityEndTime() const{ return m_validityEndTime; }

    /**
     * <p>The ending time of validity of the public key.</p>
     */
    inline bool ValidityEndTimeHasBeenSet() const { return m_validityEndTimeHasBeenSet; }

    /**
     * <p>The ending time of validity of the public key.</p>
     */
    inline void SetValidityEndTime(const Aws::Utils::DateTime& value) { m_validityEndTimeHasBeenSet = true; m_validityEndTime = value; }

    /**
     * <p>The ending time of validity of the public key.</p>
     */
    inline void SetValidityEndTime(Aws::Utils::DateTime&& value) { m_validityEndTimeHasBeenSet = true; m_validityEndTime = std::move(value); }

    /**
     * <p>The ending time of validity of the public key.</p>
     */
    inline PublicKey& WithValidityEndTime(const Aws::Utils::DateTime& value) { SetValidityEndTime(value); return *this;}

    /**
     * <p>The ending time of validity of the public key.</p>
     */
    inline PublicKey& WithValidityEndTime(Aws::Utils::DateTime&& value) { SetValidityEndTime(std::move(value)); return *this;}


    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline const Aws::String& GetFingerprint() const{ return m_fingerprint; }

    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline bool FingerprintHasBeenSet() const { return m_fingerprintHasBeenSet; }

    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline void SetFingerprint(const Aws::String& value) { m_fingerprintHasBeenSet = true; m_fingerprint = value; }

    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline void SetFingerprint(Aws::String&& value) { m_fingerprintHasBeenSet = true; m_fingerprint = std::move(value); }

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
    inline PublicKey& WithFingerprint(Aws::String&& value) { SetFingerprint(std::move(value)); return *this;}

    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline PublicKey& WithFingerprint(const char* value) { SetFingerprint(value); return *this;}

  private:

    Aws::Utils::ByteBuffer m_value;
    bool m_valueHasBeenSet = false;

    Aws::Utils::DateTime m_validityStartTime;
    bool m_validityStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_validityEndTime;
    bool m_validityEndTimeHasBeenSet = false;

    Aws::String m_fingerprint;
    bool m_fingerprintHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
