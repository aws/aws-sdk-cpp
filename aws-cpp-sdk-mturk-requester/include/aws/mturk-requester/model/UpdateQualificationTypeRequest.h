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
#include <aws/mturk-requester/model/QualificationTypeStatus.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class AWS_MTURK_API UpdateQualificationTypeRequest : public MTurkRequest
  {
  public:
    UpdateQualificationTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQualificationType"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Qualification type to update.</p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }

    /**
     * <p>The ID of the Qualification type to update.</p>
     */
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }

    /**
     * <p>The ID of the Qualification type to update.</p>
     */
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p>The ID of the Qualification type to update.</p>
     */
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }

    /**
     * <p>The ID of the Qualification type to update.</p>
     */
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }

    /**
     * <p>The ID of the Qualification type to update.</p>
     */
    inline UpdateQualificationTypeRequest& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p>The ID of the Qualification type to update.</p>
     */
    inline UpdateQualificationTypeRequest& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Qualification type to update.</p>
     */
    inline UpdateQualificationTypeRequest& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}


    /**
     * <p>The new description of the Qualification type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description of the Qualification type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description of the Qualification type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description of the Qualification type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description of the Qualification type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description of the Qualification type.</p>
     */
    inline UpdateQualificationTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description of the Qualification type.</p>
     */
    inline UpdateQualificationTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description of the Qualification type.</p>
     */
    inline UpdateQualificationTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The new status of the Qualification type - Active | Inactive</p>
     */
    inline const QualificationTypeStatus& GetQualificationTypeStatus() const{ return m_qualificationTypeStatus; }

    /**
     * <p>The new status of the Qualification type - Active | Inactive</p>
     */
    inline bool QualificationTypeStatusHasBeenSet() const { return m_qualificationTypeStatusHasBeenSet; }

    /**
     * <p>The new status of the Qualification type - Active | Inactive</p>
     */
    inline void SetQualificationTypeStatus(const QualificationTypeStatus& value) { m_qualificationTypeStatusHasBeenSet = true; m_qualificationTypeStatus = value; }

    /**
     * <p>The new status of the Qualification type - Active | Inactive</p>
     */
    inline void SetQualificationTypeStatus(QualificationTypeStatus&& value) { m_qualificationTypeStatusHasBeenSet = true; m_qualificationTypeStatus = std::move(value); }

    /**
     * <p>The new status of the Qualification type - Active | Inactive</p>
     */
    inline UpdateQualificationTypeRequest& WithQualificationTypeStatus(const QualificationTypeStatus& value) { SetQualificationTypeStatus(value); return *this;}

    /**
     * <p>The new status of the Qualification type - Active | Inactive</p>
     */
    inline UpdateQualificationTypeRequest& WithQualificationTypeStatus(QualificationTypeStatus&& value) { SetQualificationTypeStatus(std::move(value)); return *this;}


    /**
     * <p>The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified.</p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline const Aws::String& GetTest() const{ return m_test; }

    /**
     * <p>The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified.</p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }

    /**
     * <p>The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified.</p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline void SetTest(const Aws::String& value) { m_testHasBeenSet = true; m_test = value; }

    /**
     * <p>The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified.</p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline void SetTest(Aws::String&& value) { m_testHasBeenSet = true; m_test = std::move(value); }

    /**
     * <p>The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified.</p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline void SetTest(const char* value) { m_testHasBeenSet = true; m_test.assign(value); }

    /**
     * <p>The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified.</p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline UpdateQualificationTypeRequest& WithTest(const Aws::String& value) { SetTest(value); return *this;}

    /**
     * <p>The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified.</p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline UpdateQualificationTypeRequest& WithTest(Aws::String&& value) { SetTest(std::move(value)); return *this;}

    /**
     * <p>The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified.</p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline UpdateQualificationTypeRequest& WithTest(const char* value) { SetTest(value); return *this;}


    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p>
     */
    inline const Aws::String& GetAnswerKey() const{ return m_answerKey; }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p>
     */
    inline bool AnswerKeyHasBeenSet() const { return m_answerKeyHasBeenSet; }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p>
     */
    inline void SetAnswerKey(const Aws::String& value) { m_answerKeyHasBeenSet = true; m_answerKey = value; }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p>
     */
    inline void SetAnswerKey(Aws::String&& value) { m_answerKeyHasBeenSet = true; m_answerKey = std::move(value); }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p>
     */
    inline void SetAnswerKey(const char* value) { m_answerKeyHasBeenSet = true; m_answerKey.assign(value); }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p>
     */
    inline UpdateQualificationTypeRequest& WithAnswerKey(const Aws::String& value) { SetAnswerKey(value); return *this;}

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p>
     */
    inline UpdateQualificationTypeRequest& WithAnswerKey(Aws::String&& value) { SetAnswerKey(std::move(value)); return *this;}

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p>
     */
    inline UpdateQualificationTypeRequest& WithAnswerKey(const char* value) { SetAnswerKey(value); return *this;}


    /**
     * <p>The number of seconds the Worker has to complete the Qualification test,
     * starting from the time the Worker requests the Qualification.</p>
     */
    inline long long GetTestDurationInSeconds() const{ return m_testDurationInSeconds; }

    /**
     * <p>The number of seconds the Worker has to complete the Qualification test,
     * starting from the time the Worker requests the Qualification.</p>
     */
    inline bool TestDurationInSecondsHasBeenSet() const { return m_testDurationInSecondsHasBeenSet; }

    /**
     * <p>The number of seconds the Worker has to complete the Qualification test,
     * starting from the time the Worker requests the Qualification.</p>
     */
    inline void SetTestDurationInSeconds(long long value) { m_testDurationInSecondsHasBeenSet = true; m_testDurationInSeconds = value; }

    /**
     * <p>The number of seconds the Worker has to complete the Qualification test,
     * starting from the time the Worker requests the Qualification.</p>
     */
    inline UpdateQualificationTypeRequest& WithTestDurationInSeconds(long long value) { SetTestDurationInSeconds(value); return *this;}


    /**
     * <p>The amount of time, in seconds, that Workers must wait after requesting a
     * Qualification of the specified Qualification type before they can retry the
     * Qualification request. It is not possible to disable retries for a Qualification
     * type after it has been created with retries enabled. If you want to disable
     * retries, you must dispose of the existing retry-enabled Qualification type using
     * DisposeQualificationType and then create a new Qualification type with retries
     * disabled using CreateQualificationType.</p>
     */
    inline long long GetRetryDelayInSeconds() const{ return m_retryDelayInSeconds; }

    /**
     * <p>The amount of time, in seconds, that Workers must wait after requesting a
     * Qualification of the specified Qualification type before they can retry the
     * Qualification request. It is not possible to disable retries for a Qualification
     * type after it has been created with retries enabled. If you want to disable
     * retries, you must dispose of the existing retry-enabled Qualification type using
     * DisposeQualificationType and then create a new Qualification type with retries
     * disabled using CreateQualificationType.</p>
     */
    inline bool RetryDelayInSecondsHasBeenSet() const { return m_retryDelayInSecondsHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, that Workers must wait after requesting a
     * Qualification of the specified Qualification type before they can retry the
     * Qualification request. It is not possible to disable retries for a Qualification
     * type after it has been created with retries enabled. If you want to disable
     * retries, you must dispose of the existing retry-enabled Qualification type using
     * DisposeQualificationType and then create a new Qualification type with retries
     * disabled using CreateQualificationType.</p>
     */
    inline void SetRetryDelayInSeconds(long long value) { m_retryDelayInSecondsHasBeenSet = true; m_retryDelayInSeconds = value; }

    /**
     * <p>The amount of time, in seconds, that Workers must wait after requesting a
     * Qualification of the specified Qualification type before they can retry the
     * Qualification request. It is not possible to disable retries for a Qualification
     * type after it has been created with retries enabled. If you want to disable
     * retries, you must dispose of the existing retry-enabled Qualification type using
     * DisposeQualificationType and then create a new Qualification type with retries
     * disabled using CreateQualificationType.</p>
     */
    inline UpdateQualificationTypeRequest& WithRetryDelayInSeconds(long long value) { SetRetryDelayInSeconds(value); return *this;}


    /**
     * <p>Specifies whether requests for the Qualification type are granted
     * immediately, without prompting the Worker with a Qualification test.</p>
     * <p>Constraints: If the Test parameter is specified, this parameter cannot be
     * true.</p>
     */
    inline bool GetAutoGranted() const{ return m_autoGranted; }

    /**
     * <p>Specifies whether requests for the Qualification type are granted
     * immediately, without prompting the Worker with a Qualification test.</p>
     * <p>Constraints: If the Test parameter is specified, this parameter cannot be
     * true.</p>
     */
    inline bool AutoGrantedHasBeenSet() const { return m_autoGrantedHasBeenSet; }

    /**
     * <p>Specifies whether requests for the Qualification type are granted
     * immediately, without prompting the Worker with a Qualification test.</p>
     * <p>Constraints: If the Test parameter is specified, this parameter cannot be
     * true.</p>
     */
    inline void SetAutoGranted(bool value) { m_autoGrantedHasBeenSet = true; m_autoGranted = value; }

    /**
     * <p>Specifies whether requests for the Qualification type are granted
     * immediately, without prompting the Worker with a Qualification test.</p>
     * <p>Constraints: If the Test parameter is specified, this parameter cannot be
     * true.</p>
     */
    inline UpdateQualificationTypeRequest& WithAutoGranted(bool value) { SetAutoGranted(value); return *this;}


    /**
     * <p>The Qualification value to use for automatically granted Qualifications. This
     * parameter is used only if the AutoGranted parameter is true.</p>
     */
    inline int GetAutoGrantedValue() const{ return m_autoGrantedValue; }

    /**
     * <p>The Qualification value to use for automatically granted Qualifications. This
     * parameter is used only if the AutoGranted parameter is true.</p>
     */
    inline bool AutoGrantedValueHasBeenSet() const { return m_autoGrantedValueHasBeenSet; }

    /**
     * <p>The Qualification value to use for automatically granted Qualifications. This
     * parameter is used only if the AutoGranted parameter is true.</p>
     */
    inline void SetAutoGrantedValue(int value) { m_autoGrantedValueHasBeenSet = true; m_autoGrantedValue = value; }

    /**
     * <p>The Qualification value to use for automatically granted Qualifications. This
     * parameter is used only if the AutoGranted parameter is true.</p>
     */
    inline UpdateQualificationTypeRequest& WithAutoGrantedValue(int value) { SetAutoGrantedValue(value); return *this;}

  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    QualificationTypeStatus m_qualificationTypeStatus;
    bool m_qualificationTypeStatusHasBeenSet;

    Aws::String m_test;
    bool m_testHasBeenSet;

    Aws::String m_answerKey;
    bool m_answerKeyHasBeenSet;

    long long m_testDurationInSeconds;
    bool m_testDurationInSecondsHasBeenSet;

    long long m_retryDelayInSeconds;
    bool m_retryDelayInSecondsHasBeenSet;

    bool m_autoGranted;
    bool m_autoGrantedHasBeenSet;

    int m_autoGrantedValue;
    bool m_autoGrantedValueHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
