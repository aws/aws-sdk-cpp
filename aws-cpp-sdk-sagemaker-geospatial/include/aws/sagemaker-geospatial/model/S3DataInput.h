/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/MetadataProvider.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>Path to Amazon S3 storage location for input data.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/S3DataInput">AWS
   * API Reference</a></p>
   */
  class S3DataInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API S3DataInput();
    AWS_SAGEMAKERGEOSPATIAL_API S3DataInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API S3DataInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline S3DataInput& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline S3DataInput& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline S3DataInput& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p/>
     */
    inline const MetadataProvider& GetMetadataProvider() const{ return m_metadataProvider; }

    /**
     * <p/>
     */
    inline bool MetadataProviderHasBeenSet() const { return m_metadataProviderHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMetadataProvider(const MetadataProvider& value) { m_metadataProviderHasBeenSet = true; m_metadataProvider = value; }

    /**
     * <p/>
     */
    inline void SetMetadataProvider(MetadataProvider&& value) { m_metadataProviderHasBeenSet = true; m_metadataProvider = std::move(value); }

    /**
     * <p/>
     */
    inline S3DataInput& WithMetadataProvider(const MetadataProvider& value) { SetMetadataProvider(value); return *this;}

    /**
     * <p/>
     */
    inline S3DataInput& WithMetadataProvider(MetadataProvider&& value) { SetMetadataProvider(std::move(value)); return *this;}


    /**
     * <p>The URL to the Amazon S3 input.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The URL to the Amazon S3 input.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The URL to the Amazon S3 input.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The URL to the Amazon S3 input.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The URL to the Amazon S3 input.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The URL to the Amazon S3 input.</p>
     */
    inline S3DataInput& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The URL to the Amazon S3 input.</p>
     */
    inline S3DataInput& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The URL to the Amazon S3 input.</p>
     */
    inline S3DataInput& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    MetadataProvider m_metadataProvider;
    bool m_metadataProviderHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
