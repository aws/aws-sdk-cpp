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
   * <p> This data structure is returned multiple times for each result specified in
   * the Review Policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ReviewResultDetail">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API ReviewResultDetail
  {
  public:
    ReviewResultDetail();
    ReviewResultDetail(Aws::Utils::Json::JsonView jsonValue);
    ReviewResultDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A unique identifier of the Review action result. </p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p> A unique identifier of the Review action result. </p>
     */
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    /**
     * <p> A unique identifier of the Review action result. </p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    /**
     * <p> A unique identifier of the Review action result. </p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    /**
     * <p> A unique identifier of the Review action result. </p>
     */
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    /**
     * <p> A unique identifier of the Review action result. </p>
     */
    inline ReviewResultDetail& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p> A unique identifier of the Review action result. </p>
     */
    inline ReviewResultDetail& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p> A unique identifier of the Review action result. </p>
     */
    inline ReviewResultDetail& WithActionId(const char* value) { SetActionId(value); return *this;}


    /**
     * <p>The HITID or AssignmentId about which this result was taken. Note that
     * HIT-level Review Policies will often emit results about both the HIT itself and
     * its Assignments, while Assignment-level review policies generally only emit
     * results about the Assignment itself. </p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }

    /**
     * <p>The HITID or AssignmentId about which this result was taken. Note that
     * HIT-level Review Policies will often emit results about both the HIT itself and
     * its Assignments, while Assignment-level review policies generally only emit
     * results about the Assignment itself. </p>
     */
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }

    /**
     * <p>The HITID or AssignmentId about which this result was taken. Note that
     * HIT-level Review Policies will often emit results about both the HIT itself and
     * its Assignments, while Assignment-level review policies generally only emit
     * results about the Assignment itself. </p>
     */
    inline void SetSubjectId(const Aws::String& value) { m_subjectIdHasBeenSet = true; m_subjectId = value; }

    /**
     * <p>The HITID or AssignmentId about which this result was taken. Note that
     * HIT-level Review Policies will often emit results about both the HIT itself and
     * its Assignments, while Assignment-level review policies generally only emit
     * results about the Assignment itself. </p>
     */
    inline void SetSubjectId(Aws::String&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::move(value); }

    /**
     * <p>The HITID or AssignmentId about which this result was taken. Note that
     * HIT-level Review Policies will often emit results about both the HIT itself and
     * its Assignments, while Assignment-level review policies generally only emit
     * results about the Assignment itself. </p>
     */
    inline void SetSubjectId(const char* value) { m_subjectIdHasBeenSet = true; m_subjectId.assign(value); }

    /**
     * <p>The HITID or AssignmentId about which this result was taken. Note that
     * HIT-level Review Policies will often emit results about both the HIT itself and
     * its Assignments, while Assignment-level review policies generally only emit
     * results about the Assignment itself. </p>
     */
    inline ReviewResultDetail& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}

    /**
     * <p>The HITID or AssignmentId about which this result was taken. Note that
     * HIT-level Review Policies will often emit results about both the HIT itself and
     * its Assignments, while Assignment-level review policies generally only emit
     * results about the Assignment itself. </p>
     */
    inline ReviewResultDetail& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}

    /**
     * <p>The HITID or AssignmentId about which this result was taken. Note that
     * HIT-level Review Policies will often emit results about both the HIT itself and
     * its Assignments, while Assignment-level review policies generally only emit
     * results about the Assignment itself. </p>
     */
    inline ReviewResultDetail& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}


    /**
     * <p> The type of the object from the SubjectId field.</p>
     */
    inline const Aws::String& GetSubjectType() const{ return m_subjectType; }

    /**
     * <p> The type of the object from the SubjectId field.</p>
     */
    inline bool SubjectTypeHasBeenSet() const { return m_subjectTypeHasBeenSet; }

    /**
     * <p> The type of the object from the SubjectId field.</p>
     */
    inline void SetSubjectType(const Aws::String& value) { m_subjectTypeHasBeenSet = true; m_subjectType = value; }

    /**
     * <p> The type of the object from the SubjectId field.</p>
     */
    inline void SetSubjectType(Aws::String&& value) { m_subjectTypeHasBeenSet = true; m_subjectType = std::move(value); }

    /**
     * <p> The type of the object from the SubjectId field.</p>
     */
    inline void SetSubjectType(const char* value) { m_subjectTypeHasBeenSet = true; m_subjectType.assign(value); }

    /**
     * <p> The type of the object from the SubjectId field.</p>
     */
    inline ReviewResultDetail& WithSubjectType(const Aws::String& value) { SetSubjectType(value); return *this;}

    /**
     * <p> The type of the object from the SubjectId field.</p>
     */
    inline ReviewResultDetail& WithSubjectType(Aws::String&& value) { SetSubjectType(std::move(value)); return *this;}

    /**
     * <p> The type of the object from the SubjectId field.</p>
     */
    inline ReviewResultDetail& WithSubjectType(const char* value) { SetSubjectType(value); return *this;}


    /**
     * <p> Specifies the QuestionId the result is describing. Depending on whether the
     * TargetType is a HIT or Assignment this results could specify multiple values. If
     * TargetType is HIT and QuestionId is absent, then the result describes results of
     * the HIT, including the HIT agreement score. If ObjectType is Assignment and
     * QuestionId is absent, then the result describes the Worker's performance on the
     * HIT. </p>
     */
    inline const Aws::String& GetQuestionId() const{ return m_questionId; }

    /**
     * <p> Specifies the QuestionId the result is describing. Depending on whether the
     * TargetType is a HIT or Assignment this results could specify multiple values. If
     * TargetType is HIT and QuestionId is absent, then the result describes results of
     * the HIT, including the HIT agreement score. If ObjectType is Assignment and
     * QuestionId is absent, then the result describes the Worker's performance on the
     * HIT. </p>
     */
    inline bool QuestionIdHasBeenSet() const { return m_questionIdHasBeenSet; }

    /**
     * <p> Specifies the QuestionId the result is describing. Depending on whether the
     * TargetType is a HIT or Assignment this results could specify multiple values. If
     * TargetType is HIT and QuestionId is absent, then the result describes results of
     * the HIT, including the HIT agreement score. If ObjectType is Assignment and
     * QuestionId is absent, then the result describes the Worker's performance on the
     * HIT. </p>
     */
    inline void SetQuestionId(const Aws::String& value) { m_questionIdHasBeenSet = true; m_questionId = value; }

    /**
     * <p> Specifies the QuestionId the result is describing. Depending on whether the
     * TargetType is a HIT or Assignment this results could specify multiple values. If
     * TargetType is HIT and QuestionId is absent, then the result describes results of
     * the HIT, including the HIT agreement score. If ObjectType is Assignment and
     * QuestionId is absent, then the result describes the Worker's performance on the
     * HIT. </p>
     */
    inline void SetQuestionId(Aws::String&& value) { m_questionIdHasBeenSet = true; m_questionId = std::move(value); }

    /**
     * <p> Specifies the QuestionId the result is describing. Depending on whether the
     * TargetType is a HIT or Assignment this results could specify multiple values. If
     * TargetType is HIT and QuestionId is absent, then the result describes results of
     * the HIT, including the HIT agreement score. If ObjectType is Assignment and
     * QuestionId is absent, then the result describes the Worker's performance on the
     * HIT. </p>
     */
    inline void SetQuestionId(const char* value) { m_questionIdHasBeenSet = true; m_questionId.assign(value); }

    /**
     * <p> Specifies the QuestionId the result is describing. Depending on whether the
     * TargetType is a HIT or Assignment this results could specify multiple values. If
     * TargetType is HIT and QuestionId is absent, then the result describes results of
     * the HIT, including the HIT agreement score. If ObjectType is Assignment and
     * QuestionId is absent, then the result describes the Worker's performance on the
     * HIT. </p>
     */
    inline ReviewResultDetail& WithQuestionId(const Aws::String& value) { SetQuestionId(value); return *this;}

    /**
     * <p> Specifies the QuestionId the result is describing. Depending on whether the
     * TargetType is a HIT or Assignment this results could specify multiple values. If
     * TargetType is HIT and QuestionId is absent, then the result describes results of
     * the HIT, including the HIT agreement score. If ObjectType is Assignment and
     * QuestionId is absent, then the result describes the Worker's performance on the
     * HIT. </p>
     */
    inline ReviewResultDetail& WithQuestionId(Aws::String&& value) { SetQuestionId(std::move(value)); return *this;}

    /**
     * <p> Specifies the QuestionId the result is describing. Depending on whether the
     * TargetType is a HIT or Assignment this results could specify multiple values. If
     * TargetType is HIT and QuestionId is absent, then the result describes results of
     * the HIT, including the HIT agreement score. If ObjectType is Assignment and
     * QuestionId is absent, then the result describes the Worker's performance on the
     * HIT. </p>
     */
    inline ReviewResultDetail& WithQuestionId(const char* value) { SetQuestionId(value); return *this;}


    /**
     * <p> Key identifies the particular piece of reviewed information. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p> Key identifies the particular piece of reviewed information. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p> Key identifies the particular piece of reviewed information. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p> Key identifies the particular piece of reviewed information. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p> Key identifies the particular piece of reviewed information. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p> Key identifies the particular piece of reviewed information. </p>
     */
    inline ReviewResultDetail& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p> Key identifies the particular piece of reviewed information. </p>
     */
    inline ReviewResultDetail& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p> Key identifies the particular piece of reviewed information. </p>
     */
    inline ReviewResultDetail& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p> The values of Key provided by the review policies you have selected. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> The values of Key provided by the review policies you have selected. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> The values of Key provided by the review policies you have selected. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> The values of Key provided by the review policies you have selected. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> The values of Key provided by the review policies you have selected. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> The values of Key provided by the review policies you have selected. </p>
     */
    inline ReviewResultDetail& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> The values of Key provided by the review policies you have selected. </p>
     */
    inline ReviewResultDetail& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> The values of Key provided by the review policies you have selected. </p>
     */
    inline ReviewResultDetail& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet;

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet;

    Aws::String m_subjectType;
    bool m_subjectTypeHasBeenSet;

    Aws::String m_questionId;
    bool m_questionIdHasBeenSet;

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
