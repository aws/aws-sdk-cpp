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
#include <aws/mturk-requester/model/ReviewPolicy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_MTURK_API CreateHITWithHITTypeRequest : public MTurkRequest
  {
  public:
    CreateHITWithHITTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHITWithHITType"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The HIT type ID you want to create this HIT with.</p>
     */
    inline const Aws::String& GetHITTypeId() const{ return m_hITTypeId; }

    /**
     * <p>The HIT type ID you want to create this HIT with.</p>
     */
    inline bool HITTypeIdHasBeenSet() const { return m_hITTypeIdHasBeenSet; }

    /**
     * <p>The HIT type ID you want to create this HIT with.</p>
     */
    inline void SetHITTypeId(const Aws::String& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = value; }

    /**
     * <p>The HIT type ID you want to create this HIT with.</p>
     */
    inline void SetHITTypeId(Aws::String&& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = std::move(value); }

    /**
     * <p>The HIT type ID you want to create this HIT with.</p>
     */
    inline void SetHITTypeId(const char* value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId.assign(value); }

    /**
     * <p>The HIT type ID you want to create this HIT with.</p>
     */
    inline CreateHITWithHITTypeRequest& WithHITTypeId(const Aws::String& value) { SetHITTypeId(value); return *this;}

    /**
     * <p>The HIT type ID you want to create this HIT with.</p>
     */
    inline CreateHITWithHITTypeRequest& WithHITTypeId(Aws::String&& value) { SetHITTypeId(std::move(value)); return *this;}

    /**
     * <p>The HIT type ID you want to create this HIT with.</p>
     */
    inline CreateHITWithHITTypeRequest& WithHITTypeId(const char* value) { SetHITTypeId(value); return *this;}


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
    inline CreateHITWithHITTypeRequest& WithMaxAssignments(int value) { SetMaxAssignments(value); return *this;}


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
    inline CreateHITWithHITTypeRequest& WithLifetimeInSeconds(long long value) { SetLifetimeInSeconds(value); return *this;}


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
    inline CreateHITWithHITTypeRequest& WithQuestion(const Aws::String& value) { SetQuestion(value); return *this;}

    /**
     * <p> The data the person completing the HIT uses to produce the results. </p> <p>
     * Constraints: Must be a QuestionForm data structure, an ExternalQuestion data
     * structure, or an HTMLQuestion data structure. The XML question data must not be
     * larger than 64 kilobytes (65,535 bytes) in size, including whitespace. </p>
     * <p>Either a Question parameter or a HITLayoutId parameter must be provided.</p>
     */
    inline CreateHITWithHITTypeRequest& WithQuestion(Aws::String&& value) { SetQuestion(std::move(value)); return *this;}

    /**
     * <p> The data the person completing the HIT uses to produce the results. </p> <p>
     * Constraints: Must be a QuestionForm data structure, an ExternalQuestion data
     * structure, or an HTMLQuestion data structure. The XML question data must not be
     * larger than 64 kilobytes (65,535 bytes) in size, including whitespace. </p>
     * <p>Either a Question parameter or a HITLayoutId parameter must be provided.</p>
     */
    inline CreateHITWithHITTypeRequest& WithQuestion(const char* value) { SetQuestion(value); return *this;}


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
    inline CreateHITWithHITTypeRequest& WithRequesterAnnotation(const Aws::String& value) { SetRequesterAnnotation(value); return *this;}

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
    inline CreateHITWithHITTypeRequest& WithRequesterAnnotation(Aws::String&& value) { SetRequesterAnnotation(std::move(value)); return *this;}

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
    inline CreateHITWithHITTypeRequest& WithRequesterAnnotation(const char* value) { SetRequesterAnnotation(value); return *this;}


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
    inline CreateHITWithHITTypeRequest& WithUniqueRequestToken(const Aws::String& value) { SetUniqueRequestToken(value); return *this;}

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
    inline CreateHITWithHITTypeRequest& WithUniqueRequestToken(Aws::String&& value) { SetUniqueRequestToken(std::move(value)); return *this;}

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
    inline CreateHITWithHITTypeRequest& WithUniqueRequestToken(const char* value) { SetUniqueRequestToken(value); return *this;}


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
    inline CreateHITWithHITTypeRequest& WithAssignmentReviewPolicy(const ReviewPolicy& value) { SetAssignmentReviewPolicy(value); return *this;}

    /**
     * <p> The Assignment-level Review Policy applies to the assignments under the HIT.
     * You can specify for Mechanical Turk to take various actions based on the policy.
     * </p>
     */
    inline CreateHITWithHITTypeRequest& WithAssignmentReviewPolicy(ReviewPolicy&& value) { SetAssignmentReviewPolicy(std::move(value)); return *this;}


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
    inline CreateHITWithHITTypeRequest& WithHITReviewPolicy(const ReviewPolicy& value) { SetHITReviewPolicy(value); return *this;}

    /**
     * <p> The HIT-level Review Policy applies to the HIT. You can specify for
     * Mechanical Turk to take various actions based on the policy. </p>
     */
    inline CreateHITWithHITTypeRequest& WithHITReviewPolicy(ReviewPolicy&& value) { SetHITReviewPolicy(std::move(value)); return *this;}


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
    inline CreateHITWithHITTypeRequest& WithHITLayoutId(const Aws::String& value) { SetHITLayoutId(value); return *this;}

    /**
     * <p> The HITLayoutId allows you to use a pre-existing HIT design with placeholder
     * values and create an additional HIT by providing those values as
     * HITLayoutParameters. </p> <p> Constraints: Either a Question parameter or a
     * HITLayoutId parameter must be provided. </p>
     */
    inline CreateHITWithHITTypeRequest& WithHITLayoutId(Aws::String&& value) { SetHITLayoutId(std::move(value)); return *this;}

    /**
     * <p> The HITLayoutId allows you to use a pre-existing HIT design with placeholder
     * values and create an additional HIT by providing those values as
     * HITLayoutParameters. </p> <p> Constraints: Either a Question parameter or a
     * HITLayoutId parameter must be provided. </p>
     */
    inline CreateHITWithHITTypeRequest& WithHITLayoutId(const char* value) { SetHITLayoutId(value); return *this;}


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
    inline CreateHITWithHITTypeRequest& WithHITLayoutParameters(const Aws::Vector<HITLayoutParameter>& value) { SetHITLayoutParameters(value); return *this;}

    /**
     * <p> If the HITLayoutId is provided, any placeholder values must be filled in
     * with values using the HITLayoutParameter structure. For more information, see
     * HITLayout. </p>
     */
    inline CreateHITWithHITTypeRequest& WithHITLayoutParameters(Aws::Vector<HITLayoutParameter>&& value) { SetHITLayoutParameters(std::move(value)); return *this;}

    /**
     * <p> If the HITLayoutId is provided, any placeholder values must be filled in
     * with values using the HITLayoutParameter structure. For more information, see
     * HITLayout. </p>
     */
    inline CreateHITWithHITTypeRequest& AddHITLayoutParameters(const HITLayoutParameter& value) { m_hITLayoutParametersHasBeenSet = true; m_hITLayoutParameters.push_back(value); return *this; }

    /**
     * <p> If the HITLayoutId is provided, any placeholder values must be filled in
     * with values using the HITLayoutParameter structure. For more information, see
     * HITLayout. </p>
     */
    inline CreateHITWithHITTypeRequest& AddHITLayoutParameters(HITLayoutParameter&& value) { m_hITLayoutParametersHasBeenSet = true; m_hITLayoutParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_hITTypeId;
    bool m_hITTypeIdHasBeenSet;

    int m_maxAssignments;
    bool m_maxAssignmentsHasBeenSet;

    long long m_lifetimeInSeconds;
    bool m_lifetimeInSecondsHasBeenSet;

    Aws::String m_question;
    bool m_questionHasBeenSet;

    Aws::String m_requesterAnnotation;
    bool m_requesterAnnotationHasBeenSet;

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
