/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/OutputConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class CopyProjectVersionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API CopyProjectVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyProjectVersion"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the source project in the trusting AWS account.</p>
     */
    inline const Aws::String& GetSourceProjectArn() const{ return m_sourceProjectArn; }

    /**
     * <p>The ARN of the source project in the trusting AWS account.</p>
     */
    inline bool SourceProjectArnHasBeenSet() const { return m_sourceProjectArnHasBeenSet; }

    /**
     * <p>The ARN of the source project in the trusting AWS account.</p>
     */
    inline void SetSourceProjectArn(const Aws::String& value) { m_sourceProjectArnHasBeenSet = true; m_sourceProjectArn = value; }

    /**
     * <p>The ARN of the source project in the trusting AWS account.</p>
     */
    inline void SetSourceProjectArn(Aws::String&& value) { m_sourceProjectArnHasBeenSet = true; m_sourceProjectArn = std::move(value); }

    /**
     * <p>The ARN of the source project in the trusting AWS account.</p>
     */
    inline void SetSourceProjectArn(const char* value) { m_sourceProjectArnHasBeenSet = true; m_sourceProjectArn.assign(value); }

    /**
     * <p>The ARN of the source project in the trusting AWS account.</p>
     */
    inline CopyProjectVersionRequest& WithSourceProjectArn(const Aws::String& value) { SetSourceProjectArn(value); return *this;}

    /**
     * <p>The ARN of the source project in the trusting AWS account.</p>
     */
    inline CopyProjectVersionRequest& WithSourceProjectArn(Aws::String&& value) { SetSourceProjectArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the source project in the trusting AWS account.</p>
     */
    inline CopyProjectVersionRequest& WithSourceProjectArn(const char* value) { SetSourceProjectArn(value); return *this;}


    /**
     * <p>The ARN of the model version in the source project that you want to copy to a
     * destination project.</p>
     */
    inline const Aws::String& GetSourceProjectVersionArn() const{ return m_sourceProjectVersionArn; }

    /**
     * <p>The ARN of the model version in the source project that you want to copy to a
     * destination project.</p>
     */
    inline bool SourceProjectVersionArnHasBeenSet() const { return m_sourceProjectVersionArnHasBeenSet; }

    /**
     * <p>The ARN of the model version in the source project that you want to copy to a
     * destination project.</p>
     */
    inline void SetSourceProjectVersionArn(const Aws::String& value) { m_sourceProjectVersionArnHasBeenSet = true; m_sourceProjectVersionArn = value; }

    /**
     * <p>The ARN of the model version in the source project that you want to copy to a
     * destination project.</p>
     */
    inline void SetSourceProjectVersionArn(Aws::String&& value) { m_sourceProjectVersionArnHasBeenSet = true; m_sourceProjectVersionArn = std::move(value); }

    /**
     * <p>The ARN of the model version in the source project that you want to copy to a
     * destination project.</p>
     */
    inline void SetSourceProjectVersionArn(const char* value) { m_sourceProjectVersionArnHasBeenSet = true; m_sourceProjectVersionArn.assign(value); }

    /**
     * <p>The ARN of the model version in the source project that you want to copy to a
     * destination project.</p>
     */
    inline CopyProjectVersionRequest& WithSourceProjectVersionArn(const Aws::String& value) { SetSourceProjectVersionArn(value); return *this;}

    /**
     * <p>The ARN of the model version in the source project that you want to copy to a
     * destination project.</p>
     */
    inline CopyProjectVersionRequest& WithSourceProjectVersionArn(Aws::String&& value) { SetSourceProjectVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the model version in the source project that you want to copy to a
     * destination project.</p>
     */
    inline CopyProjectVersionRequest& WithSourceProjectVersionArn(const char* value) { SetSourceProjectVersionArn(value); return *this;}


    /**
     * <p>The ARN of the project in the trusted AWS account that you want to copy the
     * model version to. </p>
     */
    inline const Aws::String& GetDestinationProjectArn() const{ return m_destinationProjectArn; }

    /**
     * <p>The ARN of the project in the trusted AWS account that you want to copy the
     * model version to. </p>
     */
    inline bool DestinationProjectArnHasBeenSet() const { return m_destinationProjectArnHasBeenSet; }

    /**
     * <p>The ARN of the project in the trusted AWS account that you want to copy the
     * model version to. </p>
     */
    inline void SetDestinationProjectArn(const Aws::String& value) { m_destinationProjectArnHasBeenSet = true; m_destinationProjectArn = value; }

    /**
     * <p>The ARN of the project in the trusted AWS account that you want to copy the
     * model version to. </p>
     */
    inline void SetDestinationProjectArn(Aws::String&& value) { m_destinationProjectArnHasBeenSet = true; m_destinationProjectArn = std::move(value); }

    /**
     * <p>The ARN of the project in the trusted AWS account that you want to copy the
     * model version to. </p>
     */
    inline void SetDestinationProjectArn(const char* value) { m_destinationProjectArnHasBeenSet = true; m_destinationProjectArn.assign(value); }

    /**
     * <p>The ARN of the project in the trusted AWS account that you want to copy the
     * model version to. </p>
     */
    inline CopyProjectVersionRequest& WithDestinationProjectArn(const Aws::String& value) { SetDestinationProjectArn(value); return *this;}

    /**
     * <p>The ARN of the project in the trusted AWS account that you want to copy the
     * model version to. </p>
     */
    inline CopyProjectVersionRequest& WithDestinationProjectArn(Aws::String&& value) { SetDestinationProjectArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the project in the trusted AWS account that you want to copy the
     * model version to. </p>
     */
    inline CopyProjectVersionRequest& WithDestinationProjectArn(const char* value) { SetDestinationProjectArn(value); return *this;}


    /**
     * <p>A name for the version of the model that's copied to the destination
     * project.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>A name for the version of the model that's copied to the destination
     * project.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>A name for the version of the model that's copied to the destination
     * project.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>A name for the version of the model that's copied to the destination
     * project.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>A name for the version of the model that's copied to the destination
     * project.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>A name for the version of the model that's copied to the destination
     * project.</p>
     */
    inline CopyProjectVersionRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>A name for the version of the model that's copied to the destination
     * project.</p>
     */
    inline CopyProjectVersionRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>A name for the version of the model that's copied to the destination
     * project.</p>
     */
    inline CopyProjectVersionRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>The S3 bucket and folder location where the training output for the source
     * model version is placed.</p>
     */
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The S3 bucket and folder location where the training output for the source
     * model version is placed.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>The S3 bucket and folder location where the training output for the source
     * model version is placed.</p>
     */
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>The S3 bucket and folder location where the training output for the source
     * model version is placed.</p>
     */
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>The S3 bucket and folder location where the training output for the source
     * model version is placed.</p>
     */
    inline CopyProjectVersionRequest& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The S3 bucket and folder location where the training output for the source
     * model version is placed.</p>
     */
    inline CopyProjectVersionRequest& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline CopyProjectVersionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline CopyProjectVersionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline CopyProjectVersionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline CopyProjectVersionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline CopyProjectVersionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline CopyProjectVersionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline CopyProjectVersionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline CopyProjectVersionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value tags to assign to the model version. </p>
     */
    inline CopyProjectVersionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). You can
     * supply the Amazon Resource Name (ARN) of your KMS key, the ID of your KMS key,
     * an alias for your KMS key, or an alias ARN. The key is used to encrypt training
     * results and manifest files written to the output Amazon S3 bucket
     * (<code>OutputConfig</code>).</p> <p>If you choose to use your own KMS key, you
     * need the following permissions on the KMS key.</p> <ul> <li>
     * <p>kms:CreateGrant</p> </li> <li> <p>kms:DescribeKey</p> </li> <li>
     * <p>kms:GenerateDataKey</p> </li> <li> <p>kms:Decrypt</p> </li> </ul> <p>If you
     * don't specify a value for <code>KmsKeyId</code>, images copied into the service
     * are encrypted using a key that AWS owns and manages.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). You can
     * supply the Amazon Resource Name (ARN) of your KMS key, the ID of your KMS key,
     * an alias for your KMS key, or an alias ARN. The key is used to encrypt training
     * results and manifest files written to the output Amazon S3 bucket
     * (<code>OutputConfig</code>).</p> <p>If you choose to use your own KMS key, you
     * need the following permissions on the KMS key.</p> <ul> <li>
     * <p>kms:CreateGrant</p> </li> <li> <p>kms:DescribeKey</p> </li> <li>
     * <p>kms:GenerateDataKey</p> </li> <li> <p>kms:Decrypt</p> </li> </ul> <p>If you
     * don't specify a value for <code>KmsKeyId</code>, images copied into the service
     * are encrypted using a key that AWS owns and manages.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). You can
     * supply the Amazon Resource Name (ARN) of your KMS key, the ID of your KMS key,
     * an alias for your KMS key, or an alias ARN. The key is used to encrypt training
     * results and manifest files written to the output Amazon S3 bucket
     * (<code>OutputConfig</code>).</p> <p>If you choose to use your own KMS key, you
     * need the following permissions on the KMS key.</p> <ul> <li>
     * <p>kms:CreateGrant</p> </li> <li> <p>kms:DescribeKey</p> </li> <li>
     * <p>kms:GenerateDataKey</p> </li> <li> <p>kms:Decrypt</p> </li> </ul> <p>If you
     * don't specify a value for <code>KmsKeyId</code>, images copied into the service
     * are encrypted using a key that AWS owns and manages.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). You can
     * supply the Amazon Resource Name (ARN) of your KMS key, the ID of your KMS key,
     * an alias for your KMS key, or an alias ARN. The key is used to encrypt training
     * results and manifest files written to the output Amazon S3 bucket
     * (<code>OutputConfig</code>).</p> <p>If you choose to use your own KMS key, you
     * need the following permissions on the KMS key.</p> <ul> <li>
     * <p>kms:CreateGrant</p> </li> <li> <p>kms:DescribeKey</p> </li> <li>
     * <p>kms:GenerateDataKey</p> </li> <li> <p>kms:Decrypt</p> </li> </ul> <p>If you
     * don't specify a value for <code>KmsKeyId</code>, images copied into the service
     * are encrypted using a key that AWS owns and manages.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). You can
     * supply the Amazon Resource Name (ARN) of your KMS key, the ID of your KMS key,
     * an alias for your KMS key, or an alias ARN. The key is used to encrypt training
     * results and manifest files written to the output Amazon S3 bucket
     * (<code>OutputConfig</code>).</p> <p>If you choose to use your own KMS key, you
     * need the following permissions on the KMS key.</p> <ul> <li>
     * <p>kms:CreateGrant</p> </li> <li> <p>kms:DescribeKey</p> </li> <li>
     * <p>kms:GenerateDataKey</p> </li> <li> <p>kms:Decrypt</p> </li> </ul> <p>If you
     * don't specify a value for <code>KmsKeyId</code>, images copied into the service
     * are encrypted using a key that AWS owns and manages.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). You can
     * supply the Amazon Resource Name (ARN) of your KMS key, the ID of your KMS key,
     * an alias for your KMS key, or an alias ARN. The key is used to encrypt training
     * results and manifest files written to the output Amazon S3 bucket
     * (<code>OutputConfig</code>).</p> <p>If you choose to use your own KMS key, you
     * need the following permissions on the KMS key.</p> <ul> <li>
     * <p>kms:CreateGrant</p> </li> <li> <p>kms:DescribeKey</p> </li> <li>
     * <p>kms:GenerateDataKey</p> </li> <li> <p>kms:Decrypt</p> </li> </ul> <p>If you
     * don't specify a value for <code>KmsKeyId</code>, images copied into the service
     * are encrypted using a key that AWS owns and manages.</p>
     */
    inline CopyProjectVersionRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). You can
     * supply the Amazon Resource Name (ARN) of your KMS key, the ID of your KMS key,
     * an alias for your KMS key, or an alias ARN. The key is used to encrypt training
     * results and manifest files written to the output Amazon S3 bucket
     * (<code>OutputConfig</code>).</p> <p>If you choose to use your own KMS key, you
     * need the following permissions on the KMS key.</p> <ul> <li>
     * <p>kms:CreateGrant</p> </li> <li> <p>kms:DescribeKey</p> </li> <li>
     * <p>kms:GenerateDataKey</p> </li> <li> <p>kms:Decrypt</p> </li> </ul> <p>If you
     * don't specify a value for <code>KmsKeyId</code>, images copied into the service
     * are encrypted using a key that AWS owns and manages.</p>
     */
    inline CopyProjectVersionRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). You can
     * supply the Amazon Resource Name (ARN) of your KMS key, the ID of your KMS key,
     * an alias for your KMS key, or an alias ARN. The key is used to encrypt training
     * results and manifest files written to the output Amazon S3 bucket
     * (<code>OutputConfig</code>).</p> <p>If you choose to use your own KMS key, you
     * need the following permissions on the KMS key.</p> <ul> <li>
     * <p>kms:CreateGrant</p> </li> <li> <p>kms:DescribeKey</p> </li> <li>
     * <p>kms:GenerateDataKey</p> </li> <li> <p>kms:Decrypt</p> </li> </ul> <p>If you
     * don't specify a value for <code>KmsKeyId</code>, images copied into the service
     * are encrypted using a key that AWS owns and manages.</p>
     */
    inline CopyProjectVersionRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_sourceProjectArn;
    bool m_sourceProjectArnHasBeenSet = false;

    Aws::String m_sourceProjectVersionArn;
    bool m_sourceProjectVersionArnHasBeenSet = false;

    Aws::String m_destinationProjectArn;
    bool m_destinationProjectArnHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
