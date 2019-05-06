/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/Feedback.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   * UpdateFindingsFeedback request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UpdateFindingsFeedbackRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API UpdateFindingsFeedbackRequest : public GuardDutyRequest
  {
  public:
    UpdateFindingsFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFindingsFeedback"; }

    Aws::String SerializePayload() const override;


    /**
     * Additional feedback about the GuardDuty findings.
     */
    inline const Aws::String& GetComments() const{ return m_comments; }

    /**
     * Additional feedback about the GuardDuty findings.
     */
    inline bool CommentsHasBeenSet() const { return m_commentsHasBeenSet; }

    /**
     * Additional feedback about the GuardDuty findings.
     */
    inline void SetComments(const Aws::String& value) { m_commentsHasBeenSet = true; m_comments = value; }

    /**
     * Additional feedback about the GuardDuty findings.
     */
    inline void SetComments(Aws::String&& value) { m_commentsHasBeenSet = true; m_comments = std::move(value); }

    /**
     * Additional feedback about the GuardDuty findings.
     */
    inline void SetComments(const char* value) { m_commentsHasBeenSet = true; m_comments.assign(value); }

    /**
     * Additional feedback about the GuardDuty findings.
     */
    inline UpdateFindingsFeedbackRequest& WithComments(const Aws::String& value) { SetComments(value); return *this;}

    /**
     * Additional feedback about the GuardDuty findings.
     */
    inline UpdateFindingsFeedbackRequest& WithComments(Aws::String&& value) { SetComments(std::move(value)); return *this;}

    /**
     * Additional feedback about the GuardDuty findings.
     */
    inline UpdateFindingsFeedbackRequest& WithComments(const char* value) { SetComments(value); return *this;}


    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to mark as useful or not useful.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to mark as useful or not useful.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to mark as useful or not useful.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to mark as useful or not useful.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to mark as useful or not useful.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to mark as useful or not useful.
     */
    inline UpdateFindingsFeedbackRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to mark as useful or not useful.
     */
    inline UpdateFindingsFeedbackRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The ID of the detector that specifies the GuardDuty service whose findings you
     * want to mark as useful or not useful.
     */
    inline UpdateFindingsFeedbackRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * Valid values: USEFUL | NOT_USEFUL
     */
    inline const Feedback& GetFeedback() const{ return m_feedback; }

    /**
     * Valid values: USEFUL | NOT_USEFUL
     */
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }

    /**
     * Valid values: USEFUL | NOT_USEFUL
     */
    inline void SetFeedback(const Feedback& value) { m_feedbackHasBeenSet = true; m_feedback = value; }

    /**
     * Valid values: USEFUL | NOT_USEFUL
     */
    inline void SetFeedback(Feedback&& value) { m_feedbackHasBeenSet = true; m_feedback = std::move(value); }

    /**
     * Valid values: USEFUL | NOT_USEFUL
     */
    inline UpdateFindingsFeedbackRequest& WithFeedback(const Feedback& value) { SetFeedback(value); return *this;}

    /**
     * Valid values: USEFUL | NOT_USEFUL
     */
    inline UpdateFindingsFeedbackRequest& WithFeedback(Feedback&& value) { SetFeedback(std::move(value)); return *this;}


    /**
     * IDs of the findings that you want to mark as useful or not useful.
     */
    inline const Aws::Vector<Aws::String>& GetFindingIds() const{ return m_findingIds; }

    /**
     * IDs of the findings that you want to mark as useful or not useful.
     */
    inline bool FindingIdsHasBeenSet() const { return m_findingIdsHasBeenSet; }

    /**
     * IDs of the findings that you want to mark as useful or not useful.
     */
    inline void SetFindingIds(const Aws::Vector<Aws::String>& value) { m_findingIdsHasBeenSet = true; m_findingIds = value; }

    /**
     * IDs of the findings that you want to mark as useful or not useful.
     */
    inline void SetFindingIds(Aws::Vector<Aws::String>&& value) { m_findingIdsHasBeenSet = true; m_findingIds = std::move(value); }

    /**
     * IDs of the findings that you want to mark as useful or not useful.
     */
    inline UpdateFindingsFeedbackRequest& WithFindingIds(const Aws::Vector<Aws::String>& value) { SetFindingIds(value); return *this;}

    /**
     * IDs of the findings that you want to mark as useful or not useful.
     */
    inline UpdateFindingsFeedbackRequest& WithFindingIds(Aws::Vector<Aws::String>&& value) { SetFindingIds(std::move(value)); return *this;}

    /**
     * IDs of the findings that you want to mark as useful or not useful.
     */
    inline UpdateFindingsFeedbackRequest& AddFindingIds(const Aws::String& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }

    /**
     * IDs of the findings that you want to mark as useful or not useful.
     */
    inline UpdateFindingsFeedbackRequest& AddFindingIds(Aws::String&& value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(std::move(value)); return *this; }

    /**
     * IDs of the findings that you want to mark as useful or not useful.
     */
    inline UpdateFindingsFeedbackRequest& AddFindingIds(const char* value) { m_findingIdsHasBeenSet = true; m_findingIds.push_back(value); return *this; }

  private:

    Aws::String m_comments;
    bool m_commentsHasBeenSet;

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    Feedback m_feedback;
    bool m_feedbackHasBeenSet;

    Aws::Vector<Aws::String> m_findingIds;
    bool m_findingIdsHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
