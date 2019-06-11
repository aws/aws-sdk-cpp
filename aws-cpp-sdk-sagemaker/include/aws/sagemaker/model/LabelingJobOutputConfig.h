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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Output configuration information for a labeling job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobOutputConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API LabelingJobOutputConfig
  {
  public:
    LabelingJobOutputConfig();
    LabelingJobOutputConfig(Aws::Utils::Json::JsonView jsonValue);
    LabelingJobOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline const Aws::String& GetS3OutputPath() const{ return m_s3OutputPath; }

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline void SetS3OutputPath(const Aws::String& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = value; }

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline void SetS3OutputPath(Aws::String&& value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath = std::move(value); }

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline void SetS3OutputPath(const char* value) { m_s3OutputPathHasBeenSet = true; m_s3OutputPath.assign(value); }

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline LabelingJobOutputConfig& WithS3OutputPath(const Aws::String& value) { SetS3OutputPath(value); return *this;}

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline LabelingJobOutputConfig& WithS3OutputPath(Aws::String&& value) { SetS3OutputPath(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location to write output data.</p>
     */
    inline LabelingJobOutputConfig& WithS3OutputPath(const char* value) { SetS3OutputPath(value); return *this;}


    /**
     * <p>The AWS Key Management Service ID of the key used to encrypt the output data,
     * if any.</p> <p>If you use a KMS key ID or an alias of your master key, the
     * Amazon SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>LabelingJobOutputConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateLabelingJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS Key Management Service ID of the key used to encrypt the output data,
     * if any.</p> <p>If you use a KMS key ID or an alias of your master key, the
     * Amazon SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>LabelingJobOutputConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateLabelingJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS Key Management Service ID of the key used to encrypt the output data,
     * if any.</p> <p>If you use a KMS key ID or an alias of your master key, the
     * Amazon SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>LabelingJobOutputConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateLabelingJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service ID of the key used to encrypt the output data,
     * if any.</p> <p>If you use a KMS key ID or an alias of your master key, the
     * Amazon SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>LabelingJobOutputConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateLabelingJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS Key Management Service ID of the key used to encrypt the output data,
     * if any.</p> <p>If you use a KMS key ID or an alias of your master key, the
     * Amazon SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>LabelingJobOutputConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateLabelingJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service ID of the key used to encrypt the output data,
     * if any.</p> <p>If you use a KMS key ID or an alias of your master key, the
     * Amazon SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>LabelingJobOutputConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateLabelingJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline LabelingJobOutputConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service ID of the key used to encrypt the output data,
     * if any.</p> <p>If you use a KMS key ID or an alias of your master key, the
     * Amazon SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>LabelingJobOutputConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateLabelingJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline LabelingJobOutputConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service ID of the key used to encrypt the output data,
     * if any.</p> <p>If you use a KMS key ID or an alias of your master key, the
     * Amazon SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>LabelingJobOutputConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateLabelingJob</code> request. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline LabelingJobOutputConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_s3OutputPath;
    bool m_s3OutputPathHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
