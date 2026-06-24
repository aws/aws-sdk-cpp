/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/CaptureConfiguration.h>
#include <aws/application-signals/model/DynamicInstrumentationSignalType.h>
#include <aws/application-signals/model/InstrumentationType.h>
#include <aws/application-signals/model/Location.h>
#include <aws/application-signals/model/Tag.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ApplicationSignals {
namespace Model {

/**
 */
class CreateInstrumentationConfigurationRequest : public ApplicationSignalsRequest {
 public:
  AWS_APPLICATIONSIGNALS_API CreateInstrumentationConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateInstrumentationConfiguration"; }

  AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Type of instrumentation: BREAKPOINT (temporary) or PROBE (permanent)</p>
   */
  inline InstrumentationType GetInstrumentationType() const { return m_instrumentationType; }
  inline bool InstrumentationTypeHasBeenSet() const { return m_instrumentationTypeHasBeenSet; }
  inline void SetInstrumentationType(InstrumentationType value) {
    m_instrumentationTypeHasBeenSet = true;
    m_instrumentationType = value;
  }
  inline CreateInstrumentationConfigurationRequest& WithInstrumentationType(InstrumentationType value) {
    SetInstrumentationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the service to instrument. This should match the
   * <code>service.name</code> resource attribute reported by the application.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  CreateInstrumentationConfigurationRequest& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment that the service is running in, such as
   * <code>eks:cluster-prod/namespace</code> or <code>ec2:production</code>.</p>
   */
  inline const Aws::String& GetEnvironment() const { return m_environment; }
  inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
  template <typename EnvironmentT = Aws::String>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = Aws::String>
  CreateInstrumentationConfigurationRequest& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The telemetry signal type to emit for this instrumentation. The supported
   * value is <code>SNAPSHOT</code>.</p>
   */
  inline DynamicInstrumentationSignalType GetSignalType() const { return m_signalType; }
  inline bool SignalTypeHasBeenSet() const { return m_signalTypeHasBeenSet; }
  inline void SetSignalType(DynamicInstrumentationSignalType value) {
    m_signalTypeHasBeenSet = true;
    m_signalType = value;
  }
  inline CreateInstrumentationConfigurationRequest& WithSignalType(DynamicInstrumentationSignalType value) {
    SetSignalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location where instrumentation should be applied. Specify a
   * <code>CodeLocation</code> for code-level instrumentation.</p>
   */
  inline const Location& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Location>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Location>
  CreateInstrumentationConfigurationRequest& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional short description (up to 50 characters) that explains the purpose
   * of this instrumentation.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateInstrumentationConfigurationRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>For BREAKPOINT: optional, defaults to 24 hours, must be between 5 min and 24
   * hours. For PROBE: not supported. PROBE configurations are permanent and persist
   * until explicitly deleted.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  CreateInstrumentationConfigurationRequest& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Client-side filters that target specific instances. Each object in the array
   * is AND-matched on its keys, and multiple objects are OR-matched to decide where
   * to apply the instrumentation.</p>
   */
  inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetAttributeFilters() const { return m_attributeFilters; }
  inline bool AttributeFiltersHasBeenSet() const { return m_attributeFiltersHasBeenSet; }
  template <typename AttributeFiltersT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
  void SetAttributeFilters(AttributeFiltersT&& value) {
    m_attributeFiltersHasBeenSet = true;
    m_attributeFilters = std::forward<AttributeFiltersT>(value);
  }
  template <typename AttributeFiltersT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
  CreateInstrumentationConfigurationRequest& WithAttributeFilters(AttributeFiltersT&& value) {
    SetAttributeFilters(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  template <typename AttributeFiltersT = Aws::Map<Aws::String, Aws::String>>
  CreateInstrumentationConfigurationRequest& AddAttributeFilters(AttributeFiltersT&& value) {
    m_attributeFiltersHasBeenSet = true;
    m_attributeFilters.emplace_back(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies what to capture when the instrumentation point is hit. Specify
   * <code>CodeCapture</code> for code-level capture settings.</p>
   */
  inline const CaptureConfiguration& GetCaptureConfiguration() const { return m_captureConfiguration; }
  inline bool CaptureConfigurationHasBeenSet() const { return m_captureConfigurationHasBeenSet; }
  template <typename CaptureConfigurationT = CaptureConfiguration>
  void SetCaptureConfiguration(CaptureConfigurationT&& value) {
    m_captureConfigurationHasBeenSet = true;
    m_captureConfiguration = std::forward<CaptureConfigurationT>(value);
  }
  template <typename CaptureConfigurationT = CaptureConfiguration>
  CreateInstrumentationConfigurationRequest& WithCaptureConfiguration(CaptureConfigurationT&& value) {
    SetCaptureConfiguration(std::forward<CaptureConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional list of key-value pairs to associate with the instrumentation
   * configuration. Tags can help you organize and categorize your resources.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateInstrumentationConfigurationRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateInstrumentationConfigurationRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  InstrumentationType m_instrumentationType{InstrumentationType::NOT_SET};

  Aws::String m_service;

  Aws::String m_environment;

  DynamicInstrumentationSignalType m_signalType{DynamicInstrumentationSignalType::NOT_SET};

  Location m_location;

  Aws::String m_description;

  Aws::Utils::DateTime m_expiresAt{};

  Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_attributeFilters;

  CaptureConfiguration m_captureConfiguration;

  Aws::Vector<Tag> m_tags;
  bool m_instrumentationTypeHasBeenSet = false;
  bool m_serviceHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_signalTypeHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_attributeFiltersHasBeenSet = false;
  bool m_captureConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
