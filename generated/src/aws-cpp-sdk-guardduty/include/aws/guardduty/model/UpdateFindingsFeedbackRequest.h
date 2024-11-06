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
    AWS_GUARDDUTY_API UpdateFindingsFeedbackRequest();

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
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }
    inline UpdateFindingsFeedbackRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline UpdateFindingsFeedbackRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline UpdateFindingsFeedbackRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the findings that you want to mark as useful or not useful.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const{ return m_findingIds; }
    inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }
    inline void SetFindingIds(const Aws::Vector<Aws::String>& value) { m_findingIdsHasBeenSet = true; m_findingIds = value; }
    inline void SetFindingIds(Aws::Vector<Aws::String>&& value) { m_findingIdsHasBeenSet = true; m_findingIds = std::move(value); }
    inline UpdateFindingsFeedbackRequest& WithFindingIds(const Aws::Vector<Aws::String>& value) { SetFindingIds(value); return *this;}
    inline UpdateFindingsFeedbackRequest& WithFindingIds(Aws::Vector<Aws::String>&& value) { SetFindingIds(std::move(value)); return *this;}
    inline UpdateFindingsFeedbackRequest& AddFindingIds(const Aws::String& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }
    inline UpdateFindingsFeedbackRequest& AddFindingIds(Aws::String&& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(std::move(value)); return *this; }
    inline UpdateFindingsFeedbackRequest& AddFindingIds(const char* value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The feedback for the finding.</p>
     */
    inline const Feedback& GetFeedback() const{ return m_feedback; }
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }
    inline void SetFeedback(const Feedback& value) { m_feedbackHasBeenSet = true; m_feedback = value; }
    inline void SetFeedback(Feedback&& value) { m_feedbackHasBeenSet = true; m_feedback = std::move(value); }
    inline UpdateFindingsFeedbackRequest& WithFeedback(const Feedback& value) { SetFeedback(value); return *this;}
    inline UpdateFindingsFeedbackRequest& WithFeedback(Feedback&& value) { SetFeedback(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional feedback about the GuardDuty findings.</p>
     */
    inline const Aws::String& GetComments() const{ return m_comments; }
    inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }
    inline void SetComments(const Aws::String& value) { m_commentsHasBeenSet = true; m_comments = value; }
    inline void SetComments(Aws::String&& value) { m_commentsHasBeenSet = true; m_comments = std::move(value); }
    inline void SetComments(const char* value) { m_commentsHasBeenSet = true; m_comments.assign(value); }
    inline UpdateFindingsFeedbackRequest& WithComments(const Aws::String& value) { SetComments(value); return *this;}
    inline UpdateFindingsFeedbackRequest& WithComments(Aws::String&& value) { SetComments(std::move(value)); return *this;}
    inline UpdateFindingsFeedbackRequest& WithComments(const char* value) { SetComments(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_findingIds;
    bool m_findingIdsHasBeenSet = false;

    Feedback m_feedback;
    bool m_feedbackHasBeenSet = false;

    Aws::String m_comments;
    bool m_commentsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
