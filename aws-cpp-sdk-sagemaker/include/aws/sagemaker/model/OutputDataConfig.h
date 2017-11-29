/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Provides information about how to store model training results (model
   * artifacts).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OutputDataConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API OutputDataConfig
  {
  public:
    OutputDataConfig();
    OutputDataConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    OutputDataConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. </p>
     * <note> <p>If the configuration of the output S3 bucket requires server-side
     * encryption for objects, and you don't provide the KMS key ID, Amazon SageMaker
     * uses the default service key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in Amazon Simple Storage Service developer guide.</p>
     * </note> <note> <p> The KMS key policy must grant permission to the IAM role you
     * specify in your <code>CreateTrainingJob</code> request. <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the AWS Key Management Service Developer Guide.
     * </p> </note>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. </p>
     * <note> <p>If the configuration of the output S3 bucket requires server-side
     * encryption for objects, and you don't provide the KMS key ID, Amazon SageMaker
     * uses the default service key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in Amazon Simple Storage Service developer guide.</p>
     * </note> <note> <p> The KMS key policy must grant permission to the IAM role you
     * specify in your <code>CreateTrainingJob</code> request. <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the AWS Key Management Service Developer Guide.
     * </p> </note>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. </p>
     * <note> <p>If the configuration of the output S3 bucket requires server-side
     * encryption for objects, and you don't provide the KMS key ID, Amazon SageMaker
     * uses the default service key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in Amazon Simple Storage Service developer guide.</p>
     * </note> <note> <p> The KMS key policy must grant permission to the IAM role you
     * specify in your <code>CreateTrainingJob</code> request. <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the AWS Key Management Service Developer Guide.
     * </p> </note>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. </p>
     * <note> <p>If the configuration of the output S3 bucket requires server-side
     * encryption for objects, and you don't provide the KMS key ID, Amazon SageMaker
     * uses the default service key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in Amazon Simple Storage Service developer guide.</p>
     * </note> <note> <p> The KMS key policy must grant permission to the IAM role you
     * specify in your <code>CreateTrainingJob</code> request. <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the AWS Key Management Service Developer Guide.
     * </p> </note>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. </p>
     * <note> <p>If the configuration of the output S3 bucket requires server-side
     * encryption for objects, and you don't provide the KMS key ID, Amazon SageMaker
     * uses the default service key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in Amazon Simple Storage Service developer guide.</p>
     * </note> <note> <p> The KMS key policy must grant permission to the IAM role you
     * specify in your <code>CreateTrainingJob</code> request. <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the AWS Key Management Service Developer Guide.
     * </p> </note>
     */
    inline OutputDataConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. </p>
     * <note> <p>If the configuration of the output S3 bucket requires server-side
     * encryption for objects, and you don't provide the KMS key ID, Amazon SageMaker
     * uses the default service key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in Amazon Simple Storage Service developer guide.</p>
     * </note> <note> <p> The KMS key policy must grant permission to the IAM role you
     * specify in your <code>CreateTrainingJob</code> request. <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the AWS Key Management Service Developer Guide.
     * </p> </note>
     */
    inline OutputDataConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. </p>
     * <note> <p>If the configuration of the output S3 bucket requires server-side
     * encryption for objects, and you don't provide the KMS key ID, Amazon SageMaker
     * uses the default service key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in Amazon Simple Storage Service developer guide.</p>
     * </note> <note> <p> The KMS key policy must grant permission to the IAM role you
     * specify in your <code>CreateTrainingJob</code> request. <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the AWS Key Management Service Developer Guide.
     * </p> </note>
     */
    inline OutputDataConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline OutputDataConfig& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline OutputDataConfig& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>Identifies the S3 path where you want Amazon SageMaker to store the model
     * artifacts. For example, <code>s3://bucket-name/key-name-prefix</code>. </p>
     */
    inline OutputDataConfig& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}

  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
