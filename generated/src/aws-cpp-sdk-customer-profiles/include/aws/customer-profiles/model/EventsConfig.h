/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/EventParameters.h>

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
 * <p>Configuration settings that define how events are processed and
 * tracked.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/EventsConfig">AWS
 * API Reference</a></p>
 */
class EventsConfig {
 public:
  AWS_CUSTOMERPROFILES_API EventsConfig() = default;
  AWS_CUSTOMERPROFILES_API EventsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API EventsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of event parameters configurations that specify how different event
   * types should be handled.</p>
   */
  inline const Aws::Vector<EventParameters>& GetEventParametersList() const { return m_eventParametersList; }
  inline bool EventParametersListHasBeenSet() const { return m_eventParametersListHasBeenSet; }
  template <typename EventParametersListT = Aws::Vector<EventParameters>>
  void SetEventParametersList(EventParametersListT&& value) {
    m_eventParametersListHasBeenSet = true;
    m_eventParametersList = std::forward<EventParametersListT>(value);
  }
  template <typename EventParametersListT = Aws::Vector<EventParameters>>
  EventsConfig& WithEventParametersList(EventParametersListT&& value) {
    SetEventParametersList(std::forward<EventParametersListT>(value));
    return *this;
  }
  template <typename EventParametersListT = EventParameters>
  EventsConfig& AddEventParametersList(EventParametersListT&& value) {
    m_eventParametersListHasBeenSet = true;
    m_eventParametersList.emplace_back(std::forward<EventParametersListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EventParameters> m_eventParametersList;
  bool m_eventParametersListHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
