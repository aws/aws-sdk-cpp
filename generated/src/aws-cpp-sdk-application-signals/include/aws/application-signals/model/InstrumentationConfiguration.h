/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/CaptureConfiguration.h>
#include <aws/application-signals/model/DynamicInstrumentationSignalType.h>
#include <aws/application-signals/model/InstrumentationType.h>
#include <aws/application-signals/model/Location.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>The full instrumentation configuration, including the instrumentation type,
 * service, environment, signal type, location details, stable location hash,
 * capture settings, filters, expiration, creation time, and ARN.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/InstrumentationConfiguration">AWS
 * API Reference</a></p>
 */
class InstrumentationConfiguration {
 public:
  AWS_APPLICATIONSIGNALS_API InstrumentationConfiguration() = default;
  AWS_APPLICATIONSIGNALS_API InstrumentationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API InstrumentationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of instrumentation for this configuration.</p>
   */
  inline InstrumentationType GetInstrumentationType() const { return m_instrumentationType; }
  inline bool InstrumentationTypeHasBeenSet() const { return m_instrumentationTypeHasBeenSet; }
  inline void SetInstrumentationType(InstrumentationType value) {
    m_instrumentationTypeHasBeenSet = true;
    m_instrumentationType = value;
  }
  inline InstrumentationConfiguration& WithInstrumentationType(InstrumentationType value) {
    SetInstrumentationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service that this instrumentation configuration targets.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  InstrumentationConfiguration& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment where the service is running.</p>
   */
  inline const Aws::String& GetEnvironment() const { return m_environment; }
  inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
  template <typename EnvironmentT = Aws::String>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = Aws::String>
  InstrumentationConfiguration& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The telemetry signal type for this instrumentation configuration.</p>
   */
  inline DynamicInstrumentationSignalType GetSignalType() const { return m_signalType; }
  inline bool SignalTypeHasBeenSet() const { return m_signalTypeHasBeenSet; }
  inline void SetSignalType(DynamicInstrumentationSignalType value) {
    m_signalTypeHasBeenSet = true;
    m_signalType = value;
  }
  inline InstrumentationConfiguration& WithSignalType(DynamicInstrumentationSignalType value) {
    SetSignalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location where this instrumentation is applied.</p>
   */
  inline const Location& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Location>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Location>
  InstrumentationConfiguration& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stable hash derived from the location that uniquely identifies this
   * instrumentation point within the service and environment.</p>
   */
  inline const Aws::String& GetLocationHash() const { return m_locationHash; }
  inline bool LocationHashHasBeenSet() const { return m_locationHashHasBeenSet; }
  template <typename LocationHashT = Aws::String>
  void SetLocationHash(LocationHashT&& value) {
    m_locationHashHasBeenSet = true;
    m_locationHash = std::forward<LocationHashT>(value);
  }
  template <typename LocationHashT = Aws::String>
  InstrumentationConfiguration& WithLocationHash(LocationHashT&& value) {
    SetLocationHash(std::forward<LocationHashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional short description of the instrumentation configuration.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  InstrumentationConfiguration& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this configuration expires.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  InstrumentationConfiguration& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Client-side filters that determine which instances apply this
   * instrumentation.</p>
   */
  inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetAttributeFilters() const { return m_attributeFilters; }
  inline bool AttributeFiltersHasBeenSet() const { return m_attributeFiltersHasBeenSet; }
  template <typename AttributeFiltersT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
  void SetAttributeFilters(AttributeFiltersT&& value) {
    m_attributeFiltersHasBeenSet = true;
    m_attributeFilters = std::forward<AttributeFiltersT>(value);
  }
  template <typename AttributeFiltersT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
  InstrumentationConfiguration& WithAttributeFilters(AttributeFiltersT&& value) {
    SetAttributeFilters(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  template <typename AttributeFiltersT = Aws::Map<Aws::String, Aws::String>>
  InstrumentationConfiguration& AddAttributeFilters(AttributeFiltersT&& value) {
    m_attributeFiltersHasBeenSet = true;
    m_attributeFilters.emplace_back(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capture settings for this instrumentation configuration.</p>
   */
  inline const CaptureConfiguration& GetCaptureConfiguration() const { return m_captureConfiguration; }
  inline bool CaptureConfigurationHasBeenSet() const { return m_captureConfigurationHasBeenSet; }
  template <typename CaptureConfigurationT = CaptureConfiguration>
  void SetCaptureConfiguration(CaptureConfigurationT&& value) {
    m_captureConfigurationHasBeenSet = true;
    m_captureConfiguration = std::forward<CaptureConfigurationT>(value);
  }
  template <typename CaptureConfigurationT = CaptureConfiguration>
  InstrumentationConfiguration& WithCaptureConfiguration(CaptureConfigurationT&& value) {
    SetCaptureConfiguration(std::forward<CaptureConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this instrumentation configuration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  InstrumentationConfiguration& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN for the instrumentation configuration</p>
   */
  inline const Aws::String& GetARN() const { return m_aRN; }
  inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
  template <typename ARNT = Aws::String>
  void SetARN(ARNT&& value) {
    m_aRNHasBeenSet = true;
    m_aRN = std::forward<ARNT>(value);
  }
  template <typename ARNT = Aws::String>
  InstrumentationConfiguration& WithARN(ARNT&& value) {
    SetARN(std::forward<ARNT>(value));
    return *this;
  }
  ///@}
 private:
  InstrumentationType m_instrumentationType{InstrumentationType::NOT_SET};

  Aws::String m_service;

  Aws::String m_environment;

  DynamicInstrumentationSignalType m_signalType{DynamicInstrumentationSignalType::NOT_SET};

  Location m_location;

  Aws::String m_locationHash;

  Aws::String m_description;

  Aws::Utils::DateTime m_expiresAt{};

  Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_attributeFilters;

  CaptureConfiguration m_captureConfiguration;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_aRN;
  bool m_instrumentationTypeHasBeenSet = false;
  bool m_serviceHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_signalTypeHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_locationHashHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_attributeFiltersHasBeenSet = false;
  bool m_captureConfigurationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_aRNHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
