/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/S3PublicAccessBlockConfiguration.h>
#include <aws/accessanalyzer/model/S3AccessPointConfiguration.h>
#include <aws/accessanalyzer/model/S3BucketAclGrantConfiguration.h>
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
   * bucket BPA settings, and Amazon S3 access points attached to the bucket. If the
   * configuration is for an existing Amazon S3 bucket and you do not specify the
   * Amazon S3 bucket policy, the access preview uses the existing policy attached to
   * the bucket. If the access preview is for a new resource and you do not specify
   * the Amazon S3 bucket policy, the access preview assumes a bucket without a
   * policy. To propose deletion of an existing bucket policy, you can specify an
   * empty string. For more information about bucket policy limits, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/example-bucket-policies.html">Bucket
   * Policy Examples</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/S3BucketConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ACCESSANALYZER_API S3BucketConfiguration
  {
  public:
    S3BucketConfiguration();
    S3BucketConfiguration(Aws::Utils::Json::JsonView jsonValue);
    S3BucketConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration of Amazon S3 access points for the bucket.</p>
     */
    inline const Aws::Map<Aws::String, S3AccessPointConfiguration>& GetAccessPoints() const{ return m_accessPoints; }

    /**
     * <p>The configuration of Amazon S3 access points for the bucket.</p>
     */
    inline bool AccessPointsHasBeenSet() const { return m_accessPointsHasBeenSet; }

    /**
     * <p>The configuration of Amazon S3 access points for the bucket.</p>
     */
    inline void SetAccessPoints(const Aws::Map<Aws::String, S3AccessPointConfiguration>& value) { m_accessPointsHasBeenSet = true; m_accessPoints = value; }

    /**
     * <p>The configuration of Amazon S3 access points for the bucket.</p>
     */
    inline void SetAccessPoints(Aws::Map<Aws::String, S3AccessPointConfiguration>&& value) { m_accessPointsHasBeenSet = true; m_accessPoints = std::move(value); }

    /**
     * <p>The configuration of Amazon S3 access points for the bucket.</p>
     */
    inline S3BucketConfiguration& WithAccessPoints(const Aws::Map<Aws::String, S3AccessPointConfiguration>& value) { SetAccessPoints(value); return *this;}

    /**
     * <p>The configuration of Amazon S3 access points for the bucket.</p>
     */
    inline S3BucketConfiguration& WithAccessPoints(Aws::Map<Aws::String, S3AccessPointConfiguration>&& value) { SetAccessPoints(std::move(value)); return *this;}

    /**
     * <p>The configuration of Amazon S3 access points for the bucket.</p>
     */
    inline S3BucketConfiguration& AddAccessPoints(const Aws::String& key, const S3AccessPointConfiguration& value) { m_accessPointsHasBeenSet = true; m_accessPoints.emplace(key, value); return *this; }

    /**
     * <p>The configuration of Amazon S3 access points for the bucket.</p>
     */
    inline S3BucketConfiguration& AddAccessPoints(Aws::String&& key, const S3AccessPointConfiguration& value) { m_accessPointsHasBeenSet = true; m_accessPoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>The configuration of Amazon S3 access points for the bucket.</p>
     */
    inline S3BucketConfiguration& AddAccessPoints(const Aws::String& key, S3AccessPointConfiguration&& value) { m_accessPointsHasBeenSet = true; m_accessPoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration of Amazon S3 access points for the bucket.</p>
     */
    inline S3BucketConfiguration& AddAccessPoints(Aws::String&& key, S3AccessPointConfiguration&& value) { m_accessPointsHasBeenSet = true; m_accessPoints.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The configuration of Amazon S3 access points for the bucket.</p>
     */
    inline S3BucketConfiguration& AddAccessPoints(const char* key, S3AccessPointConfiguration&& value) { m_accessPointsHasBeenSet = true; m_accessPoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration of Amazon S3 access points for the bucket.</p>
     */
    inline S3BucketConfiguration& AddAccessPoints(const char* key, const S3AccessPointConfiguration& value) { m_accessPointsHasBeenSet = true; m_accessPoints.emplace(key, value); return *this; }


    /**
     * <p>The proposed list of ACL grants for the Amazon S3 bucket. You can propose up
     * to 100 ACL grants per bucket. If the proposed grant configuration is for an
     * existing bucket, the access preview uses the proposed list of grant
     * configurations in place of the existing grants. Otherwise, the access preview
     * uses the existing grants for the bucket.</p>
     */
    inline const Aws::Vector<S3BucketAclGrantConfiguration>& GetBucketAclGrants() const{ return m_bucketAclGrants; }

    /**
     * <p>The proposed list of ACL grants for the Amazon S3 bucket. You can propose up
     * to 100 ACL grants per bucket. If the proposed grant configuration is for an
     * existing bucket, the access preview uses the proposed list of grant
     * configurations in place of the existing grants. Otherwise, the access preview
     * uses the existing grants for the bucket.</p>
     */
    inline bool BucketAclGrantsHasBeenSet() const { return m_bucketAclGrantsHasBeenSet; }

    /**
     * <p>The proposed list of ACL grants for the Amazon S3 bucket. You can propose up
     * to 100 ACL grants per bucket. If the proposed grant configuration is for an
     * existing bucket, the access preview uses the proposed list of grant
     * configurations in place of the existing grants. Otherwise, the access preview
     * uses the existing grants for the bucket.</p>
     */
    inline void SetBucketAclGrants(const Aws::Vector<S3BucketAclGrantConfiguration>& value) { m_bucketAclGrantsHasBeenSet = true; m_bucketAclGrants = value; }

    /**
     * <p>The proposed list of ACL grants for the Amazon S3 bucket. You can propose up
     * to 100 ACL grants per bucket. If the proposed grant configuration is for an
     * existing bucket, the access preview uses the proposed list of grant
     * configurations in place of the existing grants. Otherwise, the access preview
     * uses the existing grants for the bucket.</p>
     */
    inline void SetBucketAclGrants(Aws::Vector<S3BucketAclGrantConfiguration>&& value) { m_bucketAclGrantsHasBeenSet = true; m_bucketAclGrants = std::move(value); }

    /**
     * <p>The proposed list of ACL grants for the Amazon S3 bucket. You can propose up
     * to 100 ACL grants per bucket. If the proposed grant configuration is for an
     * existing bucket, the access preview uses the proposed list of grant
     * configurations in place of the existing grants. Otherwise, the access preview
     * uses the existing grants for the bucket.</p>
     */
    inline S3BucketConfiguration& WithBucketAclGrants(const Aws::Vector<S3BucketAclGrantConfiguration>& value) { SetBucketAclGrants(value); return *this;}

    /**
     * <p>The proposed list of ACL grants for the Amazon S3 bucket. You can propose up
     * to 100 ACL grants per bucket. If the proposed grant configuration is for an
     * existing bucket, the access preview uses the proposed list of grant
     * configurations in place of the existing grants. Otherwise, the access preview
     * uses the existing grants for the bucket.</p>
     */
    inline S3BucketConfiguration& WithBucketAclGrants(Aws::Vector<S3BucketAclGrantConfiguration>&& value) { SetBucketAclGrants(std::move(value)); return *this;}

    /**
     * <p>The proposed list of ACL grants for the Amazon S3 bucket. You can propose up
     * to 100 ACL grants per bucket. If the proposed grant configuration is for an
     * existing bucket, the access preview uses the proposed list of grant
     * configurations in place of the existing grants. Otherwise, the access preview
     * uses the existing grants for the bucket.</p>
     */
    inline S3BucketConfiguration& AddBucketAclGrants(const S3BucketAclGrantConfiguration& value) { m_bucketAclGrantsHasBeenSet = true; m_bucketAclGrants.push_back(value); return *this; }

    /**
     * <p>The proposed list of ACL grants for the Amazon S3 bucket. You can propose up
     * to 100 ACL grants per bucket. If the proposed grant configuration is for an
     * existing bucket, the access preview uses the proposed list of grant
     * configurations in place of the existing grants. Otherwise, the access preview
     * uses the existing grants for the bucket.</p>
     */
    inline S3BucketConfiguration& AddBucketAclGrants(S3BucketAclGrantConfiguration&& value) { m_bucketAclGrantsHasBeenSet = true; m_bucketAclGrants.push_back(std::move(value)); return *this; }


    /**
     * <p>The proposed bucket policy for the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketPolicy() const{ return m_bucketPolicy; }

    /**
     * <p>The proposed bucket policy for the Amazon S3 bucket.</p>
     */
    inline bool BucketPolicyHasBeenSet() const { return m_bucketPolicyHasBeenSet; }

    /**
     * <p>The proposed bucket policy for the Amazon S3 bucket.</p>
     */
    inline void SetBucketPolicy(const Aws::String& value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy = value; }

    /**
     * <p>The proposed bucket policy for the Amazon S3 bucket.</p>
     */
    inline void SetBucketPolicy(Aws::String&& value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy = std::move(value); }

    /**
     * <p>The proposed bucket policy for the Amazon S3 bucket.</p>
     */
    inline void SetBucketPolicy(const char* value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy.assign(value); }

    /**
     * <p>The proposed bucket policy for the Amazon S3 bucket.</p>
     */
    inline S3BucketConfiguration& WithBucketPolicy(const Aws::String& value) { SetBucketPolicy(value); return *this;}

    /**
     * <p>The proposed bucket policy for the Amazon S3 bucket.</p>
     */
    inline S3BucketConfiguration& WithBucketPolicy(Aws::String&& value) { SetBucketPolicy(std::move(value)); return *this;}

    /**
     * <p>The proposed bucket policy for the Amazon S3 bucket.</p>
     */
    inline S3BucketConfiguration& WithBucketPolicy(const char* value) { SetBucketPolicy(value); return *this;}


    /**
     * <p>The proposed block public access configuration for the Amazon S3 bucket.</p>
     */
    inline const S3PublicAccessBlockConfiguration& GetBucketPublicAccessBlock() const{ return m_bucketPublicAccessBlock; }

    /**
     * <p>The proposed block public access configuration for the Amazon S3 bucket.</p>
     */
    inline bool BucketPublicAccessBlockHasBeenSet() const { return m_bucketPublicAccessBlockHasBeenSet; }

    /**
     * <p>The proposed block public access configuration for the Amazon S3 bucket.</p>
     */
    inline void SetBucketPublicAccessBlock(const S3PublicAccessBlockConfiguration& value) { m_bucketPublicAccessBlockHasBeenSet = true; m_bucketPublicAccessBlock = value; }

    /**
     * <p>The proposed block public access configuration for the Amazon S3 bucket.</p>
     */
    inline void SetBucketPublicAccessBlock(S3PublicAccessBlockConfiguration&& value) { m_bucketPublicAccessBlockHasBeenSet = true; m_bucketPublicAccessBlock = std::move(value); }

    /**
     * <p>The proposed block public access configuration for the Amazon S3 bucket.</p>
     */
    inline S3BucketConfiguration& WithBucketPublicAccessBlock(const S3PublicAccessBlockConfiguration& value) { SetBucketPublicAccessBlock(value); return *this;}

    /**
     * <p>The proposed block public access configuration for the Amazon S3 bucket.</p>
     */
    inline S3BucketConfiguration& WithBucketPublicAccessBlock(S3PublicAccessBlockConfiguration&& value) { SetBucketPublicAccessBlock(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, S3AccessPointConfiguration> m_accessPoints;
    bool m_accessPointsHasBeenSet;

    Aws::Vector<S3BucketAclGrantConfiguration> m_bucketAclGrants;
    bool m_bucketAclGrantsHasBeenSet;

    Aws::String m_bucketPolicy;
    bool m_bucketPolicyHasBeenSet;

    S3PublicAccessBlockConfiguration m_bucketPublicAccessBlock;
    bool m_bucketPublicAccessBlockHasBeenSet;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
