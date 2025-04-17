/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/S3ExpressDirectoryAccessPointConfiguration.h>
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
   * <p>Proposed access control configuration for an Amazon S3 directory bucket. You
   * can propose a configuration for a new Amazon S3 directory bucket or an existing
   * Amazon S3 directory bucket that you own by specifying the Amazon S3 bucket
   * policy. If the configuration is for an existing Amazon S3 directory bucket and
   * you do not specify the Amazon S3 bucket policy, the access preview uses the
   * existing policy attached to the directory bucket. If the access preview is for a
   * new resource and you do not specify the Amazon S3 bucket policy, the access
   * preview assumes an directory bucket without a policy. To propose deletion of an
   * existing bucket policy, you can specify an empty string. For more information
   * about Amazon S3 directory bucket policies, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-express-security-iam-example-bucket-policies.html">Example
   * bucket policies for directory buckets</a> in the Amazon Simple Storage Service
   * User Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/S3ExpressDirectoryBucketConfiguration">AWS
   * API Reference</a></p>
   */
  class S3ExpressDirectoryBucketConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API S3ExpressDirectoryBucketConfiguration() = default;
    AWS_ACCESSANALYZER_API S3ExpressDirectoryBucketConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API S3ExpressDirectoryBucketConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The proposed bucket policy for the Amazon S3 directory bucket.</p>
     */
    inline const Aws::String& GetBucketPolicy() const { return m_bucketPolicy; }
    inline bool BucketPolicyHasBeenSet() const { return m_bucketPolicyHasBeenSet; }
    template<typename BucketPolicyT = Aws::String>
    void SetBucketPolicy(BucketPolicyT&& value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy = std::forward<BucketPolicyT>(value); }
    template<typename BucketPolicyT = Aws::String>
    S3ExpressDirectoryBucketConfiguration& WithBucketPolicy(BucketPolicyT&& value) { SetBucketPolicy(std::forward<BucketPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The proposed access points for the Amazon S3 directory bucket.</p>
     */
    inline const Aws::Map<Aws::String, S3ExpressDirectoryAccessPointConfiguration>& GetAccessPoints() const { return m_accessPoints; }
    inline bool AccessPointsHasBeenSet() const { return m_accessPointsHasBeenSet; }
    template<typename AccessPointsT = Aws::Map<Aws::String, S3ExpressDirectoryAccessPointConfiguration>>
    void SetAccessPoints(AccessPointsT&& value) { m_accessPointsHasBeenSet = true; m_accessPoints = std::forward<AccessPointsT>(value); }
    template<typename AccessPointsT = Aws::Map<Aws::String, S3ExpressDirectoryAccessPointConfiguration>>
    S3ExpressDirectoryBucketConfiguration& WithAccessPoints(AccessPointsT&& value) { SetAccessPoints(std::forward<AccessPointsT>(value)); return *this;}
    template<typename AccessPointsKeyT = Aws::String, typename AccessPointsValueT = S3ExpressDirectoryAccessPointConfiguration>
    S3ExpressDirectoryBucketConfiguration& AddAccessPoints(AccessPointsKeyT&& key, AccessPointsValueT&& value) {
      m_accessPointsHasBeenSet = true; m_accessPoints.emplace(std::forward<AccessPointsKeyT>(key), std::forward<AccessPointsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_bucketPolicy;
    bool m_bucketPolicyHasBeenSet = false;

    Aws::Map<Aws::String, S3ExpressDirectoryAccessPointConfiguration> m_accessPoints;
    bool m_accessPointsHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
