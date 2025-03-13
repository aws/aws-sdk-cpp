/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/Feedback.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class UpdateFindingsFeedbackRequest : public GuardDutyRequest
  {
  public:
    AWS_GUARDDUTY_API UpdateFindingsFeedbackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFindingsFeedback"; }

    AWS_GUARDDUTY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the detector that is associated with the findings for which you
     * want to update the feedback.</p> <p>To find the <code>detectorId</code> in the
     * current Region, see the Settings page in the GuardDuty console, or run the <a
     * href="https://docs.aws.amazon.com/guardduty/latest/APIReference/API_ListDetectors.html">ListDetectors</a>
     * API.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    UpdateFindingsFeedbackRequest& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the findings that you want to mark as useful or not useful.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const { return m_findingIds; }
    inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }
    template<typename FindingIdsT = Aws::Vector<Aws::String>>
    void SetFindingIds(FindingIdsT&& value) { m_findingIdsHasBeenSet = true; m_findingIds = std::forward<FindingIdsT>(value); }
    template<typename FindingIdsT = Aws::Vector<Aws::String>>
    UpdateFindingsFeedbackRequest& WithFindingIds(FindingIdsT&& value) { SetFindingIds(std::forward<FindingIdsT>(value)); return *this;}
    template<typename FindingIdsT = Aws::String>
    UpdateFindingsFeedbackRequest& AddFindingIds(FindingIdsT&& value) { m_findingIdsHasBeenSet = true; m_findingIds.emplace_back(std::forward<FindingIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The feedback for the finding.</p>
     */
    inline Feedback GetFeedback() const { return m_feedback; }
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }
    inline void SetFeedback(Feedback value) { m_feedbackHasBeenSet = true; m_feedback = value; }
    inline UpdateFindingsFeedbackRequest& WithFeedback(Feedback value) { SetFeedback(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional feedback about the GuardDuty findings.</p>
     */
    inline const Aws::String& GetComments() const { return m_comments; }
    inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }
    template<typename CommentsT = Aws::String>
    void SetComments(CommentsT&& value) { m_commentsHasBeenSet = true; m_comments = std::forward<CommentsT>(value); }
    template<typename CommentsT = Aws::String>
    UpdateFindingsFeedbackRequest& WithComments(CommentsT&& value) { SetComments(std::forward<CommentsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_findingIds;
    bool m_findingIdsHasBeenSet = false;

    Feedback m_feedback{Feedback::NOT_SET};
    bool m_feedbackHasBeenSet = false;

    Aws::String m_comments;
    bool m_commentsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
