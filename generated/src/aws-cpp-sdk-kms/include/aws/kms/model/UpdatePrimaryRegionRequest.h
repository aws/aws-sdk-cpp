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
  class UpdatePrimaryRegionRequest : public KMSRequest
  {
  public:
    AWS_KMS_API UpdatePrimaryRegionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePrimaryRegion"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies the current primary key. When the operation completes, this KMS
     * key will be a replica key.</p> <p>Specify the key ID or key ARN of a
     * multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Identifies the current primary key. When the operation completes, this KMS
     * key will be a replica key.</p> <p>Specify the key ID or key ARN of a
     * multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>Identifies the current primary key. When the operation completes, this KMS
     * key will be a replica key.</p> <p>Specify the key ID or key ARN of a
     * multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Identifies the current primary key. When the operation completes, this KMS
     * key will be a replica key.</p> <p>Specify the key ID or key ARN of a
     * multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Identifies the current primary key. When the operation completes, this KMS
     * key will be a replica key.</p> <p>Specify the key ID or key ARN of a
     * multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Identifies the current primary key. When the operation completes, this KMS
     * key will be a replica key.</p> <p>Specify the key ID or key ARN of a
     * multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline UpdatePrimaryRegionRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Identifies the current primary key. When the operation completes, this KMS
     * key will be a replica key.</p> <p>Specify the key ID or key ARN of a
     * multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline UpdatePrimaryRegionRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Identifies the current primary key. When the operation completes, this KMS
     * key will be a replica key.</p> <p>Specify the key ID or key ARN of a
     * multi-Region primary key.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>mrk-1234abcd12ab34cd56ef1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/mrk-1234abcd12ab34cd56ef1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline UpdatePrimaryRegionRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region of the new primary key. Enter the Region ID,
     * such as <code>us-east-1</code> or <code>ap-southeast-2</code>. There must be an
     * existing replica key in this Region. </p> <p>When the operation completes, the
     * multi-Region key in this Region will be the primary key.</p>
     */
    inline const Aws::String& GetPrimaryRegion() const{ return m_primaryRegion; }

    /**
     * <p>The Amazon Web Services Region of the new primary key. Enter the Region ID,
     * such as <code>us-east-1</code> or <code>ap-southeast-2</code>. There must be an
     * existing replica key in this Region. </p> <p>When the operation completes, the
     * multi-Region key in this Region will be the primary key.</p>
     */
    inline bool PrimaryRegionHasBeenSet() const { return m_primaryRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region of the new primary key. Enter the Region ID,
     * such as <code>us-east-1</code> or <code>ap-southeast-2</code>. There must be an
     * existing replica key in this Region. </p> <p>When the operation completes, the
     * multi-Region key in this Region will be the primary key.</p>
     */
    inline void SetPrimaryRegion(const Aws::String& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = value; }

    /**
     * <p>The Amazon Web Services Region of the new primary key. Enter the Region ID,
     * such as <code>us-east-1</code> or <code>ap-southeast-2</code>. There must be an
     * existing replica key in this Region. </p> <p>When the operation completes, the
     * multi-Region key in this Region will be the primary key.</p>
     */
    inline void SetPrimaryRegion(Aws::String&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region of the new primary key. Enter the Region ID,
     * such as <code>us-east-1</code> or <code>ap-southeast-2</code>. There must be an
     * existing replica key in this Region. </p> <p>When the operation completes, the
     * multi-Region key in this Region will be the primary key.</p>
     */
    inline void SetPrimaryRegion(const char* value) { m_primaryRegionHasBeenSet = true; m_primaryRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region of the new primary key. Enter the Region ID,
     * such as <code>us-east-1</code> or <code>ap-southeast-2</code>. There must be an
     * existing replica key in this Region. </p> <p>When the operation completes, the
     * multi-Region key in this Region will be the primary key.</p>
     */
    inline UpdatePrimaryRegionRequest& WithPrimaryRegion(const Aws::String& value) { SetPrimaryRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region of the new primary key. Enter the Region ID,
     * such as <code>us-east-1</code> or <code>ap-southeast-2</code>. There must be an
     * existing replica key in this Region. </p> <p>When the operation completes, the
     * multi-Region key in this Region will be the primary key.</p>
     */
    inline UpdatePrimaryRegionRequest& WithPrimaryRegion(Aws::String&& value) { SetPrimaryRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region of the new primary key. Enter the Region ID,
     * such as <code>us-east-1</code> or <code>ap-southeast-2</code>. There must be an
     * existing replica key in this Region. </p> <p>When the operation completes, the
     * multi-Region key in this Region will be the primary key.</p>
     */
    inline UpdatePrimaryRegionRequest& WithPrimaryRegion(const char* value) { SetPrimaryRegion(value); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_primaryRegion;
    bool m_primaryRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
