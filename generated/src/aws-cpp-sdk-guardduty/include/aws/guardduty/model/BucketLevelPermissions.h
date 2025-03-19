/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AccessControlList.h>
#include <aws/guardduty/model/BucketPolicy.h>
#include <aws/guardduty/model/BlockPublicAccess.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the bucket level permissions for the S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/BucketLevelPermissions">AWS
   * API Reference</a></p>
   */
  class BucketLevelPermissions
  {
  public:
    AWS_GUARDDUTY_API BucketLevelPermissions() = default;
    AWS_GUARDDUTY_API BucketLevelPermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API BucketLevelPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information on how Access Control Policies are applied to the
     * bucket.</p>
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
     * <p>Contains information on the bucket policies for the S3 bucket.</p>
     */
    inline const BucketPolicy& GetBucketPolicy() const { return m_bucketPolicy; }
    inline bool BucketPolicyHasBeenSet() const { return m_bucketPolicyHasBeenSet; }
    template<typename BucketPolicyT = BucketPolicy>
    void SetBucketPolicy(BucketPolicyT&& value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy = std::forward<BucketPolicyT>(value); }
    template<typename BucketPolicyT = BucketPolicy>
    BucketLevelPermissions& WithBucketPolicy(BucketPolicyT&& value) { SetBucketPolicy(std::forward<BucketPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information on which account level S3 Block Public Access settings
     * are applied to the S3 bucket.</p>
     */
    inline const BlockPublicAccess& GetBlockPublicAccess() const { return m_blockPublicAccess; }
    inline bool BlockPublicAccessHasBeenSet() const { return m_blockPublicAccessHasBeenSet; }
    template<typename BlockPublicAccessT = BlockPublicAccess>
    void SetBlockPublicAccess(BlockPublicAccessT&& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = std::forward<BlockPublicAccessT>(value); }
    template<typename BlockPublicAccessT = BlockPublicAccess>
    BucketLevelPermissions& WithBlockPublicAccess(BlockPublicAccessT&& value) { SetBlockPublicAccess(std::forward<BlockPublicAccessT>(value)); return *this;}
    ///@}
  private:

    AccessControlList m_accessControlList;
    bool m_accessControlListHasBeenSet = false;

    BucketPolicy m_bucketPolicy;
    bool m_bucketPolicyHasBeenSet = false;

    BlockPublicAccess m_blockPublicAccess;
    bool m_blockPublicAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
