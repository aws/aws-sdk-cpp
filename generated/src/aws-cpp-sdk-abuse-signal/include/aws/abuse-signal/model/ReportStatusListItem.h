/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/abuse-signal/model/ReasonCode.h>
#include <aws/abuse-signal/model/ReportSubmissionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AbuseSignal {
namespace Model {

/**
 * <p>Status information for an individual abuse report. The
 * ListAbuseReportStatuses operation returns this structure in its reports
 * list.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/ReportStatusListItem">AWS
 * API Reference</a></p>
 */
class ReportStatusListItem {
 public:
  AWS_ABUSESIGNAL_API ReportStatusListItem() = default;
  AWS_ABUSESIGNAL_API ReportStatusListItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API ReportStatusListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ABUSESIGNAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the abuse report.</p>
   */
  inline const Aws::String& GetReportId() const { return m_reportId; }
  inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
  template <typename ReportIdT = Aws::String>
  void SetReportId(ReportIdT&& value) {
    m_reportIdHasBeenSet = true;
    m_reportId = std::forward<ReportIdT>(value);
  }
  template <typename ReportIdT = Aws::String>
  ReportStatusListItem& WithReportId(ReportIdT&& value) {
    SetReportId(std::forward<ReportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reporter-provided correlation ID for cross-referencing.</p>
   */
  inline const Aws::String& GetCorrelationId() const { return m_correlationId; }
  inline bool CorrelationIdHasBeenSet() const { return m_correlationIdHasBeenSet; }
  template <typename CorrelationIdT = Aws::String>
  void SetCorrelationId(CorrelationIdT&& value) {
    m_correlationIdHasBeenSet = true;
    m_correlationId = std::forward<CorrelationIdT>(value);
  }
  template <typename CorrelationIdT = Aws::String>
  ReportStatusListItem& WithCorrelationId(CorrelationIdT&& value) {
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
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ReportSubmissionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ReportStatusListItem& WithStatus(ReportSubmissionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the status.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ReportStatusListItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A code that explains the resolution outcome. This value is present only after
   * the report reaches the terminal <code>COMPLETED</code> status; it is absent
   * while the report is <code>QUEUED</code> or <code>PROCESSING</code>.</p>
   */
  inline ReasonCode GetReasonCode() const { return m_reasonCode; }
  inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
  inline void SetReasonCode(ReasonCode value) {
    m_reasonCodeHasBeenSet = true;
    m_reasonCode = value;
  }
  inline ReportStatusListItem& WithReasonCode(ReasonCode value) {
    SetReasonCode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_reportId;

  Aws::String m_correlationId;

  ReportSubmissionStatus m_status{ReportSubmissionStatus::NOT_SET};

  Aws::String m_description;

  ReasonCode m_reasonCode{ReasonCode::NOT_SET};
  bool m_reportIdHasBeenSet = false;
  bool m_correlationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_reasonCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
