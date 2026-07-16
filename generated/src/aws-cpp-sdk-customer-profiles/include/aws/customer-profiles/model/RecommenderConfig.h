/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/DiversityConfig.h>
#include <aws/customer-profiles/model/EventsConfig.h>
#include <aws/customer-profiles/model/InferenceConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Configuration settings that define the behavior and parameters of a
 * recommender.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RecommenderConfig">AWS
 * API Reference</a></p>
 */
class RecommenderConfig {
 public:
  AWS_CUSTOMERPROFILES_API RecommenderConfig() = default;
  AWS_CUSTOMERPROFILES_API RecommenderConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API RecommenderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration settings for how the recommender processes and uses events.</p>
   */
  inline const EventsConfig& GetEventsConfig() const { return m_eventsConfig; }
  inline bool EventsConfigHasBeenSet() const { return m_eventsConfigHasBeenSet; }
  template <typename EventsConfigT = EventsConfig>
  void SetEventsConfig(EventsConfigT&& value) {
    m_eventsConfigHasBeenSet = true;
    m_eventsConfig = std::forward<EventsConfigT>(value);
  }
  template <typename EventsConfigT = EventsConfig>
  RecommenderConfig& WithEventsConfig(EventsConfigT&& value) {
    SetEventsConfig(std::forward<EventsConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How often the recommender should retrain its model with new data. If set to
   * 0, automatic retraining will not be enabled.</p>
   */
  inline int GetTrainingFrequency() const { return m_trainingFrequency; }
  inline bool TrainingFrequencyHasBeenSet() const { return m_trainingFrequencyHasBeenSet; }
  inline void SetTrainingFrequency(int value) {
    m_trainingFrequencyHasBeenSet = true;
    m_trainingFrequency = value;
  }
  inline RecommenderConfig& WithTrainingFrequency(int value) {
    SetTrainingFrequency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration settings for how the recommender handles inference
   * requests.</p>
   */
  inline const InferenceConfig& GetInferenceConfig() const { return m_inferenceConfig; }
  inline bool InferenceConfigHasBeenSet() const { return m_inferenceConfigHasBeenSet; }
  template <typename InferenceConfigT = InferenceConfig>
  void SetInferenceConfig(InferenceConfigT&& value) {
    m_inferenceConfigHasBeenSet = true;
    m_inferenceConfig = std::forward<InferenceConfigT>(value);
  }
  template <typename InferenceConfigT = InferenceConfig>
  RecommenderConfig& WithInferenceConfig(InferenceConfigT&& value) {
    SetInferenceConfig(std::forward<InferenceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of dataset type to a list of column names to train on. The
   * <code>_webAnalytics</code> and <code>_catalogItem</code> keys are supported. The
   * column names must be a subset of the columns defined in the recommender schema.
   * If not specified, all columns in the schema are used for training. The following
   * columns are always included in training and do not need to be specified:
   * <code>Item.Id</code>, <code>EventTimestamp</code>, and <code>EventType</code>
   * for <code>_webAnalytics</code>; <code>Id</code> for <code>_catalogItem</code>.
   * Mutually exclusive with ExcludedColumns — both cannot be specified in the same
   * request.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetIncludedColumns() const { return m_includedColumns; }
  inline bool IncludedColumnsHasBeenSet() const { return m_includedColumnsHasBeenSet; }
  template <typename IncludedColumnsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetIncludedColumns(IncludedColumnsT&& value) {
    m_includedColumnsHasBeenSet = true;
    m_includedColumns = std::forward<IncludedColumnsT>(value);
  }
  template <typename IncludedColumnsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  RecommenderConfig& WithIncludedColumns(IncludedColumnsT&& value) {
    SetIncludedColumns(std::forward<IncludedColumnsT>(value));
    return *this;
  }
  template <typename IncludedColumnsKeyT = Aws::String, typename IncludedColumnsValueT = Aws::Vector<Aws::String>>
  RecommenderConfig& AddIncludedColumns(IncludedColumnsKeyT&& key, IncludedColumnsValueT&& value) {
    m_includedColumnsHasBeenSet = true;
    m_includedColumns.emplace(std::forward<IncludedColumnsKeyT>(key), std::forward<IncludedColumnsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of dataset type to a list of column names to exclude from training. The
   * <code>_webAnalytics</code> and <code>_catalogItem</code> keys are supported. The
   * column names must be valid columns defined in the recommender schema. All
   * columns in the schema except the listed columns will be used for training. The
   * following columns are mandatory and cannot be excluded: <code>Item.Id</code>,
   * <code>EventTimestamp</code>, and <code>EventType</code> for
   * <code>_webAnalytics</code>; <code>Id</code> for <code>_catalogItem</code>.
   * Mutually exclusive with IncludedColumns — both cannot be specified in the same
   * request.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetExcludedColumns() const { return m_excludedColumns; }
  inline bool ExcludedColumnsHasBeenSet() const { return m_excludedColumnsHasBeenSet; }
  template <typename ExcludedColumnsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetExcludedColumns(ExcludedColumnsT&& value) {
    m_excludedColumnsHasBeenSet = true;
    m_excludedColumns = std::forward<ExcludedColumnsT>(value);
  }
  template <typename ExcludedColumnsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  RecommenderConfig& WithExcludedColumns(ExcludedColumnsT&& value) {
    SetExcludedColumns(std::forward<ExcludedColumnsT>(value));
    return *this;
  }
  template <typename ExcludedColumnsKeyT = Aws::String, typename ExcludedColumnsValueT = Aws::Vector<Aws::String>>
  RecommenderConfig& AddExcludedColumns(ExcludedColumnsKeyT&& key, ExcludedColumnsValueT&& value) {
    m_excludedColumnsHasBeenSet = true;
    m_excludedColumns.emplace(std::forward<ExcludedColumnsKeyT>(key), std::forward<ExcludedColumnsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for diversity-aware recommendations. When set, the recommender
   * applies diversity constraints defined per item column to reduce
   * over-concentration of similar items in the results.</p>
   */
  inline const DiversityConfig& GetDiversityConfig() const { return m_diversityConfig; }
  inline bool DiversityConfigHasBeenSet() const { return m_diversityConfigHasBeenSet; }
  template <typename DiversityConfigT = DiversityConfig>
  void SetDiversityConfig(DiversityConfigT&& value) {
    m_diversityConfigHasBeenSet = true;
    m_diversityConfig = std::forward<DiversityConfigT>(value);
  }
  template <typename DiversityConfigT = DiversityConfig>
  RecommenderConfig& WithDiversityConfig(DiversityConfigT&& value) {
    SetDiversityConfig(std::forward<DiversityConfigT>(value));
    return *this;
  }
  ///@}
 private:
  EventsConfig m_eventsConfig;

  int m_trainingFrequency{0};

  InferenceConfig m_inferenceConfig;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_includedColumns;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_excludedColumns;

  DiversityConfig m_diversityConfig;
  bool m_eventsConfigHasBeenSet = false;
  bool m_trainingFrequencyHasBeenSet = false;
  bool m_inferenceConfigHasBeenSet = false;
  bool m_includedColumnsHasBeenSet = false;
  bool m_excludedColumnsHasBeenSet = false;
  bool m_diversityConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
