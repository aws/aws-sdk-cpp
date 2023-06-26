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
    AWS_FRAUDDETECTOR_API EvaluatedExternalModel();
    AWS_FRAUDDETECTOR_API EvaluatedExternalModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API EvaluatedExternalModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The endpoint of the external (Amazon Sagemaker) model. </p>
     */
    inline const Aws::String& GetModelEndpoint() const{ return m_modelEndpoint; }

    /**
     * <p> The endpoint of the external (Amazon Sagemaker) model. </p>
     */
    inline bool ModelEndpointHasBeenSet() const { return m_modelEndpointHasBeenSet; }

    /**
     * <p> The endpoint of the external (Amazon Sagemaker) model. </p>
     */
    inline void SetModelEndpoint(const Aws::String& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = value; }

    /**
     * <p> The endpoint of the external (Amazon Sagemaker) model. </p>
     */
    inline void SetModelEndpoint(Aws::String&& value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint = std::move(value); }

    /**
     * <p> The endpoint of the external (Amazon Sagemaker) model. </p>
     */
    inline void SetModelEndpoint(const char* value) { m_modelEndpointHasBeenSet = true; m_modelEndpoint.assign(value); }

    /**
     * <p> The endpoint of the external (Amazon Sagemaker) model. </p>
     */
    inline EvaluatedExternalModel& WithModelEndpoint(const Aws::String& value) { SetModelEndpoint(value); return *this;}

    /**
     * <p> The endpoint of the external (Amazon Sagemaker) model. </p>
     */
    inline EvaluatedExternalModel& WithModelEndpoint(Aws::String&& value) { SetModelEndpoint(std::move(value)); return *this;}

    /**
     * <p> The endpoint of the external (Amazon Sagemaker) model. </p>
     */
    inline EvaluatedExternalModel& WithModelEndpoint(const char* value) { SetModelEndpoint(value); return *this;}


    /**
     * <p> Indicates whether event variables were used to generate predictions. </p>
     */
    inline bool GetUseEventVariables() const{ return m_useEventVariables; }

    /**
     * <p> Indicates whether event variables were used to generate predictions. </p>
     */
    inline bool UseEventVariablesHasBeenSet() const { return m_useEventVariablesHasBeenSet; }

    /**
     * <p> Indicates whether event variables were used to generate predictions. </p>
     */
    inline void SetUseEventVariables(bool value) { m_useEventVariablesHasBeenSet = true; m_useEventVariables = value; }

    /**
     * <p> Indicates whether event variables were used to generate predictions. </p>
     */
    inline EvaluatedExternalModel& WithUseEventVariables(bool value) { SetUseEventVariables(value); return *this;}


    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInputVariables() const{ return m_inputVariables; }

    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline bool InputVariablesHasBeenSet() const { return m_inputVariablesHasBeenSet; }

    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline void SetInputVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_inputVariablesHasBeenSet = true; m_inputVariables = value; }

    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline void SetInputVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables = std::move(value); }

    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline EvaluatedExternalModel& WithInputVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetInputVariables(value); return *this;}

    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline EvaluatedExternalModel& WithInputVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetInputVariables(std::move(value)); return *this;}

    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline EvaluatedExternalModel& AddInputVariables(const Aws::String& key, const Aws::String& value) { m_inputVariablesHasBeenSet = true; m_inputVariables.emplace(key, value); return *this; }

    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline EvaluatedExternalModel& AddInputVariables(Aws::String&& key, const Aws::String& value) { m_inputVariablesHasBeenSet = true; m_inputVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline EvaluatedExternalModel& AddInputVariables(const Aws::String& key, Aws::String&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline EvaluatedExternalModel& AddInputVariables(Aws::String&& key, Aws::String&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline EvaluatedExternalModel& AddInputVariables(const char* key, Aws::String&& value) { m_inputVariablesHasBeenSet = true; m_inputVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline EvaluatedExternalModel& AddInputVariables(Aws::String&& key, const char* value) { m_inputVariablesHasBeenSet = true; m_inputVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Input variables use for generating predictions. </p>
     */
    inline EvaluatedExternalModel& AddInputVariables(const char* key, const char* value) { m_inputVariablesHasBeenSet = true; m_inputVariables.emplace(key, value); return *this; }


    /**
     * <p> Output variables. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOutputVariables() const{ return m_outputVariables; }

    /**
     * <p> Output variables. </p>
     */
    inline bool OutputVariablesHasBeenSet() const { return m_outputVariablesHasBeenSet; }

    /**
     * <p> Output variables. </p>
     */
    inline void SetOutputVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_outputVariablesHasBeenSet = true; m_outputVariables = value; }

    /**
     * <p> Output variables. </p>
     */
    inline void SetOutputVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables = std::move(value); }

    /**
     * <p> Output variables. </p>
     */
    inline EvaluatedExternalModel& WithOutputVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetOutputVariables(value); return *this;}

    /**
     * <p> Output variables. </p>
     */
    inline EvaluatedExternalModel& WithOutputVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetOutputVariables(std::move(value)); return *this;}

    /**
     * <p> Output variables. </p>
     */
    inline EvaluatedExternalModel& AddOutputVariables(const Aws::String& key, const Aws::String& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(key, value); return *this; }

    /**
     * <p> Output variables. </p>
     */
    inline EvaluatedExternalModel& AddOutputVariables(Aws::String&& key, const Aws::String& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Output variables. </p>
     */
    inline EvaluatedExternalModel& AddOutputVariables(const Aws::String& key, Aws::String&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Output variables. </p>
     */
    inline EvaluatedExternalModel& AddOutputVariables(Aws::String&& key, Aws::String&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Output variables. </p>
     */
    inline EvaluatedExternalModel& AddOutputVariables(const char* key, Aws::String&& value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Output variables. </p>
     */
    inline EvaluatedExternalModel& AddOutputVariables(Aws::String&& key, const char* value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Output variables. </p>
     */
    inline EvaluatedExternalModel& AddOutputVariables(const char* key, const char* value) { m_outputVariablesHasBeenSet = true; m_outputVariables.emplace(key, value); return *this; }

  private:

    Aws::String m_modelEndpoint;
    bool m_modelEndpointHasBeenSet = false;

    bool m_useEventVariables;
    bool m_useEventVariablesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_inputVariables;
    bool m_inputVariablesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_outputVariables;
    bool m_outputVariablesHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
