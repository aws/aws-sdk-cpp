/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
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
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {
class GetDataQualityResultV2Result {
 public:
  AWS_GLUE_API GetDataQualityResultV2Result() = default;
  AWS_GLUE_API GetDataQualityResultV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GLUE_API GetDataQualityResultV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A unique result ID for the data quality result.</p>
   */
  inline const Aws::String& GetResultId() const { return m_resultId; }
  template <typename ResultIdT = Aws::String>
  void SetResultId(ResultIdT&& value) {
    m_resultIdHasBeenSet = true;
    m_resultId = std::forward<ResultIdT>(value);
  }
  template <typename ResultIdT = Aws::String>
  GetDataQualityResultV2Result& WithResultId(ResultIdT&& value) {
    SetResultId(std::forward<ResultIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The table associated with the data quality result, if any.</p>
   */
  inline const DataSource& GetDataSource() const { return m_dataSource; }
  template <typename DataSourceT = DataSource>
  void SetDataSource(DataSourceT&& value) {
    m_dataSourceHasBeenSet = true;
    m_dataSource = std::forward<DataSourceT>(value);
  }
  template <typename DataSourceT = DataSource>
  GetDataQualityResultV2Result& WithDataSource(DataSourceT&& value) {
    SetDataSource(std::forward<DataSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Profile ID for the data quality result.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  GetDataQualityResultV2Result& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
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
  template <typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
  void SetDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = std::forward<DimensionsT>(value);
  }
  template <typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
  GetDataQualityResultV2Result& WithDimensions(DimensionsT&& value) {
    SetDimensions(std::forward<DimensionsT>(value));
    return *this;
  }
  template <typename DimensionsKeyT = Aws::String, typename DimensionsValueT = Aws::String>
  GetDataQualityResultV2Result& AddDimensions(DimensionsKeyT&& key, DimensionsValueT&& value) {
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
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetDataQualityResultV2Result& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetDataQualityResultV2Result& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  template <typename ExecutionStartedOnT = Aws::Utils::DateTime>
  void SetExecutionStartedOn(ExecutionStartedOnT&& value) {
    m_executionStartedOnHasBeenSet = true;
    m_executionStartedOn = std::forward<ExecutionStartedOnT>(value);
  }
  template <typename ExecutionStartedOnT = Aws::Utils::DateTime>
  GetDataQualityResultV2Result& WithExecutionStartedOn(ExecutionStartedOnT&& value) {
    SetExecutionStartedOn(std::forward<ExecutionStartedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when this data quality run completed.</p>
   */
  inline const Aws::Utils::DateTime& GetExecutionCompletedOn() const { return m_executionCompletedOn; }
  template <typename ExecutionCompletedOnT = Aws::Utils::DateTime>
  void SetExecutionCompletedOn(ExecutionCompletedOnT&& value) {
    m_executionCompletedOnHasBeenSet = true;
    m_executionCompletedOn = std::forward<ExecutionCompletedOnT>(value);
  }
  template <typename ExecutionCompletedOnT = Aws::Utils::DateTime>
  GetDataQualityResultV2Result& WithExecutionCompletedOn(ExecutionCompletedOnT&& value) {
    SetExecutionCompletedOn(std::forward<ExecutionCompletedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when this data quality result was published.</p>
   */
  inline const Aws::Utils::DateTime& GetResultPublishedOn() const { return m_resultPublishedOn; }
  template <typename ResultPublishedOnT = Aws::Utils::DateTime>
  void SetResultPublishedOn(ResultPublishedOnT&& value) {
    m_resultPublishedOnHasBeenSet = true;
    m_resultPublishedOn = std::forward<ResultPublishedOnT>(value);
  }
  template <typename ResultPublishedOnT = Aws::Utils::DateTime>
  GetDataQualityResultV2Result& WithResultPublishedOn(ResultPublishedOnT&& value) {
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
  inline void SetScore(double value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline GetDataQualityResultV2Result& WithScore(double value) {
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
  template <typename RuleResultsT = Aws::Vector<DataQualityRuleResult>>
  void SetRuleResults(RuleResultsT&& value) {
    m_ruleResultsHasBeenSet = true;
    m_ruleResults = std::forward<RuleResultsT>(value);
  }
  template <typename RuleResultsT = Aws::Vector<DataQualityRuleResult>>
  GetDataQualityResultV2Result& WithRuleResults(RuleResultsT&& value) {
    SetRuleResults(std::forward<RuleResultsT>(value));
    return *this;
  }
  template <typename RuleResultsT = DataQualityRuleResult>
  GetDataQualityResultV2Result& AddRuleResults(RuleResultsT&& value) {
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
  template <typename AnalyzerResultsT = Aws::Vector<DataQualityAnalyzerResult>>
  void SetAnalyzerResults(AnalyzerResultsT&& value) {
    m_analyzerResultsHasBeenSet = true;
    m_analyzerResults = std::forward<AnalyzerResultsT>(value);
  }
  template <typename AnalyzerResultsT = Aws::Vector<DataQualityAnalyzerResult>>
  GetDataQualityResultV2Result& WithAnalyzerResults(AnalyzerResultsT&& value) {
    SetAnalyzerResults(std::forward<AnalyzerResultsT>(value));
    return *this;
  }
  template <typename AnalyzerResultsT = DataQualityAnalyzerResult>
  GetDataQualityResultV2Result& AddAnalyzerResults(AnalyzerResultsT&& value) {
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
  template <typename ObservationsT = Aws::Vector<DataQualityObservation>>
  void SetObservations(ObservationsT&& value) {
    m_observationsHasBeenSet = true;
    m_observations = std::forward<ObservationsT>(value);
  }
  template <typename ObservationsT = Aws::Vector<DataQualityObservation>>
  GetDataQualityResultV2Result& WithObservations(ObservationsT&& value) {
    SetObservations(std::forward<ObservationsT>(value));
    return *this;
  }
  template <typename ObservationsT = DataQualityObservation>
  GetDataQualityResultV2Result& AddObservations(ObservationsT&& value) {
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
  template <typename EvaluationContextT = Aws::String>
  void SetEvaluationContext(EvaluationContextT&& value) {
    m_evaluationContextHasBeenSet = true;
    m_evaluationContext = std::forward<EvaluationContextT>(value);
  }
  template <typename EvaluationContextT = Aws::String>
  GetDataQualityResultV2Result& WithEvaluationContext(EvaluationContextT&& value) {
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
  template <typename DescriptorsT = Aws::Map<Aws::String, Aws::String>>
  void SetDescriptors(DescriptorsT&& value) {
    m_descriptorsHasBeenSet = true;
    m_descriptors = std::forward<DescriptorsT>(value);
  }
  template <typename DescriptorsT = Aws::Map<Aws::String, Aws::String>>
  GetDataQualityResultV2Result& WithDescriptors(DescriptorsT&& value) {
    SetDescriptors(std::forward<DescriptorsT>(value));
    return *this;
  }
  template <typename DescriptorsKeyT = Aws::String, typename DescriptorsValueT = Aws::String>
  GetDataQualityResultV2Result& AddDescriptors(DescriptorsKeyT&& key, DescriptorsValueT&& value) {
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
  template <typename AggregatedMetricsT = DataQualityAggregatedMetrics>
  void SetAggregatedMetrics(AggregatedMetricsT&& value) {
    m_aggregatedMetricsHasBeenSet = true;
    m_aggregatedMetrics = std::forward<AggregatedMetricsT>(value);
  }
  template <typename AggregatedMetricsT = DataQualityAggregatedMetrics>
  GetDataQualityResultV2Result& WithAggregatedMetrics(AggregatedMetricsT&& value) {
    SetAggregatedMetrics(std::forward<AggregatedMetricsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the ruleset associated with the data quality result.</p>
   */
  inline const Aws::String& GetRulesetName() const { return m_rulesetName; }
  template <typename RulesetNameT = Aws::String>
  void SetRulesetName(RulesetNameT&& value) {
    m_rulesetNameHasBeenSet = true;
    m_rulesetName = std::forward<RulesetNameT>(value);
  }
  template <typename RulesetNameT = Aws::String>
  GetDataQualityResultV2Result& WithRulesetName(RulesetNameT&& value) {
    SetRulesetName(std::forward<RulesetNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetDataQualityResultV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_resultId;

  DataSource m_dataSource;

  Aws::String m_profileId;

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

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resultIdHasBeenSet = false;
  bool m_dataSourceHasBeenSet = false;
  bool m_profileIdHasBeenSet = false;
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
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
