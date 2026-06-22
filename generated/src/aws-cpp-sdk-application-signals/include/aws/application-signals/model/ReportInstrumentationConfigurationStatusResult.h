/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/UnprocessedStatusEvent.h>
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
class ReportInstrumentationConfigurationStatusResult {
 public:
  AWS_APPLICATIONSIGNALS_API ReportInstrumentationConfigurationStatusResult() = default;
  AWS_APPLICATIONSIGNALS_API ReportInstrumentationConfigurationStatusResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPLICATIONSIGNALS_API ReportInstrumentationConfigurationStatusResult& operator=(
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
  ReportInstrumentationConfigurationStatusResult& WithService(ServiceT&& value) {
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
  ReportInstrumentationConfigurationStatusResult& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Status events that failed to be processed. Each entry includes the
   * configuration identifiers, status, timestamp, and a reason for the failure.</p>
   */
  inline const Aws::Vector<UnprocessedStatusEvent>& GetUnprocessedStatusEvents() const { return m_unprocessedStatusEvents; }
  template <typename UnprocessedStatusEventsT = Aws::Vector<UnprocessedStatusEvent>>
  void SetUnprocessedStatusEvents(UnprocessedStatusEventsT&& value) {
    m_unprocessedStatusEventsHasBeenSet = true;
    m_unprocessedStatusEvents = std::forward<UnprocessedStatusEventsT>(value);
  }
  template <typename UnprocessedStatusEventsT = Aws::Vector<UnprocessedStatusEvent>>
  ReportInstrumentationConfigurationStatusResult& WithUnprocessedStatusEvents(UnprocessedStatusEventsT&& value) {
    SetUnprocessedStatusEvents(std::forward<UnprocessedStatusEventsT>(value));
    return *this;
  }
  template <typename UnprocessedStatusEventsT = UnprocessedStatusEvent>
  ReportInstrumentationConfigurationStatusResult& AddUnprocessedStatusEvents(UnprocessedStatusEventsT&& value) {
    m_unprocessedStatusEventsHasBeenSet = true;
    m_unprocessedStatusEvents.emplace_back(std::forward<UnprocessedStatusEventsT>(value));
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
  ReportInstrumentationConfigurationStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_service;

  Aws::String m_environment;

  Aws::Vector<UnprocessedStatusEvent> m_unprocessedStatusEvents;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_serviceHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_unprocessedStatusEventsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
