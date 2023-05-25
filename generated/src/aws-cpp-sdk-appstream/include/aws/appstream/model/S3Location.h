/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the S3 location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_APPSTREAM_API S3Location();
    AWS_APPSTREAM_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 bucket of the S3 object.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The S3 bucket of the S3 object.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The S3 bucket of the S3 object.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The S3 bucket of the S3 object.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The S3 bucket of the S3 object.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The S3 bucket of the S3 object.</p>
     */
    inline S3Location& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The S3 bucket of the S3 object.</p>
     */
    inline S3Location& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket of the S3 object.</p>
     */
    inline S3Location& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The S3 key of the S3 object.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The S3 key of the S3 object.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>The S3 key of the S3 object.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The S3 key of the S3 object.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>The S3 key of the S3 object.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The S3 key of the S3 object.</p>
     */
    inline S3Location& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The S3 key of the S3 object.</p>
     */
    inline S3Location& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>The S3 key of the S3 object.</p>
     */
    inline S3Location& WithS3Key(const char* value) { SetS3Key(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
