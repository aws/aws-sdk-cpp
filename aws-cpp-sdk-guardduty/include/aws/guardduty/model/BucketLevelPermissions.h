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
    AWS_GUARDDUTY_API BucketLevelPermissions();
    AWS_GUARDDUTY_API BucketLevelPermissions(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API BucketLevelPermissions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information on how Access Control Policies are applied to the
     * bucket.</p>
     */
    inline const AccessControlList& GetAccessControlList() const{ return m_accessControlList; }

    /**
     * <p>Contains information on how Access Control Policies are applied to the
     * bucket.</p>
     */
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }

    /**
     * <p>Contains information on how Access Control Policies are applied to the
     * bucket.</p>
     */
    inline void SetAccessControlList(const AccessControlList& value) { m_accessControlListHasBeenSet = true; m_accessControlList = value; }

    /**
     * <p>Contains information on how Access Control Policies are applied to the
     * bucket.</p>
     */
    inline void SetAccessControlList(AccessControlList&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::move(value); }

    /**
     * <p>Contains information on how Access Control Policies are applied to the
     * bucket.</p>
     */
    inline BucketLevelPermissions& WithAccessControlList(const AccessControlList& value) { SetAccessControlList(value); return *this;}

    /**
     * <p>Contains information on how Access Control Policies are applied to the
     * bucket.</p>
     */
    inline BucketLevelPermissions& WithAccessControlList(AccessControlList&& value) { SetAccessControlList(std::move(value)); return *this;}


    /**
     * <p>Contains information on the bucket policies for the S3 bucket.</p>
     */
    inline const BucketPolicy& GetBucketPolicy() const{ return m_bucketPolicy; }

    /**
     * <p>Contains information on the bucket policies for the S3 bucket.</p>
     */
    inline bool BucketPolicyHasBeenSet() const { return m_bucketPolicyHasBeenSet; }

    /**
     * <p>Contains information on the bucket policies for the S3 bucket.</p>
     */
    inline void SetBucketPolicy(const BucketPolicy& value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy = value; }

    /**
     * <p>Contains information on the bucket policies for the S3 bucket.</p>
     */
    inline void SetBucketPolicy(BucketPolicy&& value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy = std::move(value); }

    /**
     * <p>Contains information on the bucket policies for the S3 bucket.</p>
     */
    inline BucketLevelPermissions& WithBucketPolicy(const BucketPolicy& value) { SetBucketPolicy(value); return *this;}

    /**
     * <p>Contains information on the bucket policies for the S3 bucket.</p>
     */
    inline BucketLevelPermissions& WithBucketPolicy(BucketPolicy&& value) { SetBucketPolicy(std::move(value)); return *this;}


    /**
     * <p>Contains information on which account level S3 Block Public Access settings
     * are applied to the S3 bucket.</p>
     */
    inline const BlockPublicAccess& GetBlockPublicAccess() const{ return m_blockPublicAccess; }

    /**
     * <p>Contains information on which account level S3 Block Public Access settings
     * are applied to the S3 bucket.</p>
     */
    inline bool BlockPublicAccessHasBeenSet() const { return m_blockPublicAccessHasBeenSet; }

    /**
     * <p>Contains information on which account level S3 Block Public Access settings
     * are applied to the S3 bucket.</p>
     */
    inline void SetBlockPublicAccess(const BlockPublicAccess& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = value; }

    /**
     * <p>Contains information on which account level S3 Block Public Access settings
     * are applied to the S3 bucket.</p>
     */
    inline void SetBlockPublicAccess(BlockPublicAccess&& value) { m_blockPublicAccessHasBeenSet = true; m_blockPublicAccess = std::move(value); }

    /**
     * <p>Contains information on which account level S3 Block Public Access settings
     * are applied to the S3 bucket.</p>
     */
    inline BucketLevelPermissions& WithBlockPublicAccess(const BlockPublicAccess& value) { SetBlockPublicAccess(value); return *this;}

    /**
     * <p>Contains information on which account level S3 Block Public Access settings
     * are applied to the S3 bucket.</p>
     */
    inline BucketLevelPermissions& WithBlockPublicAccess(BlockPublicAccess&& value) { SetBlockPublicAccess(std::move(value)); return *this;}

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
