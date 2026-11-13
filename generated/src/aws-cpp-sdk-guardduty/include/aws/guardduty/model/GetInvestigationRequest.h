/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/SummaryFormat.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace GuardDuty {
namespace Model {

/**
 */
class GetInvestigationRequest : public GuardDutyRequest {
 public:
  AWS_GUARDDUTY_API GetInvestigationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetInvestigation"; }

  AWS_GUARDDUTY_API Aws::String SerializePayload() const override;

  AWS_GUARDDUTY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique ID of the GuardDuty detector associated with the
   * investigation.</p> <p>To find the <code>detectorId</code> in the current Region,
   * see the Settings page in the GuardDuty console, or run the <a
   * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
   * API.</p>
   */
  inline const Aws::String& GetDetectorId() const { return m_detectorId; }
  inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
  template <typename DetectorIdT = Aws::String>
  void SetDetectorId(DetectorIdT&& value) {
    m_detectorIdHasBeenSet = true;
    m_detectorId = std::forward<DetectorIdT>(value);
  }
  template <typename DetectorIdT = Aws::String>
  GetInvestigationRequest& WithDetectorId(DetectorIdT&& value) {
    SetDetectorId(std::forward<DetectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the investigation to retrieve.</p>
   */
  inline const Aws::String& GetInvestigationId() const { return m_investigationId; }
  inline bool InvestigationIdHasBeenSet() const { return m_investigationIdHasBeenSet; }
  template <typename InvestigationIdT = Aws::String>
  void SetInvestigationId(InvestigationIdT&& value) {
    m_investigationIdHasBeenSet = true;
    m_investigationId = std::forward<InvestigationIdT>(value);
  }
  template <typename InvestigationIdT = Aws::String>
  GetInvestigationRequest& WithInvestigationId(InvestigationIdT&& value) {
    SetInvestigationId(std::forward<InvestigationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format in which to return the investigation summary. Possible values:</p>
   * <ul> <li> <p> <code>STRING</code> – (Default) Returns the summary as text in
   * <code>Summary</code>.</p> </li> <li> <p> <code>STRUCTURED</code> – Returns a
   * typed summary in <code>SummaryData</code>.</p> </li> </ul> <p>GuardDuty returns
   * a summary only when the investigation status is <code>COMPLETED</code>.</p>
   */
  inline SummaryFormat GetSummaryFormat() const { return m_summaryFormat; }
  inline bool SummaryFormatHasBeenSet() const { return m_summaryFormatHasBeenSet; }
  inline void SetSummaryFormat(SummaryFormat value) {
    m_summaryFormatHasBeenSet = true;
    m_summaryFormat = value;
  }
  inline GetInvestigationRequest& WithSummaryFormat(SummaryFormat value) {
    SetSummaryFormat(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_detectorId;

  Aws::String m_investigationId;

  SummaryFormat m_summaryFormat{SummaryFormat::NOT_SET};
  bool m_detectorIdHasBeenSet = false;
  bool m_investigationIdHasBeenSet = false;
  bool m_summaryFormatHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
