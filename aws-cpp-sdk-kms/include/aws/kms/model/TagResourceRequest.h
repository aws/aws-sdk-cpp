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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/Tag.h>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API TagResourceRequest : public KMSRequest
  {
  public:
    TagResourceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the CMK you are tagging. You can use the unique key
     * ID or the Amazon Resource Name (ARN) of the CMK. Examples:</p> <ul> <li>
     * <p>Unique key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>A unique identifier for the CMK you are tagging. You can use the unique key
     * ID or the Amazon Resource Name (ARN) of the CMK. Examples:</p> <ul> <li>
     * <p>Unique key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the CMK you are tagging. You can use the unique key
     * ID or the Amazon Resource Name (ARN) of the CMK. Examples:</p> <ul> <li>
     * <p>Unique key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the CMK you are tagging. You can use the unique key
     * ID or the Amazon Resource Name (ARN) of the CMK. Examples:</p> <ul> <li>
     * <p>Unique key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>A unique identifier for the CMK you are tagging. You can use the unique key
     * ID or the Amazon Resource Name (ARN) of the CMK. Examples:</p> <ul> <li>
     * <p>Unique key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline TagResourceRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the CMK you are tagging. You can use the unique key
     * ID or the Amazon Resource Name (ARN) of the CMK. Examples:</p> <ul> <li>
     * <p>Unique key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline TagResourceRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the CMK you are tagging. You can use the unique key
     * ID or the Amazon Resource Name (ARN) of the CMK. Examples:</p> <ul> <li>
     * <p>Unique key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul>
     */
    inline TagResourceRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
