/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
   * role used to access an Amazon S3 bucket.</p> <p>For detailed information about
   * using such a role, see Creating a Location for Amazon S3 in the <i>DataSync User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/S3Config">AWS
   * API Reference</a></p>
   */
  class S3Config
  {
  public:
    AWS_DATASYNC_API S3Config();
    AWS_DATASYNC_API S3Config(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API S3Config& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the IAM role for accessing the S3 bucket. </p>
     */
    inline const Aws::String& GetBucketAccessRoleArn() const{ return m_bucketAccessRoleArn; }

    /**
     * <p>The ARN of the IAM role for accessing the S3 bucket. </p>
     */
    inline bool BucketAccessRoleArnHasBeenSet() const { return m_bucketAccessRoleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role for accessing the S3 bucket. </p>
     */
    inline void SetBucketAccessRoleArn(const Aws::String& value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn = value; }

    /**
     * <p>The ARN of the IAM role for accessing the S3 bucket. </p>
     */
    inline void SetBucketAccessRoleArn(Aws::String&& value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role for accessing the S3 bucket. </p>
     */
    inline void SetBucketAccessRoleArn(const char* value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role for accessing the S3 bucket. </p>
     */
    inline S3Config& WithBucketAccessRoleArn(const Aws::String& value) { SetBucketAccessRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role for accessing the S3 bucket. </p>
     */
    inline S3Config& WithBucketAccessRoleArn(Aws::String&& value) { SetBucketAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role for accessing the S3 bucket. </p>
     */
    inline S3Config& WithBucketAccessRoleArn(const char* value) { SetBucketAccessRoleArn(value); return *this;}

  private:

    Aws::String m_bucketAccessRoleArn;
    bool m_bucketAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
