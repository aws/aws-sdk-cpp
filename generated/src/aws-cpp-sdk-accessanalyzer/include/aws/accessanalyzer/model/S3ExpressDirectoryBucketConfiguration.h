/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
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
   * directory bucket policies for S3 Express One Zone</a>.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/S3ExpressDirectoryBucketConfiguration">AWS
   * API Reference</a></p>
   */
  class S3ExpressDirectoryBucketConfiguration
  {
  public:
    AWS_ACCESSANALYZER_API S3ExpressDirectoryBucketConfiguration();
    AWS_ACCESSANALYZER_API S3ExpressDirectoryBucketConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API S3ExpressDirectoryBucketConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The proposed bucket policy for the Amazon S3 directory bucket.</p>
     */
    inline const Aws::String& GetBucketPolicy() const{ return m_bucketPolicy; }

    /**
     * <p>The proposed bucket policy for the Amazon S3 directory bucket.</p>
     */
    inline bool BucketPolicyHasBeenSet() const { return m_bucketPolicyHasBeenSet; }

    /**
     * <p>The proposed bucket policy for the Amazon S3 directory bucket.</p>
     */
    inline void SetBucketPolicy(const Aws::String& value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy = value; }

    /**
     * <p>The proposed bucket policy for the Amazon S3 directory bucket.</p>
     */
    inline void SetBucketPolicy(Aws::String&& value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy = std::move(value); }

    /**
     * <p>The proposed bucket policy for the Amazon S3 directory bucket.</p>
     */
    inline void SetBucketPolicy(const char* value) { m_bucketPolicyHasBeenSet = true; m_bucketPolicy.assign(value); }

    /**
     * <p>The proposed bucket policy for the Amazon S3 directory bucket.</p>
     */
    inline S3ExpressDirectoryBucketConfiguration& WithBucketPolicy(const Aws::String& value) { SetBucketPolicy(value); return *this;}

    /**
     * <p>The proposed bucket policy for the Amazon S3 directory bucket.</p>
     */
    inline S3ExpressDirectoryBucketConfiguration& WithBucketPolicy(Aws::String&& value) { SetBucketPolicy(std::move(value)); return *this;}

    /**
     * <p>The proposed bucket policy for the Amazon S3 directory bucket.</p>
     */
    inline S3ExpressDirectoryBucketConfiguration& WithBucketPolicy(const char* value) { SetBucketPolicy(value); return *this;}

  private:

    Aws::String m_bucketPolicy;
    bool m_bucketPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
