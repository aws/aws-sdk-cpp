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
#include <aws/mturk-requester/model/ReviewActionStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> Both the AssignmentReviewReport and the HITReviewReport elements contains
   * the ReviewActionDetail data structure. This structure is returned multiple times
   * for each action specified in the Review Policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ReviewActionDetail">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API ReviewActionDetail
  {
  public:
    ReviewActionDetail();
    ReviewActionDetail(Aws::Utils::Json::JsonView jsonValue);
    ReviewActionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the action.</p>
     */
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    /**
     * <p>The unique identifier for the action.</p>
     */
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    /**
     * <p>The unique identifier for the action.</p>
     */
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    /**
     * <p>The unique identifier for the action.</p>
     */
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    /**
     * <p>The unique identifier for the action.</p>
     */
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    /**
     * <p>The unique identifier for the action.</p>
     */
    inline ReviewActionDetail& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    /**
     * <p>The unique identifier for the action.</p>
     */
    inline ReviewActionDetail& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the action.</p>
     */
    inline ReviewActionDetail& WithActionId(const char* value) { SetActionId(value); return *this;}


    /**
     * <p> The nature of the action itself. The Review Policy is responsible for
     * examining the HIT and Assignments, emitting results, and deciding which other
     * actions will be necessary. </p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p> The nature of the action itself. The Review Policy is responsible for
     * examining the HIT and Assignments, emitting results, and deciding which other
     * actions will be necessary. </p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p> The nature of the action itself. The Review Policy is responsible for
     * examining the HIT and Assignments, emitting results, and deciding which other
     * actions will be necessary. </p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p> The nature of the action itself. The Review Policy is responsible for
     * examining the HIT and Assignments, emitting results, and deciding which other
     * actions will be necessary. </p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p> The nature of the action itself. The Review Policy is responsible for
     * examining the HIT and Assignments, emitting results, and deciding which other
     * actions will be necessary. </p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p> The nature of the action itself. The Review Policy is responsible for
     * examining the HIT and Assignments, emitting results, and deciding which other
     * actions will be necessary. </p>
     */
    inline ReviewActionDetail& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p> The nature of the action itself. The Review Policy is responsible for
     * examining the HIT and Assignments, emitting results, and deciding which other
     * actions will be necessary. </p>
     */
    inline ReviewActionDetail& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p> The nature of the action itself. The Review Policy is responsible for
     * examining the HIT and Assignments, emitting results, and deciding which other
     * actions will be necessary. </p>
     */
    inline ReviewActionDetail& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p> The specific HITId or AssignmentID targeted by the action.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p> The specific HITId or AssignmentID targeted by the action.</p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p> The specific HITId or AssignmentID targeted by the action.</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p> The specific HITId or AssignmentID targeted by the action.</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p> The specific HITId or AssignmentID targeted by the action.</p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p> The specific HITId or AssignmentID targeted by the action.</p>
     */
    inline ReviewActionDetail& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p> The specific HITId or AssignmentID targeted by the action.</p>
     */
    inline ReviewActionDetail& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p> The specific HITId or AssignmentID targeted by the action.</p>
     */
    inline ReviewActionDetail& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p> The type of object in TargetId.</p>
     */
    inline const Aws::String& GetTargetType() const{ return m_targetType; }

    /**
     * <p> The type of object in TargetId.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p> The type of object in TargetId.</p>
     */
    inline void SetTargetType(const Aws::String& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p> The type of object in TargetId.</p>
     */
    inline void SetTargetType(Aws::String&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p> The type of object in TargetId.</p>
     */
    inline void SetTargetType(const char* value) { m_targetTypeHasBeenSet = true; m_targetType.assign(value); }

    /**
     * <p> The type of object in TargetId.</p>
     */
    inline ReviewActionDetail& WithTargetType(const Aws::String& value) { SetTargetType(value); return *this;}

    /**
     * <p> The type of object in TargetId.</p>
     */
    inline ReviewActionDetail& WithTargetType(Aws::String&& value) { SetTargetType(std::move(value)); return *this;}

    /**
     * <p> The type of object in TargetId.</p>
     */
    inline ReviewActionDetail& WithTargetType(const char* value) { SetTargetType(value); return *this;}


    /**
     * <p> The current disposition of the action: INTENDED, SUCCEEDED, FAILED, or
     * CANCELLED. </p>
     */
    inline const ReviewActionStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The current disposition of the action: INTENDED, SUCCEEDED, FAILED, or
     * CANCELLED. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The current disposition of the action: INTENDED, SUCCEEDED, FAILED, or
     * CANCELLED. </p>
     */
    inline void SetStatus(const ReviewActionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The current disposition of the action: INTENDED, SUCCEEDED, FAILED, or
     * CANCELLED. </p>
     */
    inline void SetStatus(ReviewActionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The current disposition of the action: INTENDED, SUCCEEDED, FAILED, or
     * CANCELLED. </p>
     */
    inline ReviewActionDetail& WithStatus(const ReviewActionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The current disposition of the action: INTENDED, SUCCEEDED, FAILED, or
     * CANCELLED. </p>
     */
    inline ReviewActionDetail& WithStatus(ReviewActionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The date when the action was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompleteTime() const{ return m_completeTime; }

    /**
     * <p> The date when the action was completed.</p>
     */
    inline bool CompleteTimeHasBeenSet() const { return m_completeTimeHasBeenSet; }

    /**
     * <p> The date when the action was completed.</p>
     */
    inline void SetCompleteTime(const Aws::Utils::DateTime& value) { m_completeTimeHasBeenSet = true; m_completeTime = value; }

    /**
     * <p> The date when the action was completed.</p>
     */
    inline void SetCompleteTime(Aws::Utils::DateTime&& value) { m_completeTimeHasBeenSet = true; m_completeTime = std::move(value); }

    /**
     * <p> The date when the action was completed.</p>
     */
    inline ReviewActionDetail& WithCompleteTime(const Aws::Utils::DateTime& value) { SetCompleteTime(value); return *this;}

    /**
     * <p> The date when the action was completed.</p>
     */
    inline ReviewActionDetail& WithCompleteTime(Aws::Utils::DateTime&& value) { SetCompleteTime(std::move(value)); return *this;}


    /**
     * <p> A description of the outcome of the review.</p>
     */
    inline const Aws::String& GetResult() const{ return m_result; }

    /**
     * <p> A description of the outcome of the review.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p> A description of the outcome of the review.</p>
     */
    inline void SetResult(const Aws::String& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p> A description of the outcome of the review.</p>
     */
    inline void SetResult(Aws::String&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p> A description of the outcome of the review.</p>
     */
    inline void SetResult(const char* value) { m_resultHasBeenSet = true; m_result.assign(value); }

    /**
     * <p> A description of the outcome of the review.</p>
     */
    inline ReviewActionDetail& WithResult(const Aws::String& value) { SetResult(value); return *this;}

    /**
     * <p> A description of the outcome of the review.</p>
     */
    inline ReviewActionDetail& WithResult(Aws::String&& value) { SetResult(std::move(value)); return *this;}

    /**
     * <p> A description of the outcome of the review.</p>
     */
    inline ReviewActionDetail& WithResult(const char* value) { SetResult(value); return *this;}


    /**
     * <p> Present only when the Results have a FAILED Status.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p> Present only when the Results have a FAILED Status.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p> Present only when the Results have a FAILED Status.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p> Present only when the Results have a FAILED Status.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p> Present only when the Results have a FAILED Status.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p> Present only when the Results have a FAILED Status.</p>
     */
    inline ReviewActionDetail& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p> Present only when the Results have a FAILED Status.</p>
     */
    inline ReviewActionDetail& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p> Present only when the Results have a FAILED Status.</p>
     */
    inline ReviewActionDetail& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet;

    ReviewActionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_completeTime;
    bool m_completeTimeHasBeenSet;

    Aws::String m_result;
    bool m_resultHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
