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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mturk-requester/model/HITStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/HITReviewStatus.h>
#include <aws/mturk-requester/model/QualificationRequirement.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MTurk
{
namespace Model
{

  /**
   * <p> The HIT data structure represents a single HIT, including all the
   * information necessary for a Worker to accept and complete the HIT.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/HIT">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API HIT
  {
  public:
    HIT();
    HIT(Aws::Utils::Json::JsonView jsonValue);
    HIT& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A unique identifier for the HIT.</p>
     */
    inline const Aws::String& GetHITId() const{ return m_hITId; }

    /**
     * <p> A unique identifier for the HIT.</p>
     */
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }

    /**
     * <p> A unique identifier for the HIT.</p>
     */
    inline void SetHITId(const Aws::String& value) { m_hITIdHasBeenSet = true; m_hITId = value; }

    /**
     * <p> A unique identifier for the HIT.</p>
     */
    inline void SetHITId(Aws::String&& value) { m_hITIdHasBeenSet = true; m_hITId = std::move(value); }

    /**
     * <p> A unique identifier for the HIT.</p>
     */
    inline void SetHITId(const char* value) { m_hITIdHasBeenSet = true; m_hITId.assign(value); }

    /**
     * <p> A unique identifier for the HIT.</p>
     */
    inline HIT& WithHITId(const Aws::String& value) { SetHITId(value); return *this;}

    /**
     * <p> A unique identifier for the HIT.</p>
     */
    inline HIT& WithHITId(Aws::String&& value) { SetHITId(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the HIT.</p>
     */
    inline HIT& WithHITId(const char* value) { SetHITId(value); return *this;}


    /**
     * <p>The ID of the HIT type of this HIT</p>
     */
    inline const Aws::String& GetHITTypeId() const{ return m_hITTypeId; }

    /**
     * <p>The ID of the HIT type of this HIT</p>
     */
    inline bool HITTypeIdHasBeenSet() const { return m_hITTypeIdHasBeenSet; }

    /**
     * <p>The ID of the HIT type of this HIT</p>
     */
    inline void SetHITTypeId(const Aws::String& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = value; }

    /**
     * <p>The ID of the HIT type of this HIT</p>
     */
    inline void SetHITTypeId(Aws::String&& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = std::move(value); }

    /**
     * <p>The ID of the HIT type of this HIT</p>
     */
    inline void SetHITTypeId(const char* value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId.assign(value); }

    /**
     * <p>The ID of the HIT type of this HIT</p>
     */
    inline HIT& WithHITTypeId(const Aws::String& value) { SetHITTypeId(value); return *this;}

    /**
     * <p>The ID of the HIT type of this HIT</p>
     */
    inline HIT& WithHITTypeId(Aws::String&& value) { SetHITTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the HIT type of this HIT</p>
     */
    inline HIT& WithHITTypeId(const char* value) { SetHITTypeId(value); return *this;}


    /**
     * <p> The ID of the HIT Group of this HIT.</p>
     */
    inline const Aws::String& GetHITGroupId() const{ return m_hITGroupId; }

    /**
     * <p> The ID of the HIT Group of this HIT.</p>
     */
    inline bool HITGroupIdHasBeenSet() const { return m_hITGroupIdHasBeenSet; }

    /**
     * <p> The ID of the HIT Group of this HIT.</p>
     */
    inline void SetHITGroupId(const Aws::String& value) { m_hITGroupIdHasBeenSet = true; m_hITGroupId = value; }

    /**
     * <p> The ID of the HIT Group of this HIT.</p>
     */
    inline void SetHITGroupId(Aws::String&& value) { m_hITGroupIdHasBeenSet = true; m_hITGroupId = std::move(value); }

    /**
     * <p> The ID of the HIT Group of this HIT.</p>
     */
    inline void SetHITGroupId(const char* value) { m_hITGroupIdHasBeenSet = true; m_hITGroupId.assign(value); }

    /**
     * <p> The ID of the HIT Group of this HIT.</p>
     */
    inline HIT& WithHITGroupId(const Aws::String& value) { SetHITGroupId(value); return *this;}

    /**
     * <p> The ID of the HIT Group of this HIT.</p>
     */
    inline HIT& WithHITGroupId(Aws::String&& value) { SetHITGroupId(std::move(value)); return *this;}

    /**
     * <p> The ID of the HIT Group of this HIT.</p>
     */
    inline HIT& WithHITGroupId(const char* value) { SetHITGroupId(value); return *this;}


    /**
     * <p> The ID of the HIT Layout of this HIT.</p>
     */
    inline const Aws::String& GetHITLayoutId() const{ return m_hITLayoutId; }

    /**
     * <p> The ID of the HIT Layout of this HIT.</p>
     */
    inline bool HITLayoutIdHasBeenSet() const { return m_hITLayoutIdHasBeenSet; }

    /**
     * <p> The ID of the HIT Layout of this HIT.</p>
     */
    inline void SetHITLayoutId(const Aws::String& value) { m_hITLayoutIdHasBeenSet = true; m_hITLayoutId = value; }

    /**
     * <p> The ID of the HIT Layout of this HIT.</p>
     */
    inline void SetHITLayoutId(Aws::String&& value) { m_hITLayoutIdHasBeenSet = true; m_hITLayoutId = std::move(value); }

    /**
     * <p> The ID of the HIT Layout of this HIT.</p>
     */
    inline void SetHITLayoutId(const char* value) { m_hITLayoutIdHasBeenSet = true; m_hITLayoutId.assign(value); }

    /**
     * <p> The ID of the HIT Layout of this HIT.</p>
     */
    inline HIT& WithHITLayoutId(const Aws::String& value) { SetHITLayoutId(value); return *this;}

    /**
     * <p> The ID of the HIT Layout of this HIT.</p>
     */
    inline HIT& WithHITLayoutId(Aws::String&& value) { SetHITLayoutId(std::move(value)); return *this;}

    /**
     * <p> The ID of the HIT Layout of this HIT.</p>
     */
    inline HIT& WithHITLayoutId(const char* value) { SetHITLayoutId(value); return *this;}


    /**
     * <p> The date and time the HIT was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The date and time the HIT was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p> The date and time the HIT was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p> The date and time the HIT was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p> The date and time the HIT was created.</p>
     */
    inline HIT& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The date and time the HIT was created.</p>
     */
    inline HIT& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> The title of the HIT.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p> The title of the HIT.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p> The title of the HIT.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p> The title of the HIT.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p> The title of the HIT.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p> The title of the HIT.</p>
     */
    inline HIT& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p> The title of the HIT.</p>
     */
    inline HIT& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p> The title of the HIT.</p>
     */
    inline HIT& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p> A general description of the HIT.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A general description of the HIT.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A general description of the HIT.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A general description of the HIT.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A general description of the HIT.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A general description of the HIT.</p>
     */
    inline HIT& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A general description of the HIT.</p>
     */
    inline HIT& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A general description of the HIT.</p>
     */
    inline HIT& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The data the Worker completing the HIT uses produce the results. This is
     * either either a QuestionForm, HTMLQuestion or an ExternalQuestion data
     * structure.</p>
     */
    inline const Aws::String& GetQuestion() const{ return m_question; }

    /**
     * <p> The data the Worker completing the HIT uses produce the results. This is
     * either either a QuestionForm, HTMLQuestion or an ExternalQuestion data
     * structure.</p>
     */
    inline bool QuestionHasBeenSet() const { return m_questionHasBeenSet; }

    /**
     * <p> The data the Worker completing the HIT uses produce the results. This is
     * either either a QuestionForm, HTMLQuestion or an ExternalQuestion data
     * structure.</p>
     */
    inline void SetQuestion(const Aws::String& value) { m_questionHasBeenSet = true; m_question = value; }

    /**
     * <p> The data the Worker completing the HIT uses produce the results. This is
     * either either a QuestionForm, HTMLQuestion or an ExternalQuestion data
     * structure.</p>
     */
    inline void SetQuestion(Aws::String&& value) { m_questionHasBeenSet = true; m_question = std::move(value); }

    /**
     * <p> The data the Worker completing the HIT uses produce the results. This is
     * either either a QuestionForm, HTMLQuestion or an ExternalQuestion data
     * structure.</p>
     */
    inline void SetQuestion(const char* value) { m_questionHasBeenSet = true; m_question.assign(value); }

    /**
     * <p> The data the Worker completing the HIT uses produce the results. This is
     * either either a QuestionForm, HTMLQuestion or an ExternalQuestion data
     * structure.</p>
     */
    inline HIT& WithQuestion(const Aws::String& value) { SetQuestion(value); return *this;}

    /**
     * <p> The data the Worker completing the HIT uses produce the results. This is
     * either either a QuestionForm, HTMLQuestion or an ExternalQuestion data
     * structure.</p>
     */
    inline HIT& WithQuestion(Aws::String&& value) { SetQuestion(std::move(value)); return *this;}

    /**
     * <p> The data the Worker completing the HIT uses produce the results. This is
     * either either a QuestionForm, HTMLQuestion or an ExternalQuestion data
     * structure.</p>
     */
    inline HIT& WithQuestion(const char* value) { SetQuestion(value); return *this;}


    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * Search terms similar to the keywords of a HIT are more likely to have the HIT in
     * the search results.</p>
     */
    inline const Aws::String& GetKeywords() const{ return m_keywords; }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * Search terms similar to the keywords of a HIT are more likely to have the HIT in
     * the search results.</p>
     */
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * Search terms similar to the keywords of a HIT are more likely to have the HIT in
     * the search results.</p>
     */
    inline void SetKeywords(const Aws::String& value) { m_keywordsHasBeenSet = true; m_keywords = value; }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * Search terms similar to the keywords of a HIT are more likely to have the HIT in
     * the search results.</p>
     */
    inline void SetKeywords(Aws::String&& value) { m_keywordsHasBeenSet = true; m_keywords = std::move(value); }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * Search terms similar to the keywords of a HIT are more likely to have the HIT in
     * the search results.</p>
     */
    inline void SetKeywords(const char* value) { m_keywordsHasBeenSet = true; m_keywords.assign(value); }

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * Search terms similar to the keywords of a HIT are more likely to have the HIT in
     * the search results.</p>
     */
    inline HIT& WithKeywords(const Aws::String& value) { SetKeywords(value); return *this;}

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * Search terms similar to the keywords of a HIT are more likely to have the HIT in
     * the search results.</p>
     */
    inline HIT& WithKeywords(Aws::String&& value) { SetKeywords(std::move(value)); return *this;}

    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * Search terms similar to the keywords of a HIT are more likely to have the HIT in
     * the search results.</p>
     */
    inline HIT& WithKeywords(const char* value) { SetKeywords(value); return *this;}


    /**
     * <p>The status of the HIT and its assignments. Valid Values are Assignable |
     * Unassignable | Reviewable | Reviewing | Disposed. </p>
     */
    inline const HITStatus& GetHITStatus() const{ return m_hITStatus; }

    /**
     * <p>The status of the HIT and its assignments. Valid Values are Assignable |
     * Unassignable | Reviewable | Reviewing | Disposed. </p>
     */
    inline bool HITStatusHasBeenSet() const { return m_hITStatusHasBeenSet; }

    /**
     * <p>The status of the HIT and its assignments. Valid Values are Assignable |
     * Unassignable | Reviewable | Reviewing | Disposed. </p>
     */
    inline void SetHITStatus(const HITStatus& value) { m_hITStatusHasBeenSet = true; m_hITStatus = value; }

    /**
     * <p>The status of the HIT and its assignments. Valid Values are Assignable |
     * Unassignable | Reviewable | Reviewing | Disposed. </p>
     */
    inline void SetHITStatus(HITStatus&& value) { m_hITStatusHasBeenSet = true; m_hITStatus = std::move(value); }

    /**
     * <p>The status of the HIT and its assignments. Valid Values are Assignable |
     * Unassignable | Reviewable | Reviewing | Disposed. </p>
     */
    inline HIT& WithHITStatus(const HITStatus& value) { SetHITStatus(value); return *this;}

    /**
     * <p>The status of the HIT and its assignments. Valid Values are Assignable |
     * Unassignable | Reviewable | Reviewing | Disposed. </p>
     */
    inline HIT& WithHITStatus(HITStatus&& value) { SetHITStatus(std::move(value)); return *this;}


    /**
     * <p>The number of times the HIT can be accepted and completed before the HIT
     * becomes unavailable. </p>
     */
    inline int GetMaxAssignments() const{ return m_maxAssignments; }

    /**
     * <p>The number of times the HIT can be accepted and completed before the HIT
     * becomes unavailable. </p>
     */
    inline bool MaxAssignmentsHasBeenSet() const { return m_maxAssignmentsHasBeenSet; }

    /**
     * <p>The number of times the HIT can be accepted and completed before the HIT
     * becomes unavailable. </p>
     */
    inline void SetMaxAssignments(int value) { m_maxAssignmentsHasBeenSet = true; m_maxAssignments = value; }

    /**
     * <p>The number of times the HIT can be accepted and completed before the HIT
     * becomes unavailable. </p>
     */
    inline HIT& WithMaxAssignments(int value) { SetMaxAssignments(value); return *this;}


    
    inline const Aws::String& GetReward() const{ return m_reward; }

    
    inline bool RewardHasBeenSet() const { return m_rewardHasBeenSet; }

    
    inline void SetReward(const Aws::String& value) { m_rewardHasBeenSet = true; m_reward = value; }

    
    inline void SetReward(Aws::String&& value) { m_rewardHasBeenSet = true; m_reward = std::move(value); }

    
    inline void SetReward(const char* value) { m_rewardHasBeenSet = true; m_reward.assign(value); }

    
    inline HIT& WithReward(const Aws::String& value) { SetReward(value); return *this;}

    
    inline HIT& WithReward(Aws::String&& value) { SetReward(std::move(value)); return *this;}

    
    inline HIT& WithReward(const char* value) { SetReward(value); return *this;}


    /**
     * <p>The amount of time, in seconds, after the Worker submits an assignment for
     * the HIT that the results are automatically approved by Amazon Mechanical Turk.
     * This is the amount of time the Requester has to reject an assignment submitted
     * by a Worker before the assignment is auto-approved and the Worker is paid. </p>
     */
    inline long long GetAutoApprovalDelayInSeconds() const{ return m_autoApprovalDelayInSeconds; }

    /**
     * <p>The amount of time, in seconds, after the Worker submits an assignment for
     * the HIT that the results are automatically approved by Amazon Mechanical Turk.
     * This is the amount of time the Requester has to reject an assignment submitted
     * by a Worker before the assignment is auto-approved and the Worker is paid. </p>
     */
    inline bool AutoApprovalDelayInSecondsHasBeenSet() const { return m_autoApprovalDelayInSecondsHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, after the Worker submits an assignment for
     * the HIT that the results are automatically approved by Amazon Mechanical Turk.
     * This is the amount of time the Requester has to reject an assignment submitted
     * by a Worker before the assignment is auto-approved and the Worker is paid. </p>
     */
    inline void SetAutoApprovalDelayInSeconds(long long value) { m_autoApprovalDelayInSecondsHasBeenSet = true; m_autoApprovalDelayInSeconds = value; }

    /**
     * <p>The amount of time, in seconds, after the Worker submits an assignment for
     * the HIT that the results are automatically approved by Amazon Mechanical Turk.
     * This is the amount of time the Requester has to reject an assignment submitted
     * by a Worker before the assignment is auto-approved and the Worker is paid. </p>
     */
    inline HIT& WithAutoApprovalDelayInSeconds(long long value) { SetAutoApprovalDelayInSeconds(value); return *this;}


    /**
     * <p>The date and time the HIT expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }

    /**
     * <p>The date and time the HIT expires.</p>
     */
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }

    /**
     * <p>The date and time the HIT expires.</p>
     */
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expirationHasBeenSet = true; m_expiration = value; }

    /**
     * <p>The date and time the HIT expires.</p>
     */
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expirationHasBeenSet = true; m_expiration = std::move(value); }

    /**
     * <p>The date and time the HIT expires.</p>
     */
    inline HIT& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}

    /**
     * <p>The date and time the HIT expires.</p>
     */
    inline HIT& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}


    /**
     * <p> The length of time, in seconds, that a Worker has to complete the HIT after
     * accepting it.</p>
     */
    inline long long GetAssignmentDurationInSeconds() const{ return m_assignmentDurationInSeconds; }

    /**
     * <p> The length of time, in seconds, that a Worker has to complete the HIT after
     * accepting it.</p>
     */
    inline bool AssignmentDurationInSecondsHasBeenSet() const { return m_assignmentDurationInSecondsHasBeenSet; }

    /**
     * <p> The length of time, in seconds, that a Worker has to complete the HIT after
     * accepting it.</p>
     */
    inline void SetAssignmentDurationInSeconds(long long value) { m_assignmentDurationInSecondsHasBeenSet = true; m_assignmentDurationInSeconds = value; }

    /**
     * <p> The length of time, in seconds, that a Worker has to complete the HIT after
     * accepting it.</p>
     */
    inline HIT& WithAssignmentDurationInSeconds(long long value) { SetAssignmentDurationInSeconds(value); return *this;}


    /**
     * <p> An arbitrary data field the Requester who created the HIT can use. This
     * field is visible only to the creator of the HIT.</p>
     */
    inline const Aws::String& GetRequesterAnnotation() const{ return m_requesterAnnotation; }

    /**
     * <p> An arbitrary data field the Requester who created the HIT can use. This
     * field is visible only to the creator of the HIT.</p>
     */
    inline bool RequesterAnnotationHasBeenSet() const { return m_requesterAnnotationHasBeenSet; }

    /**
     * <p> An arbitrary data field the Requester who created the HIT can use. This
     * field is visible only to the creator of the HIT.</p>
     */
    inline void SetRequesterAnnotation(const Aws::String& value) { m_requesterAnnotationHasBeenSet = true; m_requesterAnnotation = value; }

    /**
     * <p> An arbitrary data field the Requester who created the HIT can use. This
     * field is visible only to the creator of the HIT.</p>
     */
    inline void SetRequesterAnnotation(Aws::String&& value) { m_requesterAnnotationHasBeenSet = true; m_requesterAnnotation = std::move(value); }

    /**
     * <p> An arbitrary data field the Requester who created the HIT can use. This
     * field is visible only to the creator of the HIT.</p>
     */
    inline void SetRequesterAnnotation(const char* value) { m_requesterAnnotationHasBeenSet = true; m_requesterAnnotation.assign(value); }

    /**
     * <p> An arbitrary data field the Requester who created the HIT can use. This
     * field is visible only to the creator of the HIT.</p>
     */
    inline HIT& WithRequesterAnnotation(const Aws::String& value) { SetRequesterAnnotation(value); return *this;}

    /**
     * <p> An arbitrary data field the Requester who created the HIT can use. This
     * field is visible only to the creator of the HIT.</p>
     */
    inline HIT& WithRequesterAnnotation(Aws::String&& value) { SetRequesterAnnotation(std::move(value)); return *this;}

    /**
     * <p> An arbitrary data field the Requester who created the HIT can use. This
     * field is visible only to the creator of the HIT.</p>
     */
    inline HIT& WithRequesterAnnotation(const char* value) { SetRequesterAnnotation(value); return *this;}


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
    inline HIT& WithQualificationRequirements(const Aws::Vector<QualificationRequirement>& value) { SetQualificationRequirements(value); return *this;}

    /**
     * <p> Conditions that a Worker's Qualifications must meet in order to accept the
     * HIT. A HIT can have between zero and ten Qualification requirements. All
     * requirements must be met in order for a Worker to accept the HIT. Additionally,
     * other actions can be restricted using the <code>ActionsGuarded</code> field on
     * each <code>QualificationRequirement</code> structure. </p>
     */
    inline HIT& WithQualificationRequirements(Aws::Vector<QualificationRequirement>&& value) { SetQualificationRequirements(std::move(value)); return *this;}

    /**
     * <p> Conditions that a Worker's Qualifications must meet in order to accept the
     * HIT. A HIT can have between zero and ten Qualification requirements. All
     * requirements must be met in order for a Worker to accept the HIT. Additionally,
     * other actions can be restricted using the <code>ActionsGuarded</code> field on
     * each <code>QualificationRequirement</code> structure. </p>
     */
    inline HIT& AddQualificationRequirements(const QualificationRequirement& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements.push_back(value); return *this; }

    /**
     * <p> Conditions that a Worker's Qualifications must meet in order to accept the
     * HIT. A HIT can have between zero and ten Qualification requirements. All
     * requirements must be met in order for a Worker to accept the HIT. Additionally,
     * other actions can be restricted using the <code>ActionsGuarded</code> field on
     * each <code>QualificationRequirement</code> structure. </p>
     */
    inline HIT& AddQualificationRequirements(QualificationRequirement&& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements.push_back(std::move(value)); return *this; }


    /**
     * <p> Indicates the review status of the HIT. Valid Values are NotReviewed |
     * MarkedForReview | ReviewedAppropriate | ReviewedInappropriate.</p>
     */
    inline const HITReviewStatus& GetHITReviewStatus() const{ return m_hITReviewStatus; }

    /**
     * <p> Indicates the review status of the HIT. Valid Values are NotReviewed |
     * MarkedForReview | ReviewedAppropriate | ReviewedInappropriate.</p>
     */
    inline bool HITReviewStatusHasBeenSet() const { return m_hITReviewStatusHasBeenSet; }

    /**
     * <p> Indicates the review status of the HIT. Valid Values are NotReviewed |
     * MarkedForReview | ReviewedAppropriate | ReviewedInappropriate.</p>
     */
    inline void SetHITReviewStatus(const HITReviewStatus& value) { m_hITReviewStatusHasBeenSet = true; m_hITReviewStatus = value; }

    /**
     * <p> Indicates the review status of the HIT. Valid Values are NotReviewed |
     * MarkedForReview | ReviewedAppropriate | ReviewedInappropriate.</p>
     */
    inline void SetHITReviewStatus(HITReviewStatus&& value) { m_hITReviewStatusHasBeenSet = true; m_hITReviewStatus = std::move(value); }

    /**
     * <p> Indicates the review status of the HIT. Valid Values are NotReviewed |
     * MarkedForReview | ReviewedAppropriate | ReviewedInappropriate.</p>
     */
    inline HIT& WithHITReviewStatus(const HITReviewStatus& value) { SetHITReviewStatus(value); return *this;}

    /**
     * <p> Indicates the review status of the HIT. Valid Values are NotReviewed |
     * MarkedForReview | ReviewedAppropriate | ReviewedInappropriate.</p>
     */
    inline HIT& WithHITReviewStatus(HITReviewStatus&& value) { SetHITReviewStatus(std::move(value)); return *this;}


    /**
     * <p> The number of assignments for this HIT that are being previewed or have been
     * accepted by Workers, but have not yet been submitted, returned, or
     * abandoned.</p>
     */
    inline int GetNumberOfAssignmentsPending() const{ return m_numberOfAssignmentsPending; }

    /**
     * <p> The number of assignments for this HIT that are being previewed or have been
     * accepted by Workers, but have not yet been submitted, returned, or
     * abandoned.</p>
     */
    inline bool NumberOfAssignmentsPendingHasBeenSet() const { return m_numberOfAssignmentsPendingHasBeenSet; }

    /**
     * <p> The number of assignments for this HIT that are being previewed or have been
     * accepted by Workers, but have not yet been submitted, returned, or
     * abandoned.</p>
     */
    inline void SetNumberOfAssignmentsPending(int value) { m_numberOfAssignmentsPendingHasBeenSet = true; m_numberOfAssignmentsPending = value; }

    /**
     * <p> The number of assignments for this HIT that are being previewed or have been
     * accepted by Workers, but have not yet been submitted, returned, or
     * abandoned.</p>
     */
    inline HIT& WithNumberOfAssignmentsPending(int value) { SetNumberOfAssignmentsPending(value); return *this;}


    /**
     * <p> The number of assignments for this HIT that are available for Workers to
     * accept.</p>
     */
    inline int GetNumberOfAssignmentsAvailable() const{ return m_numberOfAssignmentsAvailable; }

    /**
     * <p> The number of assignments for this HIT that are available for Workers to
     * accept.</p>
     */
    inline bool NumberOfAssignmentsAvailableHasBeenSet() const { return m_numberOfAssignmentsAvailableHasBeenSet; }

    /**
     * <p> The number of assignments for this HIT that are available for Workers to
     * accept.</p>
     */
    inline void SetNumberOfAssignmentsAvailable(int value) { m_numberOfAssignmentsAvailableHasBeenSet = true; m_numberOfAssignmentsAvailable = value; }

    /**
     * <p> The number of assignments for this HIT that are available for Workers to
     * accept.</p>
     */
    inline HIT& WithNumberOfAssignmentsAvailable(int value) { SetNumberOfAssignmentsAvailable(value); return *this;}


    /**
     * <p> The number of assignments for this HIT that have been approved or
     * rejected.</p>
     */
    inline int GetNumberOfAssignmentsCompleted() const{ return m_numberOfAssignmentsCompleted; }

    /**
     * <p> The number of assignments for this HIT that have been approved or
     * rejected.</p>
     */
    inline bool NumberOfAssignmentsCompletedHasBeenSet() const { return m_numberOfAssignmentsCompletedHasBeenSet; }

    /**
     * <p> The number of assignments for this HIT that have been approved or
     * rejected.</p>
     */
    inline void SetNumberOfAssignmentsCompleted(int value) { m_numberOfAssignmentsCompletedHasBeenSet = true; m_numberOfAssignmentsCompleted = value; }

    /**
     * <p> The number of assignments for this HIT that have been approved or
     * rejected.</p>
     */
    inline HIT& WithNumberOfAssignmentsCompleted(int value) { SetNumberOfAssignmentsCompleted(value); return *this;}

  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet;

    Aws::String m_hITTypeId;
    bool m_hITTypeIdHasBeenSet;

    Aws::String m_hITGroupId;
    bool m_hITGroupIdHasBeenSet;

    Aws::String m_hITLayoutId;
    bool m_hITLayoutIdHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_question;
    bool m_questionHasBeenSet;

    Aws::String m_keywords;
    bool m_keywordsHasBeenSet;

    HITStatus m_hITStatus;
    bool m_hITStatusHasBeenSet;

    int m_maxAssignments;
    bool m_maxAssignmentsHasBeenSet;

    Aws::String m_reward;
    bool m_rewardHasBeenSet;

    long long m_autoApprovalDelayInSeconds;
    bool m_autoApprovalDelayInSecondsHasBeenSet;

    Aws::Utils::DateTime m_expiration;
    bool m_expirationHasBeenSet;

    long long m_assignmentDurationInSeconds;
    bool m_assignmentDurationInSecondsHasBeenSet;

    Aws::String m_requesterAnnotation;
    bool m_requesterAnnotationHasBeenSet;

    Aws::Vector<QualificationRequirement> m_qualificationRequirements;
    bool m_qualificationRequirementsHasBeenSet;

    HITReviewStatus m_hITReviewStatus;
    bool m_hITReviewStatusHasBeenSet;

    int m_numberOfAssignmentsPending;
    bool m_numberOfAssignmentsPendingHasBeenSet;

    int m_numberOfAssignmentsAvailable;
    bool m_numberOfAssignmentsAvailableHasBeenSet;

    int m_numberOfAssignmentsCompleted;
    bool m_numberOfAssignmentsCompletedHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
