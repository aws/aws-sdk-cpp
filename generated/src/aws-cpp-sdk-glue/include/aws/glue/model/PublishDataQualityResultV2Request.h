/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataQualityAggregatedMetrics.h>
#include <aws/glue/model/DataQualityAnalyzerResult.h>
#include <aws/glue/model/DataQualityConfigurationV2.h>
#include <aws/glue/model/DataQualityObservation.h>
#include <aws/glue/model/DataQualityRuleResult.h>
#include <aws/glue/model/DataQualityTelemetry.h>
#include <aws/glue/model/StatisticSummary.h>

#include <utility>

namespace Aws {
namespace Glue {
namespace Model {

/**
 */
class PublishDataQualityResultV2Request : public GlueRequest {
 public:
  AWS_GLUE_API PublishDataQualityResultV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PublishDataQualityResultV2"; }

  AWS_GLUE_API Aws::String SerializePayload() const override;

  AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The dimensions for the result.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const { return m_dimensions; }
  inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
  template <typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
  void SetDimensions(DimensionsT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions = std::forward<DimensionsT>(value);
  }
  template <typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
  PublishDataQualityResultV2Request& WithDimensions(DimensionsT&& value) {
    SetDimensions(std::forward<DimensionsT>(value));
    return *this;
  }
  template <typename DimensionsKeyT = Aws::String, typename DimensionsValueT = Aws::String>
  PublishDataQualityResultV2Request& AddDimensions(DimensionsKeyT&& key, DimensionsValueT&& value) {
    m_dimensionsHasBeenSet = true;
    m_dimensions.emplace(std::forward<DimensionsKeyT>(key), std::forward<DimensionsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags for the result.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  PublishDataQualityResultV2Request& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  PublishDataQualityResultV2Request& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time execution started for the result.</p>
   */
  inline const Aws::Utils::DateTime& GetExecutionStartedOn() const { return m_executionStartedOn; }
  inline bool ExecutionStartedOnHasBeenSet() const { return m_executionStartedOnHasBeenSet; }
  template <typename ExecutionStartedOnT = Aws::Utils::DateTime>
  void SetExecutionStartedOn(ExecutionStartedOnT&& value) {
    m_executionStartedOnHasBeenSet = true;
    m_executionStartedOn = std::forward<ExecutionStartedOnT>(value);
  }
  template <typename ExecutionStartedOnT = Aws::Utils::DateTime>
  PublishDataQualityResultV2Request& WithExecutionStartedOn(ExecutionStartedOnT&& value) {
    SetExecutionStartedOn(std::forward<ExecutionStartedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time execution completed for the result.</p>
   */
  inline const Aws::Utils::DateTime& GetExecutionCompletedOn() const { return m_executionCompletedOn; }
  inline bool ExecutionCompletedOnHasBeenSet() const { return m_executionCompletedOnHasBeenSet; }
  template <typename ExecutionCompletedOnT = Aws::Utils::DateTime>
  void SetExecutionCompletedOn(ExecutionCompletedOnT&& value) {
    m_executionCompletedOnHasBeenSet = true;
    m_executionCompletedOn = std::forward<ExecutionCompletedOnT>(value);
  }
  template <typename ExecutionCompletedOnT = Aws::Utils::DateTime>
  PublishDataQualityResultV2Request& WithExecutionCompletedOn(ExecutionCompletedOnT&& value) {
    SetExecutionCompletedOn(std::forward<ExecutionCompletedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The score for the result.</p>
   */
  inline double GetScore() const { return m_score; }
  inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
  inline void SetScore(double value) {
    m_scoreHasBeenSet = true;
    m_score = value;
  }
  inline PublishDataQualityResultV2Request& WithScore(double value) {
    SetScore(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rule level results.</p>
   */
  inline const Aws::Vector<DataQualityRuleResult>& GetRuleResults() const { return m_ruleResults; }
  inline bool RuleResultsHasBeenSet() const { return m_ruleResultsHasBeenSet; }
  template <typename RuleResultsT = Aws::Vector<DataQualityRuleResult>>
  void SetRuleResults(RuleResultsT&& value) {
    m_ruleResultsHasBeenSet = true;
    m_ruleResults = std::forward<RuleResultsT>(value);
  }
  template <typename RuleResultsT = Aws::Vector<DataQualityRuleResult>>
  PublishDataQualityResultV2Request& WithRuleResults(RuleResultsT&& value) {
    SetRuleResults(std::forward<RuleResultsT>(value));
    return *this;
  }
  template <typename RuleResultsT = DataQualityRuleResult>
  PublishDataQualityResultV2Request& AddRuleResults(RuleResultsT&& value) {
    m_ruleResultsHasBeenSet = true;
    m_ruleResults.emplace_back(std::forward<RuleResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The analyzer level results.</p>
   */
  inline const Aws::Vector<DataQualityAnalyzerResult>& GetAnalyzerResults() const { return m_analyzerResults; }
  inline bool AnalyzerResultsHasBeenSet() const { return m_analyzerResultsHasBeenSet; }
  template <typename AnalyzerResultsT = Aws::Vector<DataQualityAnalyzerResult>>
  void SetAnalyzerResults(AnalyzerResultsT&& value) {
    m_analyzerResultsHasBeenSet = true;
    m_analyzerResults = std::forward<AnalyzerResultsT>(value);
  }
  template <typename AnalyzerResultsT = Aws::Vector<DataQualityAnalyzerResult>>
  PublishDataQualityResultV2Request& WithAnalyzerResults(AnalyzerResultsT&& value) {
    SetAnalyzerResults(std::forward<AnalyzerResultsT>(value));
    return *this;
  }
  template <typename AnalyzerResultsT = DataQualityAnalyzerResult>
  PublishDataQualityResultV2Request& AddAnalyzerResults(AnalyzerResultsT&& value) {
    m_analyzerResultsHasBeenSet = true;
    m_analyzerResults.emplace_back(std::forward<AnalyzerResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The observations for the result.</p>
   */
  inline const Aws::Vector<DataQualityObservation>& GetObservations() const { return m_observations; }
  inline bool ObservationsHasBeenSet() const { return m_observationsHasBeenSet; }
  template <typename ObservationsT = Aws::Vector<DataQualityObservation>>
  void SetObservations(ObservationsT&& value) {
    m_observationsHasBeenSet = true;
    m_observations = std::forward<ObservationsT>(value);
  }
  template <typename ObservationsT = Aws::Vector<DataQualityObservation>>
  PublishDataQualityResultV2Request& WithObservations(ObservationsT&& value) {
    SetObservations(std::forward<ObservationsT>(value));
    return *this;
  }
  template <typename ObservationsT = DataQualityObservation>
  PublishDataQualityResultV2Request& AddObservations(ObservationsT&& value) {
    m_observationsHasBeenSet = true;
    m_observations.emplace_back(std::forward<ObservationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The aggregated metrics for the result.</p>
   */
  inline const DataQualityAggregatedMetrics& GetAggregatedMetrics() const { return m_aggregatedMetrics; }
  inline bool AggregatedMetricsHasBeenSet() const { return m_aggregatedMetricsHasBeenSet; }
  template <typename AggregatedMetricsT = DataQualityAggregatedMetrics>
  void SetAggregatedMetrics(AggregatedMetricsT&& value) {
    m_aggregatedMetricsHasBeenSet = true;
    m_aggregatedMetrics = std::forward<AggregatedMetricsT>(value);
  }
  template <typename AggregatedMetricsT = DataQualityAggregatedMetrics>
  PublishDataQualityResultV2Request& WithAggregatedMetrics(AggregatedMetricsT&& value) {
    SetAggregatedMetrics(std::forward<AggregatedMetricsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The statistics for the result.</p>
   */
  inline const Aws::Vector<StatisticSummary>& GetStatistics() const { return m_statistics; }
  inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
  template <typename StatisticsT = Aws::Vector<StatisticSummary>>
  void SetStatistics(StatisticsT&& value) {
    m_statisticsHasBeenSet = true;
    m_statistics = std::forward<StatisticsT>(value);
  }
  template <typename StatisticsT = Aws::Vector<StatisticSummary>>
  PublishDataQualityResultV2Request& WithStatistics(StatisticsT&& value) {
    SetStatistics(std::forward<StatisticsT>(value));
    return *this;
  }
  template <typename StatisticsT = StatisticSummary>
  PublishDataQualityResultV2Request& AddStatistics(StatisticsT&& value) {
    m_statisticsHasBeenSet = true;
    m_statistics.emplace_back(std::forward<StatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The run configuration for the result.</p>
   */
  inline const DataQualityConfigurationV2& GetRunConfiguration() const { return m_runConfiguration; }
  inline bool RunConfigurationHasBeenSet() const { return m_runConfigurationHasBeenSet; }
  template <typename RunConfigurationT = DataQualityConfigurationV2>
  void SetRunConfiguration(RunConfigurationT&& value) {
    m_runConfigurationHasBeenSet = true;
    m_runConfiguration = std::forward<RunConfigurationT>(value);
  }
  template <typename RunConfigurationT = DataQualityConfigurationV2>
  PublishDataQualityResultV2Request& WithRunConfiguration(RunConfigurationT&& value) {
    SetRunConfiguration(std::forward<RunConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client token for the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  PublishDataQualityResultV2Request& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The evaluation context for the result.</p>
   */
  inline const Aws::String& GetEvaluationContext() const { return m_evaluationContext; }
  inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }
  template <typename EvaluationContextT = Aws::String>
  void SetEvaluationContext(EvaluationContextT&& value) {
    m_evaluationContextHasBeenSet = true;
    m_evaluationContext = std::forward<EvaluationContextT>(value);
  }
  template <typename EvaluationContextT = Aws::String>
  PublishDataQualityResultV2Request& WithEvaluationContext(EvaluationContextT&& value) {
    SetEvaluationContext(std::forward<EvaluationContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptors for the result.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDescriptors() const { return m_descriptors; }
  inline bool DescriptorsHasBeenSet() const { return m_descriptorsHasBeenSet; }
  template <typename DescriptorsT = Aws::Map<Aws::String, Aws::String>>
  void SetDescriptors(DescriptorsT&& value) {
    m_descriptorsHasBeenSet = true;
    m_descriptors = std::forward<DescriptorsT>(value);
  }
  template <typename DescriptorsT = Aws::Map<Aws::String, Aws::String>>
  PublishDataQualityResultV2Request& WithDescriptors(DescriptorsT&& value) {
    SetDescriptors(std::forward<DescriptorsT>(value));
    return *this;
  }
  template <typename DescriptorsKeyT = Aws::String, typename DescriptorsValueT = Aws::String>
  PublishDataQualityResultV2Request& AddDescriptors(DescriptorsKeyT&& key, DescriptorsValueT&& value) {
    m_descriptorsHasBeenSet = true;
    m_descriptors.emplace(std::forward<DescriptorsKeyT>(key), std::forward<DescriptorsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ruleset name for the result.</p>
   */
  inline const Aws::String& GetRulesetName() const { return m_rulesetName; }
  inline bool RulesetNameHasBeenSet() const { return m_rulesetNameHasBeenSet; }
  template <typename RulesetNameT = Aws::String>
  void SetRulesetName(RulesetNameT&& value) {
    m_rulesetNameHasBeenSet = true;
    m_rulesetName = std::forward<RulesetNameT>(value);
  }
  template <typename RulesetNameT = Aws::String>
  PublishDataQualityResultV2Request& WithRulesetName(RulesetNameT&& value) {
    SetRulesetName(std::forward<RulesetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security configuration for the result.</p>
   */
  inline const Aws::String& GetDataQualitySecurityConfiguration() const { return m_dataQualitySecurityConfiguration; }
  inline bool DataQualitySecurityConfigurationHasBeenSet() const { return m_dataQualitySecurityConfigurationHasBeenSet; }
  template <typename DataQualitySecurityConfigurationT = Aws::String>
  void SetDataQualitySecurityConfiguration(DataQualitySecurityConfigurationT&& value) {
    m_dataQualitySecurityConfigurationHasBeenSet = true;
    m_dataQualitySecurityConfiguration = std::forward<DataQualitySecurityConfigurationT>(value);
  }
  template <typename DataQualitySecurityConfigurationT = Aws::String>
  PublishDataQualityResultV2Request& WithDataQualitySecurityConfiguration(DataQualitySecurityConfigurationT&& value) {
    SetDataQualitySecurityConfiguration(std::forward<DataQualitySecurityConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const DataQualityTelemetry& GetTelemetry() const { return m_telemetry; }
  inline bool TelemetryHasBeenSet() const { return m_telemetryHasBeenSet; }
  template <typename TelemetryT = DataQualityTelemetry>
  void SetTelemetry(TelemetryT&& value) {
    m_telemetryHasBeenSet = true;
    m_telemetry = std::forward<TelemetryT>(value);
  }
  template <typename TelemetryT = DataQualityTelemetry>
  PublishDataQualityResultV2Request& WithTelemetry(TelemetryT&& value) {
    SetTelemetry(std::forward<TelemetryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_dimensions;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::Utils::DateTime m_executionStartedOn{};

  Aws::Utils::DateTime m_executionCompletedOn{};

  double m_score{0.0};

  Aws::Vector<DataQualityRuleResult> m_ruleResults;

  Aws::Vector<DataQualityAnalyzerResult> m_analyzerResults;

  Aws::Vector<DataQualityObservation> m_observations;

  DataQualityAggregatedMetrics m_aggregatedMetrics;

  Aws::Vector<StatisticSummary> m_statistics;

  DataQualityConfigurationV2 m_runConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_evaluationContext;

  Aws::Map<Aws::String, Aws::String> m_descriptors;

  Aws::String m_rulesetName;

  Aws::String m_dataQualitySecurityConfiguration;

  DataQualityTelemetry m_telemetry;
  bool m_dimensionsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_executionStartedOnHasBeenSet = false;
  bool m_executionCompletedOnHasBeenSet = false;
  bool m_scoreHasBeenSet = false;
  bool m_ruleResultsHasBeenSet = false;
  bool m_analyzerResultsHasBeenSet = false;
  bool m_observationsHasBeenSet = false;
  bool m_aggregatedMetricsHasBeenSet = false;
  bool m_statisticsHasBeenSet = false;
  bool m_runConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_evaluationContextHasBeenSet = false;
  bool m_descriptorsHasBeenSet = false;
  bool m_rulesetNameHasBeenSet = false;
  bool m_dataQualitySecurityConfigurationHasBeenSet = false;
  bool m_telemetryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
