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
    AWS_MACIE2_API BucketLevelPermissions() = default;
    AWS_MACIE2_API BucketLevelPermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketLevelPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The permissions settings of the access control list (ACL) for the bucket.
     * This value is null if an ACL hasn't been defined for the bucket.</p>
     */
    inline const AccessControlList& GetAccessControlList() const { return m_accessControlList; }
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }
    template<typename AccessControlListT = AccessControlList>
    void SetAccessControlList(AccessControlListT&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::forward<AccessControlListT>(value); }
    template<typename AccessControlListT = AccessControlList>
    BucketLevelPermissions& WithAccessControlList(AccessControlListT&& value) { SetAccessControlList(std::forward<AccessControlListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block public access settings for the bucket.</p>
     */
    inline const BlockPublicAccess& GetBlockPublicAccess() const { return m_blockPublicAccess; }
    inline bool BlockPublicAccessHasBeenSet() const { return m_blockPublicAccessHasBeenSet; }
    template<typename BlockPublicAccessT = BlockPublicAccess>
    void SetBlockPublicAccess(BlockPublicAccessT&& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = std::forward<BlockPublicAccessT>(value); }
    template<typename BlockPublicAccessT = BlockPublicAccess>
    BucketLevelPermissions& WithBlockPublicAccess(BlockPublicAccessT&& value) { SetBlockPublicAccess(std::forward<BlockPublicAccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions settings of the bucket policy for the bucket. This value is
     * null if a bucket policy hasn't been defined for the bucket.</p>
     */
    inline const BucketPolicy& GetBucketPolicy() const { return m_bucketPolicy; }
    inline bool BucketPolicyHasBeenSet() const { return m_bucketPolicyHasBeenSet; }
    template<typename BucketPolicyT = BucketPolicy>
    void SetBucketPolicy(BucketPolicyT&& value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy = std::forward<BucketPolicyT>(value); }
    template<typename BucketPolicyT = BucketPolicy>
    BucketLevelPermissions& WithBucketPolicy(BucketPolicyT&& value) { SetBucketPolicy(std::forward<BucketPolicyT>(value)); return *this;}
    ///@}
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
