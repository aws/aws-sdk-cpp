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
    AWS_COMPUTEOPTIMIZER_API S3DestinationConfig();
    AWS_COMPUTEOPTIMIZER_API S3DestinationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API S3DestinationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket to use as the destination for an export
     * job.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the Amazon S3 bucket to use as the destination for an export
     * job.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket to use as the destination for an export
     * job.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket to use as the destination for an export
     * job.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket to use as the destination for an export
     * job.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket to use as the destination for an export
     * job.</p>
     */
    inline S3DestinationConfig& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to use as the destination for an export
     * job.</p>
     */
    inline S3DestinationConfig& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to use as the destination for an export
     * job.</p>
     */
    inline S3DestinationConfig& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The Amazon S3 bucket prefix for an export job.</p>
     */
    inline const Aws::String& GetKeyPrefix() const{ return m_keyPrefix; }

    /**
     * <p>The Amazon S3 bucket prefix for an export job.</p>
     */
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket prefix for an export job.</p>
     */
    inline void SetKeyPrefix(const Aws::String& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = value; }

    /**
     * <p>The Amazon S3 bucket prefix for an export job.</p>
     */
    inline void SetKeyPrefix(Aws::String&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::move(value); }

    /**
     * <p>The Amazon S3 bucket prefix for an export job.</p>
     */
    inline void SetKeyPrefix(const char* value) { m_keyPrefixHasBeenSet = true; m_keyPrefix.assign(value); }

    /**
     * <p>The Amazon S3 bucket prefix for an export job.</p>
     */
    inline S3DestinationConfig& WithKeyPrefix(const Aws::String& value) { SetKeyPrefix(value); return *this;}

    /**
     * <p>The Amazon S3 bucket prefix for an export job.</p>
     */
    inline S3DestinationConfig& WithKeyPrefix(Aws::String&& value) { SetKeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket prefix for an export job.</p>
     */
    inline S3DestinationConfig& WithKeyPrefix(const char* value) { SetKeyPrefix(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
