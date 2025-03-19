/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p> The details of the external (Amazon Sagemaker) model evaluated for
   * generating predictions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/EvaluatedExternalModel">AWS
   * API Reference</a></p>
   */
  class EvaluatedExternalModel
  {
  public:
    AWS_FRAUDDETECTOR_API EvaluatedExternalModel() = default;
    AWS_FRAUDDETECTOR_API EvaluatedExternalModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API EvaluatedExternalModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The endpoint of the external (Amazon Sagemaker) model. </p>
     */
    inline const Aws::String& GetModelEndpoint() const { return m_modelEndpoint; }
    inline bool ModelEndpointHasBeenSet() const { return m_modelEndpointHasBeenSet; }
    template<typename ModelEndpointT = Aws::String>
    void SetModelEndpoint(ModelEndpointT&& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = std::forward<ModelEndpointT>(value); }
    template<typename ModelEndpointT = Aws::String>
    EvaluatedExternalModel& WithModelEndpoint(ModelEndpointT&& value) { SetModelEndpoint(std::forward<ModelEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether event variables were used to generate predictions. </p>
     */
    inline bool GetUseEventVariables() const { return m_useEventVariables; }
    inline bool UseEventVariablesHasBeenSet() const { return m_useEventVariablesHasBeenSet; }
    inline void SetUseEventVariables(bool value) { m_useEventVariablesHasBeenSet = true; m_useEventVariables = value; }
    inline EvaluatedExternalModel& WithUseEventVariables(bool value) { SetUseEventVariables(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInputVariables() const { return m_inputVariables; }
    inline bool InputVariablesHasBeenSet() const { return m_inputVariablesHasBeenSet; }
    template<typename InputVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetInputVariables(InputVariablesT&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables = std::forward<InputVariablesT>(value); }
    template<typename InputVariablesT = Aws::Map<Aws::String, Aws::String>>
    EvaluatedExternalModel& WithInputVariables(InputVariablesT&& value) { SetInputVariables(std::forward<InputVariablesT>(value)); return *this;}
    template<typename InputVariablesKeyT = Aws::String, typename InputVariablesValueT = Aws::String>
    EvaluatedExternalModel& AddInputVariables(InputVariablesKeyT&& key, InputVariablesValueT&& value) {
      m_inputVariablesHasBeenSet = true; m_inputVariables.emplace(std::forward<InputVariablesKeyT>(key), std::forward<InputVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> Output variables. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOutputVariables() const { return m_outputVariables; }
    inline bool OutputVariablesHasBeenSet() const { return m_outputVariablesHasBeenSet; }
    template<typename OutputVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetOutputVariables(OutputVariablesT&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables = std::forward<OutputVariablesT>(value); }
    template<typename OutputVariablesT = Aws::Map<Aws::String, Aws::String>>
    EvaluatedExternalModel& WithOutputVariables(OutputVariablesT&& value) { SetOutputVariables(std::forward<OutputVariablesT>(value)); return *this;}
    template<typename OutputVariablesKeyT = Aws::String, typename OutputVariablesValueT = Aws::String>
    EvaluatedExternalModel& AddOutputVariables(OutputVariablesKeyT&& key, OutputVariablesValueT&& value) {
      m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(std::forward<OutputVariablesKeyT>(key), std::forward<OutputVariablesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_modelEndpoint;
    bool m_modelEndpointHasBeenSet = false;

    bool m_useEventVariables{false};
    bool m_useEventVariablesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_inputVariables;
    bool m_inputVariablesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_outputVariables;
    bool m_outputVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
