/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/Tag.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public KMSRequest
  {
  public:
    AWS_KMS_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies a customer managed key in the account and Region.</p> <p>Specify
     * the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Identifies a customer managed key in the account and Region.</p> <p>Specify
     * the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Identifies a customer managed key in the account and Region.</p> <p>Specify
     * the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Identifies a customer managed key in the account and Region.</p> <p>Specify
     * the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Identifies a customer managed key in the account and Region.</p> <p>Specify
     * the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Identifies a customer managed key in the account and Region.</p> <p>Specify
     * the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline TagResourceRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Identifies a customer managed key in the account and Region.</p> <p>Specify
     * the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline TagResourceRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies a customer managed key in the account and Region.</p> <p>Specify
     * the key ID or key ARN of the KMS key.</p> <p>For example:</p> <ul> <li> <p>Key
     * ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key
     * ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline TagResourceRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>One or more tags. </p> <p>Each tag consists of a tag key and a tag value. The
     * tag value can be an empty (null) string. </p> <p>You cannot have more than one
     * tag on a KMS key with the same tag key. If you specify an existing tag key with
     * a different tag value, KMS replaces the current tag value with the specified
     * one.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags. </p> <p>Each tag consists of a tag key and a tag value. The
     * tag value can be an empty (null) string. </p> <p>You cannot have more than one
     * tag on a KMS key with the same tag key. If you specify an existing tag key with
     * a different tag value, KMS replaces the current tag value with the specified
     * one.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags. </p> <p>Each tag consists of a tag key and a tag value. The
     * tag value can be an empty (null) string. </p> <p>You cannot have more than one
     * tag on a KMS key with the same tag key. If you specify an existing tag key with
     * a different tag value, KMS replaces the current tag value with the specified
     * one.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags. </p> <p>Each tag consists of a tag key and a tag value. The
     * tag value can be an empty (null) string. </p> <p>You cannot have more than one
     * tag on a KMS key with the same tag key. If you specify an existing tag key with
     * a different tag value, KMS replaces the current tag value with the specified
     * one.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags. </p> <p>Each tag consists of a tag key and a tag value. The
     * tag value can be an empty (null) string. </p> <p>You cannot have more than one
     * tag on a KMS key with the same tag key. If you specify an existing tag key with
     * a different tag value, KMS replaces the current tag value with the specified
     * one.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags. </p> <p>Each tag consists of a tag key and a tag value. The
     * tag value can be an empty (null) string. </p> <p>You cannot have more than one
     * tag on a KMS key with the same tag key. If you specify an existing tag key with
     * a different tag value, KMS replaces the current tag value with the specified
     * one.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags. </p> <p>Each tag consists of a tag key and a tag value. The
     * tag value can be an empty (null) string. </p> <p>You cannot have more than one
     * tag on a KMS key with the same tag key. If you specify an existing tag key with
     * a different tag value, KMS replaces the current tag value with the specified
     * one.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags. </p> <p>Each tag consists of a tag key and a tag value. The
     * tag value can be an empty (null) string. </p> <p>You cannot have more than one
     * tag on a KMS key with the same tag key. If you specify an existing tag key with
     * a different tag value, KMS replaces the current tag value with the specified
     * one.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
