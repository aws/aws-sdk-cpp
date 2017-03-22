/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/QualificationRequirement.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API CreateHITTypeRequest : public MTurkRequest
  {
  public:
    CreateHITTypeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The number of seconds after an assignment for the HIT has been submitted,
     * after which the assignment is considered Approved automatically unless the
     * Requester explicitly rejects it. </p>
     */
    inline long long GetAutoApprovalDelayInSeconds() const{ return m_autoApprovalDelayInSeconds; }

    /**
     * <p> The number of seconds after an assignment for the HIT has been submitted,
     * after which the assignment is considered Approved automatically unless the
     * Requester explicitly rejects it. </p>
     */
    inline void SetAutoApprovalDelayInSeconds(long long value) { m_autoApprovalDelayInSecondsHasBeenSet = true; m_autoApprovalDelayInSeconds = value; }

    /**
     * <p> The number of seconds after an assignment for the HIT has been submitted,
     * after which the assignment is considered Approved automatically unless the
     * Requester explicitly rejects it. </p>
     */
    inline CreateHITTypeRequest& WithAutoApprovalDelayInSeconds(long long value) { SetAutoApprovalDelayInSeconds(value); return *this;}

    /**
     * <p> The amount of time, in seconds, that a Worker has to complete the HIT after
     * accepting it. If a Worker does not complete the assignment within the specified
     * duration, the assignment is considered abandoned. If the HIT is still active
     * (that is, its lifetime has not elapsed), the assignment becomes available for
     * other users to find and accept. </p>
     */
    inline long long GetAssignmentDurationInSeconds() const{ return m_assignmentDurationInSeconds; }

    /**
     * <p> The amount of time, in seconds, that a Worker has to complete the HIT after
     * accepting it. If a Worker does not complete the assignment within the specified
     * duration, the assignment is considered abandoned. If the HIT is still active
     * (that is, its lifetime has not elapsed), the assignment becomes available for
     * other users to find and accept. </p>
     */
    inline void SetAssignmentDurationInSeconds(long long value) { m_assignmentDurationInSecondsHasBeenSet = true; m_assignmentDurationInSeconds = value; }

    /**
     * <p> The amount of time, in seconds, that a Worker has to complete the HIT after
     * accepting it. If a Worker does not complete the assignment within the specified
     * duration, the assignment is considered abandoned. If the HIT is still active
     * (that is, its lifetime has not elapsed), the assignment becomes available for
     * other users to find and accept. </p>
     */
    inline CreateHITTypeRequest& WithAssignmentDurationInSeconds(long long value) { SetAssignmentDurationInSeconds(value); return *this;}

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline const Aws::String& GetReward() const{ return m_reward; }

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline void SetReward(const Aws::String& value) { m_rewardHasBeenSet = true; m_reward = value; }

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline void SetReward(Aws::String&& value) { m_rewardHasBeenSet = true; m_reward = value; }

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline void SetReward(const char* value) { m_rewardHasBeenSet = true; m_reward.assign(value); }

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline CreateHITTypeRequest& WithReward(const Aws::String& value) { SetReward(value); return *this;}

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline CreateHITTypeRequest& WithReward(Aws::String&& value) { SetReward(value); return *this;}

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline CreateHITTypeRequest& WithReward(const char* value) { SetReward(value); return *this;}

    /**
     * <p> The title of the HIT. A title should be short and descriptive about the kind
     * of task the HIT contains. On the Amazon Mechanical Turk web site, the HIT title
     * appears in search results, and everywhere the HIT is mentioned. </p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p> The title of the HIT. A title should be short and descriptive about the kind
     * of task the HIT contains. On the Amazon Mechanical Turk web site, the HIT title
     * appears in search results, and everywhere the HIT is mentioned. </p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p> The title of the HIT. A title should be short and descriptive about the kind
     * of task the HIT contains. On the Amazon Mechanical Turk web site, the HIT title
     * appears in search results, and everywhere the HIT is mentioned. </p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p> The title of the HIT. A title should be short and descriptive about the kind
     * of task the HIT contains. On the Amazon Mechanical Turk web site, the HIT title
     * appears in search results, and everywhere the HIT is mentioned. </p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p> The title of the HIT. A title should be short and descriptive about the kind
     * of task the HIT contains. On the Amazon Mechanical Turk web site, the HIT title
     * appears in search results, and everywhere the HIT is mentioned. </p>
     */
    inline CreateHITTypeRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p> The title of the HIT. A title should be short and descriptive about the kind
     * of task the HIT contains. On the Amazon Mechanical Turk web site, the HIT title
     * appears in search results, and everywhere the HIT is mentioned. </p>
     */
    inline CreateHITTypeRequest& WithTitle(Aws::String&& value) { SetTitle(value); return *this;}

    /**
     * <p> The title of the HIT. A title should be short and descriptive about the kind
     * of task the HIT contains. On the Amazon Mechanical Turk web site, the HIT title
     * appears in search results, and everywhere the HIT is mentioned. </p>
     */
    inline CreateHITTypeRequest& WithTitle(const char* value) { SetTitle(value); return *this;}

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline const Aws::String& GetKeywords() const{ return m_keywords; }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline void SetKeywords(const Aws::String& value) { m_keywordsHasBeenSet = true; m_keywords = value; }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline void SetKeywords(Aws::String&& value) { m_keywordsHasBeenSet = true; m_keywords = value; }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline void SetKeywords(const char* value) { m_keywordsHasBeenSet = true; m_keywords.assign(value); }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline CreateHITTypeRequest& WithKeywords(const Aws::String& value) { SetKeywords(value); return *this;}

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline CreateHITTypeRequest& WithKeywords(Aws::String&& value) { SetKeywords(value); return *this;}

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline CreateHITTypeRequest& WithKeywords(const char* value) { SetKeywords(value); return *this;}

    /**
     * <p> A general description of the HIT. A description includes detailed
     * information about the kind of task the HIT contains. On the Amazon Mechanical
     * Turk web site, the HIT description appears in the expanded view of search
     * results, and in the HIT and assignment screens. A good description gives the
     * user enough information to evaluate the HIT before accepting it. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A general description of the HIT. A description includes detailed
     * information about the kind of task the HIT contains. On the Amazon Mechanical
     * Turk web site, the HIT description appears in the expanded view of search
     * results, and in the HIT and assignment screens. A good description gives the
     * user enough information to evaluate the HIT before accepting it. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A general description of the HIT. A description includes detailed
     * information about the kind of task the HIT contains. On the Amazon Mechanical
     * Turk web site, the HIT description appears in the expanded view of search
     * results, and in the HIT and assignment screens. A good description gives the
     * user enough information to evaluate the HIT before accepting it. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A general description of the HIT. A description includes detailed
     * information about the kind of task the HIT contains. On the Amazon Mechanical
     * Turk web site, the HIT description appears in the expanded view of search
     * results, and in the HIT and assignment screens. A good description gives the
     * user enough information to evaluate the HIT before accepting it. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A general description of the HIT. A description includes detailed
     * information about the kind of task the HIT contains. On the Amazon Mechanical
     * Turk web site, the HIT description appears in the expanded view of search
     * results, and in the HIT and assignment screens. A good description gives the
     * user enough information to evaluate the HIT before accepting it. </p>
     */
    inline CreateHITTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A general description of the HIT. A description includes detailed
     * information about the kind of task the HIT contains. On the Amazon Mechanical
     * Turk web site, the HIT description appears in the expanded view of search
     * results, and in the HIT and assignment screens. A good description gives the
     * user enough information to evaluate the HIT before accepting it. </p>
     */
    inline CreateHITTypeRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p> A general description of the HIT. A description includes detailed
     * information about the kind of task the HIT contains. On the Amazon Mechanical
     * Turk web site, the HIT description appears in the expanded view of search
     * results, and in the HIT and assignment screens. A good description gives the
     * user enough information to evaluate the HIT before accepting it. </p>
     */
    inline CreateHITTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p> A condition that a Worker's Qualifications must meet before the Worker is
     * allowed to accept and complete the HIT. </p>
     */
    inline const Aws::Vector<QualificationRequirement>& GetQualificationRequirements() const{ return m_qualificationRequirements; }

    /**
     * <p> A condition that a Worker's Qualifications must meet before the Worker is
     * allowed to accept and complete the HIT. </p>
     */
    inline void SetQualificationRequirements(const Aws::Vector<QualificationRequirement>& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements = value; }

    /**
     * <p> A condition that a Worker's Qualifications must meet before the Worker is
     * allowed to accept and complete the HIT. </p>
     */
    inline void SetQualificationRequirements(Aws::Vector<QualificationRequirement>&& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements = value; }

    /**
     * <p> A condition that a Worker's Qualifications must meet before the Worker is
     * allowed to accept and complete the HIT. </p>
     */
    inline CreateHITTypeRequest& WithQualificationRequirements(const Aws::Vector<QualificationRequirement>& value) { SetQualificationRequirements(value); return *this;}

    /**
     * <p> A condition that a Worker's Qualifications must meet before the Worker is
     * allowed to accept and complete the HIT. </p>
     */
    inline CreateHITTypeRequest& WithQualificationRequirements(Aws::Vector<QualificationRequirement>&& value) { SetQualificationRequirements(value); return *this;}

    /**
     * <p> A condition that a Worker's Qualifications must meet before the Worker is
     * allowed to accept and complete the HIT. </p>
     */
    inline CreateHITTypeRequest& AddQualificationRequirements(const QualificationRequirement& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements.push_back(value); return *this; }

    /**
     * <p> A condition that a Worker's Qualifications must meet before the Worker is
     * allowed to accept and complete the HIT. </p>
     */
    inline CreateHITTypeRequest& AddQualificationRequirements(QualificationRequirement&& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements.push_back(value); return *this; }

  private:
    long long m_autoApprovalDelayInSeconds;
    bool m_autoApprovalDelayInSecondsHasBeenSet;
    long long m_assignmentDurationInSeconds;
    bool m_assignmentDurationInSecondsHasBeenSet;
    Aws::String m_reward;
    bool m_rewardHasBeenSet;
    Aws::String m_title;
    bool m_titleHasBeenSet;
    Aws::String m_keywords;
    bool m_keywordsHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Vector<QualificationRequirement> m_qualificationRequirements;
    bool m_qualificationRequirementsHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
