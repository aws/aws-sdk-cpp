/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>A ZIP archive that contains the contents of an <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-layers.html">Lambda
   * layer</a>. You can specify either an Amazon S3 location, or upload a layer
   * archive directly.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/LayerVersionContentInput">AWS
   * API Reference</a></p>
   */
  class LayerVersionContentInput
  {
  public:
    AWS_LAMBDA_API LayerVersionContentInput();
    AWS_LAMBDA_API LayerVersionContentInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API LayerVersionContentInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket of the layer archive.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The Amazon S3 bucket of the layer archive.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket of the layer archive.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The Amazon S3 bucket of the layer archive.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket of the layer archive.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket of the layer archive.</p>
     */
    inline LayerVersionContentInput& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket of the layer archive.</p>
     */
    inline LayerVersionContentInput& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket of the layer archive.</p>
     */
    inline LayerVersionContentInput& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The Amazon S3 key of the layer archive.</p>
     */
    inline const Aws::String& GetS3Key() const{ return m_s3Key; }

    /**
     * <p>The Amazon S3 key of the layer archive.</p>
     */
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }

    /**
     * <p>The Amazon S3 key of the layer archive.</p>
     */
    inline void SetS3Key(const Aws::String& value) { m_s3KeyHasBeenSet = true; m_s3Key = value; }

    /**
     * <p>The Amazon S3 key of the layer archive.</p>
     */
    inline void SetS3Key(Aws::String&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::move(value); }

    /**
     * <p>The Amazon S3 key of the layer archive.</p>
     */
    inline void SetS3Key(const char* value) { m_s3KeyHasBeenSet = true; m_s3Key.assign(value); }

    /**
     * <p>The Amazon S3 key of the layer archive.</p>
     */
    inline LayerVersionContentInput& WithS3Key(const Aws::String& value) { SetS3Key(value); return *this;}

    /**
     * <p>The Amazon S3 key of the layer archive.</p>
     */
    inline LayerVersionContentInput& WithS3Key(Aws::String&& value) { SetS3Key(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 key of the layer archive.</p>
     */
    inline LayerVersionContentInput& WithS3Key(const char* value) { SetS3Key(value); return *this;}


    /**
     * <p>For versioned objects, the version of the layer archive object to use.</p>
     */
    inline const Aws::String& GetS3ObjectVersion() const{ return m_s3ObjectVersion; }

    /**
     * <p>For versioned objects, the version of the layer archive object to use.</p>
     */
    inline bool S3ObjectVersionHasBeenSet() const { return m_s3ObjectVersionHasBeenSet; }

    /**
     * <p>For versioned objects, the version of the layer archive object to use.</p>
     */
    inline void SetS3ObjectVersion(const Aws::String& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = value; }

    /**
     * <p>For versioned objects, the version of the layer archive object to use.</p>
     */
    inline void SetS3ObjectVersion(Aws::String&& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = std::move(value); }

    /**
     * <p>For versioned objects, the version of the layer archive object to use.</p>
     */
    inline void SetS3ObjectVersion(const char* value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion.assign(value); }

    /**
     * <p>For versioned objects, the version of the layer archive object to use.</p>
     */
    inline LayerVersionContentInput& WithS3ObjectVersion(const Aws::String& value) { SetS3ObjectVersion(value); return *this;}

    /**
     * <p>For versioned objects, the version of the layer archive object to use.</p>
     */
    inline LayerVersionContentInput& WithS3ObjectVersion(Aws::String&& value) { SetS3ObjectVersion(std::move(value)); return *this;}

    /**
     * <p>For versioned objects, the version of the layer archive object to use.</p>
     */
    inline LayerVersionContentInput& WithS3ObjectVersion(const char* value) { SetS3ObjectVersion(value); return *this;}


    /**
     * <p>The base64-encoded contents of the layer archive. Amazon Web Services SDK and
     * Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetZipFile() const{ return m_zipFile; }

    /**
     * <p>The base64-encoded contents of the layer archive. Amazon Web Services SDK and
     * Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline bool ZipFileHasBeenSet() const { return m_zipFileHasBeenSet; }

    /**
     * <p>The base64-encoded contents of the layer archive. Amazon Web Services SDK and
     * Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline void SetZipFile(const Aws::Utils::CryptoBuffer& value) { m_zipFileHasBeenSet = true; m_zipFile = value; }

    /**
     * <p>The base64-encoded contents of the layer archive. Amazon Web Services SDK and
     * Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline void SetZipFile(Aws::Utils::CryptoBuffer&& value) { m_zipFileHasBeenSet = true; m_zipFile = std::move(value); }

    /**
     * <p>The base64-encoded contents of the layer archive. Amazon Web Services SDK and
     * Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline LayerVersionContentInput& WithZipFile(const Aws::Utils::CryptoBuffer& value) { SetZipFile(value); return *this;}

    /**
     * <p>The base64-encoded contents of the layer archive. Amazon Web Services SDK and
     * Amazon Web Services CLI clients handle the encoding for you.</p>
     */
    inline LayerVersionContentInput& WithZipFile(Aws::Utils::CryptoBuffer&& value) { SetZipFile(std::move(value)); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_s3ObjectVersion;
    bool m_s3ObjectVersionHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_zipFile;
    bool m_zipFileHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
