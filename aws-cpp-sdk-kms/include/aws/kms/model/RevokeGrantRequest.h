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
  class RevokeGrantRequest : public KMSRequest
  {
  public:
    AWS_KMS_API RevokeGrantRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeGrant"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the KMS key associated with the grant. To get the key
     * ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     * <p>Specify the key ID or key ARN of the KMS key. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>A unique identifier for the KMS key associated with the grant. To get the key
     * ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     * <p>Specify the key ID or key ARN of the KMS key. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>A unique identifier for the KMS key associated with the grant. To get the key
     * ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     * <p>Specify the key ID or key ARN of the KMS key. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>A unique identifier for the KMS key associated with the grant. To get the key
     * ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     * <p>Specify the key ID or key ARN of the KMS key. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>A unique identifier for the KMS key associated with the grant. To get the key
     * ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     * <p>Specify the key ID or key ARN of the KMS key. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>A unique identifier for the KMS key associated with the grant. To get the key
     * ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     * <p>Specify the key ID or key ARN of the KMS key. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline RevokeGrantRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>A unique identifier for the KMS key associated with the grant. To get the key
     * ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     * <p>Specify the key ID or key ARN of the KMS key. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline RevokeGrantRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the KMS key associated with the grant. To get the key
     * ID and key ARN for a KMS key, use <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     * <p>Specify the key ID or key ARN of the KMS key. To specify a KMS key in a
     * different Amazon Web Services account, you must use the key ARN.</p> <p>For
     * example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline RevokeGrantRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Identifies the grant to revoke. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p>
     */
    inline const Aws::String& GetGrantId() const{ return m_grantId; }

    /**
     * <p>Identifies the grant to revoke. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p>
     */
    inline bool GrantIdHasBeenSet() const { return m_grantIdHasBeenSet; }

    /**
     * <p>Identifies the grant to revoke. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p>
     */
    inline void SetGrantId(const Aws::String& value) { m_grantIdHasBeenSet = true; m_grantId = value; }

    /**
     * <p>Identifies the grant to revoke. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p>
     */
    inline void SetGrantId(Aws::String&& value) { m_grantIdHasBeenSet = true; m_grantId = std::move(value); }

    /**
     * <p>Identifies the grant to revoke. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p>
     */
    inline void SetGrantId(const char* value) { m_grantIdHasBeenSet = true; m_grantId.assign(value); }

    /**
     * <p>Identifies the grant to revoke. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p>
     */
    inline RevokeGrantRequest& WithGrantId(const Aws::String& value) { SetGrantId(value); return *this;}

    /**
     * <p>Identifies the grant to revoke. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p>
     */
    inline RevokeGrantRequest& WithGrantId(Aws::String&& value) { SetGrantId(std::move(value)); return *this;}

    /**
     * <p>Identifies the grant to revoke. To get the grant ID, use <a>CreateGrant</a>,
     * <a>ListGrants</a>, or <a>ListRetirableGrants</a>.</p>
     */
    inline RevokeGrantRequest& WithGrantId(const char* value) { SetGrantId(value); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_grantId;
    bool m_grantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
