﻿/**
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
   * role that is used to access an Amazon S3 bucket.</p> <p>For detailed information
   * about using such a role, see Creating a Location for Amazon S3 in the
   * <i>DataSync User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/S3Config">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API S3Config
  {
  public:
    S3Config();
    S3Config(Aws::Utils::Json::JsonView jsonValue);
    S3Config& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket to access. This bucket is used as a parameter in the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationS3.html">CreateLocationS3</a>
     * operation. </p>
     */
    inline const Aws::String& GetBucketAccessRoleArn() const{ return m_bucketAccessRoleArn; }

    /**
     * <p>The Amazon S3 bucket to access. This bucket is used as a parameter in the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationS3.html">CreateLocationS3</a>
     * operation. </p>
     */
    inline bool BucketAccessRoleArnHasBeenSet() const { return m_bucketAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket to access. This bucket is used as a parameter in the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationS3.html">CreateLocationS3</a>
     * operation. </p>
     */
    inline void SetBucketAccessRoleArn(const Aws::String& value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn = value; }

    /**
     * <p>The Amazon S3 bucket to access. This bucket is used as a parameter in the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationS3.html">CreateLocationS3</a>
     * operation. </p>
     */
    inline void SetBucketAccessRoleArn(Aws::String&& value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon S3 bucket to access. This bucket is used as a parameter in the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationS3.html">CreateLocationS3</a>
     * operation. </p>
     */
    inline void SetBucketAccessRoleArn(const char* value) { m_bucketAccessRoleArnHasBeenSet = true; m_bucketAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon S3 bucket to access. This bucket is used as a parameter in the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationS3.html">CreateLocationS3</a>
     * operation. </p>
     */
    inline S3Config& WithBucketAccessRoleArn(const Aws::String& value) { SetBucketAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon S3 bucket to access. This bucket is used as a parameter in the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationS3.html">CreateLocationS3</a>
     * operation. </p>
     */
    inline S3Config& WithBucketAccessRoleArn(Aws::String&& value) { SetBucketAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket to access. This bucket is used as a parameter in the <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/API_CreateLocationS3.html">CreateLocationS3</a>
     * operation. </p>
     */
    inline S3Config& WithBucketAccessRoleArn(const char* value) { SetBucketAccessRoleArn(value); return *this;}

  private:

    Aws::String m_bucketAccessRoleArn;
    bool m_bucketAccessRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
