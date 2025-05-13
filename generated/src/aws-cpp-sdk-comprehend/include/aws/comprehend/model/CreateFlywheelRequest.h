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
    AWS_COMPREHEND_API CreateFlywheelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFlywheel"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Name for the flywheel.</p>
     */
    inline const Aws::String& GetFlywheelName() const { return m_flywheelName; }
    inline bool FlywheelNameHasBeenSet() const { return m_flywheelNameHasBeenSet; }
    template<typename FlywheelNameT = Aws::String>
    void SetFlywheelName(FlywheelNameT&& value) { m_flywheelNameHasBeenSet = true; m_flywheelName = std::forward<FlywheelNameT>(value); }
    template<typename FlywheelNameT = Aws::String>
    CreateFlywheelRequest& WithFlywheelName(FlywheelNameT&& value) { SetFlywheelName(std::forward<FlywheelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To associate an existing model with the flywheel, specify the Amazon Resource
     * Number (ARN) of the model version. Do not set <code>TaskConfig</code> or
     * <code>ModelType</code> if you specify an <code>ActiveModelArn</code>.</p>
     */
    inline const Aws::String& GetActiveModelArn() const { return m_activeModelArn; }
    inline bool ActiveModelArnHasBeenSet() const { return m_activeModelArnHasBeenSet; }
    template<typename ActiveModelArnT = Aws::String>
    void SetActiveModelArn(ActiveModelArnT&& value) { m_activeModelArnHasBeenSet = true; m_activeModelArn = std::forward<ActiveModelArnT>(value); }
    template<typename ActiveModelArnT = Aws::String>
    CreateFlywheelRequest& WithActiveModelArn(ActiveModelArnT&& value) { SetActiveModelArn(std::forward<ActiveModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * the permissions required to access the flywheel data in the data lake.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    CreateFlywheelRequest& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration about the model associated with the flywheel. You need to set
     * <code>TaskConfig</code> if you are creating a flywheel for a new model.</p>
     */
    inline const TaskConfig& GetTaskConfig() const { return m_taskConfig; }
    inline bool TaskConfigHasBeenSet() const { return m_taskConfigHasBeenSet; }
    template<typename TaskConfigT = TaskConfig>
    void SetTaskConfig(TaskConfigT&& value) { m_taskConfigHasBeenSet = true; m_taskConfig = std::forward<TaskConfigT>(value); }
    template<typename TaskConfigT = TaskConfig>
    CreateFlywheelRequest& WithTaskConfig(TaskConfigT&& value) { SetTaskConfig(std::forward<TaskConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model type. You need to set <code>ModelType</code> if you are creating a
     * flywheel for a new model.</p>
     */
    inline ModelType GetModelType() const { return m_modelType; }
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }
    inline void SetModelType(ModelType value) { m_modelTypeHasBeenSet = true; m_modelType = value; }
    inline CreateFlywheelRequest& WithModelType(ModelType value) { SetModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enter the S3 location for the data lake. You can specify a new S3 bucket or a
     * new folder of an existing S3 bucket. The flywheel creates the data lake at this
     * location.</p>
     */
    inline const Aws::String& GetDataLakeS3Uri() const { return m_dataLakeS3Uri; }
    inline bool DataLakeS3UriHasBeenSet() const { return m_dataLakeS3UriHasBeenSet; }
    template<typename DataLakeS3UriT = Aws::String>
    void SetDataLakeS3Uri(DataLakeS3UriT&& value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri = std::forward<DataLakeS3UriT>(value); }
    template<typename DataLakeS3UriT = Aws::String>
    CreateFlywheelRequest& WithDataLakeS3Uri(DataLakeS3UriT&& value) { SetDataLakeS3Uri(std::forward<DataLakeS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data security configurations.</p>
     */
    inline const DataSecurityConfig& GetDataSecurityConfig() const { return m_dataSecurityConfig; }
    inline bool DataSecurityConfigHasBeenSet() const { return m_dataSecurityConfigHasBeenSet; }
    template<typename DataSecurityConfigT = DataSecurityConfig>
    void SetDataSecurityConfig(DataSecurityConfigT&& value) { m_dataSecurityConfigHasBeenSet = true; m_dataSecurityConfig = std::forward<DataSecurityConfigT>(value); }
    template<typename DataSecurityConfigT = DataSecurityConfig>
    CreateFlywheelRequest& WithDataSecurityConfig(DataSecurityConfigT&& value) { SetDataSecurityConfig(std::forward<DataSecurityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the request. If you don't set the client request
     * token, Amazon Comprehend generates one.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateFlywheelRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with this flywheel.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateFlywheelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateFlywheelRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_flywheelName;
    bool m_flywheelNameHasBeenSet = false;

    Aws::String m_activeModelArn;
    bool m_activeModelArnHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    TaskConfig m_taskConfig;
    bool m_taskConfigHasBeenSet = false;

    ModelType m_modelType{ModelType::NOT_SET};
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_dataLakeS3Uri;
    bool m_dataLakeS3UriHasBeenSet = false;

    DataSecurityConfig m_dataSecurityConfig;
    bool m_dataSecurityConfigHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
