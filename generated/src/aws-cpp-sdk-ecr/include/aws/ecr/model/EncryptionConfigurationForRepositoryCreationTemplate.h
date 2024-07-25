/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/EncryptionType.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The encryption configuration to associate with the repository creation
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/EncryptionConfigurationForRepositoryCreationTemplate">AWS
   * API Reference</a></p>
   */
  class EncryptionConfigurationForRepositoryCreationTemplate
  {
  public:
    AWS_ECR_API EncryptionConfigurationForRepositoryCreationTemplate();
    AWS_ECR_API EncryptionConfigurationForRepositoryCreationTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API EncryptionConfigurationForRepositoryCreationTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption type to use.</p> <p>If you use the <code>KMS</code> encryption
     * type, the contents of the repository will be encrypted using server-side
     * encryption with Key Management Service key stored in KMS. When you use KMS to
     * encrypt your data, you can either use the default Amazon Web Services managed
     * KMS key for Amazon ECR, or specify your own KMS key, which you already created.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">Protecting
     * data using server-side encryption with an KMS key stored in Key Management
     * Service (SSE-KMS)</a> in the <i>Amazon Simple Storage Service Console Developer
     * Guide</i>.</p> <p>If you use the <code>AES256</code> encryption type, Amazon ECR
     * uses server-side encryption with Amazon S3-managed encryption keys which
     * encrypts the images in the repository using an AES256 encryption algorithm. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingServerSideEncryption.html">Protecting
     * data using server-side encryption with Amazon S3-managed encryption keys
     * (SSE-S3)</a> in the <i>Amazon Simple Storage Service Console Developer
     * Guide</i>.</p>
     */
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }
    inline EncryptionConfigurationForRepositoryCreationTemplate& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}
    inline EncryptionConfigurationForRepositoryCreationTemplate& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you use the <code>KMS</code> encryption type, specify the KMS key to use
     * for encryption. The full ARN of the KMS key must be specified. The key must
     * exist in the same Region as the repository. If no key is specified, the default
     * Amazon Web Services managed KMS key for Amazon ECR will be used.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }
    inline EncryptionConfigurationForRepositoryCreationTemplate& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}
    inline EncryptionConfigurationForRepositoryCreationTemplate& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}
    inline EncryptionConfigurationForRepositoryCreationTemplate& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}
    ///@}
  private:

    EncryptionType m_encryptionType;
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
