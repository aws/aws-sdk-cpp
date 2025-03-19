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
    AWS_FRAUDDETECTOR_API ExternalModel() = default;
    AWS_FRAUDDETECTOR_API ExternalModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API ExternalModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon SageMaker model endpoints.</p>
     */
    inline const Aws::String& GetModelEndpoint() const { return m_modelEndpoint; }
    inline bool ModelEndpointHasBeenSet() const { return m_modelEndpointHasBeenSet; }
    template<typename ModelEndpointT = Aws::String>
    void SetModelEndpoint(ModelEndpointT&& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = std::forward<ModelEndpointT>(value); }
    template<typename ModelEndpointT = Aws::String>
    ExternalModel& WithModelEndpoint(ModelEndpointT&& value) { SetModelEndpoint(std::forward<ModelEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the model.</p>
     */
    inline ModelSource GetModelSource() const { return m_modelSource; }
    inline bool ModelSourceHasBeenSet() const { return m_modelSourceHasBeenSet; }
    inline void SetModelSource(ModelSource value) { m_modelSourceHasBeenSet = true; m_modelSource = value; }
    inline ExternalModel& WithModelSource(ModelSource value) { SetModelSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role used to invoke the model. </p>
     */
    inline const Aws::String& GetInvokeModelEndpointRoleArn() const { return m_invokeModelEndpointRoleArn; }
    inline bool InvokeModelEndpointRoleArnHasBeenSet() const { return m_invokeModelEndpointRoleArnHasBeenSet; }
    template<typename InvokeModelEndpointRoleArnT = Aws::String>
    void SetInvokeModelEndpointRoleArn(InvokeModelEndpointRoleArnT&& value) { m_invokeModelEndpointRoleArnHasBeenSet = true; m_invokeModelEndpointRoleArn = std::forward<InvokeModelEndpointRoleArnT>(value); }
    template<typename InvokeModelEndpointRoleArnT = Aws::String>
    ExternalModel& WithInvokeModelEndpointRoleArn(InvokeModelEndpointRoleArnT&& value) { SetInvokeModelEndpointRoleArn(std::forward<InvokeModelEndpointRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input configuration.</p>
     */
    inline const ModelInputConfiguration& GetInputConfiguration() const { return m_inputConfiguration; }
    inline bool InputConfigurationHasBeenSet() const { return m_inputConfigurationHasBeenSet; }
    template<typename InputConfigurationT = ModelInputConfiguration>
    void SetInputConfiguration(InputConfigurationT&& value) { m_inputConfigurationHasBeenSet = true; m_inputConfiguration = std::forward<InputConfigurationT>(value); }
    template<typename InputConfigurationT = ModelInputConfiguration>
    ExternalModel& WithInputConfiguration(InputConfigurationT&& value) { SetInputConfiguration(std::forward<InputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration.</p>
     */
    inline const ModelOutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    template<typename OutputConfigurationT = ModelOutputConfiguration>
    void SetOutputConfiguration(OutputConfigurationT&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::forward<OutputConfigurationT>(value); }
    template<typename OutputConfigurationT = ModelOutputConfiguration>
    ExternalModel& WithOutputConfiguration(OutputConfigurationT&& value) { SetOutputConfiguration(std::forward<OutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Fraud Detector status for the external model endpoint</p>
     */
    inline ModelEndpointStatus GetModelEndpointStatus() const { return m_modelEndpointStatus; }
    inline bool ModelEndpointStatusHasBeenSet() const { return m_modelEndpointStatusHasBeenSet; }
    inline void SetModelEndpointStatus(ModelEndpointStatus value) { m_modelEndpointStatusHasBeenSet = true; m_modelEndpointStatus = value; }
    inline ExternalModel& WithModelEndpointStatus(ModelEndpointStatus value) { SetModelEndpointStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the model was last updated.</p>
     */
    inline const Aws::String& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::String>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::String>
    ExternalModel& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the model was last created.</p>
     */
    inline const Aws::String& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::String>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::String>
    ExternalModel& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ExternalModel& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelEndpoint;
    bool m_modelEndpointHasBeenSet = false;

    ModelSource m_modelSource{ModelSource::NOT_SET};
    bool m_modelSourceHasBeenSet = false;

    Aws::String m_invokeModelEndpointRoleArn;
    bool m_invokeModelEndpointRoleArnHasBeenSet = false;

    ModelInputConfiguration m_inputConfiguration;
    bool m_inputConfigurationHasBeenSet = false;

    ModelOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    ModelEndpointStatus m_modelEndpointStatus{ModelEndpointStatus::NOT_SET};
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
