/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/ModelSource.h>
#include <aws/frauddetector/model/ModelInputConfiguration.h>
#include <aws/frauddetector/model/ModelOutputConfiguration.h>
#include <aws/frauddetector/model/ModelEndpointStatus.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The Amazon SageMaker model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/ExternalModel">AWS
   * API Reference</a></p>
   */
  class ExternalModel
  {
  public:
    AWS_FRAUDDETECTOR_API ExternalModel();
    AWS_FRAUDDETECTOR_API ExternalModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ExternalModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon SageMaker model endpoints.</p>
     */
    inline const Aws::String& GetModelEndpoint() const{ return m_modelEndpoint; }

    /**
     * <p>The Amazon SageMaker model endpoints.</p>
     */
    inline bool ModelEndpointHasBeenSet() const { return m_modelEndpointHasBeenSet; }

    /**
     * <p>The Amazon SageMaker model endpoints.</p>
     */
    inline void SetModelEndpoint(const Aws::String& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = value; }

    /**
     * <p>The Amazon SageMaker model endpoints.</p>
     */
    inline void SetModelEndpoint(Aws::String&& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = std::move(value); }

    /**
     * <p>The Amazon SageMaker model endpoints.</p>
     */
    inline void SetModelEndpoint(const char* value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint.assign(value); }

    /**
     * <p>The Amazon SageMaker model endpoints.</p>
     */
    inline ExternalModel& WithModelEndpoint(const Aws::String& value) { SetModelEndpoint(value); return *this;}

    /**
     * <p>The Amazon SageMaker model endpoints.</p>
     */
    inline ExternalModel& WithModelEndpoint(Aws::String&& value) { SetModelEndpoint(std::move(value)); return *this;}

    /**
     * <p>The Amazon SageMaker model endpoints.</p>
     */
    inline ExternalModel& WithModelEndpoint(const char* value) { SetModelEndpoint(value); return *this;}


    /**
     * <p>The source of the model.</p>
     */
    inline const ModelSource& GetModelSource() const{ return m_modelSource; }

    /**
     * <p>The source of the model.</p>
     */
    inline bool ModelSourceHasBeenSet() const { return m_modelSourceHasBeenSet; }

    /**
     * <p>The source of the model.</p>
     */
    inline void SetModelSource(const ModelSource& value) { m_modelSourceHasBeenSet = true; m_modelSource = value; }

    /**
     * <p>The source of the model.</p>
     */
    inline void SetModelSource(ModelSource&& value) { m_modelSourceHasBeenSet = true; m_modelSource = std::move(value); }

    /**
     * <p>The source of the model.</p>
     */
    inline ExternalModel& WithModelSource(const ModelSource& value) { SetModelSource(value); return *this;}

    /**
     * <p>The source of the model.</p>
     */
    inline ExternalModel& WithModelSource(ModelSource&& value) { SetModelSource(std::move(value)); return *this;}


    /**
     * <p>The role used to invoke the model. </p>
     */
    inline const Aws::String& GetInvokeModelEndpointRoleArn() const{ return m_invokeModelEndpointRoleArn; }

    /**
     * <p>The role used to invoke the model. </p>
     */
    inline bool InvokeModelEndpointRoleArnHasBeenSet() const { return m_invokeModelEndpointRoleArnHasBeenSet; }

    /**
     * <p>The role used to invoke the model. </p>
     */
    inline void SetInvokeModelEndpointRoleArn(const Aws::String& value) { m_invokeModelEndpointRoleArnHasBeenSet = true; m_invokeModelEndpointRoleArn = value; }

    /**
     * <p>The role used to invoke the model. </p>
     */
    inline void SetInvokeModelEndpointRoleArn(Aws::String&& value) { m_invokeModelEndpointRoleArnHasBeenSet = true; m_invokeModelEndpointRoleArn = std::move(value); }

    /**
     * <p>The role used to invoke the model. </p>
     */
    inline void SetInvokeModelEndpointRoleArn(const char* value) { m_invokeModelEndpointRoleArnHasBeenSet = true; m_invokeModelEndpointRoleArn.assign(value); }

    /**
     * <p>The role used to invoke the model. </p>
     */
    inline ExternalModel& WithInvokeModelEndpointRoleArn(const Aws::String& value) { SetInvokeModelEndpointRoleArn(value); return *this;}

    /**
     * <p>The role used to invoke the model. </p>
     */
    inline ExternalModel& WithInvokeModelEndpointRoleArn(Aws::String&& value) { SetInvokeModelEndpointRoleArn(std::move(value)); return *this;}

    /**
     * <p>The role used to invoke the model. </p>
     */
    inline ExternalModel& WithInvokeModelEndpointRoleArn(const char* value) { SetInvokeModelEndpointRoleArn(value); return *this;}


    /**
     * <p>The input configuration.</p>
     */
    inline const ModelInputConfiguration& GetInputConfiguration() const{ return m_inputConfiguration; }

    /**
     * <p>The input configuration.</p>
     */
    inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }

    /**
     * <p>The input configuration.</p>
     */
    inline void SetInputConfiguration(const ModelInputConfiguration& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = value; }

    /**
     * <p>The input configuration.</p>
     */
    inline void SetInputConfiguration(ModelInputConfiguration&& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = std::move(value); }

    /**
     * <p>The input configuration.</p>
     */
    inline ExternalModel& WithInputConfiguration(const ModelInputConfiguration& value) { SetInputConfiguration(value); return *this;}

    /**
     * <p>The input configuration.</p>
     */
    inline ExternalModel& WithInputConfiguration(ModelInputConfiguration&& value) { SetInputConfiguration(std::move(value)); return *this;}


    /**
     * <p>The output configuration.</p>
     */
    inline const ModelOutputConfiguration& GetOutputConfiguration() const{ return m_outputConfiguration; }

    /**
     * <p>The output configuration.</p>
     */
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }

    /**
     * <p>The output configuration.</p>
     */
    inline void SetOutputConfiguration(const ModelOutputConfiguration& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = value; }

    /**
     * <p>The output configuration.</p>
     */
    inline void SetOutputConfiguration(ModelOutputConfiguration&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::move(value); }

    /**
     * <p>The output configuration.</p>
     */
    inline ExternalModel& WithOutputConfiguration(const ModelOutputConfiguration& value) { SetOutputConfiguration(value); return *this;}

    /**
     * <p>The output configuration.</p>
     */
    inline ExternalModel& WithOutputConfiguration(ModelOutputConfiguration&& value) { SetOutputConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Fraud Detector status for the external model endpoint</p>
     */
    inline const ModelEndpointStatus& GetModelEndpointStatus() const{ return m_modelEndpointStatus; }

    /**
     * <p>The Amazon Fraud Detector status for the external model endpoint</p>
     */
    inline bool ModelEndpointStatusHasBeenSet() const { return m_modelEndpointStatusHasBeenSet; }

    /**
     * <p>The Amazon Fraud Detector status for the external model endpoint</p>
     */
    inline void SetModelEndpointStatus(const ModelEndpointStatus& value) { m_modelEndpointStatusHasBeenSet = true; m_modelEndpointStatus = value; }

    /**
     * <p>The Amazon Fraud Detector status for the external model endpoint</p>
     */
    inline void SetModelEndpointStatus(ModelEndpointStatus&& value) { m_modelEndpointStatusHasBeenSet = true; m_modelEndpointStatus = std::move(value); }

    /**
     * <p>The Amazon Fraud Detector status for the external model endpoint</p>
     */
    inline ExternalModel& WithModelEndpointStatus(const ModelEndpointStatus& value) { SetModelEndpointStatus(value); return *this;}

    /**
     * <p>The Amazon Fraud Detector status for the external model endpoint</p>
     */
    inline ExternalModel& WithModelEndpointStatus(ModelEndpointStatus&& value) { SetModelEndpointStatus(std::move(value)); return *this;}


    /**
     * <p>Timestamp of when the model was last updated.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>Timestamp of when the model was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>Timestamp of when the model was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>Timestamp of when the model was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>Timestamp of when the model was last updated.</p>
     */
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }

    /**
     * <p>Timestamp of when the model was last updated.</p>
     */
    inline ExternalModel& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>Timestamp of when the model was last updated.</p>
     */
    inline ExternalModel& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of when the model was last updated.</p>
     */
    inline ExternalModel& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}


    /**
     * <p>Timestamp of when the model was last created.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>Timestamp of when the model was last created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>Timestamp of when the model was last created.</p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>Timestamp of when the model was last created.</p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>Timestamp of when the model was last created.</p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }

    /**
     * <p>Timestamp of when the model was last created.</p>
     */
    inline ExternalModel& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>Timestamp of when the model was last created.</p>
     */
    inline ExternalModel& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of when the model was last created.</p>
     */
    inline ExternalModel& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}


    /**
     * <p>The model ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The model ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The model ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The model ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The model ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The model ARN.</p>
     */
    inline ExternalModel& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The model ARN.</p>
     */
    inline ExternalModel& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The model ARN.</p>
     */
    inline ExternalModel& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_modelEndpoint;
    bool m_modelEndpointHasBeenSet = false;

    ModelSource m_modelSource;
    bool m_modelSourceHasBeenSet = false;

    Aws::String m_invokeModelEndpointRoleArn;
    bool m_invokeModelEndpointRoleArnHasBeenSet = false;

    ModelInputConfiguration m_inputConfiguration;
    bool m_inputConfigurationHasBeenSet = false;

    ModelOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    ModelEndpointStatus m_modelEndpointStatus;
    bool m_modelEndpointStatusHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
