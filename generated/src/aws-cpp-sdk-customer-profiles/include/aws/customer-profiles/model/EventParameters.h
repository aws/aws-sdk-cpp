/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

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
 * <p>Configuration parameters for events in the personalization
 * system.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/EventParameters">AWS
 * API Reference</a></p>
 */
class EventParameters {
 public:
  AWS_CUSTOMERPROFILES_API EventParameters() = default;
  AWS_CUSTOMERPROFILES_API EventParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API EventParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of event being tracked (e.g., 'click', 'purchase', 'view').</p>
   */
  inline const Aws::String& GetEventType() const { return m_eventType; }
  inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
  template <typename EventTypeT = Aws::String>
  void SetEventType(EventTypeT&& value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = std::forward<EventTypeT>(value);
  }
  template <typename EventTypeT = Aws::String>
  EventParameters& WithEventType(EventTypeT&& value) {
    SetEventType(std::forward<EventTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum value threshold that an event must meet to be considered
   * valid.</p>
   */
  inline double GetEventValueThreshold() const { return m_eventValueThreshold; }
  inline bool EventValueThresholdHasBeenSet() const { return m_eventValueThresholdHasBeenSet; }
  inline void SetEventValueThreshold(double value) {
    m_eventValueThresholdHasBeenSet = true;
    m_eventValueThreshold = value;
  }
  inline EventParameters& WithEventValueThreshold(double value) {
    SetEventValueThreshold(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventType;

  double m_eventValueThreshold{0.0};
  bool m_eventTypeHasBeenSet = false;
  bool m_eventValueThresholdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
