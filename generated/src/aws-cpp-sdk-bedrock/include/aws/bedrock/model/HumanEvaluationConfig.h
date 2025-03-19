/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/HumanWorkflowConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/HumanEvaluationCustomMetric.h>
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
   * <p>Specifies the custom metrics, how tasks will be rated, the flow definition
   * ARN, and your custom prompt datasets. Model evaluation jobs use human workers
   * <i>only</i> support the use of custom prompt datasets. To learn more about
   * custom prompt datasets and the required format, see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-evaluation-prompt-datasets-custom.html">Custom
   * prompt datasets</a>.</p> <p>When you create custom metrics in
   * <code>HumanEvaluationCustomMetric</code> you must specify the metric's
   * <code>name</code>. The list of <code>names</code> specified in the
   * <code>HumanEvaluationCustomMetric</code> array, must match the
   * <code>metricNames</code> array of strings specified in
   * <code>EvaluationDatasetMetricConfig</code>. For example, if in the
   * <code>HumanEvaluationCustomMetric</code> array your specified the names
   * <code>"accuracy", "toxicity", "readability"</code> as custom metrics <i>then</i>
   * the <code>metricNames</code> array would need to look like the following
   * <code>["accuracy", "toxicity", "readability"]</code> in
   * <code>EvaluationDatasetMetricConfig</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/HumanEvaluationConfig">AWS
   * API Reference</a></p>
   */
  class HumanEvaluationConfig
  {
  public:
    AWS_BEDROCK_API HumanEvaluationConfig() = default;
    AWS_BEDROCK_API HumanEvaluationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API HumanEvaluationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameters of the human workflow.</p>
     */
    inline const HumanWorkflowConfig& GetHumanWorkflowConfig() const { return m_humanWorkflowConfig; }
    inline bool HumanWorkflowConfigHasBeenSet() const { return m_humanWorkflowConfigHasBeenSet; }
    template<typename HumanWorkflowConfigT = HumanWorkflowConfig>
    void SetHumanWorkflowConfig(HumanWorkflowConfigT&& value) { m_humanWorkflowConfigHasBeenSet = true; m_humanWorkflowConfig = std::forward<HumanWorkflowConfigT>(value); }
    template<typename HumanWorkflowConfigT = HumanWorkflowConfig>
    HumanEvaluationConfig& WithHumanWorkflowConfig(HumanWorkflowConfigT&& value) { SetHumanWorkflowConfig(std::forward<HumanWorkflowConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>HumanEvaluationCustomMetric</code> object. It contains the names the
     * metrics, how the metrics are to be evaluated, an optional description.</p>
     */
    inline const Aws::Vector<HumanEvaluationCustomMetric>& GetCustomMetrics() const { return m_customMetrics; }
    inline bool CustomMetricsHasBeenSet() const { return m_customMetricsHasBeenSet; }
    template<typename CustomMetricsT = Aws::Vector<HumanEvaluationCustomMetric>>
    void SetCustomMetrics(CustomMetricsT&& value) { m_customMetricsHasBeenSet = true; m_customMetrics = std::forward<CustomMetricsT>(value); }
    template<typename CustomMetricsT = Aws::Vector<HumanEvaluationCustomMetric>>
    HumanEvaluationConfig& WithCustomMetrics(CustomMetricsT&& value) { SetCustomMetrics(std::forward<CustomMetricsT>(value)); return *this;}
    template<typename CustomMetricsT = HumanEvaluationCustomMetric>
    HumanEvaluationConfig& AddCustomMetrics(CustomMetricsT&& value) { m_customMetricsHasBeenSet = true; m_customMetrics.emplace_back(std::forward<CustomMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use to specify the metrics, task, and prompt dataset to be used in your model
     * evaluation job.</p>
     */
    inline const Aws::Vector<EvaluationDatasetMetricConfig>& GetDatasetMetricConfigs() const { return m_datasetMetricConfigs; }
    inline bool DatasetMetricConfigsHasBeenSet() const { return m_datasetMetricConfigsHasBeenSet; }
    template<typename DatasetMetricConfigsT = Aws::Vector<EvaluationDatasetMetricConfig>>
    void SetDatasetMetricConfigs(DatasetMetricConfigsT&& value) { m_datasetMetricConfigsHasBeenSet = true; m_datasetMetricConfigs = std::forward<DatasetMetricConfigsT>(value); }
    template<typename DatasetMetricConfigsT = Aws::Vector<EvaluationDatasetMetricConfig>>
    HumanEvaluationConfig& WithDatasetMetricConfigs(DatasetMetricConfigsT&& value) { SetDatasetMetricConfigs(std::forward<DatasetMetricConfigsT>(value)); return *this;}
    template<typename DatasetMetricConfigsT = EvaluationDatasetMetricConfig>
    HumanEvaluationConfig& AddDatasetMetricConfigs(DatasetMetricConfigsT&& value) { m_datasetMetricConfigsHasBeenSet = true; m_datasetMetricConfigs.emplace_back(std::forward<DatasetMetricConfigsT>(value)); return *this; }
    ///@}
  private:

    HumanWorkflowConfig m_humanWorkflowConfig;
    bool m_humanWorkflowConfigHasBeenSet = false;

    Aws::Vector<HumanEvaluationCustomMetric> m_customMetrics;
    bool m_customMetricsHasBeenSet = false;

    Aws::Vector<EvaluationDatasetMetricConfig> m_datasetMetricConfigs;
    bool m_datasetMetricConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
