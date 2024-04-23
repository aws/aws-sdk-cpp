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
   * <p>Defines the built-in prompt datasets, built-in metric names and custom metric
   * names, and the task type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationDatasetMetricConfig">AWS
   * API Reference</a></p>
   */
  class EvaluationDatasetMetricConfig
  {
  public:
    AWS_BEDROCK_API EvaluationDatasetMetricConfig();
    AWS_BEDROCK_API EvaluationDatasetMetricConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationDatasetMetricConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The task type you want the model to carry out. </p>
     */
    inline const EvaluationTaskType& GetTaskType() const{ return m_taskType; }

    /**
     * <p>The task type you want the model to carry out. </p>
     */
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }

    /**
     * <p>The task type you want the model to carry out. </p>
     */
    inline void SetTaskType(const EvaluationTaskType& value) { m_taskTypeHasBeenSet = true; m_taskType = value; }

    /**
     * <p>The task type you want the model to carry out. </p>
     */
    inline void SetTaskType(EvaluationTaskType&& value) { m_taskTypeHasBeenSet = true; m_taskType = std::move(value); }

    /**
     * <p>The task type you want the model to carry out. </p>
     */
    inline EvaluationDatasetMetricConfig& WithTaskType(const EvaluationTaskType& value) { SetTaskType(value); return *this;}

    /**
     * <p>The task type you want the model to carry out. </p>
     */
    inline EvaluationDatasetMetricConfig& WithTaskType(EvaluationTaskType&& value) { SetTaskType(std::move(value)); return *this;}


    /**
     * <p>Specifies the prompt dataset.</p>
     */
    inline const EvaluationDataset& GetDataset() const{ return m_dataset; }

    /**
     * <p>Specifies the prompt dataset.</p>
     */
    inline bool DatasetHasBeenSet() const { return m_datasetHasBeenSet; }

    /**
     * <p>Specifies the prompt dataset.</p>
     */
    inline void SetDataset(const EvaluationDataset& value) { m_datasetHasBeenSet = true; m_dataset = value; }

    /**
     * <p>Specifies the prompt dataset.</p>
     */
    inline void SetDataset(EvaluationDataset&& value) { m_datasetHasBeenSet = true; m_dataset = std::move(value); }

    /**
     * <p>Specifies the prompt dataset.</p>
     */
    inline EvaluationDatasetMetricConfig& WithDataset(const EvaluationDataset& value) { SetDataset(value); return *this;}

    /**
     * <p>Specifies the prompt dataset.</p>
     */
    inline EvaluationDatasetMetricConfig& WithDataset(EvaluationDataset&& value) { SetDataset(std::move(value)); return *this;}


    /**
     * <p>The names of the metrics used. For automated model evaluation jobs valid
     * values are <code>"Builtin.Accuracy"</code>, <code>"Builtin.Robustness"</code>,
     * and <code>"Builtin.Toxicity"</code>. In human-based model evaluation jobs the
     * array of strings must match the <code>name</code> parameter specified in
     * <code>HumanEvaluationCustomMetric</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricNames() const{ return m_metricNames; }

    /**
     * <p>The names of the metrics used. For automated model evaluation jobs valid
     * values are <code>"Builtin.Accuracy"</code>, <code>"Builtin.Robustness"</code>,
     * and <code>"Builtin.Toxicity"</code>. In human-based model evaluation jobs the
     * array of strings must match the <code>name</code> parameter specified in
     * <code>HumanEvaluationCustomMetric</code>. </p>
     */
    inline bool MetricNamesHasBeenSet() const { return m_metricNamesHasBeenSet; }

    /**
     * <p>The names of the metrics used. For automated model evaluation jobs valid
     * values are <code>"Builtin.Accuracy"</code>, <code>"Builtin.Robustness"</code>,
     * and <code>"Builtin.Toxicity"</code>. In human-based model evaluation jobs the
     * array of strings must match the <code>name</code> parameter specified in
     * <code>HumanEvaluationCustomMetric</code>. </p>
     */
    inline void SetMetricNames(const Aws::Vector<Aws::String>& value) { m_metricNamesHasBeenSet = true; m_metricNames = value; }

    /**
     * <p>The names of the metrics used. For automated model evaluation jobs valid
     * values are <code>"Builtin.Accuracy"</code>, <code>"Builtin.Robustness"</code>,
     * and <code>"Builtin.Toxicity"</code>. In human-based model evaluation jobs the
     * array of strings must match the <code>name</code> parameter specified in
     * <code>HumanEvaluationCustomMetric</code>. </p>
     */
    inline void SetMetricNames(Aws::Vector<Aws::String>&& value) { m_metricNamesHasBeenSet = true; m_metricNames = std::move(value); }

    /**
     * <p>The names of the metrics used. For automated model evaluation jobs valid
     * values are <code>"Builtin.Accuracy"</code>, <code>"Builtin.Robustness"</code>,
     * and <code>"Builtin.Toxicity"</code>. In human-based model evaluation jobs the
     * array of strings must match the <code>name</code> parameter specified in
     * <code>HumanEvaluationCustomMetric</code>. </p>
     */
    inline EvaluationDatasetMetricConfig& WithMetricNames(const Aws::Vector<Aws::String>& value) { SetMetricNames(value); return *this;}

    /**
     * <p>The names of the metrics used. For automated model evaluation jobs valid
     * values are <code>"Builtin.Accuracy"</code>, <code>"Builtin.Robustness"</code>,
     * and <code>"Builtin.Toxicity"</code>. In human-based model evaluation jobs the
     * array of strings must match the <code>name</code> parameter specified in
     * <code>HumanEvaluationCustomMetric</code>. </p>
     */
    inline EvaluationDatasetMetricConfig& WithMetricNames(Aws::Vector<Aws::String>&& value) { SetMetricNames(std::move(value)); return *this;}

    /**
     * <p>The names of the metrics used. For automated model evaluation jobs valid
     * values are <code>"Builtin.Accuracy"</code>, <code>"Builtin.Robustness"</code>,
     * and <code>"Builtin.Toxicity"</code>. In human-based model evaluation jobs the
     * array of strings must match the <code>name</code> parameter specified in
     * <code>HumanEvaluationCustomMetric</code>. </p>
     */
    inline EvaluationDatasetMetricConfig& AddMetricNames(const Aws::String& value) { m_metricNamesHasBeenSet = true; m_metricNames.push_back(value); return *this; }

    /**
     * <p>The names of the metrics used. For automated model evaluation jobs valid
     * values are <code>"Builtin.Accuracy"</code>, <code>"Builtin.Robustness"</code>,
     * and <code>"Builtin.Toxicity"</code>. In human-based model evaluation jobs the
     * array of strings must match the <code>name</code> parameter specified in
     * <code>HumanEvaluationCustomMetric</code>. </p>
     */
    inline EvaluationDatasetMetricConfig& AddMetricNames(Aws::String&& value) { m_metricNamesHasBeenSet = true; m_metricNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the metrics used. For automated model evaluation jobs valid
     * values are <code>"Builtin.Accuracy"</code>, <code>"Builtin.Robustness"</code>,
     * and <code>"Builtin.Toxicity"</code>. In human-based model evaluation jobs the
     * array of strings must match the <code>name</code> parameter specified in
     * <code>HumanEvaluationCustomMetric</code>. </p>
     */
    inline EvaluationDatasetMetricConfig& AddMetricNames(const char* value) { m_metricNamesHasBeenSet = true; m_metricNames.push_back(value); return *this; }

  private:

    EvaluationTaskType m_taskType;
    bool m_taskTypeHasBeenSet = false;

    EvaluationDataset m_dataset;
    bool m_datasetHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricNames;
    bool m_metricNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
