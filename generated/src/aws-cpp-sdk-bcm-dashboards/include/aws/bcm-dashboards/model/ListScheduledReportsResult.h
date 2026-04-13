/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/ScheduledReportSummary.h>
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
namespace BCMDashboards {
namespace Model {
class ListScheduledReportsResult {
 public:
  AWS_BCMDASHBOARDS_API ListScheduledReportsResult() = default;
  AWS_BCMDASHBOARDS_API ListScheduledReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BCMDASHBOARDS_API ListScheduledReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of scheduled report summaries, containing basic information about
   * each scheduled report.</p>
   */
  inline const Aws::Vector<ScheduledReportSummary>& GetScheduledReports() const { return m_scheduledReports; }
  template <typename ScheduledReportsT = Aws::Vector<ScheduledReportSummary>>
  void SetScheduledReports(ScheduledReportsT&& value) {
    m_scheduledReportsHasBeenSet = true;
    m_scheduledReports = std::forward<ScheduledReportsT>(value);
  }
  template <typename ScheduledReportsT = Aws::Vector<ScheduledReportSummary>>
  ListScheduledReportsResult& WithScheduledReports(ScheduledReportsT&& value) {
    SetScheduledReports(std::forward<ScheduledReportsT>(value));
    return *this;
  }
  template <typename ScheduledReportsT = ScheduledReportSummary>
  ListScheduledReportsResult& AddScheduledReports(ScheduledReportsT&& value) {
    m_scheduledReportsHasBeenSet = true;
    m_scheduledReports.emplace_back(std::forward<ScheduledReportsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next page of results. Not returned if there
   * are no more results to retrieve.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListScheduledReportsResult& WithNextToken(NextTokenT&& value) {
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
  ListScheduledReportsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ScheduledReportSummary> m_scheduledReports;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_scheduledReportsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
