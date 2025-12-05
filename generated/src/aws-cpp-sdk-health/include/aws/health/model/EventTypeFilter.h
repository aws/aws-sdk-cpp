/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/model/EventTypeActionability.h>
#include <aws/health/model/EventTypeCategory.h>
#include <aws/health/model/EventTypePersona.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Health {
namespace Model {

/**
 * <p>The values to use to filter results from the <a
 * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventTypes.html">DescribeEventTypes</a>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EventTypeFilter">AWS
 * API Reference</a></p>
 */
class EventTypeFilter {
 public:
  AWS_HEALTH_API EventTypeFilter() = default;
  AWS_HEALTH_API EventTypeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTH_API EventTypeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of event type codes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEventTypeCodes() const { return m_eventTypeCodes; }
  inline bool EventTypeCodesHasBeenSet() const { return m_eventTypeCodesHasBeenSet; }
  template <typename EventTypeCodesT = Aws::Vector<Aws::String>>
  void SetEventTypeCodes(EventTypeCodesT&& value) {
    m_eventTypeCodesHasBeenSet = true;
    m_eventTypeCodes = std::forward<EventTypeCodesT>(value);
  }
  template <typename EventTypeCodesT = Aws::Vector<Aws::String>>
  EventTypeFilter& WithEventTypeCodes(EventTypeCodesT&& value) {
    SetEventTypeCodes(std::forward<EventTypeCodesT>(value));
    return *this;
  }
  template <typename EventTypeCodesT = Aws::String>
  EventTypeFilter& AddEventTypeCodes(EventTypeCodesT&& value) {
    m_eventTypeCodesHasBeenSet = true;
    m_eventTypeCodes.emplace_back(std::forward<EventTypeCodesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services services associated with the event. For example,
   * <code>EC2</code>, <code>RDS</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetServices() const { return m_services; }
  inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }
  template <typename ServicesT = Aws::Vector<Aws::String>>
  void SetServices(ServicesT&& value) {
    m_servicesHasBeenSet = true;
    m_services = std::forward<ServicesT>(value);
  }
  template <typename ServicesT = Aws::Vector<Aws::String>>
  EventTypeFilter& WithServices(ServicesT&& value) {
    SetServices(std::forward<ServicesT>(value));
    return *this;
  }
  template <typename ServicesT = Aws::String>
  EventTypeFilter& AddServices(ServicesT&& value) {
    m_servicesHasBeenSet = true;
    m_services.emplace_back(std::forward<ServicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of event type category codes. Possible values are <code>issue</code>,
   * <code>accountNotification</code>, or <code>scheduledChange</code>. Currently,
   * the <code>investigation</code> value isn't supported at this time.</p>
   */
  inline const Aws::Vector<EventTypeCategory>& GetEventTypeCategories() const { return m_eventTypeCategories; }
  inline bool EventTypeCategoriesHasBeenSet() const { return m_eventTypeCategoriesHasBeenSet; }
  template <typename EventTypeCategoriesT = Aws::Vector<EventTypeCategory>>
  void SetEventTypeCategories(EventTypeCategoriesT&& value) {
    m_eventTypeCategoriesHasBeenSet = true;
    m_eventTypeCategories = std::forward<EventTypeCategoriesT>(value);
  }
  template <typename EventTypeCategoriesT = Aws::Vector<EventTypeCategory>>
  EventTypeFilter& WithEventTypeCategories(EventTypeCategoriesT&& value) {
    SetEventTypeCategories(std::forward<EventTypeCategoriesT>(value));
    return *this;
  }
  inline EventTypeFilter& AddEventTypeCategories(EventTypeCategory value) {
    m_eventTypeCategoriesHasBeenSet = true;
    m_eventTypeCategories.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of actionability values to filter event types. Possible values are
   * <code>ACTION_REQUIRED</code>, <code>ACTION_MAY_BE_REQUIRED</code> and
   * <code>INFORMATIONAL</code>.</p>
   */
  inline const Aws::Vector<EventTypeActionability>& GetActionabilities() const { return m_actionabilities; }
  inline bool ActionabilitiesHasBeenSet() const { return m_actionabilitiesHasBeenSet; }
  template <typename ActionabilitiesT = Aws::Vector<EventTypeActionability>>
  void SetActionabilities(ActionabilitiesT&& value) {
    m_actionabilitiesHasBeenSet = true;
    m_actionabilities = std::forward<ActionabilitiesT>(value);
  }
  template <typename ActionabilitiesT = Aws::Vector<EventTypeActionability>>
  EventTypeFilter& WithActionabilities(ActionabilitiesT&& value) {
    SetActionabilities(std::forward<ActionabilitiesT>(value));
    return *this;
  }
  inline EventTypeFilter& AddActionabilities(EventTypeActionability value) {
    m_actionabilitiesHasBeenSet = true;
    m_actionabilities.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of persona classifications to filter event types. Possible values are
   * <code>OPERATIONS</code>, <code>SECURITY</code>, and <code>BILLING</code>.</p>
   */
  inline const Aws::Vector<EventTypePersona>& GetPersonas() const { return m_personas; }
  inline bool PersonasHasBeenSet() const { return m_personasHasBeenSet; }
  template <typename PersonasT = Aws::Vector<EventTypePersona>>
  void SetPersonas(PersonasT&& value) {
    m_personasHasBeenSet = true;
    m_personas = std::forward<PersonasT>(value);
  }
  template <typename PersonasT = Aws::Vector<EventTypePersona>>
  EventTypeFilter& WithPersonas(PersonasT&& value) {
    SetPersonas(std::forward<PersonasT>(value));
    return *this;
  }
  inline EventTypeFilter& AddPersonas(EventTypePersona value) {
    m_personasHasBeenSet = true;
    m_personas.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_eventTypeCodes;

  Aws::Vector<Aws::String> m_services;

  Aws::Vector<EventTypeCategory> m_eventTypeCategories;

  Aws::Vector<EventTypeActionability> m_actionabilities;

  Aws::Vector<EventTypePersona> m_personas;
  bool m_eventTypeCodesHasBeenSet = false;
  bool m_servicesHasBeenSet = false;
  bool m_eventTypeCategoriesHasBeenSet = false;
  bool m_actionabilitiesHasBeenSet = false;
  bool m_personasHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
