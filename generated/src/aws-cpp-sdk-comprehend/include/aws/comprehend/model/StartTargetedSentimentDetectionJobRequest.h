/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/comprehend/model/InputDataConfig.h>
#include <aws/comprehend/model/OutputDataConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/LanguageCode.h>
#include <aws/comprehend/model/VpcConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class StartTargetedSentimentDetectionJobRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API StartTargetedSentimentDetectionJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTargetedSentimentDetectionJob"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }

    
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    
    inline StartTargetedSentimentDetectionJobRequest& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}

    
    inline StartTargetedSentimentDetectionJobRequest& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies where to send the output files. </p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>Specifies where to send the output files. </p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>Specifies where to send the output files. </p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>Specifies where to send the output files. </p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>Specifies where to send the output files. </p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>Specifies where to send the output files. </p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/access-control-managing-permissions.html#auth-role-permissions">Role-based
     * permissions</a>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/access-control-managing-permissions.html#auth-role-permissions">Role-based
     * permissions</a>.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/access-control-managing-permissions.html#auth-role-permissions">Role-based
     * permissions</a>.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/access-control-managing-permissions.html#auth-role-permissions">Role-based
     * permissions</a>.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/access-control-managing-permissions.html#auth-role-permissions">Role-based
     * permissions</a>.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/access-control-managing-permissions.html#auth-role-permissions">Role-based
     * permissions</a>.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/access-control-managing-permissions.html#auth-role-permissions">Role-based
     * permissions</a>.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that grants Amazon Comprehend read access to your input data. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/comprehend/latest/dg/access-control-managing-permissions.html#auth-role-permissions">Role-based
     * permissions</a>.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>The identifier of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The identifier of the job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The identifier of the job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The identifier of the job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The identifier of the job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The identifier of the job.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The identifier of the job.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The identifier of the job.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The language of the input documents. Currently, English is the only supported
     * language.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of the input documents. Currently, English is the only supported
     * language.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language of the input documents. Currently, English is the only supported
     * language.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of the input documents. Currently, English is the only supported
     * language.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of the input documents. Currently, English is the only supported
     * language.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the input documents. Currently, English is the only supported
     * language.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


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
    inline StartTargetedSentimentDetectionJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt data on the storage
     * volume attached to the ML compute instance(s) that process the analysis job. The
     * VolumeKmsKeyId can be either of the following formats:</p> <ul> <li> <p>KMS Key
     * ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li>
     * <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetVolumeKmsKeyId() const{ return m_volumeKmsKeyId; }

    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt data on the storage
     * volume attached to the ML compute instance(s) that process the analysis job. The
     * VolumeKmsKeyId can be either of the following formats:</p> <ul> <li> <p>KMS Key
     * ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li>
     * <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline bool VolumeKmsKeyIdHasBeenSet() const { return m_volumeKmsKeyIdHasBeenSet; }

    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt data on the storage
     * volume attached to the ML compute instance(s) that process the analysis job. The
     * VolumeKmsKeyId can be either of the following formats:</p> <ul> <li> <p>KMS Key
     * ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li>
     * <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(const Aws::String& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = value; }

    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt data on the storage
     * volume attached to the ML compute instance(s) that process the analysis job. The
     * VolumeKmsKeyId can be either of the following formats:</p> <ul> <li> <p>KMS Key
     * ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li>
     * <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(Aws::String&& value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId = std::move(value); }

    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt data on the storage
     * volume attached to the ML compute instance(s) that process the analysis job. The
     * VolumeKmsKeyId can be either of the following formats:</p> <ul> <li> <p>KMS Key
     * ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li>
     * <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline void SetVolumeKmsKeyId(const char* value) { m_volumeKmsKeyIdHasBeenSet = true; m_volumeKmsKeyId.assign(value); }

    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt data on the storage
     * volume attached to the ML compute instance(s) that process the analysis job. The
     * VolumeKmsKeyId can be either of the following formats:</p> <ul> <li> <p>KMS Key
     * ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li>
     * <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithVolumeKmsKeyId(const Aws::String& value) { SetVolumeKmsKeyId(value); return *this;}

    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt data on the storage
     * volume attached to the ML compute instance(s) that process the analysis job. The
     * VolumeKmsKeyId can be either of the following formats:</p> <ul> <li> <p>KMS Key
     * ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li>
     * <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithVolumeKmsKeyId(Aws::String&& value) { SetVolumeKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>ID for the KMS key that Amazon Comprehend uses to encrypt data on the storage
     * volume attached to the ML compute instance(s) that process the analysis job. The
     * VolumeKmsKeyId can be either of the following formats:</p> <ul> <li> <p>KMS Key
     * ID: <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li>
     * <p>Amazon Resource Name (ARN) of a KMS Key:
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> </ul>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithVolumeKmsKeyId(const char* value) { SetVolumeKmsKeyId(value); return *this;}


    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    
    inline StartTargetedSentimentDetectionJobRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    
    inline StartTargetedSentimentDetectionJobRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Tags to be associated with the targeted sentiment detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be associated with the targeted sentiment detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to be associated with the targeted sentiment detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be associated with the targeted sentiment detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to be associated with the targeted sentiment detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be associated with the targeted sentiment detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to be associated with the targeted sentiment detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to be associated with the targeted sentiment detection job. A tag is a
     * key-value pair that adds metadata to a resource used by Amazon Comprehend. For
     * example, a tag with "Sales" as the key might be added to a resource to indicate
     * its use by the sales department.</p>
     */
    inline StartTargetedSentimentDetectionJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_volumeKmsKeyId;
    bool m_volumeKmsKeyIdHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
