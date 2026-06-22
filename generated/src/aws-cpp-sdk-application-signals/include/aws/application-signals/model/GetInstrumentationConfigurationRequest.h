/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/DynamicInstrumentationSignalType.h>
#include <aws/application-signals/model/InstrumentationType.h>
#include <aws/application-signals/model/LocationIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ApplicationSignals {
namespace Model {

/**
 */
class GetInstrumentationConfigurationRequest : public ApplicationSignalsRequest {
 public:
  AWS_APPLICATIONSIGNALS_API GetInstrumentationConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetInstrumentationConfiguration"; }

  AWS_APPLICATIONSIGNALS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Type of instrumentation configuration (BREAKPOINT or PROBE). Required to
   * identify the configuration to retrieve.</p>
   */
  inline InstrumentationType GetInstrumentationType() const { return m_instrumentationType; }
  inline bool InstrumentationTypeHasBeenSet() const { return m_instrumentationTypeHasBeenSet; }
  inline void SetInstrumentationType(InstrumentationType value) {
    m_instrumentationTypeHasBeenSet = true;
    m_instrumentationType = value;
  }
  inline GetInstrumentationConfigurationRequest& WithInstrumentationType(InstrumentationType value) {
    SetInstrumentationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Service name for the instrumentation configuration.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  GetInstrumentationConfigurationRequest& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Environment name for the instrumentation configuration.</p>
   */
  inline const Aws::String& GetEnvironment() const { return m_environment; }
  inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
  template <typename EnvironmentT = Aws::String>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = Aws::String>
  GetInstrumentationConfigurationRequest& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Signal type for the instrumentation configuration.</p>
   */
  inline DynamicInstrumentationSignalType GetSignalType() const { return m_signalType; }
  inline bool SignalTypeHasBeenSet() const { return m_signalTypeHasBeenSet; }
  inline void SetSignalType(DynamicInstrumentationSignalType value) {
    m_signalTypeHasBeenSet = true;
    m_signalType = value;
  }
  inline GetInstrumentationConfigurationRequest& WithSignalType(DynamicInstrumentationSignalType value) {
    SetSignalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Location identifier - either full code location or a pre-computed hash.</p>
   */
  inline const LocationIdentifier& GetLocationIdentifier() const { return m_locationIdentifier; }
  inline bool LocationIdentifierHasBeenSet() const { return m_locationIdentifierHasBeenSet; }
  template <typename LocationIdentifierT = LocationIdentifier>
  void SetLocationIdentifier(LocationIdentifierT&& value) {
    m_locationIdentifierHasBeenSet = true;
    m_locationIdentifier = std::forward<LocationIdentifierT>(value);
  }
  template <typename LocationIdentifierT = LocationIdentifier>
  GetInstrumentationConfigurationRequest& WithLocationIdentifier(LocationIdentifierT&& value) {
    SetLocationIdentifier(std::forward<LocationIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  InstrumentationType m_instrumentationType{InstrumentationType::NOT_SET};

  Aws::String m_service;

  Aws::String m_environment;

  DynamicInstrumentationSignalType m_signalType{DynamicInstrumentationSignalType::NOT_SET};

  LocationIdentifier m_locationIdentifier;
  bool m_instrumentationTypeHasBeenSet = false;
  bool m_serviceHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_signalTypeHasBeenSet = false;
  bool m_locationIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
