/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/TaskConfig.h>
#include <aws/comprehend/model/ModelType.h>
#include <aws/comprehend/model/DataSecurityConfig.h>
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
  class CreateFlywheelRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API CreateFlywheelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFlywheel"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name for the flywheel.</p>
     */
    inline const Aws::String& GetFlywheelName() const{ return m_flywheelName; }

    /**
     * <p>Name for the flywheel.</p>
     */
    inline bool FlywheelNameHasBeenSet() const { return m_flywheelNameHasBeenSet; }

    /**
     * <p>Name for the flywheel.</p>
     */
    inline void SetFlywheelName(const Aws::String& value) { m_flywheelNameHasBeenSet = true; m_flywheelName = value; }

    /**
     * <p>Name for the flywheel.</p>
     */
    inline void SetFlywheelName(Aws::String&& value) { m_flywheelNameHasBeenSet = true; m_flywheelName = std::move(value); }

    /**
     * <p>Name for the flywheel.</p>
     */
    inline void SetFlywheelName(const char* value) { m_flywheelNameHasBeenSet = true; m_flywheelName.assign(value); }

    /**
     * <p>Name for the flywheel.</p>
     */
    inline CreateFlywheelRequest& WithFlywheelName(const Aws::String& value) { SetFlywheelName(value); return *this;}

    /**
     * <p>Name for the flywheel.</p>
     */
    inline CreateFlywheelRequest& WithFlywheelName(Aws::String&& value) { SetFlywheelName(std::move(value)); return *this;}

    /**
     * <p>Name for the flywheel.</p>
     */
    inline CreateFlywheelRequest& WithFlywheelName(const char* value) { SetFlywheelName(value); return *this;}


    /**
     * <p>To associate an existing model with the flywheel, specify the Amazon Resource
     * Number (ARN) of the model version. Do not set <code>TaskConfig</code> or
     * <code>ModelType</code> if you specify an <code>ActiveModelArn</code>.</p>
     */
    inline const Aws::String& GetActiveModelArn() const{ return m_activeModelArn; }

    /**
     * <p>To associate an existing model with the flywheel, specify the Amazon Resource
     * Number (ARN) of the model version. Do not set <code>TaskConfig</code> or
     * <code>ModelType</code> if you specify an <code>ActiveModelArn</code>.</p>
     */
    inline bool ActiveModelArnHasBeenSet() const { return m_activeModelArnHasBeenSet; }

    /**
     * <p>To associate an existing model with the flywheel, specify the Amazon Resource
     * Number (ARN) of the model version. Do not set <code>TaskConfig</code> or
     * <code>ModelType</code> if you specify an <code>ActiveModelArn</code>.</p>
     */
    inline void SetActiveModelArn(const Aws::String& value) { m_activeModelArnHasBeenSet = true; m_activeModelArn = value; }

    /**
     * <p>To associate an existing model with the flywheel, specify the Amazon Resource
     * Number (ARN) of the model version. Do not set <code>TaskConfig</code> or
     * <code>ModelType</code> if you specify an <code>ActiveModelArn</code>.</p>
     */
    inline void SetActiveModelArn(Aws::String&& value) { m_activeModelArnHasBeenSet = true; m_activeModelArn = std::move(value); }

    /**
     * <p>To associate an existing model with the flywheel, specify the Amazon Resource
     * Number (ARN) of the model version. Do not set <code>TaskConfig</code> or
     * <code>ModelType</code> if you specify an <code>ActiveModelArn</code>.</p>
     */
    inline void SetActiveModelArn(const char* value) { m_activeModelArnHasBeenSet = true; m_activeModelArn.assign(value); }

    /**
     * <p>To associate an existing model with the flywheel, specify the Amazon Resource
     * Number (ARN) of the model version. Do not set <code>TaskConfig</code> or
     * <code>ModelType</code> if you specify an <code>ActiveModelArn</code>.</p>
     */
    inline CreateFlywheelRequest& WithActiveModelArn(const Aws::String& value) { SetActiveModelArn(value); return *this;}

    /**
     * <p>To associate an existing model with the flywheel, specify the Amazon Resource
     * Number (ARN) of the model version. Do not set <code>TaskConfig</code> or
     * <code>ModelType</code> if you specify an <code>ActiveModelArn</code>.</p>
     */
    inline CreateFlywheelRequest& WithActiveModelArn(Aws::String&& value) { SetActiveModelArn(std::move(value)); return *this;}

    /**
     * <p>To associate an existing model with the flywheel, specify the Amazon Resource
     * Number (ARN) of the model version. Do not set <code>TaskConfig</code> or
     * <code>ModelType</code> if you specify an <code>ActiveModelArn</code>.</p>
     */
    inline CreateFlywheelRequest& WithActiveModelArn(const char* value) { SetActiveModelArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * the permissions required to access the flywheel data in the data lake.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * the permissions required to access the flywheel data in the data lake.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * the permissions required to access the flywheel data in the data lake.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * the permissions required to access the flywheel data in the data lake.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * the permissions required to access the flywheel data in the data lake.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * the permissions required to access the flywheel data in the data lake.</p>
     */
    inline CreateFlywheelRequest& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * the permissions required to access the flywheel data in the data lake.</p>
     */
    inline CreateFlywheelRequest& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * the permissions required to access the flywheel data in the data lake.</p>
     */
    inline CreateFlywheelRequest& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>Configuration about the model associated with the flywheel. You need to set
     * <code>TaskConfig</code> if you are creating a flywheel for a new model.</p>
     */
    inline const TaskConfig& GetTaskConfig() const{ return m_taskConfig; }

    /**
     * <p>Configuration about the model associated with the flywheel. You need to set
     * <code>TaskConfig</code> if you are creating a flywheel for a new model.</p>
     */
    inline bool TaskConfigHasBeenSet() const { return m_taskConfigHasBeenSet; }

    /**
     * <p>Configuration about the model associated with the flywheel. You need to set
     * <code>TaskConfig</code> if you are creating a flywheel for a new model.</p>
     */
    inline void SetTaskConfig(const TaskConfig& value) { m_taskConfigHasBeenSet = true; m_taskConfig = value; }

    /**
     * <p>Configuration about the model associated with the flywheel. You need to set
     * <code>TaskConfig</code> if you are creating a flywheel for a new model.</p>
     */
    inline void SetTaskConfig(TaskConfig&& value) { m_taskConfigHasBeenSet = true; m_taskConfig = std::move(value); }

    /**
     * <p>Configuration about the model associated with the flywheel. You need to set
     * <code>TaskConfig</code> if you are creating a flywheel for a new model.</p>
     */
    inline CreateFlywheelRequest& WithTaskConfig(const TaskConfig& value) { SetTaskConfig(value); return *this;}

    /**
     * <p>Configuration about the model associated with the flywheel. You need to set
     * <code>TaskConfig</code> if you are creating a flywheel for a new model.</p>
     */
    inline CreateFlywheelRequest& WithTaskConfig(TaskConfig&& value) { SetTaskConfig(std::move(value)); return *this;}


    /**
     * <p>The model type. You need to set <code>ModelType</code> if you are creating a
     * flywheel for a new model.</p>
     */
    inline const ModelType& GetModelType() const{ return m_modelType; }

    /**
     * <p>The model type. You need to set <code>ModelType</code> if you are creating a
     * flywheel for a new model.</p>
     */
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }

    /**
     * <p>The model type. You need to set <code>ModelType</code> if you are creating a
     * flywheel for a new model.</p>
     */
    inline void SetModelType(const ModelType& value) { m_modelTypeHasBeenSet = true; m_modelType = value; }

    /**
     * <p>The model type. You need to set <code>ModelType</code> if you are creating a
     * flywheel for a new model.</p>
     */
    inline void SetModelType(ModelType&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::move(value); }

    /**
     * <p>The model type. You need to set <code>ModelType</code> if you are creating a
     * flywheel for a new model.</p>
     */
    inline CreateFlywheelRequest& WithModelType(const ModelType& value) { SetModelType(value); return *this;}

    /**
     * <p>The model type. You need to set <code>ModelType</code> if you are creating a
     * flywheel for a new model.</p>
     */
    inline CreateFlywheelRequest& WithModelType(ModelType&& value) { SetModelType(std::move(value)); return *this;}


    /**
     * <p>Enter the S3 location for the data lake. You can specify a new S3 bucket or a
     * new folder of an existing S3 bucket. The flywheel creates the data lake at this
     * location.</p>
     */
    inline const Aws::String& GetDataLakeS3Uri() const{ return m_dataLakeS3Uri; }

    /**
     * <p>Enter the S3 location for the data lake. You can specify a new S3 bucket or a
     * new folder of an existing S3 bucket. The flywheel creates the data lake at this
     * location.</p>
     */
    inline bool DataLakeS3UriHasBeenSet() const { return m_dataLakeS3UriHasBeenSet; }

    /**
     * <p>Enter the S3 location for the data lake. You can specify a new S3 bucket or a
     * new folder of an existing S3 bucket. The flywheel creates the data lake at this
     * location.</p>
     */
    inline void SetDataLakeS3Uri(const Aws::String& value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri = value; }

    /**
     * <p>Enter the S3 location for the data lake. You can specify a new S3 bucket or a
     * new folder of an existing S3 bucket. The flywheel creates the data lake at this
     * location.</p>
     */
    inline void SetDataLakeS3Uri(Aws::String&& value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri = std::move(value); }

    /**
     * <p>Enter the S3 location for the data lake. You can specify a new S3 bucket or a
     * new folder of an existing S3 bucket. The flywheel creates the data lake at this
     * location.</p>
     */
    inline void SetDataLakeS3Uri(const char* value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri.assign(value); }

    /**
     * <p>Enter the S3 location for the data lake. You can specify a new S3 bucket or a
     * new folder of an existing S3 bucket. The flywheel creates the data lake at this
     * location.</p>
     */
    inline CreateFlywheelRequest& WithDataLakeS3Uri(const Aws::String& value) { SetDataLakeS3Uri(value); return *this;}

    /**
     * <p>Enter the S3 location for the data lake. You can specify a new S3 bucket or a
     * new folder of an existing S3 bucket. The flywheel creates the data lake at this
     * location.</p>
     */
    inline CreateFlywheelRequest& WithDataLakeS3Uri(Aws::String&& value) { SetDataLakeS3Uri(std::move(value)); return *this;}

    /**
     * <p>Enter the S3 location for the data lake. You can specify a new S3 bucket or a
     * new folder of an existing S3 bucket. The flywheel creates the data lake at this
     * location.</p>
     */
    inline CreateFlywheelRequest& WithDataLakeS3Uri(const char* value) { SetDataLakeS3Uri(value); return *this;}


    /**
     * <p>Data security configurations.</p>
     */
    inline const DataSecurityConfig& GetDataSecurityConfig() const{ return m_dataSecurityConfig; }

    /**
     * <p>Data security configurations.</p>
     */
    inline bool DataSecurityConfigHasBeenSet() const { return m_dataSecurityConfigHasBeenSet; }

    /**
     * <p>Data security configurations.</p>
     */
    inline void SetDataSecurityConfig(const DataSecurityConfig& value) { m_dataSecurityConfigHasBeenSet = true; m_dataSecurityConfig = value; }

    /**
     * <p>Data security configurations.</p>
     */
    inline void SetDataSecurityConfig(DataSecurityConfig&& value) { m_dataSecurityConfigHasBeenSet = true; m_dataSecurityConfig = std::move(value); }

    /**
     * <p>Data security configurations.</p>
     */
    inline CreateFlywheelRequest& WithDataSecurityConfig(const DataSecurityConfig& value) { SetDataSecurityConfig(value); return *this;}

    /**
     * <p>Data security configurations.</p>
     */
    inline CreateFlywheelRequest& WithDataSecurityConfig(DataSecurityConfig&& value) { SetDataSecurityConfig(std::move(value)); return *this;}


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
    inline CreateFlywheelRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline CreateFlywheelRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline CreateFlywheelRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The tags to associate with this flywheel.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to associate with this flywheel.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to associate with this flywheel.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to associate with this flywheel.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to associate with this flywheel.</p>
     */
    inline CreateFlywheelRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to associate with this flywheel.</p>
     */
    inline CreateFlywheelRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to associate with this flywheel.</p>
     */
    inline CreateFlywheelRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to associate with this flywheel.</p>
     */
    inline CreateFlywheelRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_flywheelName;
    bool m_flywheelNameHasBeenSet = false;

    Aws::String m_activeModelArn;
    bool m_activeModelArnHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    TaskConfig m_taskConfig;
    bool m_taskConfigHasBeenSet = false;

    ModelType m_modelType;
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_dataLakeS3Uri;
    bool m_dataLakeS3UriHasBeenSet = false;

    DataSecurityConfig m_dataSecurityConfig;
    bool m_dataSecurityConfigHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
