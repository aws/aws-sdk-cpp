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
   * <p>Provides information about how to store model training results (model
   * artifacts).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OutputDataConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API OutputDataConfig
  {
  public:
    OutputDataConfig();
    OutputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    OutputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. The
     * <code>KmsKeyId</code> can be any of the following formats: </p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your master key, the Amazon
     * SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. The
     * <code>KmsKeyId</code> can be any of the following formats: </p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your master key, the Amazon
     * SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. The
     * <code>KmsKeyId</code> can be any of the following formats: </p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your master key, the Amazon
     * SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. The
     * <code>KmsKeyId</code> can be any of the following formats: </p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your master key, the Amazon
     * SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. The
     * <code>KmsKeyId</code> can be any of the following formats: </p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your master key, the Amazon
     * SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. The
     * <code>KmsKeyId</code> can be any of the following formats: </p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your master key, the Amazon
     * SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline OutputDataConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. The
     * <code>KmsKeyId</code> can be any of the following formats: </p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your master key, the Amazon
     * SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline OutputDataConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS Key Management Service (AWS KMS) key that Amazon SageMaker uses to
     * encrypt the model artifacts at rest using Amazon S3 server-side encryption. The
     * <code>KmsKeyId</code> can be any of the following formats: </p> <ul> <li> <p>//
     * KMS Key ID</p> <p> <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p>
     * </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your master key, the Amazon
     * SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS-managed keys for
     * <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateTrainingJob</code>, <code>CreateTransformJob</code>,
     * or <code>CreateHyperParameterTuningJob</code> requests. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in AWS KMS</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
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
    inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }

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
