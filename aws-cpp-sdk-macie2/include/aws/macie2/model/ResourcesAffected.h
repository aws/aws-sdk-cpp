/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/S3Bucket.h>
#include <aws/macie2/model/S3Object.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about the resources that a finding applies
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ResourcesAffected">AWS
   * API Reference</a></p>
   */
  class ResourcesAffected
  {
  public:
    AWS_MACIE2_API ResourcesAffected();
    AWS_MACIE2_API ResourcesAffected(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ResourcesAffected& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details of the S3 bucket that the finding applies to.</p>
     */
    inline const S3Bucket& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The details of the S3 bucket that the finding applies to.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The details of the S3 bucket that the finding applies to.</p>
     */
    inline void SetS3Bucket(const S3Bucket& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The details of the S3 bucket that the finding applies to.</p>
     */
    inline void SetS3Bucket(S3Bucket&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The details of the S3 bucket that the finding applies to.</p>
     */
    inline ResourcesAffected& WithS3Bucket(const S3Bucket& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The details of the S3 bucket that the finding applies to.</p>
     */
    inline ResourcesAffected& WithS3Bucket(S3Bucket&& value) { SetS3Bucket(std::move(value)); return *this;}


    /**
     * <p>The details of the S3 object that the finding applies to.</p>
     */
    inline const S3Object& GetS3Object() const{ return m_s3Object; }

    /**
     * <p>The details of the S3 object that the finding applies to.</p>
     */
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }

    /**
     * <p>The details of the S3 object that the finding applies to.</p>
     */
    inline void SetS3Object(const S3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    /**
     * <p>The details of the S3 object that the finding applies to.</p>
     */
    inline void SetS3Object(S3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::move(value); }

    /**
     * <p>The details of the S3 object that the finding applies to.</p>
     */
    inline ResourcesAffected& WithS3Object(const S3Object& value) { SetS3Object(value); return *this;}

    /**
     * <p>The details of the S3 object that the finding applies to.</p>
     */
    inline ResourcesAffected& WithS3Object(S3Object&& value) { SetS3Object(std::move(value)); return *this;}

  private:

    S3Bucket m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
