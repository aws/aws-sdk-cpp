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
    AWS_COMPREHEND_API FlywheelProperties();
    AWS_COMPREHEND_API FlywheelProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API FlywheelProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline const Aws::String& GetFlywheelArn() const{ return m_flywheelArn; }
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }
    inline void SetFlywheelArn(const Aws::String& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = value; }
    inline void SetFlywheelArn(Aws::String&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::move(value); }
    inline void SetFlywheelArn(const char* value) { m_flywheelArnHasBeenSet = true; m_flywheelArn.assign(value); }
    inline FlywheelProperties& WithFlywheelArn(const Aws::String& value) { SetFlywheelArn(value); return *this;}
    inline FlywheelProperties& WithFlywheelArn(Aws::String&& value) { SetFlywheelArn(std::move(value)); return *this;}
    inline FlywheelProperties& WithFlywheelArn(const char* value) { SetFlywheelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline const Aws::String& GetActiveModelArn() const{ return m_activeModelArn; }
    inline bool ActiveModelArnHasBeenSet() const { return m_activeModelArnHasBeenSet; }
    inline void SetActiveModelArn(const Aws::String& value) { m_activeModelArnHasBeenSet = true; m_activeModelArn = value; }
    inline void SetActiveModelArn(Aws::String&& value) { m_activeModelArnHasBeenSet = true; m_activeModelArn = std::move(value); }
    inline void SetActiveModelArn(const char* value) { m_activeModelArnHasBeenSet = true; m_activeModelArn.assign(value); }
    inline FlywheelProperties& WithActiveModelArn(const Aws::String& value) { SetActiveModelArn(value); return *this;}
    inline FlywheelProperties& WithActiveModelArn(Aws::String&& value) { SetActiveModelArn(std::move(value)); return *this;}
    inline FlywheelProperties& WithActiveModelArn(const char* value) { SetActiveModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline FlywheelProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline FlywheelProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline FlywheelProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration about the model associated with a flywheel.</p>
     */
    inline const TaskConfig& GetTaskConfig() const{ return m_taskConfig; }
    inline bool TaskConfigHasBeenSet() const { return m_taskConfigHasBeenSet; }
    inline void SetTaskConfig(const TaskConfig& value) { m_taskConfigHasBeenSet = true; m_taskConfig = value; }
    inline void SetTaskConfig(TaskConfig&& value) { m_taskConfigHasBeenSet = true; m_taskConfig = std::move(value); }
    inline FlywheelProperties& WithTaskConfig(const TaskConfig& value) { SetTaskConfig(value); return *this;}
    inline FlywheelProperties& WithTaskConfig(TaskConfig&& value) { SetTaskConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline const Aws::String& GetDataLakeS3Uri() const{ return m_dataLakeS3Uri; }
    inline bool DataLakeS3UriHasBeenSet() const { return m_dataLakeS3UriHasBeenSet; }
    inline void SetDataLakeS3Uri(const Aws::String& value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri = value; }
    inline void SetDataLakeS3Uri(Aws::String&& value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri = std::move(value); }
    inline void SetDataLakeS3Uri(const char* value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri.assign(value); }
    inline FlywheelProperties& WithDataLakeS3Uri(const Aws::String& value) { SetDataLakeS3Uri(value); return *this;}
    inline FlywheelProperties& WithDataLakeS3Uri(Aws::String&& value) { SetDataLakeS3Uri(std::move(value)); return *this;}
    inline FlywheelProperties& WithDataLakeS3Uri(const char* value) { SetDataLakeS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data security configuration.</p>
     */
    inline const DataSecurityConfig& GetDataSecurityConfig() const{ return m_dataSecurityConfig; }
    inline bool DataSecurityConfigHasBeenSet() const { return m_dataSecurityConfigHasBeenSet; }
    inline void SetDataSecurityConfig(const DataSecurityConfig& value) { m_dataSecurityConfigHasBeenSet = true; m_dataSecurityConfig = value; }
    inline void SetDataSecurityConfig(DataSecurityConfig&& value) { m_dataSecurityConfigHasBeenSet = true; m_dataSecurityConfig = std::move(value); }
    inline FlywheelProperties& WithDataSecurityConfig(const DataSecurityConfig& value) { SetDataSecurityConfig(value); return *this;}
    inline FlywheelProperties& WithDataSecurityConfig(DataSecurityConfig&& value) { SetDataSecurityConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flywheel.</p>
     */
    inline const FlywheelStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FlywheelStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FlywheelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline FlywheelProperties& WithStatus(const FlywheelStatus& value) { SetStatus(value); return *this;}
    inline FlywheelProperties& WithStatus(FlywheelStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline const ModelType& GetModelType() const{ return m_modelType; }
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }
    inline void SetModelType(const ModelType& value) { m_modelTypeHasBeenSet = true; m_modelType = value; }
    inline void SetModelType(ModelType&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::move(value); }
    inline FlywheelProperties& WithModelType(const ModelType& value) { SetModelType(value); return *this;}
    inline FlywheelProperties& WithModelType(ModelType&& value) { SetModelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline FlywheelProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline FlywheelProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline FlywheelProperties& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline FlywheelProperties& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline FlywheelProperties& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline FlywheelProperties& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline FlywheelProperties& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline const Aws::String& GetLatestFlywheelIteration() const{ return m_latestFlywheelIteration; }
    inline bool LatestFlywheelIterationHasBeenSet() const { return m_latestFlywheelIterationHasBeenSet; }
    inline void SetLatestFlywheelIteration(const Aws::String& value) { m_latestFlywheelIterationHasBeenSet = true; m_latestFlywheelIteration = value; }
    inline void SetLatestFlywheelIteration(Aws::String&& value) { m_latestFlywheelIterationHasBeenSet = true; m_latestFlywheelIteration = std::move(value); }
    inline void SetLatestFlywheelIteration(const char* value) { m_latestFlywheelIterationHasBeenSet = true; m_latestFlywheelIteration.assign(value); }
    inline FlywheelProperties& WithLatestFlywheelIteration(const Aws::String& value) { SetLatestFlywheelIteration(value); return *this;}
    inline FlywheelProperties& WithLatestFlywheelIteration(Aws::String&& value) { SetLatestFlywheelIteration(std::move(value)); return *this;}
    inline FlywheelProperties& WithLatestFlywheelIteration(const char* value) { SetLatestFlywheelIteration(value); return *this;}
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

    FlywheelStatus m_status;
    bool m_statusHasBeenSet = false;

    ModelType m_modelType;
    bool m_modelTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_latestFlywheelIteration;
    bool m_latestFlywheelIterationHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
