/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
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
namespace AbuseSignal {
namespace Model {
/**
 * <p>The response from a <a>CreateAbuseReport</a> request. Contains the identifier
 * that Amazon Web Services assigned to your report, which you use to track
 * it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/CreateAbuseReportResponse">AWS
 * API Reference</a></p>
 */
class CreateAbuseReportResult {
 public:
  AWS_ABUSESIGNAL_API CreateAbuseReportResult() = default;
  AWS_ABUSESIGNAL_API CreateAbuseReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ABUSESIGNAL_API CreateAbuseReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier assigned to the submitted abuse report. Use this ID
   * with <a>GetAbuseReportStatus</a> to track processing.</p>
   */
  inline const Aws::String& GetReportId() const { return m_reportId; }
  template <typename ReportIdT = Aws::String>
  void SetReportId(ReportIdT&& value) {
    m_reportIdHasBeenSet = true;
    m_reportId = std::forward<ReportIdT>(value);
  }
  template <typename ReportIdT = Aws::String>
  CreateAbuseReportResult& WithReportId(ReportIdT&& value) {
    SetReportId(std::forward<ReportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The correlation ID that you provided in the request, if any. The service
   * echoes this value back in the response.</p>
   */
  inline const Aws::String& GetCorrelationId() const { return m_correlationId; }
  template <typename CorrelationIdT = Aws::String>
  void SetCorrelationId(CorrelationIdT&& value) {
    m_correlationIdHasBeenSet = true;
    m_correlationId = std::forward<CorrelationIdT>(value);
  }
  template <typename CorrelationIdT = Aws::String>
  CreateAbuseReportResult& WithCorrelationId(CorrelationIdT&& value) {
    SetCorrelationId(std::forward<CorrelationIdT>(value));
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
  CreateAbuseReportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_reportId;

  Aws::String m_correlationId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_reportIdHasBeenSet = false;
  bool m_correlationIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
