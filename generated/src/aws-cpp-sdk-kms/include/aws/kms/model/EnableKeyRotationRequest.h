/**
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
    AWS_KMS_API EnableKeyRotationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableKeyRotation"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies a symmetric encryption KMS key. You cannot enable automatic
     * rotation of <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric
     * KMS keys</a>, <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS
     * keys</a>, KMS keys with <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported
     * key material</a>, or KMS keys in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To enable or disable automatic rotation of a set of related <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-rotate">multi-Region
     * keys</a>, set the property on the primary key.</p> <p>Specify the key ID or key
     * ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Identifies a symmetric encryption KMS key. You cannot enable automatic
     * rotation of <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric
     * KMS keys</a>, <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS
     * keys</a>, KMS keys with <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported
     * key material</a>, or KMS keys in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To enable or disable automatic rotation of a set of related <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-rotate">multi-Region
     * keys</a>, set the property on the primary key.</p> <p>Specify the key ID or key
     * ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Identifies a symmetric encryption KMS key. You cannot enable automatic
     * rotation of <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric
     * KMS keys</a>, <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS
     * keys</a>, KMS keys with <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported
     * key material</a>, or KMS keys in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To enable or disable automatic rotation of a set of related <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-rotate">multi-Region
     * keys</a>, set the property on the primary key.</p> <p>Specify the key ID or key
     * ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Identifies a symmetric encryption KMS key. You cannot enable automatic
     * rotation of <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric
     * KMS keys</a>, <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS
     * keys</a>, KMS keys with <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported
     * key material</a>, or KMS keys in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To enable or disable automatic rotation of a set of related <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-rotate">multi-Region
     * keys</a>, set the property on the primary key.</p> <p>Specify the key ID or key
     * ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Identifies a symmetric encryption KMS key. You cannot enable automatic
     * rotation of <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric
     * KMS keys</a>, <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS
     * keys</a>, KMS keys with <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported
     * key material</a>, or KMS keys in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To enable or disable automatic rotation of a set of related <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-rotate">multi-Region
     * keys</a>, set the property on the primary key.</p> <p>Specify the key ID or key
     * ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Identifies a symmetric encryption KMS key. You cannot enable automatic
     * rotation of <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric
     * KMS keys</a>, <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS
     * keys</a>, KMS keys with <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported
     * key material</a>, or KMS keys in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To enable or disable automatic rotation of a set of related <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-rotate">multi-Region
     * keys</a>, set the property on the primary key.</p> <p>Specify the key ID or key
     * ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline EnableKeyRotationRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Identifies a symmetric encryption KMS key. You cannot enable automatic
     * rotation of <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric
     * KMS keys</a>, <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS
     * keys</a>, KMS keys with <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported
     * key material</a>, or KMS keys in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To enable or disable automatic rotation of a set of related <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-rotate">multi-Region
     * keys</a>, set the property on the primary key.</p> <p>Specify the key ID or key
     * ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline EnableKeyRotationRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies a symmetric encryption KMS key. You cannot enable automatic
     * rotation of <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">asymmetric
     * KMS keys</a>, <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/hmac.html">HMAC KMS
     * keys</a>, KMS keys with <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys.html">imported
     * key material</a>, or KMS keys in a <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/custom-key-store-overview.html">custom
     * key store</a>. To enable or disable automatic rotation of a set of related <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/multi-region-keys-manage.html#multi-region-rotate">multi-Region
     * keys</a>, set the property on the primary key.</p> <p>Specify the key ID or key
     * ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline EnableKeyRotationRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
