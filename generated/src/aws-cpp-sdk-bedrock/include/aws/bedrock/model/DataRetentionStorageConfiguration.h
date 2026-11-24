/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>You provide the Amazon S3 destination and AWS Key Management Service (AWS
 * KMS) key for retained data.</p> <p>Before saving a customer-managed destination,
 * Amazon Bedrock validates that you can use the bucket and key and that their
 * resource policies permit the required Amazon Bedrock access. If validation
 * fails, Amazon Bedrock rejects the configuration without saving it.</p> <p>You
 * need <code>s3:PutObject</code>, <code>s3:GetObject</code>,
 * <code>kms:GenerateDataKey</code>, and <code>kms:Decrypt</code> permissions. The
 * Amazon S3 bucket policy must allow the Amazon Bedrock service principal,
 * <code>bedrock.amazonaws.com</code>, to put, get, and delete objects with
 * conditions appropriate to the configuration scope.</p> <p>Use
 * <code>aws:SourceAccount</code> for account scope, <code>aws:SourceOrgID</code>
 * for organization scope, and both <code>aws:SourceAccount</code> and the
 * project's <code>aws:SourceArn</code> for project scope. Validation rejects
 * resource policies that allow the service principal to access the destination
 * without the required scope conditions.</p> <p>The key policy must permit
 * <code>kms:GenerateDataKey</code> and <code>kms:Decrypt</code> for both uses of
 * the key: direct use by Amazon Bedrock with the scope conditions, and use through
 * Amazon S3 with a <code>kms:ViaService</code> condition for the bucket's Region
 * and <code>kms:EncryptionContext:aws:s3:arn</code> scoped to the
 * bucket.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DataRetentionStorageConfiguration">AWS
 * API Reference</a></p>
 */
class DataRetentionStorageConfiguration {
 public:
  AWS_BEDROCK_API DataRetentionStorageConfiguration() = default;
  AWS_BEDROCK_API DataRetentionStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API DataRetentionStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the customer managed AWS Key Management
   * Service (AWS KMS) key you use to encrypt retained data. Specify an enabled
   * symmetric encryption key in the AWS Region where you register the configuration.
   * You cannot specify a key alias.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  DataRetentionStorageConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket that receives retained
   * data. The bucket must be in the AWS Region where you register the
   * configuration.</p>
   */
  inline const Aws::String& GetS3BucketArn() const { return m_s3BucketArn; }
  inline bool S3BucketArnHasBeenSet() const { return m_s3BucketArnHasBeenSet; }
  template <typename S3BucketArnT = Aws::String>
  void SetS3BucketArn(S3BucketArnT&& value) {
    m_s3BucketArnHasBeenSet = true;
    m_s3BucketArn = std::forward<S3BucketArnT>(value);
  }
  template <typename S3BucketArnT = Aws::String>
  DataRetentionStorageConfiguration& WithS3BucketArn(S3BucketArnT&& value) {
    SetS3BucketArn(std::forward<S3BucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the destination bucket's owner. You must specify the
   * owner, even when the bucket belongs to another account. Amazon Bedrock uses this
   * ID to verify bucket ownership for each delivery request.</p>
   */
  inline const Aws::String& GetS3BucketOwner() const { return m_s3BucketOwner; }
  inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
  template <typename S3BucketOwnerT = Aws::String>
  void SetS3BucketOwner(S3BucketOwnerT&& value) {
    m_s3BucketOwnerHasBeenSet = true;
    m_s3BucketOwner = std::forward<S3BucketOwnerT>(value);
  }
  template <typename S3BucketOwnerT = Aws::String>
  DataRetentionStorageConfiguration& WithS3BucketOwner(S3BucketOwnerT&& value) {
    SetS3BucketOwner(std::forward<S3BucketOwnerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kmsKeyArn;

  Aws::String m_s3BucketArn;

  Aws::String m_s3BucketOwner;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_s3BucketArnHasBeenSet = false;
  bool m_s3BucketOwnerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
