/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/Architecture.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/Source">AWS
   * API Reference</a></p>
   */
  class Source
  {
  public:
    AWS_ROBOMAKER_API Source();
    AWS_ROBOMAKER_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The s3 bucket name.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The s3 bucket name.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The s3 bucket name.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The s3 bucket name.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The s3 bucket name.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The s3 bucket name.</p>
     */
    inline Source& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The s3 bucket name.</p>
     */
    inline Source& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The s3 bucket name.</p>
     */
    inline Source& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The s3 object key.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The s3 object key.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>The s3 object key.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The s3 object key.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>The s3 object key.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The s3 object key.</p>
     */
    inline Source& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The s3 object key.</p>
     */
    inline Source& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>The s3 object key.</p>
     */
    inline Source& WithS3Key(const char* value) { SetS3Key(value); return *this;}


    /**
     * <p>A hash of the object specified by <code>s3Bucket</code> and
     * <code>s3Key</code>.</p>
     */
    inline const Aws::String& GetEtag() const{ return m_etag; }

    /**
     * <p>A hash of the object specified by <code>s3Bucket</code> and
     * <code>s3Key</code>.</p>
     */
    inline bool EtagHasBeenSet() const { return m_etagHasBeenSet; }

    /**
     * <p>A hash of the object specified by <code>s3Bucket</code> and
     * <code>s3Key</code>.</p>
     */
    inline void SetEtag(const Aws::String& value) { m_etagHasBeenSet = true; m_etag = value; }

    /**
     * <p>A hash of the object specified by <code>s3Bucket</code> and
     * <code>s3Key</code>.</p>
     */
    inline void SetEtag(Aws::String&& value) { m_etagHasBeenSet = true; m_etag = std::move(value); }

    /**
     * <p>A hash of the object specified by <code>s3Bucket</code> and
     * <code>s3Key</code>.</p>
     */
    inline void SetEtag(const char* value) { m_etagHasBeenSet = true; m_etag.assign(value); }

    /**
     * <p>A hash of the object specified by <code>s3Bucket</code> and
     * <code>s3Key</code>.</p>
     */
    inline Source& WithEtag(const Aws::String& value) { SetEtag(value); return *this;}

    /**
     * <p>A hash of the object specified by <code>s3Bucket</code> and
     * <code>s3Key</code>.</p>
     */
    inline Source& WithEtag(Aws::String&& value) { SetEtag(std::move(value)); return *this;}

    /**
     * <p>A hash of the object specified by <code>s3Bucket</code> and
     * <code>s3Key</code>.</p>
     */
    inline Source& WithEtag(const char* value) { SetEtag(value); return *this;}


    /**
     * <p>The taget processor architecture for the application.</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The taget processor architecture for the application.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The taget processor architecture for the application.</p>
     */
    inline void SetArchitecture(const Architecture& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The taget processor architecture for the application.</p>
     */
    inline void SetArchitecture(Architecture&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The taget processor architecture for the application.</p>
     */
    inline Source& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The taget processor architecture for the application.</p>
     */
    inline Source& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_etag;
    bool m_etagHasBeenSet = false;

    Architecture m_architecture;
    bool m_architectureHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
