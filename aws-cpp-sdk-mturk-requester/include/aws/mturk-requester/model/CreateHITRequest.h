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
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/ReviewPolicy.h>
#include <aws/mturk-requester/model/QualificationRequirement.h>
#include <aws/mturk-requester/model/HITLayoutParameter.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API CreateHITRequest : public MTurkRequest
  {
  public:
    CreateHITRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHIT"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The number of times the HIT can be accepted and completed before the HIT
     * becomes unavailable. </p>
     */
    inline int GetMaxAssignments() const{ return m_maxAssignments; }

    /**
     * <p> The number of times the HIT can be accepted and completed before the HIT
     * becomes unavailable. </p>
     */
    inline bool MaxAssignmentsHasBeenSet() const { return m_maxAssignmentsHasBeenSet; }

    /**
     * <p> The number of times the HIT can be accepted and completed before the HIT
     * becomes unavailable. </p>
     */
    inline void SetMaxAssignments(int value) { m_maxAssignmentsHasBeenSet = true; m_maxAssignments = value; }

    /**
     * <p> The number of times the HIT can be accepted and completed before the HIT
     * becomes unavailable. </p>
     */
    inline CreateHITRequest& WithMaxAssignments(int value) { SetMaxAssignments(value); return *this;}


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
    inline bool AutoApprovalDelayInSecondsHasBeenSet() const { return m_autoApprovalDelayInSecondsHasBeenSet; }

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
    inline CreateHITRequest& WithAutoApprovalDelayInSeconds(long long value) { SetAutoApprovalDelayInSeconds(value); return *this;}


    /**
     * <p> An amount of time, in seconds, after which the HIT is no longer available
     * for users to accept. After the lifetime of the HIT elapses, the HIT no longer
     * appears in HIT searches, even if not all of the assignments for the HIT have
     * been accepted. </p>
     */
    inline long long GetLifetimeInSeconds() const{ return m_lifetimeInSeconds; }

    /**
     * <p> An amount of time, in seconds, after which the HIT is no longer available
     * for users to accept. After the lifetime of the HIT elapses, the HIT no longer
     * appears in HIT searches, even if not all of the assignments for the HIT have
     * been accepted. </p>
     */
    inline bool LifetimeInSecondsHasBeenSet() const { return m_lifetimeInSecondsHasBeenSet; }

    /**
     * <p> An amount of time, in seconds, after which the HIT is no longer available
     * for users to accept. After the lifetime of the HIT elapses, the HIT no longer
     * appears in HIT searches, even if not all of the assignments for the HIT have
     * been accepted. </p>
     */
    inline void SetLifetimeInSeconds(long long value) { m_lifetimeInSecondsHasBeenSet = true; m_lifetimeInSeconds = value; }

    /**
     * <p> An amount of time, in seconds, after which the HIT is no longer available
     * for users to accept. After the lifetime of the HIT elapses, the HIT no longer
     * appears in HIT searches, even if not all of the assignments for the HIT have
     * been accepted. </p>
     */
    inline CreateHITRequest& WithLifetimeInSeconds(long long value) { SetLifetimeInSeconds(value); return *this;}


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
    inline bool AssignmentDurationInSecondsHasBeenSet() const { return m_assignmentDurationInSecondsHasBeenSet; }

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
    inline CreateHITRequest& WithAssignmentDurationInSeconds(long long value) { SetAssignmentDurationInSeconds(value); return *this;}


    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline const Aws::String& GetReward() const{ return m_reward; }

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline bool RewardHasBeenSet() const { return m_rewardHasBeenSet; }

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline void SetReward(const Aws::String& value) { m_rewardHasBeenSet = true; m_reward = value; }

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline void SetReward(Aws::String&& value) { m_rewardHasBeenSet = true; m_reward = std::move(value); }

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline void SetReward(const char* value) { m_rewardHasBeenSet = true; m_reward.assign(value); }

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline CreateHITRequest& WithReward(const Aws::String& value) { SetReward(value); return *this;}

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline CreateHITRequest& WithReward(Aws::String&& value) { SetReward(std::move(value)); return *this;}

    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline CreateHITRequest& WithReward(const char* value) { SetReward(value); return *this;}


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
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

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
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

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
    inline CreateHITRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p> The title of the HIT. A title should be short and descriptive about the kind
     * of task the HIT contains. On the Amazon Mechanical Turk web site, the HIT title
     * appears in search results, and everywhere the HIT is mentioned. </p>
     */
    inline CreateHITRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p> The title of the HIT. A title should be short and descriptive about the kind
     * of task the HIT contains. On the Amazon Mechanical Turk web site, the HIT title
     * appears in search results, and everywhere the HIT is mentioned. </p>
     */
    inline CreateHITRequest& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline const Aws::String& GetKeywords() const{ return m_keywords; }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline void SetKeywords(const Aws::String& value) { m_keywordsHasBeenSet = true; m_keywords = value; }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline void SetKeywords(Aws::String&& value) { m_keywordsHasBeenSet = true; m_keywords = std::move(value); }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline void SetKeywords(const char* value) { m_keywordsHasBeenSet = true; m_keywords.assign(value); }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline CreateHITRequest& WithKeywords(const Aws::String& value) { SetKeywords(value); return *this;}

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline CreateHITRequest& WithKeywords(Aws::String&& value) { SetKeywords(std::move(value)); return *this;}

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline CreateHITRequest& WithKeywords(const char* value) { SetKeywords(value); return *this;}


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
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

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
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

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
    inline CreateHITRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A general description of the HIT. A description includes detailed
     * information about the kind of task the HIT contains. On the Amazon Mechanical
     * Turk web site, the HIT description appears in the expanded view of search
     * results, and in the HIT and assignment screens. A good description gives the
     * user enough information to evaluate the HIT before accepting it. </p>
     */
    inline CreateHITRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A general description of the HIT. A description includes detailed
     * information about the kind of task the HIT contains. On the Amazon Mechanical
     * Turk web site, the HIT description appears in the expanded view of search
     * results, and in the HIT and assignment screens. A good description gives the
     * user enough information to evaluate the HIT before accepting it. </p>
     */
    inline CreateHITRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The data the person completing the HIT uses to produce the results. </p> <p>
     * Constraints: Must be a QuestionForm data structure, an ExternalQuestion data
     * structure, or an HTMLQuestion data structure. The XML question data must not be
     * larger than 64 kilobytes (65,535 bytes) in size, including whitespace. </p>
     * <p>Either a Question parameter or a HITLayoutId parameter must be provided.</p>
     */
    inline const Aws::String& GetQuestion() const{ return m_question; }

    /**
     * <p> The data the person completing the HIT uses to produce the results. </p> <p>
     * Constraints: Must be a QuestionForm data structure, an ExternalQuestion data
     * structure, or an HTMLQuestion data structure. The XML question data must not be
     * larger than 64 kilobytes (65,535 bytes) in size, including whitespace. </p>
     * <p>Either a Question parameter or a HITLayoutId parameter must be provided.</p>
     */
    inline bool QuestionHasBeenSet() const { return m_questionHasBeenSet; }

    /**
     * <p> The data the person completing the HIT uses to produce the results. </p> <p>
     * Constraints: Must be a QuestionForm data structure, an ExternalQuestion data
     * structure, or an HTMLQuestion data structure. The XML question data must not be
     * larger than 64 kilobytes (65,535 bytes) in size, including whitespace. </p>
     * <p>Either a Question parameter or a HITLayoutId parameter must be provided.</p>
     */
    inline void SetQuestion(const Aws::String& value) { m_questionHasBeenSet = true; m_question = value; }

    /**
     * <p> The data the person completing the HIT uses to produce the results. </p> <p>
     * Constraints: Must be a QuestionForm data structure, an ExternalQuestion data
     * structure, or an HTMLQuestion data structure. The XML question data must not be
     * larger than 64 kilobytes (65,535 bytes) in size, including whitespace. </p>
     * <p>Either a Question parameter or a HITLayoutId parameter must be provided.</p>
     */
    inline void SetQuestion(Aws::String&& value) { m_questionHasBeenSet = true; m_question = std::move(value); }

    /**
     * <p> The data the person completing the HIT uses to produce the results. </p> <p>
     * Constraints: Must be a QuestionForm data structure, an ExternalQuestion data
     * structure, or an HTMLQuestion data structure. The XML question data must not be
     * larger than 64 kilobytes (65,535 bytes) in size, including whitespace. </p>
     * <p>Either a Question parameter or a HITLayoutId parameter must be provided.</p>
     */
    inline void SetQuestion(const char* value) { m_questionHasBeenSet = true; m_question.assign(value); }

    /**
     * <p> The data the person completing the HIT uses to produce the results. </p> <p>
     * Constraints: Must be a QuestionForm data structure, an ExternalQuestion data
     * structure, or an HTMLQuestion data structure. The XML question data must not be
     * larger than 64 kilobytes (65,535 bytes) in size, including whitespace. </p>
     * <p>Either a Question parameter or a HITLayoutId parameter must be provided.</p>
     */
    inline CreateHITRequest& WithQuestion(const Aws::String& value) { SetQuestion(value); return *this;}

    /**
     * <p> The data the person completing the HIT uses to produce the results. </p> <p>
     * Constraints: Must be a QuestionForm data structure, an ExternalQuestion data
     * structure, or an HTMLQuestion data structure. The XML question data must not be
     * larger than 64 kilobytes (65,535 bytes) in size, including whitespace. </p>
     * <p>Either a Question parameter or a HITLayoutId parameter must be provided.</p>
     */
    inline CreateHITRequest& WithQuestion(Aws::String&& value) { SetQuestion(std::move(value)); return *this;}

    /**
     * <p> The data the person completing the HIT uses to produce the results. </p> <p>
     * Constraints: Must be a QuestionForm data structure, an ExternalQuestion data
     * structure, or an HTMLQuestion data structure. The XML question data must not be
     * larger than 64 kilobytes (65,535 bytes) in size, including whitespace. </p>
     * <p>Either a Question parameter or a HITLayoutId parameter must be provided.</p>
     */
    inline CreateHITRequest& WithQuestion(const char* value) { SetQuestion(value); return *this;}


    /**
     * <p> An arbitrary data field. The RequesterAnnotation parameter lets your
     * application attach arbitrary data to the HIT for tracking purposes. For example,
     * this parameter could be an identifier internal to the Requester's application
     * that corresponds with the HIT. </p> <p> The RequesterAnnotation parameter for a
     * HIT is only visible to the Requester who created the HIT. It is not shown to the
     * Worker, or any other Requester. </p> <p> The RequesterAnnotation parameter may
     * be different for each HIT you submit. It does not affect how your HITs are
     * grouped. </p>
     */
    inline const Aws::String& GetRequesterAnnotation() const{ return m_requesterAnnotation; }

    /**
     * <p> An arbitrary data field. The RequesterAnnotation parameter lets your
     * application attach arbitrary data to the HIT for tracking purposes. For example,
     * this parameter could be an identifier internal to the Requester's application
     * that corresponds with the HIT. </p> <p> The RequesterAnnotation parameter for a
     * HIT is only visible to the Requester who created the HIT. It is not shown to the
     * Worker, or any other Requester. </p> <p> The RequesterAnnotation parameter may
     * be different for each HIT you submit. It does not affect how your HITs are
     * grouped. </p>
     */
    inline bool RequesterAnnotationHasBeenSet() const { return m_requesterAnnotationHasBeenSet; }

    /**
     * <p> An arbitrary data field. The RequesterAnnotation parameter lets your
     * application attach arbitrary data to the HIT for tracking purposes. For example,
     * this parameter could be an identifier internal to the Requester's application
     * that corresponds with the HIT. </p> <p> The RequesterAnnotation parameter for a
     * HIT is only visible to the Requester who created the HIT. It is not shown to the
     * Worker, or any other Requester. </p> <p> The RequesterAnnotation parameter may
     * be different for each HIT you submit. It does not affect how your HITs are
     * grouped. </p>
     */
    inline void SetRequesterAnnotation(const Aws::String& value) { m_requesterAnnotationHasBeenSet = true; m_requesterAnnotation = value; }

    /**
     * <p> An arbitrary data field. The RequesterAnnotation parameter lets your
     * application attach arbitrary data to the HIT for tracking purposes. For example,
     * this parameter could be an identifier internal to the Requester's application
     * that corresponds with the HIT. </p> <p> The RequesterAnnotation parameter for a
     * HIT is only visible to the Requester who created the HIT. It is not shown to the
     * Worker, or any other Requester. </p> <p> The RequesterAnnotation parameter may
     * be different for each HIT you submit. It does not affect how your HITs are
     * grouped. </p>
     */
    inline void SetRequesterAnnotation(Aws::String&& value) { m_requesterAnnotationHasBeenSet = true; m_requesterAnnotation = std::move(value); }

    /**
     * <p> An arbitrary data field. The RequesterAnnotation parameter lets your
     * application attach arbitrary data to the HIT for tracking purposes. For example,
     * this parameter could be an identifier internal to the Requester's application
     * that corresponds with the HIT. </p> <p> The RequesterAnnotation parameter for a
     * HIT is only visible to the Requester who created the HIT. It is not shown to the
     * Worker, or any other Requester. </p> <p> The RequesterAnnotation parameter may
     * be different for each HIT you submit. It does not affect how your HITs are
     * grouped. </p>
     */
    inline void SetRequesterAnnotation(const char* value) { m_requesterAnnotationHasBeenSet = true; m_requesterAnnotation.assign(value); }

    /**
     * <p> An arbitrary data field. The RequesterAnnotation parameter lets your
     * application attach arbitrary data to the HIT for tracking purposes. For example,
     * this parameter could be an identifier internal to the Requester's application
     * that corresponds with the HIT. </p> <p> The RequesterAnnotation parameter for a
     * HIT is only visible to the Requester who created the HIT. It is not shown to the
     * Worker, or any other Requester. </p> <p> The RequesterAnnotation parameter may
     * be different for each HIT you submit. It does not affect how your HITs are
     * grouped. </p>
     */
    inline CreateHITRequest& WithRequesterAnnotation(const Aws::String& value) { SetRequesterAnnotation(value); return *this;}

    /**
     * <p> An arbitrary data field. The RequesterAnnotation parameter lets your
     * application attach arbitrary data to the HIT for tracking purposes. For example,
     * this parameter could be an identifier internal to the Requester's application
     * that corresponds with the HIT. </p> <p> The RequesterAnnotation parameter for a
     * HIT is only visible to the Requester who created the HIT. It is not shown to the
     * Worker, or any other Requester. </p> <p> The RequesterAnnotation parameter may
     * be different for each HIT you submit. It does not affect how your HITs are
     * grouped. </p>
     */
    inline CreateHITRequest& WithRequesterAnnotation(Aws::String&& value) { SetRequesterAnnotation(std::move(value)); return *this;}

    /**
     * <p> An arbitrary data field. The RequesterAnnotation parameter lets your
     * application attach arbitrary data to the HIT for tracking purposes. For example,
     * this parameter could be an identifier internal to the Requester's application
     * that corresponds with the HIT. </p> <p> The RequesterAnnotation parameter for a
     * HIT is only visible to the Requester who created the HIT. It is not shown to the
     * Worker, or any other Requester. </p> <p> The RequesterAnnotation parameter may
     * be different for each HIT you submit. It does not affect how your HITs are
     * grouped. </p>
     */
    inline CreateHITRequest& WithRequesterAnnotation(const char* value) { SetRequesterAnnotation(value); return *this;}


    /**
     * <p> Conditions that a Worker's Qualifications must meet in order to accept the
     * HIT. A HIT can have between zero and ten Qualification requirements. All
     * requirements must be met in order for a Worker to accept the HIT. Additionally,
     * other actions can be restricted using the <code>ActionsGuarded</code> field on
     * each <code>QualificationRequirement</code> structure. </p>
     */
    inline const Aws::Vector<QualificationRequirement>& GetQualificationRequirements() const{ return m_qualificationRequirements; }

    /**
     * <p> Conditions that a Worker's Qualifications must meet in order to accept the
     * HIT. A HIT can have between zero and ten Qualification requirements. All
     * requirements must be met in order for a Worker to accept the HIT. Additionally,
     * other actions can be restricted using the <code>ActionsGuarded</code> field on
     * each <code>QualificationRequirement</code> structure. </p>
     */
    inline bool QualificationRequirementsHasBeenSet() const { return m_qualificationRequirementsHasBeenSet; }

    /**
     * <p> Conditions that a Worker's Qualifications must meet in order to accept the
     * HIT. A HIT can have between zero and ten Qualification requirements. All
     * requirements must be met in order for a Worker to accept the HIT. Additionally,
     * other actions can be restricted using the <code>ActionsGuarded</code> field on
     * each <code>QualificationRequirement</code> structure. </p>
     */
    inline void SetQualificationRequirements(const Aws::Vector<QualificationRequirement>& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements = value; }

    /**
     * <p> Conditions that a Worker's Qualifications must meet in order to accept the
     * HIT. A HIT can have between zero and ten Qualification requirements. All
     * requirements must be met in order for a Worker to accept the HIT. Additionally,
     * other actions can be restricted using the <code>ActionsGuarded</code> field on
     * each <code>QualificationRequirement</code> structure. </p>
     */
    inline void SetQualificationRequirements(Aws::Vector<QualificationRequirement>&& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements = std::move(value); }

    /**
     * <p> Conditions that a Worker's Qualifications must meet in order to accept the
     * HIT. A HIT can have between zero and ten Qualification requirements. All
     * requirements must be met in order for a Worker to accept the HIT. Additionally,
     * other actions can be restricted using the <code>ActionsGuarded</code> field on
     * each <code>QualificationRequirement</code> structure. </p>
     */
    inline CreateHITRequest& WithQualificationRequirements(const Aws::Vector<QualificationRequirement>& value) { SetQualificationRequirements(value); return *this;}

    /**
     * <p> Conditions that a Worker's Qualifications must meet in order to accept the
     * HIT. A HIT can have between zero and ten Qualification requirements. All
     * requirements must be met in order for a Worker to accept the HIT. Additionally,
     * other actions can be restricted using the <code>ActionsGuarded</code> field on
     * each <code>QualificationRequirement</code> structure. </p>
     */
    inline CreateHITRequest& WithQualificationRequirements(Aws::Vector<QualificationRequirement>&& value) { SetQualificationRequirements(std::move(value)); return *this;}

    /**
     * <p> Conditions that a Worker's Qualifications must meet in order to accept the
     * HIT. A HIT can have between zero and ten Qualification requirements. All
     * requirements must be met in order for a Worker to accept the HIT. Additionally,
     * other actions can be restricted using the <code>ActionsGuarded</code> field on
     * each <code>QualificationRequirement</code> structure. </p>
     */
    inline CreateHITRequest& AddQualificationRequirements(const QualificationRequirement& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements.push_back(value); return *this; }

    /**
     * <p> Conditions that a Worker's Qualifications must meet in order to accept the
     * HIT. A HIT can have between zero and ten Qualification requirements. All
     * requirements must be met in order for a Worker to accept the HIT. Additionally,
     * other actions can be restricted using the <code>ActionsGuarded</code> field on
     * each <code>QualificationRequirement</code> structure. </p>
     */
    inline CreateHITRequest& AddQualificationRequirements(QualificationRequirement&& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements.push_back(std::move(value)); return *this; }


    /**
     * <p> A unique identifier for this request which allows you to retry the call on
     * error without creating duplicate HITs. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the HIT already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return a
     * AWS.MechanicalTurk.HitAlreadyExists error with a message containing the HITId.
     * </p> <note> <p> Note: It is your responsibility to ensure uniqueness of the
     * token. The unique token expires after 24 hours. Subsequent calls using the same
     * UniqueRequestToken made after the 24 hour limit could create duplicate HITs.
     * </p> </note>
     */
    inline const Aws::String& GetUniqueRequestToken() const{ return m_uniqueRequestToken; }

    /**
     * <p> A unique identifier for this request which allows you to retry the call on
     * error without creating duplicate HITs. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the HIT already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return a
     * AWS.MechanicalTurk.HitAlreadyExists error with a message containing the HITId.
     * </p> <note> <p> Note: It is your responsibility to ensure uniqueness of the
     * token. The unique token expires after 24 hours. Subsequent calls using the same
     * UniqueRequestToken made after the 24 hour limit could create duplicate HITs.
     * </p> </note>
     */
    inline bool UniqueRequestTokenHasBeenSet() const { return m_uniqueRequestTokenHasBeenSet; }

    /**
     * <p> A unique identifier for this request which allows you to retry the call on
     * error without creating duplicate HITs. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the HIT already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return a
     * AWS.MechanicalTurk.HitAlreadyExists error with a message containing the HITId.
     * </p> <note> <p> Note: It is your responsibility to ensure uniqueness of the
     * token. The unique token expires after 24 hours. Subsequent calls using the same
     * UniqueRequestToken made after the 24 hour limit could create duplicate HITs.
     * </p> </note>
     */
    inline void SetUniqueRequestToken(const Aws::String& value) { m_uniqueRequestTokenHasBeenSet = true; m_uniqueRequestToken = value; }

    /**
     * <p> A unique identifier for this request which allows you to retry the call on
     * error without creating duplicate HITs. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the HIT already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return a
     * AWS.MechanicalTurk.HitAlreadyExists error with a message containing the HITId.
     * </p> <note> <p> Note: It is your responsibility to ensure uniqueness of the
     * token. The unique token expires after 24 hours. Subsequent calls using the same
     * UniqueRequestToken made after the 24 hour limit could create duplicate HITs.
     * </p> </note>
     */
    inline void SetUniqueRequestToken(Aws::String&& value) { m_uniqueRequestTokenHasBeenSet = true; m_uniqueRequestToken = std::move(value); }

    /**
     * <p> A unique identifier for this request which allows you to retry the call on
     * error without creating duplicate HITs. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the HIT already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return a
     * AWS.MechanicalTurk.HitAlreadyExists error with a message containing the HITId.
     * </p> <note> <p> Note: It is your responsibility to ensure uniqueness of the
     * token. The unique token expires after 24 hours. Subsequent calls using the same
     * UniqueRequestToken made after the 24 hour limit could create duplicate HITs.
     * </p> </note>
     */
    inline void SetUniqueRequestToken(const char* value) { m_uniqueRequestTokenHasBeenSet = true; m_uniqueRequestToken.assign(value); }

    /**
     * <p> A unique identifier for this request which allows you to retry the call on
     * error without creating duplicate HITs. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the HIT already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return a
     * AWS.MechanicalTurk.HitAlreadyExists error with a message containing the HITId.
     * </p> <note> <p> Note: It is your responsibility to ensure uniqueness of the
     * token. The unique token expires after 24 hours. Subsequent calls using the same
     * UniqueRequestToken made after the 24 hour limit could create duplicate HITs.
     * </p> </note>
     */
    inline CreateHITRequest& WithUniqueRequestToken(const Aws::String& value) { SetUniqueRequestToken(value); return *this;}

    /**
     * <p> A unique identifier for this request which allows you to retry the call on
     * error without creating duplicate HITs. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the HIT already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return a
     * AWS.MechanicalTurk.HitAlreadyExists error with a message containing the HITId.
     * </p> <note> <p> Note: It is your responsibility to ensure uniqueness of the
     * token. The unique token expires after 24 hours. Subsequent calls using the same
     * UniqueRequestToken made after the 24 hour limit could create duplicate HITs.
     * </p> </note>
     */
    inline CreateHITRequest& WithUniqueRequestToken(Aws::String&& value) { SetUniqueRequestToken(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for this request which allows you to retry the call on
     * error without creating duplicate HITs. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the HIT already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return a
     * AWS.MechanicalTurk.HitAlreadyExists error with a message containing the HITId.
     * </p> <note> <p> Note: It is your responsibility to ensure uniqueness of the
     * token. The unique token expires after 24 hours. Subsequent calls using the same
     * UniqueRequestToken made after the 24 hour limit could create duplicate HITs.
     * </p> </note>
     */
    inline CreateHITRequest& WithUniqueRequestToken(const char* value) { SetUniqueRequestToken(value); return *this;}


    /**
     * <p> The Assignment-level Review Policy applies to the assignments under the HIT.
     * You can specify for Mechanical Turk to take various actions based on the policy.
     * </p>
     */
    inline const ReviewPolicy& GetAssignmentReviewPolicy() const{ return m_assignmentReviewPolicy; }

    /**
     * <p> The Assignment-level Review Policy applies to the assignments under the HIT.
     * You can specify for Mechanical Turk to take various actions based on the policy.
     * </p>
     */
    inline bool AssignmentReviewPolicyHasBeenSet() const { return m_assignmentReviewPolicyHasBeenSet; }

    /**
     * <p> The Assignment-level Review Policy applies to the assignments under the HIT.
     * You can specify for Mechanical Turk to take various actions based on the policy.
     * </p>
     */
    inline void SetAssignmentReviewPolicy(const ReviewPolicy& value) { m_assignmentReviewPolicyHasBeenSet = true; m_assignmentReviewPolicy = value; }

    /**
     * <p> The Assignment-level Review Policy applies to the assignments under the HIT.
     * You can specify for Mechanical Turk to take various actions based on the policy.
     * </p>
     */
    inline void SetAssignmentReviewPolicy(ReviewPolicy&& value) { m_assignmentReviewPolicyHasBeenSet = true; m_assignmentReviewPolicy = std::move(value); }

    /**
     * <p> The Assignment-level Review Policy applies to the assignments under the HIT.
     * You can specify for Mechanical Turk to take various actions based on the policy.
     * </p>
     */
    inline CreateHITRequest& WithAssignmentReviewPolicy(const ReviewPolicy& value) { SetAssignmentReviewPolicy(value); return *this;}

    /**
     * <p> The Assignment-level Review Policy applies to the assignments under the HIT.
     * You can specify for Mechanical Turk to take various actions based on the policy.
     * </p>
     */
    inline CreateHITRequest& WithAssignmentReviewPolicy(ReviewPolicy&& value) { SetAssignmentReviewPolicy(std::move(value)); return *this;}


    /**
     * <p> The HIT-level Review Policy applies to the HIT. You can specify for
     * Mechanical Turk to take various actions based on the policy. </p>
     */
    inline const ReviewPolicy& GetHITReviewPolicy() const{ return m_hITReviewPolicy; }

    /**
     * <p> The HIT-level Review Policy applies to the HIT. You can specify for
     * Mechanical Turk to take various actions based on the policy. </p>
     */
    inline bool HITReviewPolicyHasBeenSet() const { return m_hITReviewPolicyHasBeenSet; }

    /**
     * <p> The HIT-level Review Policy applies to the HIT. You can specify for
     * Mechanical Turk to take various actions based on the policy. </p>
     */
    inline void SetHITReviewPolicy(const ReviewPolicy& value) { m_hITReviewPolicyHasBeenSet = true; m_hITReviewPolicy = value; }

    /**
     * <p> The HIT-level Review Policy applies to the HIT. You can specify for
     * Mechanical Turk to take various actions based on the policy. </p>
     */
    inline void SetHITReviewPolicy(ReviewPolicy&& value) { m_hITReviewPolicyHasBeenSet = true; m_hITReviewPolicy = std::move(value); }

    /**
     * <p> The HIT-level Review Policy applies to the HIT. You can specify for
     * Mechanical Turk to take various actions based on the policy. </p>
     */
    inline CreateHITRequest& WithHITReviewPolicy(const ReviewPolicy& value) { SetHITReviewPolicy(value); return *this;}

    /**
     * <p> The HIT-level Review Policy applies to the HIT. You can specify for
     * Mechanical Turk to take various actions based on the policy. </p>
     */
    inline CreateHITRequest& WithHITReviewPolicy(ReviewPolicy&& value) { SetHITReviewPolicy(std::move(value)); return *this;}


    /**
     * <p> The HITLayoutId allows you to use a pre-existing HIT design with placeholder
     * values and create an additional HIT by providing those values as
     * HITLayoutParameters. </p> <p> Constraints: Either a Question parameter or a
     * HITLayoutId parameter must be provided. </p>
     */
    inline const Aws::String& GetHITLayoutId() const{ return m_hITLayoutId; }

    /**
     * <p> The HITLayoutId allows you to use a pre-existing HIT design with placeholder
     * values and create an additional HIT by providing those values as
     * HITLayoutParameters. </p> <p> Constraints: Either a Question parameter or a
     * HITLayoutId parameter must be provided. </p>
     */
    inline bool HITLayoutIdHasBeenSet() const { return m_hITLayoutIdHasBeenSet; }

    /**
     * <p> The HITLayoutId allows you to use a pre-existing HIT design with placeholder
     * values and create an additional HIT by providing those values as
     * HITLayoutParameters. </p> <p> Constraints: Either a Question parameter or a
     * HITLayoutId parameter must be provided. </p>
     */
    inline void SetHITLayoutId(const Aws::String& value) { m_hITLayoutIdHasBeenSet = true; m_hITLayoutId = value; }

    /**
     * <p> The HITLayoutId allows you to use a pre-existing HIT design with placeholder
     * values and create an additional HIT by providing those values as
     * HITLayoutParameters. </p> <p> Constraints: Either a Question parameter or a
     * HITLayoutId parameter must be provided. </p>
     */
    inline void SetHITLayoutId(Aws::String&& value) { m_hITLayoutIdHasBeenSet = true; m_hITLayoutId = std::move(value); }

    /**
     * <p> The HITLayoutId allows you to use a pre-existing HIT design with placeholder
     * values and create an additional HIT by providing those values as
     * HITLayoutParameters. </p> <p> Constraints: Either a Question parameter or a
     * HITLayoutId parameter must be provided. </p>
     */
    inline void SetHITLayoutId(const char* value) { m_hITLayoutIdHasBeenSet = true; m_hITLayoutId.assign(value); }

    /**
     * <p> The HITLayoutId allows you to use a pre-existing HIT design with placeholder
     * values and create an additional HIT by providing those values as
     * HITLayoutParameters. </p> <p> Constraints: Either a Question parameter or a
     * HITLayoutId parameter must be provided. </p>
     */
    inline CreateHITRequest& WithHITLayoutId(const Aws::String& value) { SetHITLayoutId(value); return *this;}

    /**
     * <p> The HITLayoutId allows you to use a pre-existing HIT design with placeholder
     * values and create an additional HIT by providing those values as
     * HITLayoutParameters. </p> <p> Constraints: Either a Question parameter or a
     * HITLayoutId parameter must be provided. </p>
     */
    inline CreateHITRequest& WithHITLayoutId(Aws::String&& value) { SetHITLayoutId(std::move(value)); return *this;}

    /**
     * <p> The HITLayoutId allows you to use a pre-existing HIT design with placeholder
     * values and create an additional HIT by providing those values as
     * HITLayoutParameters. </p> <p> Constraints: Either a Question parameter or a
     * HITLayoutId parameter must be provided. </p>
     */
    inline CreateHITRequest& WithHITLayoutId(const char* value) { SetHITLayoutId(value); return *this;}


    /**
     * <p> If the HITLayoutId is provided, any placeholder values must be filled in
     * with values using the HITLayoutParameter structure. For more information, see
     * HITLayout. </p>
     */
    inline const Aws::Vector<HITLayoutParameter>& GetHITLayoutParameters() const{ return m_hITLayoutParameters; }

    /**
     * <p> If the HITLayoutId is provided, any placeholder values must be filled in
     * with values using the HITLayoutParameter structure. For more information, see
     * HITLayout. </p>
     */
    inline bool HITLayoutParametersHasBeenSet() const { return m_hITLayoutParametersHasBeenSet; }

    /**
     * <p> If the HITLayoutId is provided, any placeholder values must be filled in
     * with values using the HITLayoutParameter structure. For more information, see
     * HITLayout. </p>
     */
    inline void SetHITLayoutParameters(const Aws::Vector<HITLayoutParameter>& value) { m_hITLayoutParametersHasBeenSet = true; m_hITLayoutParameters = value; }

    /**
     * <p> If the HITLayoutId is provided, any placeholder values must be filled in
     * with values using the HITLayoutParameter structure. For more information, see
     * HITLayout. </p>
     */
    inline void SetHITLayoutParameters(Aws::Vector<HITLayoutParameter>&& value) { m_hITLayoutParametersHasBeenSet = true; m_hITLayoutParameters = std::move(value); }

    /**
     * <p> If the HITLayoutId is provided, any placeholder values must be filled in
     * with values using the HITLayoutParameter structure. For more information, see
     * HITLayout. </p>
     */
    inline CreateHITRequest& WithHITLayoutParameters(const Aws::Vector<HITLayoutParameter>& value) { SetHITLayoutParameters(value); return *this;}

    /**
     * <p> If the HITLayoutId is provided, any placeholder values must be filled in
     * with values using the HITLayoutParameter structure. For more information, see
     * HITLayout. </p>
     */
    inline CreateHITRequest& WithHITLayoutParameters(Aws::Vector<HITLayoutParameter>&& value) { SetHITLayoutParameters(std::move(value)); return *this;}

    /**
     * <p> If the HITLayoutId is provided, any placeholder values must be filled in
     * with values using the HITLayoutParameter structure. For more information, see
     * HITLayout. </p>
     */
    inline CreateHITRequest& AddHITLayoutParameters(const HITLayoutParameter& value) { m_hITLayoutParametersHasBeenSet = true; m_hITLayoutParameters.push_back(value); return *this; }

    /**
     * <p> If the HITLayoutId is provided, any placeholder values must be filled in
     * with values using the HITLayoutParameter structure. For more information, see
     * HITLayout. </p>
     */
    inline CreateHITRequest& AddHITLayoutParameters(HITLayoutParameter&& value) { m_hITLayoutParametersHasBeenSet = true; m_hITLayoutParameters.push_back(std::move(value)); return *this; }

  private:

    int m_maxAssignments;
    bool m_maxAssignmentsHasBeenSet;

    long long m_autoApprovalDelayInSeconds;
    bool m_autoApprovalDelayInSecondsHasBeenSet;

    long long m_lifetimeInSeconds;
    bool m_lifetimeInSecondsHasBeenSet;

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

    Aws::String m_question;
    bool m_questionHasBeenSet;

    Aws::String m_requesterAnnotation;
    bool m_requesterAnnotationHasBeenSet;

    Aws::Vector<QualificationRequirement> m_qualificationRequirements;
    bool m_qualificationRequirementsHasBeenSet;

    Aws::String m_uniqueRequestToken;
    bool m_uniqueRequestTokenHasBeenSet;

    ReviewPolicy m_assignmentReviewPolicy;
    bool m_assignmentReviewPolicyHasBeenSet;

    ReviewPolicy m_hITReviewPolicy;
    bool m_hITReviewPolicyHasBeenSet;

    Aws::String m_hITLayoutId;
    bool m_hITLayoutIdHasBeenSet;

    Aws::Vector<HITLayoutParameter> m_hITLayoutParameters;
    bool m_hITLayoutParametersHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
