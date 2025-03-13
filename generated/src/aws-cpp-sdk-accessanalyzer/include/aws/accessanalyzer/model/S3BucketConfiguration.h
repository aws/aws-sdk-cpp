/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/S3PublicAccessBlockConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/S3BucketAclGrantConfiguration.h>
#include <aws/accessanalyzer/model/S3AccessPointConfiguration.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Proposed access control configuration for an Amazon S3 bucket. You can
   * propose a configuration for a new Amazon S3 bucket or an existing Amazon S3
   * bucket that you own by specifying the Amazon S3 bucket policy, bucket ACLs,
   * bucket BPA settings, Amazon S3 access points, and multi-region access points
   * attached to the bucket. If the configuration is for an existing Amazon S3 bucket
   * and you do not specify the Amazon S3 bucket policy, the access preview uses the
   * existing policy attached to the bucket. If the access preview is for a new
   * resource and you do not specify the Amazon S3 bucket policy, the access preview
   * assumes a bucket without a policy. To propose deletion of an existing bucket
   * policy, you can specify an empty string. For more information about bucket
   * policy limits, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/example-bucket-policies.html">Bucket
   * Policy Examples</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/S3BucketConfiguration">AWS
   * API Reference</a></p>
   */
  class S3BucketConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API S3BucketConfiguration() = default;
    AWS_ACCESSANALYZER_API S3BucketConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API S3BucketConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The proposed bucket policy for the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketPolicy() const { return m_bucketPolicy; }
    inline bool BucketPolicyHasBeenSet() const { return m_bucketPolicyHasBeenSet; }
    template<typename BucketPolicyT = Aws::String>
    void SetBucketPolicy(BucketPolicyT&& value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy = std::forward<BucketPolicyT>(value); }
    template<typename BucketPolicyT = Aws::String>
    S3BucketConfiguration& WithBucketPolicy(BucketPolicyT&& value) { SetBucketPolicy(std::forward<BucketPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proposed list of ACL grants for the Amazon S3 bucket. You can propose up
     * to 100 ACL grants per bucket. If the proposed grant configuration is for an
     * existing bucket, the access preview uses the proposed list of grant
     * configurations in place of the existing grants. Otherwise, the access preview
     * uses the existing grants for the bucket.</p>
     */
    inline const Aws::Vector<S3BucketAclGrantConfiguration>& GetBucketAclGrants() const { return m_bucketAclGrants; }
    inline bool BucketAclGrantsHasBeenSet() const { return m_bucketAclGrantsHasBeenSet; }
    template<typename BucketAclGrantsT = Aws::Vector<S3BucketAclGrantConfiguration>>
    void SetBucketAclGrants(BucketAclGrantsT&& value) { m_bucketAclGrantsHasBeenSet = true; m_bucketAclGrants = std::forward<BucketAclGrantsT>(value); }
    template<typename BucketAclGrantsT = Aws::Vector<S3BucketAclGrantConfiguration>>
    S3BucketConfiguration& WithBucketAclGrants(BucketAclGrantsT&& value) { SetBucketAclGrants(std::forward<BucketAclGrantsT>(value)); return *this;}
    template<typename BucketAclGrantsT = S3BucketAclGrantConfiguration>
    S3BucketConfiguration& AddBucketAclGrants(BucketAclGrantsT&& value) { m_bucketAclGrantsHasBeenSet = true; m_bucketAclGrants.emplace_back(std::forward<BucketAclGrantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The proposed block public access configuration for the Amazon S3 bucket.</p>
     */
    inline const S3PublicAccessBlockConfiguration& GetBucketPublicAccessBlock() const { return m_bucketPublicAccessBlock; }
    inline bool BucketPublicAccessBlockHasBeenSet() const { return m_bucketPublicAccessBlockHasBeenSet; }
    template<typename BucketPublicAccessBlockT = S3PublicAccessBlockConfiguration>
    void SetBucketPublicAccessBlock(BucketPublicAccessBlockT&& value) { m_bucketPublicAccessBlockHasBeenSet = true; m_bucketPublicAccessBlock = std::forward<BucketPublicAccessBlockT>(value); }
    template<typename BucketPublicAccessBlockT = S3PublicAccessBlockConfiguration>
    S3BucketConfiguration& WithBucketPublicAccessBlock(BucketPublicAccessBlockT&& value) { SetBucketPublicAccessBlock(std::forward<BucketPublicAccessBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of Amazon S3 access points or multi-region access points
     * for the bucket. You can propose up to 10 new access points per bucket.</p>
     */
    inline const Aws::Map<Aws::String, S3AccessPointConfiguration>& GetAccessPoints() const { return m_accessPoints; }
    inline bool AccessPointsHasBeenSet() const { return m_accessPointsHasBeenSet; }
    template<typename AccessPointsT = Aws::Map<Aws::String, S3AccessPointConfiguration>>
    void SetAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints = std::forward<AccessPointsT>(value); }
    template<typename AccessPointsT = Aws::Map<Aws::String, S3AccessPointConfiguration>>
    S3BucketConfiguration& WithAccessPoints(AccessPointsT&& value) { SetAccessPoints(std::forward<AccessPointsT>(value)); return *this;}
    template<typename AccessPointsKeyT = Aws::String, typename AccessPointsValueT = S3AccessPointConfiguration>
    S3BucketConfiguration& AddAccessPoints(AccessPointsKeyT&& key, AccessPointsValueT&& value) {
      m_accessPointsHasBeenSet = true; m_accessPoints.emplace(std::forward<AccessPointsKeyT>(key), std::forward<AccessPointsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_bucketPolicy;
    bool m_bucketPolicyHasBeenSet = false;

    Aws::Vector<S3BucketAclGrantConfiguration> m_bucketAclGrants;
    bool m_bucketAclGrantsHasBeenSet = false;

    S3PublicAccessBlockConfiguration m_bucketPublicAccessBlock;
    bool m_bucketPublicAccessBlockHasBeenSet = false;

    Aws::Map<Aws::String, S3AccessPointConfiguration> m_accessPoints;
    bool m_accessPointsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
