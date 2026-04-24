/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/HealthStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BCMDashboards {
namespace Model {
class ExecuteScheduledReportResult {
 public:
  AWS_BCMDASHBOARDS_API ExecuteScheduledReportResult() = default;
  AWS_BCMDASHBOARDS_API ExecuteScheduledReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BCMDASHBOARDS_API ExecuteScheduledReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The health status of the scheduled report after the execution request.</p>
   */
  inline const HealthStatus& GetHealthStatus() const { return m_healthStatus; }
  template <typename HealthStatusT = HealthStatus>
  void SetHealthStatus(HealthStatusT&& value) {
    m_healthStatusHasBeenSet = true;
    m_healthStatus = std::forward<HealthStatusT>(value);
  }
  template <typename HealthStatusT = HealthStatus>
  ExecuteScheduledReportResult& WithHealthStatus(HealthStatusT&& value) {
    SetHealthStatus(std::forward<HealthStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the execution was successfully triggered.</p>
   */
  inline bool GetExecutionTriggered() const { return m_executionTriggered; }
  inline void SetExecutionTriggered(bool value) {
    m_executionTriggeredHasBeenSet = true;
    m_executionTriggered = value;
  }
  inline ExecuteScheduledReportResult& WithExecutionTriggered(bool value) {
    SetExecutionTriggered(value);
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
  ExecuteScheduledReportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  HealthStatus m_healthStatus;

  bool m_executionTriggered{false};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_healthStatusHasBeenSet = false;
  bool m_executionTriggeredHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
