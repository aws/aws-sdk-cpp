/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/abuse-signal/model/ReportStatusListItem.h>
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
namespace AbuseSignal {
namespace Model {
/**
 * <p>The response from a <a>ListAbuseReportStatuses</a> request. Contains one page
 * of abuse report statuses and, when more results remain, a token for retrieving
 * the next page.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/ListAbuseReportStatusesResponse">AWS
 * API Reference</a></p>
 */
class ListAbuseReportStatusesResult {
 public:
  AWS_ABUSESIGNAL_API ListAbuseReportStatusesResult() = default;
  AWS_ABUSESIGNAL_API ListAbuseReportStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ABUSESIGNAL_API ListAbuseReportStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of abuse report status items. This list is empty when no reports are
   * found for the calling account, or when no reports match the specified
   * <code>correlationId</code> filter.</p>
   */
  inline const Aws::Vector<ReportStatusListItem>& GetReports() const { return m_reports; }
  template <typename ReportsT = Aws::Vector<ReportStatusListItem>>
  void SetReports(ReportsT&& value) {
    m_reportsHasBeenSet = true;
    m_reports = std::forward<ReportsT>(value);
  }
  template <typename ReportsT = Aws::Vector<ReportStatusListItem>>
  ListAbuseReportStatusesResult& WithReports(ReportsT&& value) {
    SetReports(std::forward<ReportsT>(value));
    return *this;
  }
  template <typename ReportsT = ReportStatusListItem>
  ListAbuseReportStatusesResult& AddReports(ReportsT&& value) {
    m_reportsHasBeenSet = true;
    m_reports.emplace_back(std::forward<ReportsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token for the next page of results. This value is
   * <code>null</code> when there are no more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAbuseReportStatusesResult& WithNextToken(NextTokenT&& value) {
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
  ListAbuseReportStatusesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ReportStatusListItem> m_reports;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_reportsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
