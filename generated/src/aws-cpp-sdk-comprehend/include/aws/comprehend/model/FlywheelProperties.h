/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/TaskConfig.h>
#include <aws/comprehend/model/DataSecurityConfig.h>
#include <aws/comprehend/model/FlywheelStatus.h>
#include <aws/comprehend/model/ModelType.h>
#include <aws/core/utils/DateTime.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>The flywheel properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/FlywheelProperties">AWS
   * API Reference</a></p>
   */
  class FlywheelProperties
  {
  public:
    AWS_COMPREHEND_API FlywheelProperties() = default;
    AWS_COMPREHEND_API FlywheelProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API FlywheelProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline const Aws::String& GetFlywheelArn() const { return m_flywheelArn; }
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }
    template<typename FlywheelArnT = Aws::String>
    void SetFlywheelArn(FlywheelArnT&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::forward<FlywheelArnT>(value); }
    template<typename FlywheelArnT = Aws::String>
    FlywheelProperties& WithFlywheelArn(FlywheelArnT&& value) { SetFlywheelArn(std::forward<FlywheelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline const Aws::String& GetActiveModelArn() const { return m_activeModelArn; }
    inline bool ActiveModelArnHasBeenSet() const { return m_activeModelArnHasBeenSet; }
    template<typename ActiveModelArnT = Aws::String>
    void SetActiveModelArn(ActiveModelArnT&& value) { m_activeModelArnHasBeenSet = true; m_activeModelArn = std::forward<ActiveModelArnT>(value); }
    template<typename ActiveModelArnT = Aws::String>
    FlywheelProperties& WithActiveModelArn(ActiveModelArnT&& value) { SetActiveModelArn(std::forward<ActiveModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    FlywheelProperties& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration about the model associated with a flywheel.</p>
     */
    inline const TaskConfig& GetTaskConfig() const { return m_taskConfig; }
    inline bool TaskConfigHasBeenSet() const { return m_taskConfigHasBeenSet; }
    template<typename TaskConfigT = TaskConfig>
    void SetTaskConfig(TaskConfigT&& value) { m_taskConfigHasBeenSet = true; m_taskConfig = std::forward<TaskConfigT>(value); }
    template<typename TaskConfigT = TaskConfig>
    FlywheelProperties& WithTaskConfig(TaskConfigT&& value) { SetTaskConfig(std::forward<TaskConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline const Aws::String& GetDataLakeS3Uri() const { return m_dataLakeS3Uri; }
    inline bool DataLakeS3UriHasBeenSet() const { return m_dataLakeS3UriHasBeenSet; }
    template<typename DataLakeS3UriT = Aws::String>
    void SetDataLakeS3Uri(DataLakeS3UriT&& value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri = std::forward<DataLakeS3UriT>(value); }
    template<typename DataLakeS3UriT = Aws::String>
    FlywheelProperties& WithDataLakeS3Uri(DataLakeS3UriT&& value) { SetDataLakeS3Uri(std::forward<DataLakeS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data security configuration.</p>
     */
    inline const DataSecurityConfig& GetDataSecurityConfig() const { return m_dataSecurityConfig; }
    inline bool DataSecurityConfigHasBeenSet() const { return m_dataSecurityConfigHasBeenSet; }
    template<typename DataSecurityConfigT = DataSecurityConfig>
    void SetDataSecurityConfig(DataSecurityConfigT&& value) { m_dataSecurityConfigHasBeenSet = true; m_dataSecurityConfig = std::forward<DataSecurityConfigT>(value); }
    template<typename DataSecurityConfigT = DataSecurityConfig>
    FlywheelProperties& WithDataSecurityConfig(DataSecurityConfigT&& value) { SetDataSecurityConfig(std::forward<DataSecurityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flywheel.</p>
     */
    inline FlywheelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FlywheelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline FlywheelProperties& WithStatus(FlywheelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline ModelType GetModelType() const { return m_modelType; }
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }
    inline void SetModelType(ModelType value) { m_modelTypeHasBeenSet = true; m_modelType = value; }
    inline FlywheelProperties& WithModelType(ModelType value) { SetModelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    FlywheelProperties& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    FlywheelProperties& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    FlywheelProperties& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline const Aws::String& GetLatestFlywheelIteration() const { return m_latestFlywheelIteration; }
    inline bool LatestFlywheelIterationHasBeenSet() const { return m_latestFlywheelIterationHasBeenSet; }
    template<typename LatestFlywheelIterationT = Aws::String>
    void SetLatestFlywheelIteration(LatestFlywheelIterationT&& value) { m_latestFlywheelIterationHasBeenSet = true; m_latestFlywheelIteration = std::forward<LatestFlywheelIterationT>(value); }
    template<typename LatestFlywheelIterationT = Aws::String>
    FlywheelProperties& WithLatestFlywheelIteration(LatestFlywheelIterationT&& value) { SetLatestFlywheelIteration(std::forward<LatestFlywheelIterationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flywheelArn;
    bool m_flywheelArnHasBeenSet = false;

    Aws::String m_activeModelArn;
    bool m_activeModelArnHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    TaskConfig m_taskConfig;
    bool m_taskConfigHasBeenSet = false;

    Aws::String m_dataLakeS3Uri;
    bool m_dataLakeS3UriHasBeenSet = false;

    DataSecurityConfig m_dataSecurityConfig;
    bool m_dataSecurityConfigHasBeenSet = false;

    FlywheelStatus m_status{FlywheelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ModelType m_modelType{ModelType::NOT_SET};
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_latestFlywheelIteration;
    bool m_latestFlywheelIterationHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
