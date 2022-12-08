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
   * <p>Specifies configuration for a core dump from the model container when the
   * process crashes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantCoreDumpConfig">AWS
   * API Reference</a></p>
   */
  class ProductionVariantCoreDumpConfig
  {
  public:
    AWS_SAGEMAKER_API ProductionVariantCoreDumpConfig();
    AWS_SAGEMAKER_API ProductionVariantCoreDumpConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantCoreDumpConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket to send the core dump to.</p>
     */
    inline const Aws::String& GetDestinationS3Uri() const{ return m_destinationS3Uri; }

    /**
     * <p>The Amazon S3 bucket to send the core dump to.</p>
     */
    inline bool DestinationS3UriHasBeenSet() const { return m_destinationS3UriHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket to send the core dump to.</p>
     */
    inline void SetDestinationS3Uri(const Aws::String& value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri = value; }

    /**
     * <p>The Amazon S3 bucket to send the core dump to.</p>
     */
    inline void SetDestinationS3Uri(Aws::String&& value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri = std::move(value); }

    /**
     * <p>The Amazon S3 bucket to send the core dump to.</p>
     */
    inline void SetDestinationS3Uri(const char* value) { m_destinationS3UriHasBeenSet = true; m_destinationS3Uri.assign(value); }

    /**
     * <p>The Amazon S3 bucket to send the core dump to.</p>
     */
    inline ProductionVariantCoreDumpConfig& WithDestinationS3Uri(const Aws::String& value) { SetDestinationS3Uri(value); return *this;}

    /**
     * <p>The Amazon S3 bucket to send the core dump to.</p>
     */
    inline ProductionVariantCoreDumpConfig& WithDestinationS3Uri(Aws::String&& value) { SetDestinationS3Uri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket to send the core dump to.</p>
     */
    inline ProductionVariantCoreDumpConfig& WithDestinationS3Uri(const char* value) { SetDestinationS3Uri(value); return *this;}


    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that SageMaker uses to encrypt the core dump data at rest using Amazon S3
     * server-side encryption. The <code>KmsKeyId</code> can be any of the following
     * formats: </p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your KMS key, the SageMaker
     * execution role must include permissions to call <code>kms:Encrypt</code>. If you
     * don't provide a KMS key ID, SageMaker uses the default KMS key for Amazon S3 for
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code> and <code>UpdateEndpoint</code>
     * requests. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that SageMaker uses to encrypt the core dump data at rest using Amazon S3
     * server-side encryption. The <code>KmsKeyId</code> can be any of the following
     * formats: </p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your KMS key, the SageMaker
     * execution role must include permissions to call <code>kms:Encrypt</code>. If you
     * don't provide a KMS key ID, SageMaker uses the default KMS key for Amazon S3 for
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code> and <code>UpdateEndpoint</code>
     * requests. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that SageMaker uses to encrypt the core dump data at rest using Amazon S3
     * server-side encryption. The <code>KmsKeyId</code> can be any of the following
     * formats: </p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your KMS key, the SageMaker
     * execution role must include permissions to call <code>kms:Encrypt</code>. If you
     * don't provide a KMS key ID, SageMaker uses the default KMS key for Amazon S3 for
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code> and <code>UpdateEndpoint</code>
     * requests. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that SageMaker uses to encrypt the core dump data at rest using Amazon S3
     * server-side encryption. The <code>KmsKeyId</code> can be any of the following
     * formats: </p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your KMS key, the SageMaker
     * execution role must include permissions to call <code>kms:Encrypt</code>. If you
     * don't provide a KMS key ID, SageMaker uses the default KMS key for Amazon S3 for
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code> and <code>UpdateEndpoint</code>
     * requests. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that SageMaker uses to encrypt the core dump data at rest using Amazon S3
     * server-side encryption. The <code>KmsKeyId</code> can be any of the following
     * formats: </p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your KMS key, the SageMaker
     * execution role must include permissions to call <code>kms:Encrypt</code>. If you
     * don't provide a KMS key ID, SageMaker uses the default KMS key for Amazon S3 for
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code> and <code>UpdateEndpoint</code>
     * requests. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that SageMaker uses to encrypt the core dump data at rest using Amazon S3
     * server-side encryption. The <code>KmsKeyId</code> can be any of the following
     * formats: </p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your KMS key, the SageMaker
     * execution role must include permissions to call <code>kms:Encrypt</code>. If you
     * don't provide a KMS key ID, SageMaker uses the default KMS key for Amazon S3 for
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code> and <code>UpdateEndpoint</code>
     * requests. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline ProductionVariantCoreDumpConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that SageMaker uses to encrypt the core dump data at rest using Amazon S3
     * server-side encryption. The <code>KmsKeyId</code> can be any of the following
     * formats: </p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your KMS key, the SageMaker
     * execution role must include permissions to call <code>kms:Encrypt</code>. If you
     * don't provide a KMS key ID, SageMaker uses the default KMS key for Amazon S3 for
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code> and <code>UpdateEndpoint</code>
     * requests. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline ProductionVariantCoreDumpConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that SageMaker uses to encrypt the core dump data at rest using Amazon S3
     * server-side encryption. The <code>KmsKeyId</code> can be any of the following
     * formats: </p> <ul> <li> <p>// KMS Key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>// Amazon
     * Resource Name (ARN) of a KMS Key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>// KMS Key Alias</p> <p> <code>"alias/ExampleAlias"</code>
     * </p> </li> <li> <p>// Amazon Resource Name (ARN) of a KMS Key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p>If you use a KMS key ID or an alias of your KMS key, the SageMaker
     * execution role must include permissions to call <code>kms:Encrypt</code>. If you
     * don't provide a KMS key ID, SageMaker uses the default KMS key for Amazon S3 for
     * your role's account. SageMaker uses server-side encryption with KMS-managed keys
     * for <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS-Managed
     * Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer Guide.</i>
     * </p> <p>The KMS key policy must grant permission to the IAM role that you
     * specify in your <code>CreateEndpoint</code> and <code>UpdateEndpoint</code>
     * requests. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>.</p>
     */
    inline ProductionVariantCoreDumpConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_destinationS3Uri;
    bool m_destinationS3UriHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
