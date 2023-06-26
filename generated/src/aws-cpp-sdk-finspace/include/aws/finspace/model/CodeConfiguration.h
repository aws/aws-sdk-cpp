/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p>The structure of the customer code available within the running
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/CodeConfiguration">AWS
   * API Reference</a></p>
   */
  class CodeConfiguration
  {
  public:
    AWS_FINSPACE_API CodeConfiguration();
    AWS_FINSPACE_API CodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API CodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique name for the S3 bucket.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>A unique name for the S3 bucket.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>A unique name for the S3 bucket.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>A unique name for the S3 bucket.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>A unique name for the S3 bucket.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>A unique name for the S3 bucket.</p>
     */
    inline CodeConfiguration& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>A unique name for the S3 bucket.</p>
     */
    inline CodeConfiguration& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>A unique name for the S3 bucket.</p>
     */
    inline CodeConfiguration& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The full S3 path (excluding bucket) to the .zip file. This file contains the
     * code that is loaded onto the cluster when it's started.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The full S3 path (excluding bucket) to the .zip file. This file contains the
     * code that is loaded onto the cluster when it's started.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>The full S3 path (excluding bucket) to the .zip file. This file contains the
     * code that is loaded onto the cluster when it's started.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The full S3 path (excluding bucket) to the .zip file. This file contains the
     * code that is loaded onto the cluster when it's started.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>The full S3 path (excluding bucket) to the .zip file. This file contains the
     * code that is loaded onto the cluster when it's started.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The full S3 path (excluding bucket) to the .zip file. This file contains the
     * code that is loaded onto the cluster when it's started.</p>
     */
    inline CodeConfiguration& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The full S3 path (excluding bucket) to the .zip file. This file contains the
     * code that is loaded onto the cluster when it's started.</p>
     */
    inline CodeConfiguration& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>The full S3 path (excluding bucket) to the .zip file. This file contains the
     * code that is loaded onto the cluster when it's started.</p>
     */
    inline CodeConfiguration& WithS3Key(const char* value) { SetS3Key(value); return *this;}


    /**
     * <p>The version of an S3 object.</p>
     */
    inline const Aws::String& GetS3ObjectVersion() const{ return m_s3ObjectVersion; }

    /**
     * <p>The version of an S3 object.</p>
     */
    inline bool S3ObjectVersionHasBeenSet() const { return m_s3ObjectVersionHasBeenSet; }

    /**
     * <p>The version of an S3 object.</p>
     */
    inline void SetS3ObjectVersion(const Aws::String& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = value; }

    /**
     * <p>The version of an S3 object.</p>
     */
    inline void SetS3ObjectVersion(Aws::String&& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = std::move(value); }

    /**
     * <p>The version of an S3 object.</p>
     */
    inline void SetS3ObjectVersion(const char* value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion.assign(value); }

    /**
     * <p>The version of an S3 object.</p>
     */
    inline CodeConfiguration& WithS3ObjectVersion(const Aws::String& value) { SetS3ObjectVersion(value); return *this;}

    /**
     * <p>The version of an S3 object.</p>
     */
    inline CodeConfiguration& WithS3ObjectVersion(Aws::String&& value) { SetS3ObjectVersion(std::move(value)); return *this;}

    /**
     * <p>The version of an S3 object.</p>
     */
    inline CodeConfiguration& WithS3ObjectVersion(const char* value) { SetS3ObjectVersion(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_s3ObjectVersion;
    bool m_s3ObjectVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
