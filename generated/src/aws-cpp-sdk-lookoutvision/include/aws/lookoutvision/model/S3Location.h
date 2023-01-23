/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>Information about the location of training output or the output of a model
   * packaging job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_LOOKOUTFORVISION_API S3Location();
    AWS_LOOKOUTFORVISION_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 bucket that contains the training or model packaging job output. If
     * you are training a model, the bucket must in your AWS account. If you use an S3
     * bucket for a model packaging job, the S3 bucket must be in the same AWS Region
     * and AWS account in which you use AWS IoT Greengrass.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The S3 bucket that contains the training or model packaging job output. If
     * you are training a model, the bucket must in your AWS account. If you use an S3
     * bucket for a model packaging job, the S3 bucket must be in the same AWS Region
     * and AWS account in which you use AWS IoT Greengrass.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The S3 bucket that contains the training or model packaging job output. If
     * you are training a model, the bucket must in your AWS account. If you use an S3
     * bucket for a model packaging job, the S3 bucket must be in the same AWS Region
     * and AWS account in which you use AWS IoT Greengrass.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The S3 bucket that contains the training or model packaging job output. If
     * you are training a model, the bucket must in your AWS account. If you use an S3
     * bucket for a model packaging job, the S3 bucket must be in the same AWS Region
     * and AWS account in which you use AWS IoT Greengrass.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The S3 bucket that contains the training or model packaging job output. If
     * you are training a model, the bucket must in your AWS account. If you use an S3
     * bucket for a model packaging job, the S3 bucket must be in the same AWS Region
     * and AWS account in which you use AWS IoT Greengrass.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The S3 bucket that contains the training or model packaging job output. If
     * you are training a model, the bucket must in your AWS account. If you use an S3
     * bucket for a model packaging job, the S3 bucket must be in the same AWS Region
     * and AWS account in which you use AWS IoT Greengrass.</p>
     */
    inline S3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The S3 bucket that contains the training or model packaging job output. If
     * you are training a model, the bucket must in your AWS account. If you use an S3
     * bucket for a model packaging job, the S3 bucket must be in the same AWS Region
     * and AWS account in which you use AWS IoT Greengrass.</p>
     */
    inline S3Location& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket that contains the training or model packaging job output. If
     * you are training a model, the bucket must in your AWS account. If you use an S3
     * bucket for a model packaging job, the S3 bucket must be in the same AWS Region
     * and AWS account in which you use AWS IoT Greengrass.</p>
     */
    inline S3Location& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The path of the folder, within the S3 bucket, that contains the output.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>The path of the folder, within the S3 bucket, that contains the output.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>The path of the folder, within the S3 bucket, that contains the output.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>The path of the folder, within the S3 bucket, that contains the output.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>The path of the folder, within the S3 bucket, that contains the output.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>The path of the folder, within the S3 bucket, that contains the output.</p>
     */
    inline S3Location& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>The path of the folder, within the S3 bucket, that contains the output.</p>
     */
    inline S3Location& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>The path of the folder, within the S3 bucket, that contains the output.</p>
     */
    inline S3Location& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
