/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/AttributeFilter.h>
#include <aws/application-signals/model/ChangeEvent.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>A structure that contains information about the current state of a service,
 * including its latest change events such as deployments and other state-changing
 * activities.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceState">AWS
 * API Reference</a></p>
 */
class ServiceState {
 public:
  AWS_APPLICATIONSIGNALS_API ServiceState() = default;
  AWS_APPLICATIONSIGNALS_API ServiceState(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API ServiceState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The attribute filters that were applied when retrieving this service state
   * information.</p>
   */
  inline const Aws::Vector<AttributeFilter>& GetAttributeFilters() const { return m_attributeFilters; }
  inline bool AttributeFiltersHasBeenSet() const { return m_attributeFiltersHasBeenSet; }
  template <typename AttributeFiltersT = Aws::Vector<AttributeFilter>>
  void SetAttributeFilters(AttributeFiltersT&& value) {
    m_attributeFiltersHasBeenSet = true;
    m_attributeFilters = std::forward<AttributeFiltersT>(value);
  }
  template <typename AttributeFiltersT = Aws::Vector<AttributeFilter>>
  ServiceState& WithAttributeFilters(AttributeFiltersT&& value) {
    SetAttributeFilters(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  template <typename AttributeFiltersT = AttributeFilter>
  ServiceState& AddAttributeFilters(AttributeFiltersT&& value) {
    m_attributeFiltersHasBeenSet = true;
    m_attributeFilters.emplace_back(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key attributes that identify this service, including Type, Name, and
   * Environment information.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::Map<Aws::String, Aws::String>>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::Map<Aws::String, Aws::String>>
  ServiceState& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  template <typename ServiceKeyT = Aws::String, typename ServiceValueT = Aws::String>
  ServiceState& AddService(ServiceKeyT&& key, ServiceValueT&& value) {
    m_serviceHasBeenSet = true;
    m_service.emplace(std::forward<ServiceKeyT>(key), std::forward<ServiceValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array containing the most recent change events for this service, such as
   * deployments, with information about when they occurred and who initiated
   * them.</p>
   */
  inline const Aws::Vector<ChangeEvent>& GetLatestChangeEvents() const { return m_latestChangeEvents; }
  inline bool LatestChangeEventsHasBeenSet() const { return m_latestChangeEventsHasBeenSet; }
  template <typename LatestChangeEventsT = Aws::Vector<ChangeEvent>>
  void SetLatestChangeEvents(LatestChangeEventsT&& value) {
    m_latestChangeEventsHasBeenSet = true;
    m_latestChangeEvents = std::forward<LatestChangeEventsT>(value);
  }
  template <typename LatestChangeEventsT = Aws::Vector<ChangeEvent>>
  ServiceState& WithLatestChangeEvents(LatestChangeEventsT&& value) {
    SetLatestChangeEvents(std::forward<LatestChangeEventsT>(value));
    return *this;
  }
  template <typename LatestChangeEventsT = ChangeEvent>
  ServiceState& AddLatestChangeEvents(LatestChangeEventsT&& value) {
    m_latestChangeEventsHasBeenSet = true;
    m_latestChangeEvents.emplace_back(std::forward<LatestChangeEventsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AttributeFilter> m_attributeFilters;
  bool m_attributeFiltersHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_service;
  bool m_serviceHasBeenSet = false;

  Aws::Vector<ChangeEvent> m_latestChangeEvents;
  bool m_latestChangeEventsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
