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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API ScheduleKeyDeletionRequest : public KMSRequest
  {
  public:
    ScheduleKeyDeletionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The unique identifier for the customer master key (CMK) to delete.</p> <p>To
     * specify this value, use the unique key ID or the Amazon Resource Name (ARN) of
     * the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The unique identifier for the customer master key (CMK) to delete.</p> <p>To
     * specify this value, use the unique key ID or the Amazon Resource Name (ARN) of
     * the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The unique identifier for the customer master key (CMK) to delete.</p> <p>To
     * specify this value, use the unique key ID or the Amazon Resource Name (ARN) of
     * the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The unique identifier for the customer master key (CMK) to delete.</p> <p>To
     * specify this value, use the unique key ID or the Amazon Resource Name (ARN) of
     * the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The unique identifier for the customer master key (CMK) to delete.</p> <p>To
     * specify this value, use the unique key ID or the Amazon Resource Name (ARN) of
     * the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline ScheduleKeyDeletionRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The unique identifier for the customer master key (CMK) to delete.</p> <p>To
     * specify this value, use the unique key ID or the Amazon Resource Name (ARN) of
     * the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline ScheduleKeyDeletionRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>The unique identifier for the customer master key (CMK) to delete.</p> <p>To
     * specify this value, use the unique key ID or the Amazon Resource Name (ARN) of
     * the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline ScheduleKeyDeletionRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>The waiting period, specified in number of days. After the waiting period
     * ends, AWS KMS deletes the customer master key (CMK).</p> <p>This value is
     * optional. If you include a value, it must be between 7 and 30, inclusive. If you
     * do not include a value, it defaults to 30.</p>
     */
    inline int GetPendingWindowInDays() const{ return m_pendingWindowInDays; }

    /**
     * <p>The waiting period, specified in number of days. After the waiting period
     * ends, AWS KMS deletes the customer master key (CMK).</p> <p>This value is
     * optional. If you include a value, it must be between 7 and 30, inclusive. If you
     * do not include a value, it defaults to 30.</p>
     */
    inline void SetPendingWindowInDays(int value) { m_pendingWindowInDaysHasBeenSet = true; m_pendingWindowInDays = value; }

    /**
     * <p>The waiting period, specified in number of days. After the waiting period
     * ends, AWS KMS deletes the customer master key (CMK).</p> <p>This value is
     * optional. If you include a value, it must be between 7 and 30, inclusive. If you
     * do not include a value, it defaults to 30.</p>
     */
    inline ScheduleKeyDeletionRequest& WithPendingWindowInDays(int value) { SetPendingWindowInDays(value); return *this;}

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    int m_pendingWindowInDays;
    bool m_pendingWindowInDaysHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
