/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>The code for the Lambda function. You can either specify an object in Amazon
   * S3, upload a .zip file archive deployment package directly, or specify the URI
   * of a container image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/FunctionCode">AWS
   * API Reference</a></p>
   */
  class FunctionCode
  {
  public:
    AWS_LAMBDA_API FunctionCode() = default;
    AWS_LAMBDA_API FunctionCode(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API FunctionCode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base64-encoded contents of the deployment package. Amazon Web Services
     * SDK and CLI clients handle the encoding for you.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetZipFile() const { return m_zipFile; }
    inline bool ZipFileHasBeenSet() const { return m_zipFileHasBeenSet; }
    template<typename ZipFileT = Aws::Utils::CryptoBuffer>
    void SetZipFile(ZipFileT&& value) { m_zipFileHasBeenSet = true; m_zipFile = std::forward<ZipFileT>(value); }
    template<typename ZipFileT = Aws::Utils::CryptoBuffer>
    FunctionCode& WithZipFile(ZipFileT&& value) { SetZipFile(std::forward<ZipFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon S3 bucket in the same Amazon Web Services Region as your function.
     * The bucket can be in a different Amazon Web Services account.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    FunctionCode& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 key of the deployment package.</p>
     */
    inline const Aws::String& GetS3Key() const { return m_s3Key; }
    inline bool S3KeyHasBeenSet() const { return m_s3KeyHasBeenSet; }
    template<typename S3KeyT = Aws::String>
    void SetS3Key(S3KeyT&& value) { m_s3KeyHasBeenSet = true; m_s3Key = std::forward<S3KeyT>(value); }
    template<typename S3KeyT = Aws::String>
    FunctionCode& WithS3Key(S3KeyT&& value) { SetS3Key(std::forward<S3KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For versioned objects, the version of the deployment package object to
     * use.</p>
     */
    inline const Aws::String& GetS3ObjectVersion() const { return m_s3ObjectVersion; }
    inline bool S3ObjectVersionHasBeenSet() const { return m_s3ObjectVersionHasBeenSet; }
    template<typename S3ObjectVersionT = Aws::String>
    void SetS3ObjectVersion(S3ObjectVersionT&& value) { m_s3ObjectVersionHasBeenSet = true; m_s3ObjectVersion = std::forward<S3ObjectVersionT>(value); }
    template<typename S3ObjectVersionT = Aws::String>
    FunctionCode& WithS3ObjectVersion(S3ObjectVersionT&& value) { SetS3ObjectVersion(std::forward<S3ObjectVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>URI of a <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-images.html">container
     * image</a> in the Amazon ECR registry.</p>
     */
    inline const Aws::String& GetImageUri() const { return m_imageUri; }
    inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
    template<typename ImageUriT = Aws::String>
    void SetImageUri(ImageUriT&& value) { m_imageUriHasBeenSet = true; m_imageUri = std::forward<ImageUriT>(value); }
    template<typename ImageUriT = Aws::String>
    FunctionCode& WithImageUri(ImageUriT&& value) { SetImageUri(std::forward<ImageUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Key Management Service (KMS) customer managed key that's used
     * to encrypt your function's .zip deployment package. If you don't provide a
     * customer managed key, Lambda uses an <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#aws-owned-cmk">Amazon
     * Web Services owned key</a>.</p>
     */
    inline const Aws::String& GetSourceKMSKeyArn() const { return m_sourceKMSKeyArn; }
    inline bool SourceKMSKeyArnHasBeenSet() const { return m_sourceKMSKeyArnHasBeenSet; }
    template<typename SourceKMSKeyArnT = Aws::String>
    void SetSourceKMSKeyArn(SourceKMSKeyArnT&& value) { m_sourceKMSKeyArnHasBeenSet = true; m_sourceKMSKeyArn = std::forward<SourceKMSKeyArnT>(value); }
    template<typename SourceKMSKeyArnT = Aws::String>
    FunctionCode& WithSourceKMSKeyArn(SourceKMSKeyArnT&& value) { SetSourceKMSKeyArn(std::forward<SourceKMSKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_zipFile{};
    bool m_zipFileHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Key;
    bool m_s3KeyHasBeenSet = false;

    Aws::String m_s3ObjectVersion;
    bool m_s3ObjectVersionHasBeenSet = false;

    Aws::String m_imageUri;
    bool m_imageUriHasBeenSet = false;

    Aws::String m_sourceKMSKeyArn;
    bool m_sourceKMSKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
