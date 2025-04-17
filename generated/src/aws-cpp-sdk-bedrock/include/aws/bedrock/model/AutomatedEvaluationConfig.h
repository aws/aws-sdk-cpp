/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/EvaluatorModelConfig.h>
#include <aws/bedrock/model/AutomatedEvaluationCustomMetricConfig.h>
#include <aws/bedrock/model/EvaluationDatasetMetricConfig.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>The configuration details of an automated evaluation job. The
   * <code>EvaluationDatasetMetricConfig</code> object is used to specify the prompt
   * datasets, task type, and metric names.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedEvaluationConfig">AWS
   * API Reference</a></p>
   */
  class AutomatedEvaluationConfig
  {
  public:
    AWS_BEDROCK_API AutomatedEvaluationConfig() = default;
    AWS_BEDROCK_API AutomatedEvaluationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedEvaluationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration details of the prompt datasets and metrics you want to use for
     * your evaluation job.</p>
     */
    inline const Aws::Vector<EvaluationDatasetMetricConfig>& GetDatasetMetricConfigs() const { return m_datasetMetricConfigs; }
    inline bool DatasetMetricConfigsHasBeenSet() const { return m_datasetMetricConfigsHasBeenSet; }
    template<typename DatasetMetricConfigsT = Aws::Vector<EvaluationDatasetMetricConfig>>
    void SetDatasetMetricConfigs(DatasetMetricConfigsT&& value) { m_datasetMetricConfigsHasBeenSet = true; m_datasetMetricConfigs = std::forward<DatasetMetricConfigsT>(value); }
    template<typename DatasetMetricConfigsT = Aws::Vector<EvaluationDatasetMetricConfig>>
    AutomatedEvaluationConfig& WithDatasetMetricConfigs(DatasetMetricConfigsT&& value) { SetDatasetMetricConfigs(std::forward<DatasetMetricConfigsT>(value)); return *this;}
    template<typename DatasetMetricConfigsT = EvaluationDatasetMetricConfig>
    AutomatedEvaluationConfig& AddDatasetMetricConfigs(DatasetMetricConfigsT&& value) { m_datasetMetricConfigsHasBeenSet = true; m_datasetMetricConfigs.emplace_back(std::forward<DatasetMetricConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the evaluator model configuration details.
     * <code>EvaluatorModelConfig</code> is required for evaluation jobs that use a
     * knowledge base or in model evaluation job that use a model as judge. This model
     * computes all evaluation related metrics.</p>
     */
    inline const EvaluatorModelConfig& GetEvaluatorModelConfig() const { return m_evaluatorModelConfig; }
    inline bool EvaluatorModelConfigHasBeenSet() const { return m_evaluatorModelConfigHasBeenSet; }
    template<typename EvaluatorModelConfigT = EvaluatorModelConfig>
    void SetEvaluatorModelConfig(EvaluatorModelConfigT&& value) { m_evaluatorModelConfigHasBeenSet = true; m_evaluatorModelConfig = std::forward<EvaluatorModelConfigT>(value); }
    template<typename EvaluatorModelConfigT = EvaluatorModelConfig>
    AutomatedEvaluationConfig& WithEvaluatorModelConfig(EvaluatorModelConfigT&& value) { SetEvaluatorModelConfig(std::forward<EvaluatorModelConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the configuration of custom metrics to be used in an evaluation
     * job.</p>
     */
    inline const AutomatedEvaluationCustomMetricConfig& GetCustomMetricConfig() const { return m_customMetricConfig; }
    inline bool CustomMetricConfigHasBeenSet() const { return m_customMetricConfigHasBeenSet; }
    template<typename CustomMetricConfigT = AutomatedEvaluationCustomMetricConfig>
    void SetCustomMetricConfig(CustomMetricConfigT&& value) { m_customMetricConfigHasBeenSet = true; m_customMetricConfig = std::forward<CustomMetricConfigT>(value); }
    template<typename CustomMetricConfigT = AutomatedEvaluationCustomMetricConfig>
    AutomatedEvaluationConfig& WithCustomMetricConfig(CustomMetricConfigT&& value) { SetCustomMetricConfig(std::forward<CustomMetricConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EvaluationDatasetMetricConfig> m_datasetMetricConfigs;
    bool m_datasetMetricConfigsHasBeenSet = false;

    EvaluatorModelConfig m_evaluatorModelConfig;
    bool m_evaluatorModelConfigHasBeenSet = false;

    AutomatedEvaluationCustomMetricConfig m_customMetricConfig;
    bool m_customMetricConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
