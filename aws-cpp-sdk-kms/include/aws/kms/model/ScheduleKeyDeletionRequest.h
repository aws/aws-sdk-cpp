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
  class ScheduleKeyDeletionRequest : public KMSRequest
  {
  public:
    AWS_KMS_API ScheduleKeyDeletionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ScheduleKeyDeletion"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the KMS key to delete.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The unique identifier of the KMS key to delete.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The unique identifier of the KMS key to delete.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The unique identifier of the KMS key to delete.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The unique identifier of the KMS key to delete.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The unique identifier of the KMS key to delete.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline ScheduleKeyDeletionRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The unique identifier of the KMS key to delete.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline ScheduleKeyDeletionRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the KMS key to delete.</p> <p>Specify the key ID or
     * key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline ScheduleKeyDeletionRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The waiting period, specified in number of days. After the waiting period
     * ends, KMS deletes the KMS key.</p> <p>If the KMS key is a multi-Region primary
     * key with replica keys, the waiting period begins when the last of its replica
     * keys is deleted. Otherwise, the waiting period begins immediately.</p> <p>This
     * value is optional. If you include a value, it must be between 7 and 30,
     * inclusive. If you do not include a value, it defaults to 30.</p>
     */
    inline int GetPendingWindowInDays() const{ return m_pendingWindowInDays; }

    /**
     * <p>The waiting period, specified in number of days. After the waiting period
     * ends, KMS deletes the KMS key.</p> <p>If the KMS key is a multi-Region primary
     * key with replica keys, the waiting period begins when the last of its replica
     * keys is deleted. Otherwise, the waiting period begins immediately.</p> <p>This
     * value is optional. If you include a value, it must be between 7 and 30,
     * inclusive. If you do not include a value, it defaults to 30.</p>
     */
    inline bool PendingWindowInDaysHasBeenSet() const { return m_pendingWindowInDaysHasBeenSet; }

    /**
     * <p>The waiting period, specified in number of days. After the waiting period
     * ends, KMS deletes the KMS key.</p> <p>If the KMS key is a multi-Region primary
     * key with replica keys, the waiting period begins when the last of its replica
     * keys is deleted. Otherwise, the waiting period begins immediately.</p> <p>This
     * value is optional. If you include a value, it must be between 7 and 30,
     * inclusive. If you do not include a value, it defaults to 30.</p>
     */
    inline void SetPendingWindowInDays(int value) { m_pendingWindowInDaysHasBeenSet = true; m_pendingWindowInDays = value; }

    /**
     * <p>The waiting period, specified in number of days. After the waiting period
     * ends, KMS deletes the KMS key.</p> <p>If the KMS key is a multi-Region primary
     * key with replica keys, the waiting period begins when the last of its replica
     * keys is deleted. Otherwise, the waiting period begins immediately.</p> <p>This
     * value is optional. If you include a value, it must be between 7 and 30,
     * inclusive. If you do not include a value, it defaults to 30.</p>
     */
    inline ScheduleKeyDeletionRequest& WithPendingWindowInDays(int value) { SetPendingWindowInDays(value); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    int m_pendingWindowInDays;
    bool m_pendingWindowInDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
