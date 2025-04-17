/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/EvaluationTaskType.h>
#include <aws/bedrock/model/EvaluationDataset.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines the prompt datasets, built-in metric names and custom metric names,
   * and the task type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationDatasetMetricConfig">AWS
   * API Reference</a></p>
   */
  class EvaluationDatasetMetricConfig
  {
  public:
    AWS_BEDROCK_API EvaluationDatasetMetricConfig() = default;
    AWS_BEDROCK_API EvaluationDatasetMetricConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationDatasetMetricConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The the type of task you want to evaluate for your evaluation job. This
     * applies only to model evaluation jobs and is ignored for knowledge base
     * evaluation jobs.</p>
     */
    inline EvaluationTaskType GetTaskType() const { return m_taskType; }
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }
    inline void SetTaskType(EvaluationTaskType value) { m_taskTypeHasBeenSet = true; m_taskType = value; }
    inline EvaluationDatasetMetricConfig& WithTaskType(EvaluationTaskType value) { SetTaskType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the prompt dataset.</p>
     */
    inline const EvaluationDataset& GetDataset() const { return m_dataset; }
    inline bool DatasetHasBeenSet() const { return m_datasetHasBeenSet; }
    template<typename DatasetT = EvaluationDataset>
    void SetDataset(DatasetT&& value) { m_datasetHasBeenSet = true; m_dataset = std::forward<DatasetT>(value); }
    template<typename DatasetT = EvaluationDataset>
    EvaluationDatasetMetricConfig& WithDataset(DatasetT&& value) { SetDataset(std::forward<DatasetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the metrics you want to use for your evaluation job.</p> <p>For
     * knowledge base evaluation jobs that evaluate retrieval only, valid values are
     * "<code>Builtin.ContextRelevance</code>",
     * "<code>Builtin.ContextCoverage</code>".</p> <p>For knowledge base evaluation
     * jobs that evaluate retrieval with response generation, valid values are
     * "<code>Builtin.Correctness</code>", "<code>Builtin.Completeness</code>",
     * "<code>Builtin.Helpfulness</code>", "<code>Builtin.LogicalCoherence</code>",
     * "<code>Builtin.Faithfulness</code>", "<code>Builtin.Harmfulness</code>",
     * "<code>Builtin.Stereotyping</code>", "<code>Builtin.Refusal</code>".</p> <p>For
     * automated model evaluation jobs, valid values are
     * "<code>Builtin.Accuracy</code>", "<code>Builtin.Robustness</code>", and
     * "<code>Builtin.Toxicity</code>". In model evaluation jobs that use a LLM as
     * judge you can specify "<code>Builtin.Correctness</code>",
     * "<code>Builtin.Completeness"</code>, "<code>Builtin.Faithfulness"</code>,
     * "<code>Builtin.Helpfulness</code>", "<code>Builtin.Coherence</code>",
     * "<code>Builtin.Relevance</code>", "<code>Builtin.FollowingInstructions</code>",
     * "<code>Builtin.ProfessionalStyleAndTone</code>", You can also specify the
     * following responsible AI related metrics only for model evaluation job that use
     * a LLM as judge "<code>Builtin.Harmfulness</code>",
     * "<code>Builtin.Stereotyping</code>", and "<code>Builtin.Refusal</code>".</p>
     * <p>For human-based model evaluation jobs, the list of strings must match the
     * <code>name</code> parameter specified in
     * <code>HumanEvaluationCustomMetric</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricNames() const { return m_metricNames; }
    inline bool MetricNamesHasBeenSet() const { return m_metricNamesHasBeenSet; }
    template<typename MetricNamesT = Aws::Vector<Aws::String>>
    void SetMetricNames(MetricNamesT&& value) { m_metricNamesHasBeenSet = true; m_metricNames = std::forward<MetricNamesT>(value); }
    template<typename MetricNamesT = Aws::Vector<Aws::String>>
    EvaluationDatasetMetricConfig& WithMetricNames(MetricNamesT&& value) { SetMetricNames(std::forward<MetricNamesT>(value)); return *this;}
    template<typename MetricNamesT = Aws::String>
    EvaluationDatasetMetricConfig& AddMetricNames(MetricNamesT&& value) { m_metricNamesHasBeenSet = true; m_metricNames.emplace_back(std::forward<MetricNamesT>(value)); return *this; }
    ///@}
  private:

    EvaluationTaskType m_taskType{EvaluationTaskType::NOT_SET};
    bool m_taskTypeHasBeenSet = false;

    EvaluationDataset m_dataset;
    bool m_datasetHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricNames;
    bool m_metricNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
