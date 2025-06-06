﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class EnableKeyRotationRequest : public KMSRequest
  {
  public:
    AWS_KMS_API EnableKeyRotationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableKeyRotation"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifies a symmetric encryption KMS key. You cannot enable automatic
     * rotation of <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric
     * KMS keys</a>, <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS
     * keys</a>, KMS keys with <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported
     * key material</a>, or KMS keys in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-store-overview.html">custom
     * key store</a>. To enable or disable automatic rotation of a set of related <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/rotate-keys.html#multi-region-rotate">multi-Region
     * keys</a>, set the property on the primary key.</p> <p>Specify the key ID or key
     * ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    EnableKeyRotationRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to specify a custom period of time between each rotation
     * date. If no value is specified, the default value is 365 days.</p> <p>The
     * rotation period defines the number of days after you enable automatic key
     * rotation that KMS will rotate your key material, and the number of days between
     * each automatic rotation thereafter.</p> <p>You can use the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/conditions-kms.html#conditions-kms-rotation-period-in-days">
     * <code>kms:RotationPeriodInDays</code> </a> condition key to further constrain
     * the values that principals can specify in the <code>RotationPeriodInDays</code>
     * parameter.</p> <p> </p>
     */
    inline int GetRotationPeriodInDays() const { return m_rotationPeriodInDays; }
    inline bool RotationPeriodInDaysHasBeenSet() const { return m_rotationPeriodInDaysHasBeenSet; }
    inline void SetRotationPeriodInDays(int value) { m_rotationPeriodInDaysHasBeenSet = true; m_rotationPeriodInDays = value; }
    inline EnableKeyRotationRequest& WithRotationPeriodInDays(int value) { SetRotationPeriodInDays(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    int m_rotationPeriodInDays{0};
    bool m_rotationPeriodInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
