/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes the destination Amazon Simple Storage Service (Amazon S3) bucket
   * name and key prefix for a recommendations export job.</p> <p>You must create the
   * destination Amazon S3 bucket for your recommendations export before you create
   * the export job. Compute Optimizer does not create the S3 bucket for you. After
   * you create the S3 bucket, ensure that it has the required permission policy to
   * allow Compute Optimizer to write the export file to it. If you plan to specify
   * an object prefix when you create the export job, you must include the object
   * prefix in the policy that you add to the S3 bucket. For more information, see <a
   * href="https://docs.aws.amazon.com/compute-optimizer/latest/ug/create-s3-bucket-policy-for-compute-optimizer.html">Amazon
   * S3 Bucket Policy for Compute Optimizer</a> in the <i>Compute Optimizer User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/S3DestinationConfig">AWS
   * API Reference</a></p>
   */
  class S3DestinationConfig
  {
  public:
    AWS_COMPUTEOPTIMIZER_API S3DestinationConfig() = default;
    AWS_COMPUTEOPTIMIZER_API S3DestinationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API S3DestinationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon S3 bucket to use as the destination for an export
     * job.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    S3DestinationConfig& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket prefix for an export job.</p>
     */
    inline const Aws::String& GetKeyPrefix() const { return m_keyPrefix; }
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }
    template<typename KeyPrefixT = Aws::String>
    void SetKeyPrefix(KeyPrefixT&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::forward<KeyPrefixT>(value); }
    template<typename KeyPrefixT = Aws::String>
    S3DestinationConfig& WithKeyPrefix(KeyPrefixT&& value) { SetKeyPrefix(std::forward<KeyPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
