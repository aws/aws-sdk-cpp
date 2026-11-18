/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/abuse-signal/model/ReasonCode.h>
#include <aws/abuse-signal/model/ReportSubmissionStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>The response from a <a>GetAbuseReportStatus</a> request. Contains the
 * report's current status, when you submitted it, and when its status last
 * changed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/GetAbuseReportStatusResponse">AWS
 * API Reference</a></p>
 */
class GetAbuseReportStatusResult {
 public:
  AWS_ABUSESIGNAL_API GetAbuseReportStatusResult() = default;
  AWS_ABUSESIGNAL_API GetAbuseReportStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ABUSESIGNAL_API GetAbuseReportStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the abuse report.</p>
   */
  inline const Aws::String& GetReportId() const { return m_reportId; }
  template <typename ReportIdT = Aws::String>
  void SetReportId(ReportIdT&& value) {
    m_reportIdHasBeenSet = true;
    m_reportId = std::forward<ReportIdT>(value);
  }
  template <typename ReportIdT = Aws::String>
  GetAbuseReportStatusResult& WithReportId(ReportIdT&& value) {
    SetReportId(std::forward<ReportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reporter-provided correlation ID for cross-referencing.</p>
   */
  inline const Aws::String& GetCorrelationId() const { return m_correlationId; }
  template <typename CorrelationIdT = Aws::String>
  void SetCorrelationId(CorrelationIdT&& value) {
    m_correlationIdHasBeenSet = true;
    m_correlationId = std::forward<CorrelationIdT>(value);
  }
  template <typename CorrelationIdT = Aws::String>
  GetAbuseReportStatusResult& WithCorrelationId(CorrelationIdT&& value) {
    SetCorrelationId(std::forward<CorrelationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current processing status of the abuse report. Valid values are
   * <code>QUEUED</code> (the report has been received and queued for processing),
   * <code>PROCESSING</code> (the report has been received and is being processed),
   * and <code>COMPLETED</code> (downstream resolution is finished).</p>
   */
  inline ReportSubmissionStatus GetStatus() const { return m_status; }
  inline void SetStatus(ReportSubmissionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetAbuseReportStatusResult& WithStatus(ReportSubmissionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the current status.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetAbuseReportStatusResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A code that explains the resolution outcome. This value is returned only
   * after the report reaches the terminal <code>COMPLETED</code> status; it is
   * absent while the report is <code>QUEUED</code> or <code>PROCESSING</code>. Treat
   * an unrecognized value as opaque, because the set of reason codes is
   * append-only.</p>
   */
  inline ReasonCode GetReasonCode() const { return m_reasonCode; }
  inline void SetReasonCode(ReasonCode value) {
    m_reasonCodeHasBeenSet = true;
    m_reasonCode = value;
  }
  inline GetAbuseReportStatusResult& WithReasonCode(ReasonCode value) {
    SetReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the abuse report was submitted.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedAt() const { return m_submittedAt; }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  void SetSubmittedAt(SubmittedAtT&& value) {
    m_submittedAtHasBeenSet = true;
    m_submittedAt = std::forward<SubmittedAtT>(value);
  }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  GetAbuseReportStatusResult& WithSubmittedAt(SubmittedAtT&& value) {
    SetSubmittedAt(std::forward<SubmittedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the status was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  GetAbuseReportStatusResult& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
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
  GetAbuseReportStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_reportId;

  Aws::String m_correlationId;

  ReportSubmissionStatus m_status{ReportSubmissionStatus::NOT_SET};

  Aws::String m_description;

  ReasonCode m_reasonCode{ReasonCode::NOT_SET};

  Aws::Utils::DateTime m_submittedAt{};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_reportIdHasBeenSet = false;
  bool m_correlationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_reasonCodeHasBeenSet = false;
  bool m_submittedAtHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
