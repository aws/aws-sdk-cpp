/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignalRequest.h>
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/abuse-signal/model/ReportData.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AbuseSignal {
namespace Model {

/**
 * <p>The input for a <a>CreateAbuseReport</a> request. Provide the report in XARF
 * format, and optionally your own correlation ID and idempotency
 * token.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/CreateAbuseReportRequest">AWS
 * API Reference</a></p>
 */
class CreateAbuseReportRequest : public AbuseSignalRequest {
 public:
  AWS_ABUSESIGNAL_API CreateAbuseReportRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAbuseReport"; }

  AWS_ABUSESIGNAL_API Aws::String SerializePayload() const override;

  AWS_ABUSESIGNAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The abuse report data in XARF format. Provide the report under the
   * <code>xarf</code> key.</p>
   */
  inline const ReportData& GetReport() const { return m_report; }
  inline bool ReportHasBeenSet() const { return m_reportHasBeenSet; }
  template <typename ReportT = ReportData>
  void SetReport(ReportT&& value) {
    m_reportHasBeenSet = true;
    m_report = std::forward<ReportT>(value);
  }
  template <typename ReportT = ReportData>
  CreateAbuseReportRequest& WithReport(ReportT&& value) {
    SetReport(std::forward<ReportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional correlation ID for tracking the report in the reporter's system.
   * The service echoes this value back in responses, and you can use it to filter
   * reports with <a>ListAbuseReportStatuses</a>.</p>
   */
  inline const Aws::String& GetCorrelationId() const { return m_correlationId; }
  inline bool CorrelationIdHasBeenSet() const { return m_correlationIdHasBeenSet; }
  template <typename CorrelationIdT = Aws::String>
  void SetCorrelationId(CorrelationIdT&& value) {
    m_correlationIdHasBeenSet = true;
    m_correlationId = std::forward<CorrelationIdT>(value);
  }
  template <typename CorrelationIdT = Aws::String>
  CreateAbuseReportRequest& WithCorrelationId(CorrelationIdT&& value) {
    SetCorrelationId(std::forward<CorrelationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional, client-provided idempotency token that ensures the operation
   * completes no more than once. If the token matches a previous request within 24
   * hours, the service returns the existing report ID instead of creating a new
   * report. When you omit this token, the service automatically generates one that
   * is scoped to a 5-minute window.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAbuseReportRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  ReportData m_report;

  Aws::String m_correlationId;

  Aws::String m_clientToken;
  bool m_reportHasBeenSet = false;
  bool m_correlationIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
