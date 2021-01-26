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
  class AWS_MACIE2_API ResourcesAffected
  {
  public:
    ResourcesAffected();
    ResourcesAffected(Aws::Utils::Json::JsonView jsonValue);
    ResourcesAffected& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects, one for each S3 bucket that the finding applies to. Each
     * object provides a set of metadata about an affected S3 bucket.</p>
     */
    inline const S3Bucket& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>An array of objects, one for each S3 bucket that the finding applies to. Each
     * object provides a set of metadata about an affected S3 bucket.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>An array of objects, one for each S3 bucket that the finding applies to. Each
     * object provides a set of metadata about an affected S3 bucket.</p>
     */
    inline void SetS3Bucket(const S3Bucket& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>An array of objects, one for each S3 bucket that the finding applies to. Each
     * object provides a set of metadata about an affected S3 bucket.</p>
     */
    inline void SetS3Bucket(S3Bucket&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>An array of objects, one for each S3 bucket that the finding applies to. Each
     * object provides a set of metadata about an affected S3 bucket.</p>
     */
    inline ResourcesAffected& WithS3Bucket(const S3Bucket& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>An array of objects, one for each S3 bucket that the finding applies to. Each
     * object provides a set of metadata about an affected S3 bucket.</p>
     */
    inline ResourcesAffected& WithS3Bucket(S3Bucket&& value) { SetS3Bucket(std::move(value)); return *this;}


    /**
     * <p>An array of objects, one for each S3 object that the finding applies to. Each
     * object provides a set of metadata about an affected S3 object.</p>
     */
    inline const S3Object& GetS3Object() const{ return m_s3Object; }

    /**
     * <p>An array of objects, one for each S3 object that the finding applies to. Each
     * object provides a set of metadata about an affected S3 object.</p>
     */
    inline bool S3ObjectHasBeenSet() const { return m_s3ObjectHasBeenSet; }

    /**
     * <p>An array of objects, one for each S3 object that the finding applies to. Each
     * object provides a set of metadata about an affected S3 object.</p>
     */
    inline void SetS3Object(const S3Object& value) { m_s3ObjectHasBeenSet = true; m_s3Object = value; }

    /**
     * <p>An array of objects, one for each S3 object that the finding applies to. Each
     * object provides a set of metadata about an affected S3 object.</p>
     */
    inline void SetS3Object(S3Object&& value) { m_s3ObjectHasBeenSet = true; m_s3Object = std::move(value); }

    /**
     * <p>An array of objects, one for each S3 object that the finding applies to. Each
     * object provides a set of metadata about an affected S3 object.</p>
     */
    inline ResourcesAffected& WithS3Object(const S3Object& value) { SetS3Object(value); return *this;}

    /**
     * <p>An array of objects, one for each S3 object that the finding applies to. Each
     * object provides a set of metadata about an affected S3 object.</p>
     */
    inline ResourcesAffected& WithS3Object(S3Object&& value) { SetS3Object(std::move(value)); return *this;}

  private:

    S3Bucket m_s3Bucket;
    bool m_s3BucketHasBeenSet;

    S3Object m_s3Object;
    bool m_s3ObjectHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
