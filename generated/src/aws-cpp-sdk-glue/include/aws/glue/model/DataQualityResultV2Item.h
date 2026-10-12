/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityAggregatedMetrics.h>
#include <aws/glue/model/DataQualityAnalyzerResult.h>
#include <aws/glue/model/DataQualityObservation.h>
#include <aws/glue/model/DataQualityRuleResult.h>
#include <aws/glue/model/DataSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Describes a data quality result returned by
 * <code>BatchGetDataQualityResultV2</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityResultV2Item">AWS
 * API Reference</a></p>
 */
class DataQualityResultV2Item {
 public:
  AWS_GLUE_API DataQualityResultV2Item() = default;
  AWS_GLUE_API DataQualityResultV2Item(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API DataQualityResultV2Item& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique result ID for the data quality result.</p>
   */
  inline const Aws::String& GetResultId() const { return m_resultId; }
  inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
  template <typename ResultIdT = Aws::String>
  void SetResultId(ResultIdT&& value) {
    m_resultIdHasBeenSet = true;
    m_resultId = std::forward<ResultIdT>(value);
  }
  template <typename ResultIdT = Aws::String>
  DataQualityResultV2Item& WithResultId(ResultIdT&& value) {
    SetResultId(std::forward<ResultIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The table associated with the data quality result, if any.</p>
   */
  inline const DataSource& GetDataSource() const { return m_dataSource; }
  inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
  template <typename DataSourceT = DataSource>
  void SetDataSource(DataSourceT&& value) {
    m_dataSourceHasBeenSet = true;
    m_dataSource = std::forward<DataSourceT>(value);
  }
  template <typename DataSourceT = DataSource>
  DataQualityResultV2Item& WithDataSource(DataSourceT&& value) {
    SetDataSource(std::forward<DataSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of platform-specific identifiers, such as cluster, application,
   * workgroup, or project IDs, that identify where the data quality evaluation
   * ran.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  template <typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
  void SetDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = std::forward<DimensionsT>(value);
  }
  template <typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
  DataQualityResultV2Item& WithDimensions(DimensionsT&& value) {
    SetDimensions(std::forward<DimensionsT>(value));
    return *this;
  }
  template <typename DimensionsKeyT = Aws::String, typename DimensionsValueT = Aws::String>
  DataQualityResultV2Item& AddDimensions(DimensionsKeyT&& key, DimensionsValueT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions.emplace(std::forward<DimensionsKeyT>(key), std::forward<DimensionsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tags associated with the data quality result.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  DataQualityResultV2Item& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  DataQualityResultV2Item& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when this data quality run started.</p>
   */
  inline const Aws::Utils::DateTime& GetExecutionStartedOn() const { return m_executionStartedOn; }
  inline bool ExecutionStartedOnHasBeenSet() const { return m_executionStartedOnHasBeenSet; }
  template <typename ExecutionStartedOnT = Aws::Utils::DateTime>
  void SetExecutionStartedOn(ExecutionStartedOnT&& value) {
    m_executionStartedOnHasBeenSet = true;
    m_executionStartedOn = std::forward<ExecutionStartedOnT>(value);
  }
  template <typename ExecutionStartedOnT = Aws::Utils::DateTime>
  DataQualityResultV2Item& WithExecutionStartedOn(ExecutionStartedOnT&& value) {
    SetExecutionStartedOn(std::forward<ExecutionStartedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when this data quality run completed.</p>
   */
  inline const Aws::Utils::DateTime& GetExecutionCompletedOn() const { return m_executionCompletedOn; }
  inline bool ExecutionCompletedOnHasBeenSet() const { return m_executionCompletedOnHasBeenSet; }
  template <typename ExecutionCompletedOnT = Aws::Utils::DateTime>
  void SetExecutionCompletedOn(ExecutionCompletedOnT&& value) {
    m_executionCompletedOnHasBeenSet = true;
    m_executionCompletedOn = std::forward<ExecutionCompletedOnT>(value);
  }
  template <typename ExecutionCompletedOnT = Aws::Utils::DateTime>
  DataQualityResultV2Item& WithExecutionCompletedOn(ExecutionCompletedOnT&& value) {
    SetExecutionCompletedOn(std::forward<ExecutionCompletedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when this data quality result was published.</p>
   */
  inline const Aws::Utils::DateTime& GetResultPublishedOn() const { return m_resultPublishedOn; }
  inline bool ResultPublishedOnHasBeenSet() const { return m_resultPublishedOnHasBeenSet; }
  template <typename ResultPublishedOnT = Aws::Utils::DateTime>
  void SetResultPublishedOn(ResultPublishedOnT&& value) {
    m_resultPublishedOnHasBeenSet = true;
    m_resultPublishedOn = std::forward<ResultPublishedOnT>(value);
  }
  template <typename ResultPublishedOnT = Aws::Utils::DateTime>
  DataQualityResultV2Item& WithResultPublishedOn(ResultPublishedOnT&& value) {
    SetResultPublishedOn(std::forward<ResultPublishedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An aggregate data quality score. Represents the ratio of rules that passed to
   * the total number of rules.</p>
   */
  inline double GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(double value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline DataQualityResultV2Item& WithScore(double value) {
    SetScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>DataQualityRuleResult</code> objects representing the results
   * for each rule.</p>
   */
  inline const Aws::Vector<DataQualityRuleResult>& GetRuleResults() const { return m_ruleResults; }
  inline bool RuleResultsHasBeenSet() const { return m_ruleResultsHasBeenSet; }
  template <typename RuleResultsT = Aws::Vector<DataQualityRuleResult>>
  void SetRuleResults(RuleResultsT&& value) {
    m_ruleResultsHasBeenSet = true;
    m_ruleResults = std::forward<RuleResultsT>(value);
  }
  template <typename RuleResultsT = Aws::Vector<DataQualityRuleResult>>
  DataQualityResultV2Item& WithRuleResults(RuleResultsT&& value) {
    SetRuleResults(std::forward<RuleResultsT>(value));
    return *this;
  }
  template <typename RuleResultsT = DataQualityRuleResult>
  DataQualityResultV2Item& AddRuleResults(RuleResultsT&& value) {
    m_ruleResultsHasBeenSet = true;
    m_ruleResults.emplace_back(std::forward<RuleResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>DataQualityAnalyzerResult</code> objects representing the
   * results for each analyzer.</p>
   */
  inline const Aws::Vector<DataQualityAnalyzerResult>& GetAnalyzerResults() const { return m_analyzerResults; }
  inline bool AnalyzerResultsHasBeenSet() const { return m_analyzerResultsHasBeenSet; }
  template <typename AnalyzerResultsT = Aws::Vector<DataQualityAnalyzerResult>>
  void SetAnalyzerResults(AnalyzerResultsT&& value) {
    m_analyzerResultsHasBeenSet = true;
    m_analyzerResults = std::forward<AnalyzerResultsT>(value);
  }
  template <typename AnalyzerResultsT = Aws::Vector<DataQualityAnalyzerResult>>
  DataQualityResultV2Item& WithAnalyzerResults(AnalyzerResultsT&& value) {
    SetAnalyzerResults(std::forward<AnalyzerResultsT>(value));
    return *this;
  }
  template <typename AnalyzerResultsT = DataQualityAnalyzerResult>
  DataQualityResultV2Item& AddAnalyzerResults(AnalyzerResultsT&& value) {
    m_analyzerResultsHasBeenSet = true;
    m_analyzerResults.emplace_back(std::forward<AnalyzerResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>DataQualityObservation</code> objects representing the
   * anomaly detection observations generated after evaluating the rules and
   * analyzers.</p>
   */
  inline const Aws::Vector<DataQualityObservation>& GetObservations() const { return m_observations; }
  inline bool ObservationsHasBeenSet() const { return m_observationsHasBeenSet; }
  template <typename ObservationsT = Aws::Vector<DataQualityObservation>>
  void SetObservations(ObservationsT&& value) {
    m_observationsHasBeenSet = true;
    m_observations = std::forward<ObservationsT>(value);
  }
  template <typename ObservationsT = Aws::Vector<DataQualityObservation>>
  DataQualityResultV2Item& WithObservations(ObservationsT&& value) {
    SetObservations(std::forward<ObservationsT>(value));
    return *this;
  }
  template <typename ObservationsT = DataQualityObservation>
  DataQualityResultV2Item& AddObservations(ObservationsT&& value) {
    m_observationsHasBeenSet = true;
    m_observations.emplace_back(std::forward<ObservationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evaluation context for the data quality result. This value identifies a
   * specific data quality result, or a series of related results, within a run.</p>
   */
  inline const Aws::String& GetEvaluationContext() const { return m_evaluationContext; }
  inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }
  template <typename EvaluationContextT = Aws::String>
  void SetEvaluationContext(EvaluationContextT&& value) {
    m_evaluationContextHasBeenSet = true;
    m_evaluationContext = std::forward<EvaluationContextT>(value);
  }
  template <typename EvaluationContextT = Aws::String>
  DataQualityResultV2Item& WithEvaluationContext(EvaluationContextT&& value) {
    SetEvaluationContext(std::forward<EvaluationContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of user-provided descriptors that add contextual metadata and
   * configuration to the data quality result, such as database name, table name,
   * team, or environment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDescriptors() const { return m_descriptors; }
  inline bool DescriptorsHasBeenSet() const { return m_descriptorsHasBeenSet; }
  template <typename DescriptorsT = Aws::Map<Aws::String, Aws::String>>
  void SetDescriptors(DescriptorsT&& value) {
    m_descriptorsHasBeenSet = true;
    m_descriptors = std::forward<DescriptorsT>(value);
  }
  template <typename DescriptorsT = Aws::Map<Aws::String, Aws::String>>
  DataQualityResultV2Item& WithDescriptors(DescriptorsT&& value) {
    SetDescriptors(std::forward<DescriptorsT>(value));
    return *this;
  }
  template <typename DescriptorsKeyT = Aws::String, typename DescriptorsValueT = Aws::String>
  DataQualityResultV2Item& AddDescriptors(DescriptorsKeyT&& key, DescriptorsValueT&& value) {
    m_descriptorsHasBeenSet = true;
    m_descriptors.emplace(std::forward<DescriptorsKeyT>(key), std::forward<DescriptorsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of <code>DataQualityAggregatedMetrics</code> objects showing the
   * total counts of processed rows and rules, including their pass/fail statistics
   * based on row-level results.</p>
   */
  inline const DataQualityAggregatedMetrics& GetAggregatedMetrics() const { return m_aggregatedMetrics; }
  inline bool AggregatedMetricsHasBeenSet() const { return m_aggregatedMetricsHasBeenSet; }
  template <typename AggregatedMetricsT = DataQualityAggregatedMetrics>
  void SetAggregatedMetrics(AggregatedMetricsT&& value) {
    m_aggregatedMetricsHasBeenSet = true;
    m_aggregatedMetrics = std::forward<AggregatedMetricsT>(value);
  }
  template <typename AggregatedMetricsT = DataQualityAggregatedMetrics>
  DataQualityResultV2Item& WithAggregatedMetrics(AggregatedMetricsT&& value) {
    SetAggregatedMetrics(std::forward<AggregatedMetricsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the ruleset associated with the data quality result.</p>
   */
  inline const Aws::String& GetRulesetName() const { return m_rulesetName; }
  inline bool RulesetNameHasBeenSet() const { return m_rulesetNameHasBeenSet; }
  template <typename RulesetNameT = Aws::String>
  void SetRulesetName(RulesetNameT&& value) {
    m_rulesetNameHasBeenSet = true;
    m_rulesetName = std::forward<RulesetNameT>(value);
  }
  template <typename RulesetNameT = Aws::String>
  DataQualityResultV2Item& WithRulesetName(RulesetNameT&& value) {
    SetRulesetName(std::forward<RulesetNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resultId;

  DataSource m_dataSource;

  Aws::Map<Aws::String, Aws::String> m_dimensions;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::Utils::DateTime m_executionStartedOn{};

  Aws::Utils::DateTime m_executionCompletedOn{};

  Aws::Utils::DateTime m_resultPublishedOn{};

  double m_score{0.0};

  Aws::Vector<DataQualityRuleResult> m_ruleResults;

  Aws::Vector<DataQualityAnalyzerResult> m_analyzerResults;

  Aws::Vector<DataQualityObservation> m_observations;

  Aws::String m_evaluationContext;

  Aws::Map<Aws::String, Aws::String> m_descriptors;

  DataQualityAggregatedMetrics m_aggregatedMetrics;

  Aws::String m_rulesetName;
  bool m_resultIdHasBeenSet = false;
  bool m_dataSourceHasBeenSet = false;
  bool m_dimensionsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_executionStartedOnHasBeenSet = false;
  bool m_executionCompletedOnHasBeenSet = false;
  bool m_resultPublishedOnHasBeenSet = false;
  bool m_scoreHasBeenSet = false;
  bool m_ruleResultsHasBeenSet = false;
  bool m_analyzerResultsHasBeenSet = false;
  bool m_observationsHasBeenSet = false;
  bool m_evaluationContextHasBeenSet = false;
  bool m_descriptorsHasBeenSet = false;
  bool m_aggregatedMetricsHasBeenSet = false;
  bool m_rulesetNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
