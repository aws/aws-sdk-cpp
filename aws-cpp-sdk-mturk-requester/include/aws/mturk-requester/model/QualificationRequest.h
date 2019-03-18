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
   * <p> The QualificationRequest data structure represents a request a Worker has
   * made for a Qualification. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/QualificationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API QualificationRequest
  {
  public:
    QualificationRequest();
    QualificationRequest(Aws::Utils::Json::JsonView jsonValue);
    QualificationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Qualification request, a unique identifier generated when the
     * request was submitted. </p>
     */
    inline const Aws::String& GetQualificationRequestId() const{ return m_qualificationRequestId; }

    /**
     * <p>The ID of the Qualification request, a unique identifier generated when the
     * request was submitted. </p>
     */
    inline bool QualificationRequestIdHasBeenSet() const { return m_qualificationRequestIdHasBeenSet; }

    /**
     * <p>The ID of the Qualification request, a unique identifier generated when the
     * request was submitted. </p>
     */
    inline void SetQualificationRequestId(const Aws::String& value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId = value; }

    /**
     * <p>The ID of the Qualification request, a unique identifier generated when the
     * request was submitted. </p>
     */
    inline void SetQualificationRequestId(Aws::String&& value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId = std::move(value); }

    /**
     * <p>The ID of the Qualification request, a unique identifier generated when the
     * request was submitted. </p>
     */
    inline void SetQualificationRequestId(const char* value) { m_qualificationRequestIdHasBeenSet = true; m_qualificationRequestId.assign(value); }

    /**
     * <p>The ID of the Qualification request, a unique identifier generated when the
     * request was submitted. </p>
     */
    inline QualificationRequest& WithQualificationRequestId(const Aws::String& value) { SetQualificationRequestId(value); return *this;}

    /**
     * <p>The ID of the Qualification request, a unique identifier generated when the
     * request was submitted. </p>
     */
    inline QualificationRequest& WithQualificationRequestId(Aws::String&& value) { SetQualificationRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Qualification request, a unique identifier generated when the
     * request was submitted. </p>
     */
    inline QualificationRequest& WithQualificationRequestId(const char* value) { SetQualificationRequestId(value); return *this;}


    /**
     * <p> The ID of the Qualification type the Worker is requesting, as returned by
     * the CreateQualificationType operation. </p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }

    /**
     * <p> The ID of the Qualification type the Worker is requesting, as returned by
     * the CreateQualificationType operation. </p>
     */
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }

    /**
     * <p> The ID of the Qualification type the Worker is requesting, as returned by
     * the CreateQualificationType operation. </p>
     */
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p> The ID of the Qualification type the Worker is requesting, as returned by
     * the CreateQualificationType operation. </p>
     */
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }

    /**
     * <p> The ID of the Qualification type the Worker is requesting, as returned by
     * the CreateQualificationType operation. </p>
     */
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }

    /**
     * <p> The ID of the Qualification type the Worker is requesting, as returned by
     * the CreateQualificationType operation. </p>
     */
    inline QualificationRequest& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p> The ID of the Qualification type the Worker is requesting, as returned by
     * the CreateQualificationType operation. </p>
     */
    inline QualificationRequest& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Qualification type the Worker is requesting, as returned by
     * the CreateQualificationType operation. </p>
     */
    inline QualificationRequest& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}


    /**
     * <p> The ID of the Worker requesting the Qualification.</p>
     */
    inline const Aws::String& GetWorkerId() const{ return m_workerId; }

    /**
     * <p> The ID of the Worker requesting the Qualification.</p>
     */
    inline bool WorkerIdHasBeenSet() const { return m_workerIdHasBeenSet; }

    /**
     * <p> The ID of the Worker requesting the Qualification.</p>
     */
    inline void SetWorkerId(const Aws::String& value) { m_workerIdHasBeenSet = true; m_workerId = value; }

    /**
     * <p> The ID of the Worker requesting the Qualification.</p>
     */
    inline void SetWorkerId(Aws::String&& value) { m_workerIdHasBeenSet = true; m_workerId = std::move(value); }

    /**
     * <p> The ID of the Worker requesting the Qualification.</p>
     */
    inline void SetWorkerId(const char* value) { m_workerIdHasBeenSet = true; m_workerId.assign(value); }

    /**
     * <p> The ID of the Worker requesting the Qualification.</p>
     */
    inline QualificationRequest& WithWorkerId(const Aws::String& value) { SetWorkerId(value); return *this;}

    /**
     * <p> The ID of the Worker requesting the Qualification.</p>
     */
    inline QualificationRequest& WithWorkerId(Aws::String&& value) { SetWorkerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Worker requesting the Qualification.</p>
     */
    inline QualificationRequest& WithWorkerId(const char* value) { SetWorkerId(value); return *this;}


    /**
     * <p> The contents of the Qualification test that was presented to the Worker, if
     * the type has a test and the Worker has submitted answers. This value is
     * identical to the QuestionForm associated with the Qualification type at the time
     * the Worker requests the Qualification.</p>
     */
    inline const Aws::String& GetTest() const{ return m_test; }

    /**
     * <p> The contents of the Qualification test that was presented to the Worker, if
     * the type has a test and the Worker has submitted answers. This value is
     * identical to the QuestionForm associated with the Qualification type at the time
     * the Worker requests the Qualification.</p>
     */
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }

    /**
     * <p> The contents of the Qualification test that was presented to the Worker, if
     * the type has a test and the Worker has submitted answers. This value is
     * identical to the QuestionForm associated with the Qualification type at the time
     * the Worker requests the Qualification.</p>
     */
    inline void SetTest(const Aws::String& value) { m_testHasBeenSet = true; m_test = value; }

    /**
     * <p> The contents of the Qualification test that was presented to the Worker, if
     * the type has a test and the Worker has submitted answers. This value is
     * identical to the QuestionForm associated with the Qualification type at the time
     * the Worker requests the Qualification.</p>
     */
    inline void SetTest(Aws::String&& value) { m_testHasBeenSet = true; m_test = std::move(value); }

    /**
     * <p> The contents of the Qualification test that was presented to the Worker, if
     * the type has a test and the Worker has submitted answers. This value is
     * identical to the QuestionForm associated with the Qualification type at the time
     * the Worker requests the Qualification.</p>
     */
    inline void SetTest(const char* value) { m_testHasBeenSet = true; m_test.assign(value); }

    /**
     * <p> The contents of the Qualification test that was presented to the Worker, if
     * the type has a test and the Worker has submitted answers. This value is
     * identical to the QuestionForm associated with the Qualification type at the time
     * the Worker requests the Qualification.</p>
     */
    inline QualificationRequest& WithTest(const Aws::String& value) { SetTest(value); return *this;}

    /**
     * <p> The contents of the Qualification test that was presented to the Worker, if
     * the type has a test and the Worker has submitted answers. This value is
     * identical to the QuestionForm associated with the Qualification type at the time
     * the Worker requests the Qualification.</p>
     */
    inline QualificationRequest& WithTest(Aws::String&& value) { SetTest(std::move(value)); return *this;}

    /**
     * <p> The contents of the Qualification test that was presented to the Worker, if
     * the type has a test and the Worker has submitted answers. This value is
     * identical to the QuestionForm associated with the Qualification type at the time
     * the Worker requests the Qualification.</p>
     */
    inline QualificationRequest& WithTest(const char* value) { SetTest(value); return *this;}


    /**
     * <p> The Worker's answers for the Qualification type's test contained in a
     * QuestionFormAnswers document, if the type has a test and the Worker has
     * submitted answers. If the Worker does not provide any answers, Answer may be
     * empty. </p>
     */
    inline const Aws::String& GetAnswer() const{ return m_answer; }

    /**
     * <p> The Worker's answers for the Qualification type's test contained in a
     * QuestionFormAnswers document, if the type has a test and the Worker has
     * submitted answers. If the Worker does not provide any answers, Answer may be
     * empty. </p>
     */
    inline bool AnswerHasBeenSet() const { return m_answerHasBeenSet; }

    /**
     * <p> The Worker's answers for the Qualification type's test contained in a
     * QuestionFormAnswers document, if the type has a test and the Worker has
     * submitted answers. If the Worker does not provide any answers, Answer may be
     * empty. </p>
     */
    inline void SetAnswer(const Aws::String& value) { m_answerHasBeenSet = true; m_answer = value; }

    /**
     * <p> The Worker's answers for the Qualification type's test contained in a
     * QuestionFormAnswers document, if the type has a test and the Worker has
     * submitted answers. If the Worker does not provide any answers, Answer may be
     * empty. </p>
     */
    inline void SetAnswer(Aws::String&& value) { m_answerHasBeenSet = true; m_answer = std::move(value); }

    /**
     * <p> The Worker's answers for the Qualification type's test contained in a
     * QuestionFormAnswers document, if the type has a test and the Worker has
     * submitted answers. If the Worker does not provide any answers, Answer may be
     * empty. </p>
     */
    inline void SetAnswer(const char* value) { m_answerHasBeenSet = true; m_answer.assign(value); }

    /**
     * <p> The Worker's answers for the Qualification type's test contained in a
     * QuestionFormAnswers document, if the type has a test and the Worker has
     * submitted answers. If the Worker does not provide any answers, Answer may be
     * empty. </p>
     */
    inline QualificationRequest& WithAnswer(const Aws::String& value) { SetAnswer(value); return *this;}

    /**
     * <p> The Worker's answers for the Qualification type's test contained in a
     * QuestionFormAnswers document, if the type has a test and the Worker has
     * submitted answers. If the Worker does not provide any answers, Answer may be
     * empty. </p>
     */
    inline QualificationRequest& WithAnswer(Aws::String&& value) { SetAnswer(std::move(value)); return *this;}

    /**
     * <p> The Worker's answers for the Qualification type's test contained in a
     * QuestionFormAnswers document, if the type has a test and the Worker has
     * submitted answers. If the Worker does not provide any answers, Answer may be
     * empty. </p>
     */
    inline QualificationRequest& WithAnswer(const char* value) { SetAnswer(value); return *this;}


    /**
     * <p>The date and time the Qualification request had a status of Submitted. This
     * is either the time the Worker submitted answers for a Qualification test, or the
     * time the Worker requested the Qualification if the Qualification type does not
     * have a test. </p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }

    /**
     * <p>The date and time the Qualification request had a status of Submitted. This
     * is either the time the Worker submitted answers for a Qualification test, or the
     * time the Worker requested the Qualification if the Qualification type does not
     * have a test. </p>
     */
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }

    /**
     * <p>The date and time the Qualification request had a status of Submitted. This
     * is either the time the Worker submitted answers for a Qualification test, or the
     * time the Worker requested the Qualification if the Qualification type does not
     * have a test. </p>
     */
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }

    /**
     * <p>The date and time the Qualification request had a status of Submitted. This
     * is either the time the Worker submitted answers for a Qualification test, or the
     * time the Worker requested the Qualification if the Qualification type does not
     * have a test. </p>
     */
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }

    /**
     * <p>The date and time the Qualification request had a status of Submitted. This
     * is either the time the Worker submitted answers for a Qualification test, or the
     * time the Worker requested the Qualification if the Qualification type does not
     * have a test. </p>
     */
    inline QualificationRequest& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}

    /**
     * <p>The date and time the Qualification request had a status of Submitted. This
     * is either the time the Worker submitted answers for a Qualification test, or the
     * time the Worker requested the Qualification if the Qualification type does not
     * have a test. </p>
     */
    inline QualificationRequest& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}

  private:

    Aws::String m_qualificationRequestId;
    bool m_qualificationRequestIdHasBeenSet;

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet;

    Aws::String m_workerId;
    bool m_workerIdHasBeenSet;

    Aws::String m_test;
    bool m_testHasBeenSet;

    Aws::String m_answer;
    bool m_answerHasBeenSet;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
