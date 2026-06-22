/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/DynamicInstrumentationSignalType.h>
#include <aws/application-signals/model/InstrumentationConfigurationStatus.h>
#include <aws/application-signals/model/InstrumentationStatusEvent.h>
#include <aws/application-signals/model/Location.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {
class GetInstrumentationConfigurationStatusResult {
 public:
  AWS_APPLICATIONSIGNALS_API GetInstrumentationConfigurationStatusResult() = default;
  AWS_APPLICATIONSIGNALS_API GetInstrumentationConfigurationStatusResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPLICATIONSIGNALS_API GetInstrumentationConfigurationStatusResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The service name echoed from the request.</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  GetInstrumentationConfigurationStatusResult& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment echoed from the request.</p>
   */
  inline const Aws::String& GetEnvironment() const { return m_environment; }
  template <typename EnvironmentT = Aws::String>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = Aws::String>
  GetInstrumentationConfigurationStatusResult& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The telemetry signal type echoed from the request.</p>
   */
  inline DynamicInstrumentationSignalType GetSignalType() const { return m_signalType; }
  inline void SetSignalType(DynamicInstrumentationSignalType value) {
    m_signalTypeHasBeenSet = true;
    m_signalType = value;
  }
  inline GetInstrumentationConfigurationStatusResult& WithSignalType(DynamicInstrumentationSignalType value) {
    SetSignalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The code location echoed from the request.</p>
   */
  inline const Location& GetLocation() const { return m_location; }
  template <typename LocationT = Location>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Location>
  GetInstrumentationConfigurationStatusResult& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status that was queried. If not specified in the request, this is
   * <code>ACTIVE</code>.</p>
   */
  inline InstrumentationConfigurationStatus GetStatus() const { return m_status; }
  inline void SetStatus(InstrumentationConfigurationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetInstrumentationConfigurationStatusResult& WithStatus(InstrumentationConfigurationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of status events within the requested time window, sorted with the
   * most recent first. Error events include an error cause.</p>
   */
  inline const Aws::Vector<InstrumentationStatusEvent>& GetEvents() const { return m_events; }
  template <typename EventsT = Aws::Vector<InstrumentationStatusEvent>>
  void SetEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events = std::forward<EventsT>(value);
  }
  template <typename EventsT = Aws::Vector<InstrumentationStatusEvent>>
  GetInstrumentationConfigurationStatusResult& WithEvents(EventsT&& value) {
    SetEvents(std::forward<EventsT>(value));
    return *this;
  }
  template <typename EventsT = InstrumentationStatusEvent>
  GetInstrumentationConfigurationStatusResult& AddEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events.emplace_back(std::forward<EventsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token to continue retrieving status events.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetInstrumentationConfigurationStatusResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetInstrumentationConfigurationStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_service;

  Aws::String m_environment;

  DynamicInstrumentationSignalType m_signalType{DynamicInstrumentationSignalType::NOT_SET};

  Location m_location;

  InstrumentationConfigurationStatus m_status{InstrumentationConfigurationStatus::NOT_SET};

  Aws::Vector<InstrumentationStatusEvent> m_events;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_serviceHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_signalTypeHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_eventsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
