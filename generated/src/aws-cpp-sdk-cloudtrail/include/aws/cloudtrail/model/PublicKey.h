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
    AWS_CLOUDTRAIL_API PublicKey() = default;
    AWS_CLOUDTRAIL_API PublicKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API PublicKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DER encoded public key value in PKCS#1 format.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Utils::ByteBuffer>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Utils::ByteBuffer>
    PublicKey& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting time of validity of the public key.</p>
     */
    inline const Aws::Utils::DateTime& GetValidityStartTime() const { return m_validityStartTime; }
    inline bool ValidityStartTimeHasBeenSet() const { return m_validityStartTimeHasBeenSet; }
    template<typename ValidityStartTimeT = Aws::Utils::DateTime>
    void SetValidityStartTime(ValidityStartTimeT&& value) { m_validityStartTimeHasBeenSet = true; m_validityStartTime = std::forward<ValidityStartTimeT>(value); }
    template<typename ValidityStartTimeT = Aws::Utils::DateTime>
    PublicKey& WithValidityStartTime(ValidityStartTimeT&& value) { SetValidityStartTime(std::forward<ValidityStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ending time of validity of the public key.</p>
     */
    inline const Aws::Utils::DateTime& GetValidityEndTime() const { return m_validityEndTime; }
    inline bool ValidityEndTimeHasBeenSet() const { return m_validityEndTimeHasBeenSet; }
    template<typename ValidityEndTimeT = Aws::Utils::DateTime>
    void SetValidityEndTime(ValidityEndTimeT&& value) { m_validityEndTimeHasBeenSet = true; m_validityEndTime = std::forward<ValidityEndTimeT>(value); }
    template<typename ValidityEndTimeT = Aws::Utils::DateTime>
    PublicKey& WithValidityEndTime(ValidityEndTimeT&& value) { SetValidityEndTime(std::forward<ValidityEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fingerprint of the public key.</p>
     */
    inline const Aws::String& GetFingerprint() const { return m_fingerprint; }
    inline bool FingerprintHasBeenSet() const { return m_fingerprintHasBeenSet; }
    template<typename FingerprintT = Aws::String>
    void SetFingerprint(FingerprintT&& value) { m_fingerprintHasBeenSet = true; m_fingerprint = std::forward<FingerprintT>(value); }
    template<typename FingerprintT = Aws::String>
    PublicKey& WithFingerprint(FingerprintT&& value) { SetFingerprint(std::forward<FingerprintT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_value{};
    bool m_valueHasBeenSet = false;

    Aws::Utils::DateTime m_validityStartTime{};
    bool m_validityStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_validityEndTime{};
    bool m_validityEndTimeHasBeenSet = false;

    Aws::String m_fingerprint;
    bool m_fingerprintHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
