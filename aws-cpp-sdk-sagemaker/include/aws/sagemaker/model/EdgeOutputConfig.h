/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The output configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EdgeOutputConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API EdgeOutputConfig
  {
  public:
    EdgeOutputConfig();
    EdgeOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    EdgeOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline const Aws::String& GetS3OutputLocation() const{ return m_s3OutputLocation; }

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline bool S3OutputLocationHasBeenSet() const { return m_s3OutputLocationHasBeenSet; }

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline void SetS3OutputLocation(const Aws::String& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = value; }

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline void SetS3OutputLocation(Aws::String&& value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation = std::move(value); }

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline void SetS3OutputLocation(const char* value) { m_s3OutputLocationHasBeenSet = true; m_s3OutputLocation.assign(value); }

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline EdgeOutputConfig& WithS3OutputLocation(const Aws::String& value) { SetS3OutputLocation(value); return *this;}

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline EdgeOutputConfig& WithS3OutputLocation(Aws::String&& value) { SetS3OutputLocation(std::move(value)); return *this;}

    /**
     * <p>The Amazon Simple Storage (S3) bucker URI.</p>
     */
    inline EdgeOutputConfig& WithS3OutputLocation(const char* value) { SetS3OutputLocation(value); return *this;}


    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume after compilation job. If you don't provide a
     * KMS key ID, Amazon SageMaker uses the default KMS key for Amazon S3 for your
     * role's account.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume after compilation job. If you don't provide a
     * KMS key ID, Amazon SageMaker uses the default KMS key for Amazon S3 for your
     * role's account.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume after compilation job. If you don't provide a
     * KMS key ID, Amazon SageMaker uses the default KMS key for Amazon S3 for your
     * role's account.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume after compilation job. If you don't provide a
     * KMS key ID, Amazon SageMaker uses the default KMS key for Amazon S3 for your
     * role's account.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume after compilation job. If you don't provide a
     * KMS key ID, Amazon SageMaker uses the default KMS key for Amazon S3 for your
     * role's account.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume after compilation job. If you don't provide a
     * KMS key ID, Amazon SageMaker uses the default KMS key for Amazon S3 for your
     * role's account.</p>
     */
    inline EdgeOutputConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume after compilation job. If you don't provide a
     * KMS key ID, Amazon SageMaker uses the default KMS key for Amazon S3 for your
     * role's account.</p>
     */
    inline EdgeOutputConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt data on the storage volume after compilation job. If you don't provide a
     * KMS key ID, Amazon SageMaker uses the default KMS key for Amazon S3 for your
     * role's account.</p>
     */
    inline EdgeOutputConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_s3OutputLocation;
    bool m_s3OutputLocationHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
