/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
   * <p>How often the recommender should retrain its model with new data.</p>
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
   * <p>A map of dataset type to a list of column names to train on. The column names
   * must be a subset of the columns defined in the recommender schema. If not
   * specified, all columns in the schema are used for training. The following
   * columns are always included and do not need to be specified:
   * <code>Item.Id</code>, <code>ItemList[].Id</code>, <code>EventTimestamp</code>,
   * <code>EventType</code>, and <code>EventValue</code>.</p>
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
 private:
  EventsConfig m_eventsConfig;

  int m_trainingFrequency{0};

  InferenceConfig m_inferenceConfig;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_includedColumns;
  bool m_eventsConfigHasBeenSet = false;
  bool m_trainingFrequencyHasBeenSet = false;
  bool m_inferenceConfigHasBeenSet = false;
  bool m_includedColumnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
