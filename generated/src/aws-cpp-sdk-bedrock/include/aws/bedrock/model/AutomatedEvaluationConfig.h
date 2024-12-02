/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/EvaluatorModelConfig.h>
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
    AWS_BEDROCK_API AutomatedEvaluationConfig();
    AWS_BEDROCK_API AutomatedEvaluationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedEvaluationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration details of the prompt datasets and metrics you want to use for
     * your evaluation job.</p>
     */
    inline const Aws::Vector<EvaluationDatasetMetricConfig>& GetDatasetMetricConfigs() const{ return m_datasetMetricConfigs; }
    inline bool DatasetMetricConfigsHasBeenSet() const { return m_datasetMetricConfigsHasBeenSet; }
    inline void SetDatasetMetricConfigs(const Aws::Vector<EvaluationDatasetMetricConfig>& value) { m_datasetMetricConfigsHasBeenSet = true; m_datasetMetricConfigs = value; }
    inline void SetDatasetMetricConfigs(Aws::Vector<EvaluationDatasetMetricConfig>&& value) { m_datasetMetricConfigsHasBeenSet = true; m_datasetMetricConfigs = std::move(value); }
    inline AutomatedEvaluationConfig& WithDatasetMetricConfigs(const Aws::Vector<EvaluationDatasetMetricConfig>& value) { SetDatasetMetricConfigs(value); return *this;}
    inline AutomatedEvaluationConfig& WithDatasetMetricConfigs(Aws::Vector<EvaluationDatasetMetricConfig>&& value) { SetDatasetMetricConfigs(std::move(value)); return *this;}
    inline AutomatedEvaluationConfig& AddDatasetMetricConfigs(const EvaluationDatasetMetricConfig& value) { m_datasetMetricConfigsHasBeenSet = true; m_datasetMetricConfigs.push_back(value); return *this; }
    inline AutomatedEvaluationConfig& AddDatasetMetricConfigs(EvaluationDatasetMetricConfig&& value) { m_datasetMetricConfigsHasBeenSet = true; m_datasetMetricConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains the evaluator model configuration details.
     * <code>EvaluatorModelConfig</code> is required for evaluation jobs that use a
     * knowledge base or in model evaluation job that use a model as judge. This model
     * computes all evaluation related metrics.</p>
     */
    inline const EvaluatorModelConfig& GetEvaluatorModelConfig() const{ return m_evaluatorModelConfig; }
    inline bool EvaluatorModelConfigHasBeenSet() const { return m_evaluatorModelConfigHasBeenSet; }
    inline void SetEvaluatorModelConfig(const EvaluatorModelConfig& value) { m_evaluatorModelConfigHasBeenSet = true; m_evaluatorModelConfig = value; }
    inline void SetEvaluatorModelConfig(EvaluatorModelConfig&& value) { m_evaluatorModelConfigHasBeenSet = true; m_evaluatorModelConfig = std::move(value); }
    inline AutomatedEvaluationConfig& WithEvaluatorModelConfig(const EvaluatorModelConfig& value) { SetEvaluatorModelConfig(value); return *this;}
    inline AutomatedEvaluationConfig& WithEvaluatorModelConfig(EvaluatorModelConfig&& value) { SetEvaluatorModelConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EvaluationDatasetMetricConfig> m_datasetMetricConfigs;
    bool m_datasetMetricConfigsHasBeenSet = false;

    EvaluatorModelConfig m_evaluatorModelConfig;
    bool m_evaluatorModelConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
