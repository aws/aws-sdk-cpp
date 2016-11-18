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
  class AWS_KMS_API CancelKeyDeletionRequest : public KMSRequest
  {
  public:
    CancelKeyDeletionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The unique identifier for the customer master key (CMK) for which to cancel
     * deletion.</p> <p>To specify this value, use the unique key ID or the Amazon
     * Resource Name (ARN) of the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The unique identifier for the customer master key (CMK) for which to cancel
     * deletion.</p> <p>To specify this value, use the unique key ID or the Amazon
     * Resource Name (ARN) of the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The unique identifier for the customer master key (CMK) for which to cancel
     * deletion.</p> <p>To specify this value, use the unique key ID or the Amazon
     * Resource Name (ARN) of the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The unique identifier for the customer master key (CMK) for which to cancel
     * deletion.</p> <p>To specify this value, use the unique key ID or the Amazon
     * Resource Name (ARN) of the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The unique identifier for the customer master key (CMK) for which to cancel
     * deletion.</p> <p>To specify this value, use the unique key ID or the Amazon
     * Resource Name (ARN) of the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline CancelKeyDeletionRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The unique identifier for the customer master key (CMK) for which to cancel
     * deletion.</p> <p>To specify this value, use the unique key ID or the Amazon
     * Resource Name (ARN) of the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline CancelKeyDeletionRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>The unique identifier for the customer master key (CMK) for which to cancel
     * deletion.</p> <p>To specify this value, use the unique key ID or the Amazon
     * Resource Name (ARN) of the CMK. Examples:</p> <ul> <li> <p>Unique key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> </ul> <p>To obtain the unique key ID and key ARN for a given CMK, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline CancelKeyDeletionRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
