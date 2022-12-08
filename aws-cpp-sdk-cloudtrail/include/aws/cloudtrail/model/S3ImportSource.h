/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p> The settings for the source S3 bucket. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/S3ImportSource">AWS
   * API Reference</a></p>
   */
  class S3ImportSource
  {
  public:
    AWS_CLOUDTRAIL_API S3ImportSource();
    AWS_CLOUDTRAIL_API S3ImportSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API S3ImportSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The URI for the source S3 bucket. </p>
     */
    inline const Aws::String& GetS3LocationUri() const{ return m_s3LocationUri; }

    /**
     * <p> The URI for the source S3 bucket. </p>
     */
    inline bool S3LocationUriHasBeenSet() const { return m_s3LocationUriHasBeenSet; }

    /**
     * <p> The URI for the source S3 bucket. </p>
     */
    inline void SetS3LocationUri(const Aws::String& value) { m_s3LocationUriHasBeenSet = true; m_s3LocationUri = value; }

    /**
     * <p> The URI for the source S3 bucket. </p>
     */
    inline void SetS3LocationUri(Aws::String&& value) { m_s3LocationUriHasBeenSet = true; m_s3LocationUri = std::move(value); }

    /**
     * <p> The URI for the source S3 bucket. </p>
     */
    inline void SetS3LocationUri(const char* value) { m_s3LocationUriHasBeenSet = true; m_s3LocationUri.assign(value); }

    /**
     * <p> The URI for the source S3 bucket. </p>
     */
    inline S3ImportSource& WithS3LocationUri(const Aws::String& value) { SetS3LocationUri(value); return *this;}

    /**
     * <p> The URI for the source S3 bucket. </p>
     */
    inline S3ImportSource& WithS3LocationUri(Aws::String&& value) { SetS3LocationUri(std::move(value)); return *this;}

    /**
     * <p> The URI for the source S3 bucket. </p>
     */
    inline S3ImportSource& WithS3LocationUri(const char* value) { SetS3LocationUri(value); return *this;}


    /**
     * <p> The region associated with the source S3 bucket. </p>
     */
    inline const Aws::String& GetS3BucketRegion() const{ return m_s3BucketRegion; }

    /**
     * <p> The region associated with the source S3 bucket. </p>
     */
    inline bool S3BucketRegionHasBeenSet() const { return m_s3BucketRegionHasBeenSet; }

    /**
     * <p> The region associated with the source S3 bucket. </p>
     */
    inline void SetS3BucketRegion(const Aws::String& value) { m_s3BucketRegionHasBeenSet = true; m_s3BucketRegion = value; }

    /**
     * <p> The region associated with the source S3 bucket. </p>
     */
    inline void SetS3BucketRegion(Aws::String&& value) { m_s3BucketRegionHasBeenSet = true; m_s3BucketRegion = std::move(value); }

    /**
     * <p> The region associated with the source S3 bucket. </p>
     */
    inline void SetS3BucketRegion(const char* value) { m_s3BucketRegionHasBeenSet = true; m_s3BucketRegion.assign(value); }

    /**
     * <p> The region associated with the source S3 bucket. </p>
     */
    inline S3ImportSource& WithS3BucketRegion(const Aws::String& value) { SetS3BucketRegion(value); return *this;}

    /**
     * <p> The region associated with the source S3 bucket. </p>
     */
    inline S3ImportSource& WithS3BucketRegion(Aws::String&& value) { SetS3BucketRegion(std::move(value)); return *this;}

    /**
     * <p> The region associated with the source S3 bucket. </p>
     */
    inline S3ImportSource& WithS3BucketRegion(const char* value) { SetS3BucketRegion(value); return *this;}


    /**
     * <p> The IAM ARN role used to access the source S3 bucket. </p>
     */
    inline const Aws::String& GetS3BucketAccessRoleArn() const{ return m_s3BucketAccessRoleArn; }

    /**
     * <p> The IAM ARN role used to access the source S3 bucket. </p>
     */
    inline bool S3BucketAccessRoleArnHasBeenSet() const { return m_s3BucketAccessRoleArnHasBeenSet; }

    /**
     * <p> The IAM ARN role used to access the source S3 bucket. </p>
     */
    inline void SetS3BucketAccessRoleArn(const Aws::String& value) { m_s3BucketAccessRoleArnHasBeenSet = true; m_s3BucketAccessRoleArn = value; }

    /**
     * <p> The IAM ARN role used to access the source S3 bucket. </p>
     */
    inline void SetS3BucketAccessRoleArn(Aws::String&& value) { m_s3BucketAccessRoleArnHasBeenSet = true; m_s3BucketAccessRoleArn = std::move(value); }

    /**
     * <p> The IAM ARN role used to access the source S3 bucket. </p>
     */
    inline void SetS3BucketAccessRoleArn(const char* value) { m_s3BucketAccessRoleArnHasBeenSet = true; m_s3BucketAccessRoleArn.assign(value); }

    /**
     * <p> The IAM ARN role used to access the source S3 bucket. </p>
     */
    inline S3ImportSource& WithS3BucketAccessRoleArn(const Aws::String& value) { SetS3BucketAccessRoleArn(value); return *this;}

    /**
     * <p> The IAM ARN role used to access the source S3 bucket. </p>
     */
    inline S3ImportSource& WithS3BucketAccessRoleArn(Aws::String&& value) { SetS3BucketAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p> The IAM ARN role used to access the source S3 bucket. </p>
     */
    inline S3ImportSource& WithS3BucketAccessRoleArn(const char* value) { SetS3BucketAccessRoleArn(value); return *this;}

  private:

    Aws::String m_s3LocationUri;
    bool m_s3LocationUriHasBeenSet = false;

    Aws::String m_s3BucketRegion;
    bool m_s3BucketRegionHasBeenSet = false;

    Aws::String m_s3BucketAccessRoleArn;
    bool m_s3BucketAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
