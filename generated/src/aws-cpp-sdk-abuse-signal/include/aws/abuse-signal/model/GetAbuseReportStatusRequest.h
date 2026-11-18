/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignalRequest.h>
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AbuseSignal {
namespace Model {

/**
 * <p>The input for a <a>GetAbuseReportStatus</a> request. Identifies the abuse
 * report whose status you want to retrieve.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/abuse-signal-2026-01-12/GetAbuseReportStatusRequest">AWS
 * API Reference</a></p>
 */
class GetAbuseReportStatusRequest : public AbuseSignalRequest {
 public:
  AWS_ABUSESIGNAL_API GetAbuseReportStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAbuseReportStatus"; }

  AWS_ABUSESIGNAL_API Aws::String SerializePayload() const override;

  AWS_ABUSESIGNAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the abuse report to retrieve status for. This is the
   * <code>reportId</code> that is returned by <a>CreateAbuseReport</a>.</p>
   */
  inline const Aws::String& GetReportId() const { return m_reportId; }
  inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
  template <typename ReportIdT = Aws::String>
  void SetReportId(ReportIdT&& value) {
    m_reportIdHasBeenSet = true;
    m_reportId = std::forward<ReportIdT>(value);
  }
  template <typename ReportIdT = Aws::String>
  GetAbuseReportStatusRequest& WithReportId(ReportIdT&& value) {
    SetReportId(std::forward<ReportIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_reportId;
  bool m_reportIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
