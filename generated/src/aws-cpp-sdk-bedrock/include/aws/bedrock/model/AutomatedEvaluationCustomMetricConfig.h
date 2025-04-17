/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/CustomMetricEvaluatorModelConfig.h>
#include <aws/bedrock/model/AutomatedEvaluationCustomMetricSource.h>
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
   * <p>Defines the configuration of custom metrics to be used in an evaluation job.
   * To learn more about using custom metrics in Amazon Bedrock evaluation jobs, see
   * <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-custom-metrics-prompt-formats.html">Create
   * a prompt for a custom metrics (LLM-as-a-judge model evaluations)</a> and <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/kb-evaluation-custom-metrics-prompt-formats.html">Create
   * a prompt for a custom metrics (RAG evaluations)</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedEvaluationCustomMetricConfig">AWS
   * API Reference</a></p>
   */
  class AutomatedEvaluationCustomMetricConfig
  {
  public:
    AWS_BEDROCK_API AutomatedEvaluationCustomMetricConfig() = default;
    AWS_BEDROCK_API AutomatedEvaluationCustomMetricConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedEvaluationCustomMetricConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines a list of custom metrics to be used in an Amazon Bedrock evaluation
     * job.</p>
     */
    inline const Aws::Vector<AutomatedEvaluationCustomMetricSource>& GetCustomMetrics() const { return m_customMetrics; }
    inline bool CustomMetricsHasBeenSet() const { return m_customMetricsHasBeenSet; }
    template<typename CustomMetricsT = Aws::Vector<AutomatedEvaluationCustomMetricSource>>
    void SetCustomMetrics(CustomMetricsT&& value) { m_customMetricsHasBeenSet = true; m_customMetrics = std::forward<CustomMetricsT>(value); }
    template<typename CustomMetricsT = Aws::Vector<AutomatedEvaluationCustomMetricSource>>
    AutomatedEvaluationCustomMetricConfig& WithCustomMetrics(CustomMetricsT&& value) { SetCustomMetrics(std::forward<CustomMetricsT>(value)); return *this;}
    template<typename CustomMetricsT = AutomatedEvaluationCustomMetricSource>
    AutomatedEvaluationCustomMetricConfig& AddCustomMetrics(CustomMetricsT&& value) { m_customMetricsHasBeenSet = true; m_customMetrics.emplace_back(std::forward<CustomMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration of the evaluator model you want to use to evaluate custom
     * metrics in an Amazon Bedrock evaluation job.</p>
     */
    inline const CustomMetricEvaluatorModelConfig& GetEvaluatorModelConfig() const { return m_evaluatorModelConfig; }
    inline bool EvaluatorModelConfigHasBeenSet() const { return m_evaluatorModelConfigHasBeenSet; }
    template<typename EvaluatorModelConfigT = CustomMetricEvaluatorModelConfig>
    void SetEvaluatorModelConfig(EvaluatorModelConfigT&& value) { m_evaluatorModelConfigHasBeenSet = true; m_evaluatorModelConfig = std::forward<EvaluatorModelConfigT>(value); }
    template<typename EvaluatorModelConfigT = CustomMetricEvaluatorModelConfig>
    AutomatedEvaluationCustomMetricConfig& WithEvaluatorModelConfig(EvaluatorModelConfigT&& value) { SetEvaluatorModelConfig(std::forward<EvaluatorModelConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutomatedEvaluationCustomMetricSource> m_customMetrics;
    bool m_customMetricsHasBeenSet = false;

    CustomMetricEvaluatorModelConfig m_evaluatorModelConfig;
    bool m_evaluatorModelConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
