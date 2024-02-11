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


    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline const Aws::String& GetFlywheelArn() const{ return m_flywheelArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline void SetFlywheelArn(const Aws::String& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline void SetFlywheelArn(Aws::String&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline void SetFlywheelArn(const char* value) { m_flywheelArnHasBeenSet = true; m_flywheelArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline FlywheelProperties& WithFlywheelArn(const Aws::String& value) { SetFlywheelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline FlywheelProperties& WithFlywheelArn(Aws::String&& value) { SetFlywheelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the flywheel.</p>
     */
    inline FlywheelProperties& WithFlywheelArn(const char* value) { SetFlywheelArn(value); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline const Aws::String& GetActiveModelArn() const{ return m_activeModelArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline bool ActiveModelArnHasBeenSet() const { return m_activeModelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline void SetActiveModelArn(const Aws::String& value) { m_activeModelArnHasBeenSet = true; m_activeModelArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline void SetActiveModelArn(Aws::String&& value) { m_activeModelArnHasBeenSet = true; m_activeModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline void SetActiveModelArn(const char* value) { m_activeModelArnHasBeenSet = true; m_activeModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline FlywheelProperties& WithActiveModelArn(const Aws::String& value) { SetActiveModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline FlywheelProperties& WithActiveModelArn(Aws::String&& value) { SetActiveModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the active model version.</p>
     */
    inline FlywheelProperties& WithActiveModelArn(const char* value) { SetActiveModelArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline FlywheelProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline FlywheelProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon Comprehend
     * permission to access the flywheel data.</p>
     */
    inline FlywheelProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}


    /**
     * <p>Configuration about the model associated with a flywheel.</p>
     */
    inline const TaskConfig& GetTaskConfig() const{ return m_taskConfig; }

    /**
     * <p>Configuration about the model associated with a flywheel.</p>
     */
    inline bool TaskConfigHasBeenSet() const { return m_taskConfigHasBeenSet; }

    /**
     * <p>Configuration about the model associated with a flywheel.</p>
     */
    inline void SetTaskConfig(const TaskConfig& value) { m_taskConfigHasBeenSet = true; m_taskConfig = value; }

    /**
     * <p>Configuration about the model associated with a flywheel.</p>
     */
    inline void SetTaskConfig(TaskConfig&& value) { m_taskConfigHasBeenSet = true; m_taskConfig = std::move(value); }

    /**
     * <p>Configuration about the model associated with a flywheel.</p>
     */
    inline FlywheelProperties& WithTaskConfig(const TaskConfig& value) { SetTaskConfig(value); return *this;}

    /**
     * <p>Configuration about the model associated with a flywheel.</p>
     */
    inline FlywheelProperties& WithTaskConfig(TaskConfig&& value) { SetTaskConfig(std::move(value)); return *this;}


    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline const Aws::String& GetDataLakeS3Uri() const{ return m_dataLakeS3Uri; }

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline bool DataLakeS3UriHasBeenSet() const { return m_dataLakeS3UriHasBeenSet; }

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline void SetDataLakeS3Uri(const Aws::String& value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri = value; }

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline void SetDataLakeS3Uri(Aws::String&& value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri = std::move(value); }

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline void SetDataLakeS3Uri(const char* value) { m_dataLakeS3UriHasBeenSet = true; m_dataLakeS3Uri.assign(value); }

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline FlywheelProperties& WithDataLakeS3Uri(const Aws::String& value) { SetDataLakeS3Uri(value); return *this;}

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline FlywheelProperties& WithDataLakeS3Uri(Aws::String&& value) { SetDataLakeS3Uri(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 URI of the data lake location. </p>
     */
    inline FlywheelProperties& WithDataLakeS3Uri(const char* value) { SetDataLakeS3Uri(value); return *this;}


    /**
     * <p>Data security configuration.</p>
     */
    inline const DataSecurityConfig& GetDataSecurityConfig() const{ return m_dataSecurityConfig; }

    /**
     * <p>Data security configuration.</p>
     */
    inline bool DataSecurityConfigHasBeenSet() const { return m_dataSecurityConfigHasBeenSet; }

    /**
     * <p>Data security configuration.</p>
     */
    inline void SetDataSecurityConfig(const DataSecurityConfig& value) { m_dataSecurityConfigHasBeenSet = true; m_dataSecurityConfig = value; }

    /**
     * <p>Data security configuration.</p>
     */
    inline void SetDataSecurityConfig(DataSecurityConfig&& value) { m_dataSecurityConfigHasBeenSet = true; m_dataSecurityConfig = std::move(value); }

    /**
     * <p>Data security configuration.</p>
     */
    inline FlywheelProperties& WithDataSecurityConfig(const DataSecurityConfig& value) { SetDataSecurityConfig(value); return *this;}

    /**
     * <p>Data security configuration.</p>
     */
    inline FlywheelProperties& WithDataSecurityConfig(DataSecurityConfig&& value) { SetDataSecurityConfig(std::move(value)); return *this;}


    /**
     * <p>The status of the flywheel.</p>
     */
    inline const FlywheelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the flywheel.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the flywheel.</p>
     */
    inline void SetStatus(const FlywheelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the flywheel.</p>
     */
    inline void SetStatus(FlywheelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the flywheel.</p>
     */
    inline FlywheelProperties& WithStatus(const FlywheelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the flywheel.</p>
     */
    inline FlywheelProperties& WithStatus(FlywheelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline const ModelType& GetModelType() const{ return m_modelType; }

    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline bool ModelTypeHasBeenSet() const { return m_modelTypeHasBeenSet; }

    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline void SetModelType(const ModelType& value) { m_modelTypeHasBeenSet = true; m_modelType = value; }

    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline void SetModelType(ModelType&& value) { m_modelTypeHasBeenSet = true; m_modelType = std::move(value); }

    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline FlywheelProperties& WithModelType(const ModelType& value) { SetModelType(value); return *this;}

    /**
     * <p>Model type of the flywheel's model.</p>
     */
    inline FlywheelProperties& WithModelType(ModelType&& value) { SetModelType(std::move(value)); return *this;}


    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline FlywheelProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline FlywheelProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the status of the flywheel.</p>
     */
    inline FlywheelProperties& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline FlywheelProperties& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Creation time of the flywheel.</p>
     */
    inline FlywheelProperties& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline FlywheelProperties& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>Last modified time for the flywheel.</p>
     */
    inline FlywheelProperties& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline const Aws::String& GetLatestFlywheelIteration() const{ return m_latestFlywheelIteration; }

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline bool LatestFlywheelIterationHasBeenSet() const { return m_latestFlywheelIterationHasBeenSet; }

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline void SetLatestFlywheelIteration(const Aws::String& value) { m_latestFlywheelIterationHasBeenSet = true; m_latestFlywheelIteration = value; }

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline void SetLatestFlywheelIteration(Aws::String&& value) { m_latestFlywheelIterationHasBeenSet = true; m_latestFlywheelIteration = std::move(value); }

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline void SetLatestFlywheelIteration(const char* value) { m_latestFlywheelIterationHasBeenSet = true; m_latestFlywheelIteration.assign(value); }

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline FlywheelProperties& WithLatestFlywheelIteration(const Aws::String& value) { SetLatestFlywheelIteration(value); return *this;}

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline FlywheelProperties& WithLatestFlywheelIteration(Aws::String&& value) { SetLatestFlywheelIteration(std::move(value)); return *this;}

    /**
     * <p>The most recent flywheel iteration.</p>
     */
    inline FlywheelProperties& WithLatestFlywheelIteration(const char* value) { SetLatestFlywheelIteration(value); return *this;}

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
