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
   * <p>Amazon S3 Location information for an input manifest file. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/InputS3Object">AWS
   * API Reference</a></p>
   */
  class InputS3Object
  {
  public:
    AWS_LOOKOUTFORVISION_API InputS3Object();
    AWS_LOOKOUTFORVISION_API InputS3Object(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API InputS3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket that contains the manifest.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket that contains the manifest.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that contains the manifest.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket that contains the manifest.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that contains the manifest.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket that contains the manifest.</p>
     */
    inline InputS3Object& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains the manifest.</p>
     */
    inline InputS3Object& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains the manifest.</p>
     */
    inline InputS3Object& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The name and location of the manifest file withiin the bucket.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name and location of the manifest file withiin the bucket.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name and location of the manifest file withiin the bucket.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name and location of the manifest file withiin the bucket.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name and location of the manifest file withiin the bucket.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name and location of the manifest file withiin the bucket.</p>
     */
    inline InputS3Object& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name and location of the manifest file withiin the bucket.</p>
     */
    inline InputS3Object& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name and location of the manifest file withiin the bucket.</p>
     */
    inline InputS3Object& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The version ID of the bucket.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The version ID of the bucket.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The version ID of the bucket.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The version ID of the bucket.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The version ID of the bucket.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The version ID of the bucket.</p>
     */
    inline InputS3Object& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The version ID of the bucket.</p>
     */
    inline InputS3Object& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The version ID of the bucket.</p>
     */
    inline InputS3Object& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
