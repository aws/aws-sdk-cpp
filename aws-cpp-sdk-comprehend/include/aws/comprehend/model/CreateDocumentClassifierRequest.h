/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/comprehend/model/DocumentClassifierInputDataConfig.h>
#include <aws/comprehend/model/DocumentClassifierOutputDataConfig.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/comprehend/model/VpcConfig.h>
#include <aws/comprehend/model/DocumentClassifierMode.h>
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
  class CreateDocumentClassifierRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API CreateDocumentClassifierRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDocumentClassifier"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the document classifier.</p>
     */
    inline const Aws::String& GetDocumentClassifierName() const{ return m_documentClassifierName; }

    /**
     * <p>The name of the document classifier.</p>
     */
    inline bool DocumentClassifierNameHasBeenSet() const { return m_documentClassifierNameHasBeenSet; }

    /**
     * <p>The name of the document classifier.</p>
     */
    inline void SetDocumentClassifierName(const Aws::String& value) { m_documentClassifierNameHasBeenSet = true; m_documentClassifierName = value; }

    /**
     * <p>The name of the document classifier.</p>
     */
    inline void SetDocumentClassifierName(Aws::String&& value) { m_documentClassifierNameHasBeenSet = true; m_documentClassifierName = std::move(value); }

    /**
     * <p>The name of the document classifier.</p>
     */
    inline void SetDocumentClassifierName(const char* value) { m_documentClassifierNameHasBeenSet = true; m_documentClassifierName.assign(value); }

    /**
     * <p>The name of the document classifier.</p>
     */
    inline CreateDocumentClassifierRequest& WithDocumentClassifierName(const Aws::String& value) { SetDocumentClassifierName(value); return *this;}

    /**
     * <p>The name of the document classifier.</p>
     */
    inline CreateDocumentClassifierRequest& WithDocumentClassifierName(Aws::String&& value) { SetDocumentClassifierName(std::move(value)); return *this;}

    /**
     * <p>The name of the document classifier.</p>
     */
    inline CreateDocumentClassifierRequest& WithDocumentClassifierName(const char* value) { SetDocumentClassifierName(value); return *this;}


    /**
     * <p>The version name given to the newly created classifier. Version names can
     * have a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same classifier name in the account/AWS Region.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p>The version name given to the newly created classifier. Version names can
     * have a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same classifier name in the account/AWS Region.</p>
     */
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }

    /**
     * <p>The version name given to the newly created classifier. Version names can
     * have a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same classifier name in the account/AWS Region.</p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }

    /**
     * <p>The version name given to the newly created classifier. Version names can
     * have a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same classifier name in the account/AWS Region.</p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }

    /**
     * <p>The version name given to the newly created classifier. Version names can
     * have a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same classifier name in the account/AWS Region.</p>
     */
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }

    /**
     * <p>The version name given to the newly created classifier. Version names can
     * have a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same classifier name in the account/AWS Region.</p>
     */
    inline CreateDocumentClassifierRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p>The version name given to the newly created classifier. Version names can
     * have a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same classifier name in the account/AWS Region.</p>
     */
    inline CreateDocumentClassifierRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p>The version name given to the newly created classifier. Version names can
     * have a maximum of 256 characters. Alphanumeric characters, hyphens (-) and
     * underscores (_) are allowed. The version name must be unique among all models
     * with the same classifier name in the account/AWS Region.</p>
     */
    inline CreateDocumentClassifierRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}


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
    inline CreateDocumentClassifierRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline CreateDocumentClassifierRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Management (IAM) role
     * that grants Amazon Comprehend read access to your input data.</p>
     */
    inline CreateDocumentClassifierRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>Tags to be associated with the document classifier being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be associated with the document classifier being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to be associated with the document classifier being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be associated with the document classifier being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to be associated with the document classifier being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline CreateDocumentClassifierRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be associated with the document classifier being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline CreateDocumentClassifierRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to be associated with the document classifier being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline CreateDocumentClassifierRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to be associated with the document classifier being created. A tag is a
     * key-value pair that adds as a metadata to a resource used by Amazon Comprehend.
     * For example, a tag with "Sales" as the key might be added to a resource to
     * indicate its use by the sales department. </p>
     */
    inline CreateDocumentClassifierRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline const DocumentClassifierInputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline void SetInputDataConfig(const DocumentClassifierInputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline void SetInputDataConfig(DocumentClassifierInputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline CreateDocumentClassifierRequest& WithInputDataConfig(const DocumentClassifierInputDataConfig& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>Specifies the format and location of the input data for the job.</p>
     */
    inline CreateDocumentClassifierRequest& WithInputDataConfig(DocumentClassifierInputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Enables the addition of output results configuration parameters for custom
     * classifier jobs.</p>
     */
    inline const DocumentClassifierOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>Enables the addition of output results configuration parameters for custom
     * classifier jobs.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>Enables the addition of output results configuration parameters for custom
     * classifier jobs.</p>
     */
    inline void SetOutputDataConfig(const DocumentClassifierOutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>Enables the addition of output results configuration parameters for custom
     * classifier jobs.</p>
     */
    inline void SetOutputDataConfig(DocumentClassifierOutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>Enables the addition of output results configuration parameters for custom
     * classifier jobs.</p>
     */
    inline CreateDocumentClassifierRequest& WithOutputDataConfig(const DocumentClassifierOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>Enables the addition of output results configuration parameters for custom
     * classifier jobs.</p>
     */
    inline CreateDocumentClassifierRequest& WithOutputDataConfig(DocumentClassifierOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline CreateDocumentClassifierRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline CreateDocumentClassifierRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline CreateDocumentClassifierRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The language of the input documents. You can specify any of the following
     * languages supported by Amazon Comprehend: German ("de"), English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), or Portuguese ("pt"). All documents must
     * be in the same language.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of the input documents. You can specify any of the following
     * languages supported by Amazon Comprehend: German ("de"), English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), or Portuguese ("pt"). All documents must
     * be in the same language.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language of the input documents. You can specify any of the following
     * languages supported by Amazon Comprehend: German ("de"), English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), or Portuguese ("pt"). All documents must
     * be in the same language.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of the input documents. You can specify any of the following
     * languages supported by Amazon Comprehend: German ("de"), English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), or Portuguese ("pt"). All documents must
     * be in the same language.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of the input documents. You can specify any of the following
     * languages supported by Amazon Comprehend: German ("de"), English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), or Portuguese ("pt"). All documents must
     * be in the same language.</p>
     */
    inline CreateDocumentClassifierRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the input documents. You can specify any of the following
     * languages supported by Amazon Comprehend: German ("de"), English ("en"), Spanish
     * ("es"), French ("fr"), Italian ("it"), or Portuguese ("pt"). All documents must
     * be in the same language.</p>
     */
    inline CreateDocumentClassifierRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


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
    inline CreateDocumentClassifierRequest& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}

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
    inline CreateDocumentClassifierRequest& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}

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
    inline CreateDocumentClassifierRequest& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}


    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom classifier. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom classifier. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom classifier. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom classifier. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom classifier. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline CreateDocumentClassifierRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>Configuration parameters for an optional private Virtual Private Cloud (VPC)
     * containing the resources you are using for your custom classifier. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/what-is-amazon-vpc.html">Amazon
     * VPC</a>. </p>
     */
    inline CreateDocumentClassifierRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Indicates the mode in which the classifier will be trained. The classifier
     * can be trained in multi-class mode, which identifies one and only one class for
     * each document, or multi-label mode, which identifies one or more labels for each
     * document. In multi-label mode, multiple labels for an individual document are
     * separated by a delimiter. The default delimiter between labels is a pipe
     * (|).</p>
     */
    inline const DocumentClassifierMode& GetMode() const{ return m_mode; }

    /**
     * <p>Indicates the mode in which the classifier will be trained. The classifier
     * can be trained in multi-class mode, which identifies one and only one class for
     * each document, or multi-label mode, which identifies one or more labels for each
     * document. In multi-label mode, multiple labels for an individual document are
     * separated by a delimiter. The default delimiter between labels is a pipe
     * (|).</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Indicates the mode in which the classifier will be trained. The classifier
     * can be trained in multi-class mode, which identifies one and only one class for
     * each document, or multi-label mode, which identifies one or more labels for each
     * document. In multi-label mode, multiple labels for an individual document are
     * separated by a delimiter. The default delimiter between labels is a pipe
     * (|).</p>
     */
    inline void SetMode(const DocumentClassifierMode& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Indicates the mode in which the classifier will be trained. The classifier
     * can be trained in multi-class mode, which identifies one and only one class for
     * each document, or multi-label mode, which identifies one or more labels for each
     * document. In multi-label mode, multiple labels for an individual document are
     * separated by a delimiter. The default delimiter between labels is a pipe
     * (|).</p>
     */
    inline void SetMode(DocumentClassifierMode&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Indicates the mode in which the classifier will be trained. The classifier
     * can be trained in multi-class mode, which identifies one and only one class for
     * each document, or multi-label mode, which identifies one or more labels for each
     * document. In multi-label mode, multiple labels for an individual document are
     * separated by a delimiter. The default delimiter between labels is a pipe
     * (|).</p>
     */
    inline CreateDocumentClassifierRequest& WithMode(const DocumentClassifierMode& value) { SetMode(value); return *this;}

    /**
     * <p>Indicates the mode in which the classifier will be trained. The classifier
     * can be trained in multi-class mode, which identifies one and only one class for
     * each document, or multi-label mode, which identifies one or more labels for each
     * document. In multi-label mode, multiple labels for an individual document are
     * separated by a delimiter. The default delimiter between labels is a pipe
     * (|).</p>
     */
    inline CreateDocumentClassifierRequest& WithMode(DocumentClassifierMode&& value) { SetMode(std::move(value)); return *this;}


    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetModelKmsKeyId() const{ return m_modelKmsKeyId; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline bool ModelKmsKeyIdHasBeenSet() const { return m_modelKmsKeyIdHasBeenSet; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetModelKmsKeyId(const Aws::String& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = value; }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetModelKmsKeyId(Aws::String&& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = std::move(value); }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetModelKmsKeyId(const char* value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId.assign(value); }

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline CreateDocumentClassifierRequest& WithModelKmsKeyId(const Aws::String& value) { SetModelKmsKeyId(value); return *this;}

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline CreateDocumentClassifierRequest& WithModelKmsKeyId(Aws::String&& value) { SetModelKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>ID for the AWS Key Management Service (KMS) key that Amazon Comprehend uses
     * to encrypt trained custom models. The ModelKmsKeyId can be either of the
     * following formats:</p> <ul> <li> <p>KMS Key ID:
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline CreateDocumentClassifierRequest& WithModelKmsKeyId(const char* value) { SetModelKmsKeyId(value); return *this;}


    /**
     * <p>The resource-based policy to attach to your custom document classifier model.
     * You can use this policy to allow another AWS account to import your custom
     * model.</p> <p>Provide your policy as a JSON body that you enter as a UTF-8
     * encoded string without line breaks. To provide valid JSON, enclose the attribute
     * names and values in double quotes. If the JSON body is also enclosed in double
     * quotes, then you must escape the double quotes that are inside the policy:</p>
     * <p> <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p>
     * <p>To avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline const Aws::String& GetModelPolicy() const{ return m_modelPolicy; }

    /**
     * <p>The resource-based policy to attach to your custom document classifier model.
     * You can use this policy to allow another AWS account to import your custom
     * model.</p> <p>Provide your policy as a JSON body that you enter as a UTF-8
     * encoded string without line breaks. To provide valid JSON, enclose the attribute
     * names and values in double quotes. If the JSON body is also enclosed in double
     * quotes, then you must escape the double quotes that are inside the policy:</p>
     * <p> <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p>
     * <p>To avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline bool ModelPolicyHasBeenSet() const { return m_modelPolicyHasBeenSet; }

    /**
     * <p>The resource-based policy to attach to your custom document classifier model.
     * You can use this policy to allow another AWS account to import your custom
     * model.</p> <p>Provide your policy as a JSON body that you enter as a UTF-8
     * encoded string without line breaks. To provide valid JSON, enclose the attribute
     * names and values in double quotes. If the JSON body is also enclosed in double
     * quotes, then you must escape the double quotes that are inside the policy:</p>
     * <p> <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p>
     * <p>To avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline void SetModelPolicy(const Aws::String& value) { m_modelPolicyHasBeenSet = true; m_modelPolicy = value; }

    /**
     * <p>The resource-based policy to attach to your custom document classifier model.
     * You can use this policy to allow another AWS account to import your custom
     * model.</p> <p>Provide your policy as a JSON body that you enter as a UTF-8
     * encoded string without line breaks. To provide valid JSON, enclose the attribute
     * names and values in double quotes. If the JSON body is also enclosed in double
     * quotes, then you must escape the double quotes that are inside the policy:</p>
     * <p> <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p>
     * <p>To avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline void SetModelPolicy(Aws::String&& value) { m_modelPolicyHasBeenSet = true; m_modelPolicy = std::move(value); }

    /**
     * <p>The resource-based policy to attach to your custom document classifier model.
     * You can use this policy to allow another AWS account to import your custom
     * model.</p> <p>Provide your policy as a JSON body that you enter as a UTF-8
     * encoded string without line breaks. To provide valid JSON, enclose the attribute
     * names and values in double quotes. If the JSON body is also enclosed in double
     * quotes, then you must escape the double quotes that are inside the policy:</p>
     * <p> <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p>
     * <p>To avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline void SetModelPolicy(const char* value) { m_modelPolicyHasBeenSet = true; m_modelPolicy.assign(value); }

    /**
     * <p>The resource-based policy to attach to your custom document classifier model.
     * You can use this policy to allow another AWS account to import your custom
     * model.</p> <p>Provide your policy as a JSON body that you enter as a UTF-8
     * encoded string without line breaks. To provide valid JSON, enclose the attribute
     * names and values in double quotes. If the JSON body is also enclosed in double
     * quotes, then you must escape the double quotes that are inside the policy:</p>
     * <p> <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p>
     * <p>To avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline CreateDocumentClassifierRequest& WithModelPolicy(const Aws::String& value) { SetModelPolicy(value); return *this;}

    /**
     * <p>The resource-based policy to attach to your custom document classifier model.
     * You can use this policy to allow another AWS account to import your custom
     * model.</p> <p>Provide your policy as a JSON body that you enter as a UTF-8
     * encoded string without line breaks. To provide valid JSON, enclose the attribute
     * names and values in double quotes. If the JSON body is also enclosed in double
     * quotes, then you must escape the double quotes that are inside the policy:</p>
     * <p> <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p>
     * <p>To avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline CreateDocumentClassifierRequest& WithModelPolicy(Aws::String&& value) { SetModelPolicy(std::move(value)); return *this;}

    /**
     * <p>The resource-based policy to attach to your custom document classifier model.
     * You can use this policy to allow another AWS account to import your custom
     * model.</p> <p>Provide your policy as a JSON body that you enter as a UTF-8
     * encoded string without line breaks. To provide valid JSON, enclose the attribute
     * names and values in double quotes. If the JSON body is also enclosed in double
     * quotes, then you must escape the double quotes that are inside the policy:</p>
     * <p> <code>"{\"attribute\": \"value\", \"attribute\": [\"value\"]}"</code> </p>
     * <p>To avoid escaping quotes, you can use single quotes to enclose the policy and
     * double quotes to enclose the JSON names and values:</p> <p> <code>'{"attribute":
     * "value", "attribute": ["value"]}'</code> </p>
     */
    inline CreateDocumentClassifierRequest& WithModelPolicy(const char* value) { SetModelPolicy(value); return *this;}

  private:

    Aws::String m_documentClassifierName;
    bool m_documentClassifierNameHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DocumentClassifierInputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    DocumentClassifierOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    DocumentClassifierMode m_mode;
    bool m_modeHasBeenSet = false;

    Aws::String m_modelKmsKeyId;
    bool m_modelKmsKeyIdHasBeenSet = false;

    Aws::String m_modelPolicy;
    bool m_modelPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
