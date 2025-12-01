/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/EventsConfig.h>

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
 private:
  EventsConfig m_eventsConfig;
  bool m_eventsConfigHasBeenSet = false;

  int m_trainingFrequency{0};
  bool m_trainingFrequencyHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
