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
 * <p>An instrumentation configuration that omits service and environment because
 * they are provided at a higher level, such as in a list response.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/InstrumentationConfigurationWithoutServiceEnv">AWS
 * API Reference</a></p>
 */
class InstrumentationConfigurationWithoutServiceEnv {
 public:
  AWS_APPLICATIONSIGNALS_API InstrumentationConfigurationWithoutServiceEnv() = default;
  AWS_APPLICATIONSIGNALS_API InstrumentationConfigurationWithoutServiceEnv(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API InstrumentationConfigurationWithoutServiceEnv& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline InstrumentationConfigurationWithoutServiceEnv& WithInstrumentationType(InstrumentationType value) {
    SetInstrumentationType(value);
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
  inline InstrumentationConfigurationWithoutServiceEnv& WithSignalType(DynamicInstrumentationSignalType value) {
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
  InstrumentationConfigurationWithoutServiceEnv& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stable hash derived from the location that identifies this
   * instrumentation point.</p>
   */
  inline const Aws::String& GetLocationHash() const { return m_locationHash; }
  inline bool LocationHashHasBeenSet() const { return m_locationHashHasBeenSet; }
  template <typename LocationHashT = Aws::String>
  void SetLocationHash(LocationHashT&& value) {
    m_locationHashHasBeenSet = true;
    m_locationHash = std::forward<LocationHashT>(value);
  }
  template <typename LocationHashT = Aws::String>
  InstrumentationConfigurationWithoutServiceEnv& WithLocationHash(LocationHashT&& value) {
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
  InstrumentationConfigurationWithoutServiceEnv& WithDescription(DescriptionT&& value) {
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
  InstrumentationConfigurationWithoutServiceEnv& WithExpiresAt(ExpiresAtT&& value) {
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
  InstrumentationConfigurationWithoutServiceEnv& WithAttributeFilters(AttributeFiltersT&& value) {
    SetAttributeFilters(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  template <typename AttributeFiltersT = Aws::Map<Aws::String, Aws::String>>
  InstrumentationConfigurationWithoutServiceEnv& AddAttributeFilters(AttributeFiltersT&& value) {
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
  InstrumentationConfigurationWithoutServiceEnv& WithCaptureConfiguration(CaptureConfigurationT&& value) {
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
  InstrumentationConfigurationWithoutServiceEnv& WithCreatedAt(CreatedAtT&& value) {
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
  InstrumentationConfigurationWithoutServiceEnv& WithARN(ARNT&& value) {
    SetARN(std::forward<ARNT>(value));
    return *this;
  }
  ///@}
 private:
  InstrumentationType m_instrumentationType{InstrumentationType::NOT_SET};

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
