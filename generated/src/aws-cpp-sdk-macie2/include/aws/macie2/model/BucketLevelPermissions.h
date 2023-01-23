/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/AccessControlList.h>
#include <aws/macie2/model/BlockPublicAccess.h>
#include <aws/macie2/model/BucketPolicy.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the bucket-level permissions settings for an S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketLevelPermissions">AWS
   * API Reference</a></p>
   */
  class BucketLevelPermissions
  {
  public:
    AWS_MACIE2_API BucketLevelPermissions();
    AWS_MACIE2_API BucketLevelPermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketLevelPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The permissions settings of the access control list (ACL) for the bucket.
     * This value is null if an ACL hasn't been defined for the bucket.</p>
     */
    inline const AccessControlList& GetAccessControlList() const{ return m_accessControlList; }

    /**
     * <p>The permissions settings of the access control list (ACL) for the bucket.
     * This value is null if an ACL hasn't been defined for the bucket.</p>
     */
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }

    /**
     * <p>The permissions settings of the access control list (ACL) for the bucket.
     * This value is null if an ACL hasn't been defined for the bucket.</p>
     */
    inline void SetAccessControlList(const AccessControlList& value) { m_accessControlListHasBeenSet = true; m_accessControlList = value; }

    /**
     * <p>The permissions settings of the access control list (ACL) for the bucket.
     * This value is null if an ACL hasn't been defined for the bucket.</p>
     */
    inline void SetAccessControlList(AccessControlList&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::move(value); }

    /**
     * <p>The permissions settings of the access control list (ACL) for the bucket.
     * This value is null if an ACL hasn't been defined for the bucket.</p>
     */
    inline BucketLevelPermissions& WithAccessControlList(const AccessControlList& value) { SetAccessControlList(value); return *this;}

    /**
     * <p>The permissions settings of the access control list (ACL) for the bucket.
     * This value is null if an ACL hasn't been defined for the bucket.</p>
     */
    inline BucketLevelPermissions& WithAccessControlList(AccessControlList&& value) { SetAccessControlList(std::move(value)); return *this;}


    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline const BlockPublicAccess& GetBlockPublicAccess() const{ return m_blockPublicAccess; }

    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline bool BlockPublicAccessHasBeenSet() const { return m_blockPublicAccessHasBeenSet; }

    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline void SetBlockPublicAccess(const BlockPublicAccess& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = value; }

    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline void SetBlockPublicAccess(BlockPublicAccess&& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = std::move(value); }

    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline BucketLevelPermissions& WithBlockPublicAccess(const BlockPublicAccess& value) { SetBlockPublicAccess(value); return *this;}

    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline BucketLevelPermissions& WithBlockPublicAccess(BlockPublicAccess&& value) { SetBlockPublicAccess(std::move(value)); return *this;}


    /**
     * <p>The permissions settings of the bucket policy for the bucket. This value is
     * null if a bucket policy hasn't been defined for the bucket.</p>
     */
    inline const BucketPolicy& GetBucketPolicy() const{ return m_bucketPolicy; }

    /**
     * <p>The permissions settings of the bucket policy for the bucket. This value is
     * null if a bucket policy hasn't been defined for the bucket.</p>
     */
    inline bool BucketPolicyHasBeenSet() const { return m_bucketPolicyHasBeenSet; }

    /**
     * <p>The permissions settings of the bucket policy for the bucket. This value is
     * null if a bucket policy hasn't been defined for the bucket.</p>
     */
    inline void SetBucketPolicy(const BucketPolicy& value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy = value; }

    /**
     * <p>The permissions settings of the bucket policy for the bucket. This value is
     * null if a bucket policy hasn't been defined for the bucket.</p>
     */
    inline void SetBucketPolicy(BucketPolicy&& value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy = std::move(value); }

    /**
     * <p>The permissions settings of the bucket policy for the bucket. This value is
     * null if a bucket policy hasn't been defined for the bucket.</p>
     */
    inline BucketLevelPermissions& WithBucketPolicy(const BucketPolicy& value) { SetBucketPolicy(value); return *this;}

    /**
     * <p>The permissions settings of the bucket policy for the bucket. This value is
     * null if a bucket policy hasn't been defined for the bucket.</p>
     */
    inline BucketLevelPermissions& WithBucketPolicy(BucketPolicy&& value) { SetBucketPolicy(std::move(value)); return *this;}

  private:

    AccessControlList m_accessControlList;
    bool m_accessControlListHasBeenSet = false;

    BlockPublicAccess m_blockPublicAccess;
    bool m_blockPublicAccessHasBeenSet = false;

    BucketPolicy m_bucketPolicy;
    bool m_bucketPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
