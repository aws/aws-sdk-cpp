/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/EntityRecognizerInputDataConfig.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/comprehend/model/VpcConfig.h>
#include <aws/comprehend/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class CreateEntityRecognizerRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API CreateEntityRecognizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEntityRecognizer"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name given to the newly created recognizer. Recognizer names can be a
     * maximum of 256 characters. Alphanumeric characters, hyphens (-) and underscores
     * (_) are allowed. The name must be unique in the account/region.</p>
     */
    inline const Aws::String& GetRecognizerName() const{ return m_recognizerName; }

    /**
     * <p>The name given to the newly created recognizer. Recognizer names can be a
     * maximum of 256 characters. Alphanumeric characters, hyphens (-) and underscores
     * (_) are allowed. The name must be unique in the account/region.</p>
     */
    inline bool RecognizerNameHasBeenSet() const { return m_recognizerNameHasBeenSet; }

    /**
     * <p>The name given to the newly created recognizer. Recognizer names can be a
     * maximum of 256 characters. Alphanumeric characters, hyphens (-) and underscores
     * (_) are allowed. The name must be unique in the account/region.</p>
     */
    inline void SetRecognizerName(const Aws::String& value) { m_recognizerNameHasBeenSet = true; m_recognizerName = value; }

    /**
     * <p>The name given to the newly created recognizer. Recognizer names can be a
     * maximum of 256 characters. Alphanumeric characters, hyphens (-) and underscores
     * (_) are allowed. The name must be unique in the account/region.</p>
     */
    inline void SetRecognizerName(Aws::String&& value) { m_recognizerNameHasBeenSet = true; m_recognizerName = std::move(value); }

    /**
     * <p>The name given to the newly created recognizer. Recognizer names can be a
     * maximum of 256 characters. Alphanumeric characters, hyphens (-) and underscores
     * (_) are allowed. The name must be unique in the account/region.</p>
     */
    inline void SetRecognizerName(const char* value) { m_recognizerNameHasBeenSet = true; m_recognizerName.assign(value); }

    /**
     * <p>The name given to the newly created recognizer. Recognizer names can be a
     * maximum of 256 characters. Alphanumeric characters, hyphens (-) and underscores
     * (_) are allowed. The name must be unique in the account/region.</p>
     */
    inline CreateEntityRecognizerRequest& WithRecognizerName(const Aws::String& value) { SetRecognizerName(value); return *this;}

    /**
     * <p>The name given to the newly created recognizer. Recognizer names can be a
     * maximum of 256 characters. Alphanumeric characters, hyphens (-) and underscores
     * (_) are allowed. The name must be unique in the account/region.</p>
     */
    inline CreateEntityRecognizerRequest& WithRecognizerName(Aws::String&& value) { SetRecognizerName(std::move(value)); return *this;}

    /**
     * <p>The name given to the newly created recognizer. Recognizer names can be a
     * maximum of 256 characters. Alphanumeric characters, hyphens (-) and underscores
     * (_) are allowed. The name must be unique in the account/region.</p>
     */
    inline CreateEntityRecognizerRequest& WithRecognizerName(const char* value) { SetRecognizerName(value); return *this;}


    /**
     * <p>The version name given to the newly created recognizer. Version names can be
     * a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same recognizer name in the account/ AWS Region.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>The version name given to the newly created recognizer. Version names can be
     * a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same recognizer name in the account/ AWS Region.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>The version name given to the newly created recognizer. Version names can be
     * a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same recognizer name in the account/ AWS Region.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>The version name given to the newly created recognizer. Version names can be
     * a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same recognizer name in the account/ AWS Region.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>The version name given to the newly created recognizer. Version names can be
     * a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same recognizer name in the account/ AWS Region.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>The version name given to the newly created recognizer. Version names can be
     * a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same recognizer name in the account/ AWS Region.</p>
     */
    inline CreateEntityRecognizerRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>The version name given to the newly created recognizer. Version names can be
     * a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same recognizer name in the account/ AWS Region.</p>
     */
    inline CreateEntityRecognizerRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>The version name given to the newly created recognizer. Version names can be
     * a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same recognizer name in the account/ AWS Region.</p>
     */
    inline CreateEntityRecognizerRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline CreateEntityRecognizerRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline CreateEntityRecognizerRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline CreateEntityRecognizerRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>Tags to be associated with the entity recognizer being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be associated with the entity recognizer being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to be associated with the entity recognizer being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be associated with the entity recognizer being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to be associated with the entity recognizer being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline CreateEntityRecognizerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be associated with the entity recognizer being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline CreateEntityRecognizerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to be associated with the entity recognizer being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline CreateEntityRecognizerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to be associated with the entity recognizer being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline CreateEntityRecognizerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the format and location of the input data. The S3 bucket containing
     * the input data must be located in the same region as the entity recognizer being
     * created. </p>
     */
    inline const EntityRecognizerInputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>Specifies the format and location of the input data. The S3 bucket containing
     * the input data must be located in the same region as the entity recognizer being
     * created. </p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>Specifies the format and location of the input data. The S3 bucket containing
     * the input data must be located in the same region as the entity recognizer being
     * created. </p>
     */
    inline void SetInputDataConfig(const EntityRecognizerInputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>Specifies the format and location of the input data. The S3 bucket containing
     * the input data must be located in the same region as the entity recognizer being
     * created. </p>
     */
    inline void SetInputDataConfig(EntityRecognizerInputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>Specifies the format and location of the input data. The S3 bucket containing
     * the input data must be located in the same region as the entity recognizer being
     * created. </p>
     */
    inline CreateEntityRecognizerRequest& WithInputDataConfig(const EntityRecognizerInputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>Specifies the format and location of the input data. The S3 bucket containing
     * the input data must be located in the same region as the entity recognizer being
     * created. </p>
     */
    inline CreateEntityRecognizerRequest& WithInputDataConfig(EntityRecognizerInputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline CreateEntityRecognizerRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline CreateEntityRecognizerRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline CreateEntityRecognizerRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p> You can specify any of the following languages: English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), German ("de"), or Portuguese ("pt"). If
     * you plan to use this entity recognizer with PDF, Word, or image input files, you
     * must specify English as the language. All training documents must be in the same
     * language.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p> You can specify any of the following languages: English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), German ("de"), or Portuguese ("pt"). If
     * you plan to use this entity recognizer with PDF, Word, or image input files, you
     * must specify English as the language. All training documents must be in the same
     * language.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p> You can specify any of the following languages: English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), German ("de"), or Portuguese ("pt"). If
     * you plan to use this entity recognizer with PDF, Word, or image input files, you
     * must specify English as the language. All training documents must be in the same
     * language.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p> You can specify any of the following languages: English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), German ("de"), or Portuguese ("pt"). If
     * you plan to use this entity recognizer with PDF, Word, or image input files, you
     * must specify English as the language. All training documents must be in the same
     * language.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p> You can specify any of the following languages: English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), German ("de"), or Portuguese ("pt"). If
     * you plan to use this entity recognizer with PDF, Word, or image input files, you
     * must specify English as the language. All training documents must be in the same
     * language.</p>
     */
    inline CreateEntityRecognizerRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p> You can specify any of the following languages: English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), German ("de"), or Portuguese ("pt"). If
     * you plan to use this entity recognizer with PDF, Word, or image input files, you
     * must specify English as the language. All training documents must be in the same
     * language.</p>
     */
    inline CreateEntityRecognizerRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline CreateEntityRecognizerRequest& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline CreateEntityRecognizerRequest& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt data on the storage volume attached to the ML compute instance(s)
     * that process the analysis job. The VolumeKmsKeyId can be either of the following
     * formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline CreateEntityRecognizerRequest& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}


    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom entity recognizer. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom entity recognizer. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom entity recognizer. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom entity recognizer. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom entity recognizer. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline CreateEntityRecognizerRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom entity recognizer. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline CreateEntityRecognizerRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetModelKmsKeyId() const{ return m_modelKmsKeyId; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline bool ModelKmsKeyIdHasBeenSet() const { return m_modelKmsKeyIdHasBeenSet; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetModelKmsKeyId(const Aws::String& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = value; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetModelKmsKeyId(Aws::String&& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = std::move(value); }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetModelKmsKeyId(const char* value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId.assign(value); }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline CreateEntityRecognizerRequest& WithModelKmsKeyId(const Aws::String& value) { SetModelKmsKeyId(value); return *this;}

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline CreateEntityRecognizerRequest& WithModelKmsKeyId(Aws::String&& value) { SetModelKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline CreateEntityRecognizerRequest& WithModelKmsKeyId(const char* value) { SetModelKmsKeyId(value); return *this;}


    /**
     * <p>The JSON resource-based policy to attach to your custom entity recognizer
     * model. You can use this policy to allow another AWS account to import your
     * custom model.</p> <p>Provide your JSON as a UTF-8 encoded string without line
     * breaks. To provide valid JSON for your policy, enclose the attribute names and
     * values in double quotes. If the JSON body is also enclosed in double quotes,
     * then you must escape the double quotes that are inside the policy:</p> <p>
     * <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p> <p>To
     * avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline const Aws::String& GetModelPolicy() const{ return m_modelPolicy; }

    /**
     * <p>The JSON resource-based policy to attach to your custom entity recognizer
     * model. You can use this policy to allow another AWS account to import your
     * custom model.</p> <p>Provide your JSON as a UTF-8 encoded string without line
     * breaks. To provide valid JSON for your policy, enclose the attribute names and
     * values in double quotes. If the JSON body is also enclosed in double quotes,
     * then you must escape the double quotes that are inside the policy:</p> <p>
     * <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p> <p>To
     * avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline bool ModelPolicyHasBeenSet() const { return m_modelPolicyHasBeenSet; }

    /**
     * <p>The JSON resource-based policy to attach to your custom entity recognizer
     * model. You can use this policy to allow another AWS account to import your
     * custom model.</p> <p>Provide your JSON as a UTF-8 encoded string without line
     * breaks. To provide valid JSON for your policy, enclose the attribute names and
     * values in double quotes. If the JSON body is also enclosed in double quotes,
     * then you must escape the double quotes that are inside the policy:</p> <p>
     * <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p> <p>To
     * avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline void SetModelPolicy(const Aws::String& value) { m_modelPolicyHasBeenSet = true; m_modelPolicy = value; }

    /**
     * <p>The JSON resource-based policy to attach to your custom entity recognizer
     * model. You can use this policy to allow another AWS account to import your
     * custom model.</p> <p>Provide your JSON as a UTF-8 encoded string without line
     * breaks. To provide valid JSON for your policy, enclose the attribute names and
     * values in double quotes. If the JSON body is also enclosed in double quotes,
     * then you must escape the double quotes that are inside the policy:</p> <p>
     * <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p> <p>To
     * avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline void SetModelPolicy(Aws::String&& value) { m_modelPolicyHasBeenSet = true; m_modelPolicy = std::move(value); }

    /**
     * <p>The JSON resource-based policy to attach to your custom entity recognizer
     * model. You can use this policy to allow another AWS account to import your
     * custom model.</p> <p>Provide your JSON as a UTF-8 encoded string without line
     * breaks. To provide valid JSON for your policy, enclose the attribute names and
     * values in double quotes. If the JSON body is also enclosed in double quotes,
     * then you must escape the double quotes that are inside the policy:</p> <p>
     * <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p> <p>To
     * avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline void SetModelPolicy(const char* value) { m_modelPolicyHasBeenSet = true; m_modelPolicy.assign(value); }

    /**
     * <p>The JSON resource-based policy to attach to your custom entity recognizer
     * model. You can use this policy to allow another AWS account to import your
     * custom model.</p> <p>Provide your JSON as a UTF-8 encoded string without line
     * breaks. To provide valid JSON for your policy, enclose the attribute names and
     * values in double quotes. If the JSON body is also enclosed in double quotes,
     * then you must escape the double quotes that are inside the policy:</p> <p>
     * <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p> <p>To
     * avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline CreateEntityRecognizerRequest& WithModelPolicy(const Aws::String& value) { SetModelPolicy(value); return *this;}

    /**
     * <p>The JSON resource-based policy to attach to your custom entity recognizer
     * model. You can use this policy to allow another AWS account to import your
     * custom model.</p> <p>Provide your JSON as a UTF-8 encoded string without line
     * breaks. To provide valid JSON for your policy, enclose the attribute names and
     * values in double quotes. If the JSON body is also enclosed in double quotes,
     * then you must escape the double quotes that are inside the policy:</p> <p>
     * <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p> <p>To
     * avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline CreateEntityRecognizerRequest& WithModelPolicy(Aws::String&& value) { SetModelPolicy(std::move(value)); return *this;}

    /**
     * <p>The JSON resource-based policy to attach to your custom entity recognizer
     * model. You can use this policy to allow another AWS account to import your
     * custom model.</p> <p>Provide your JSON as a UTF-8 encoded string without line
     * breaks. To provide valid JSON for your policy, enclose the attribute names and
     * values in double quotes. If the JSON body is also enclosed in double quotes,
     * then you must escape the double quotes that are inside the policy:</p> <p>
     * <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p> <p>To
     * avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline CreateEntityRecognizerRequest& WithModelPolicy(const char* value) { SetModelPolicy(value); return *this;}

  private:

    Aws::String m_recognizerName;
    bool m_recognizerNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    EntityRecognizerInputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::String m_modelKmsKeyId;
    bool m_modelKmsKeyIdHasBeenSet = false;

    Aws::String m_modelPolicy;
    bool m_modelPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
