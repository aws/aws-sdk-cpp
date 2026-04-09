/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/ScheduledReport.h>
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
class GetScheduledReportResult {
 public:
  AWS_BCMDASHBOARDS_API GetScheduledReportResult() = default;
  AWS_BCMDASHBOARDS_API GetScheduledReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BCMDASHBOARDS_API GetScheduledReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The scheduled report configuration and metadata.</p>
   */
  inline const ScheduledReport& GetScheduledReport() const { return m_scheduledReport; }
  template <typename ScheduledReportT = ScheduledReport>
  void SetScheduledReport(ScheduledReportT&& value) {
    m_scheduledReportHasBeenSet = true;
    m_scheduledReport = std::forward<ScheduledReportT>(value);
  }
  template <typename ScheduledReportT = ScheduledReport>
  GetScheduledReportResult& WithScheduledReport(ScheduledReportT&& value) {
    SetScheduledReport(std::forward<ScheduledReportT>(value));
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
  GetScheduledReportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ScheduledReport m_scheduledReport;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_scheduledReportHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
