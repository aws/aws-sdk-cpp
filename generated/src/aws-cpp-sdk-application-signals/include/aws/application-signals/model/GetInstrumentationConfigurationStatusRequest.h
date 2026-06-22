/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignalsRequest.h>
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/DynamicInstrumentationSignalType.h>
#include <aws/application-signals/model/InstrumentationConfigurationStatus.h>
#include <aws/application-signals/model/InstrumentationType.h>
#include <aws/application-signals/model/LocationIdentifier.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ApplicationSignals {
namespace Model {

/**
 */
class GetInstrumentationConfigurationStatusRequest : public ApplicationSignalsRequest {
 public:
  AWS_APPLICATIONSIGNALS_API GetInstrumentationConfigurationStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetInstrumentationConfigurationStatus"; }

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
  inline GetInstrumentationConfigurationStatusRequest& WithInstrumentationType(InstrumentationType value) {
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
  GetInstrumentationConfigurationStatusRequest& WithService(ServiceT&& value) {
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
  GetInstrumentationConfigurationStatusRequest& WithEnvironment(EnvironmentT&& value) {
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
  inline GetInstrumentationConfigurationStatusRequest& WithSignalType(DynamicInstrumentationSignalType value) {
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
  GetInstrumentationConfigurationStatusRequest& WithLocationIdentifier(LocationIdentifierT&& value) {
    SetLocationIdentifier(std::forward<LocationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The single status to query for. If omitted, only <code>ACTIVE</code> status
   * events are returned.</p>
   */
  inline InstrumentationConfigurationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InstrumentationConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetInstrumentationConfigurationStatusRequest& WithStatus(InstrumentationConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start of the time range to retrieve status events for.
   * <code>StartTime</code> and <code>EndTime</code> must both be provided together
   * or both be omitted. When both are omitted, the time range defaults to the last
   * hour.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GetInstrumentationConfigurationStatusRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time range to retrieve status events for.
   * <code>StartTime</code> and <code>EndTime</code> must both be provided together
   * or both be omitted. When both are omitted, the time range defaults to the last
   * hour.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  GetInstrumentationConfigurationStatusRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of status events to return in one call. The default is
   * 60.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetInstrumentationConfigurationStatusRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use the token returned by a previous call to retrieve the next page of status
   * events.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetInstrumentationConfigurationStatusRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  InstrumentationType m_instrumentationType{InstrumentationType::NOT_SET};

  Aws::String m_service;

  Aws::String m_environment;

  DynamicInstrumentationSignalType m_signalType{DynamicInstrumentationSignalType::NOT_SET};

  LocationIdentifier m_locationIdentifier;

  InstrumentationConfigurationStatus m_status{InstrumentationConfigurationStatus::NOT_SET};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_instrumentationTypeHasBeenSet = false;
  bool m_serviceHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_signalTypeHasBeenSet = false;
  bool m_locationIdentifierHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
