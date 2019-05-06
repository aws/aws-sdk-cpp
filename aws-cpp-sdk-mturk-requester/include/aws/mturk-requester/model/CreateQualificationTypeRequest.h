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
  class AWS_MTURK_API CreateQualificationTypeRequest : public MTurkRequest
  {
  public:
    CreateQualificationTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQualificationType"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name you give to the Qualification type. The type name is used to
     * represent the Qualification to Workers, and to find the type using a
     * Qualification type search. It must be unique across all of your Qualification
     * types.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name you give to the Qualification type. The type name is used to
     * represent the Qualification to Workers, and to find the type using a
     * Qualification type search. It must be unique across all of your Qualification
     * types.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name you give to the Qualification type. The type name is used to
     * represent the Qualification to Workers, and to find the type using a
     * Qualification type search. It must be unique across all of your Qualification
     * types.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name you give to the Qualification type. The type name is used to
     * represent the Qualification to Workers, and to find the type using a
     * Qualification type search. It must be unique across all of your Qualification
     * types.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name you give to the Qualification type. The type name is used to
     * represent the Qualification to Workers, and to find the type using a
     * Qualification type search. It must be unique across all of your Qualification
     * types.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name you give to the Qualification type. The type name is used to
     * represent the Qualification to Workers, and to find the type using a
     * Qualification type search. It must be unique across all of your Qualification
     * types.</p>
     */
    inline CreateQualificationTypeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name you give to the Qualification type. The type name is used to
     * represent the Qualification to Workers, and to find the type using a
     * Qualification type search. It must be unique across all of your Qualification
     * types.</p>
     */
    inline CreateQualificationTypeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name you give to the Qualification type. The type name is used to
     * represent the Qualification to Workers, and to find the type using a
     * Qualification type search. It must be unique across all of your Qualification
     * types.</p>
     */
    inline CreateQualificationTypeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>One or more words or phrases that describe the Qualification type, separated
     * by commas. The keywords of a type make the type easier to find during a
     * search.</p>
     */
    inline const Aws::String& GetKeywords() const{ return m_keywords; }

    /**
     * <p>One or more words or phrases that describe the Qualification type, separated
     * by commas. The keywords of a type make the type easier to find during a
     * search.</p>
     */
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }

    /**
     * <p>One or more words or phrases that describe the Qualification type, separated
     * by commas. The keywords of a type make the type easier to find during a
     * search.</p>
     */
    inline void SetKeywords(const Aws::String& value) { m_keywordsHasBeenSet = true; m_keywords = value; }

    /**
     * <p>One or more words or phrases that describe the Qualification type, separated
     * by commas. The keywords of a type make the type easier to find during a
     * search.</p>
     */
    inline void SetKeywords(Aws::String&& value) { m_keywordsHasBeenSet = true; m_keywords = std::move(value); }

    /**
     * <p>One or more words or phrases that describe the Qualification type, separated
     * by commas. The keywords of a type make the type easier to find during a
     * search.</p>
     */
    inline void SetKeywords(const char* value) { m_keywordsHasBeenSet = true; m_keywords.assign(value); }

    /**
     * <p>One or more words or phrases that describe the Qualification type, separated
     * by commas. The keywords of a type make the type easier to find during a
     * search.</p>
     */
    inline CreateQualificationTypeRequest& WithKeywords(const Aws::String& value) { SetKeywords(value); return *this;}

    /**
     * <p>One or more words or phrases that describe the Qualification type, separated
     * by commas. The keywords of a type make the type easier to find during a
     * search.</p>
     */
    inline CreateQualificationTypeRequest& WithKeywords(Aws::String&& value) { SetKeywords(std::move(value)); return *this;}

    /**
     * <p>One or more words or phrases that describe the Qualification type, separated
     * by commas. The keywords of a type make the type easier to find during a
     * search.</p>
     */
    inline CreateQualificationTypeRequest& WithKeywords(const char* value) { SetKeywords(value); return *this;}


    /**
     * <p>A long description for the Qualification type. On the Amazon Mechanical Turk
     * website, the long description is displayed when a Worker examines a
     * Qualification type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A long description for the Qualification type. On the Amazon Mechanical Turk
     * website, the long description is displayed when a Worker examines a
     * Qualification type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A long description for the Qualification type. On the Amazon Mechanical Turk
     * website, the long description is displayed when a Worker examines a
     * Qualification type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A long description for the Qualification type. On the Amazon Mechanical Turk
     * website, the long description is displayed when a Worker examines a
     * Qualification type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A long description for the Qualification type. On the Amazon Mechanical Turk
     * website, the long description is displayed when a Worker examines a
     * Qualification type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A long description for the Qualification type. On the Amazon Mechanical Turk
     * website, the long description is displayed when a Worker examines a
     * Qualification type.</p>
     */
    inline CreateQualificationTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A long description for the Qualification type. On the Amazon Mechanical Turk
     * website, the long description is displayed when a Worker examines a
     * Qualification type.</p>
     */
    inline CreateQualificationTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A long description for the Qualification type. On the Amazon Mechanical Turk
     * website, the long description is displayed when a Worker examines a
     * Qualification type.</p>
     */
    inline CreateQualificationTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The initial status of the Qualification type.</p> <p>Constraints: Valid
     * values are: Active | Inactive</p>
     */
    inline const QualificationTypeStatus& GetQualificationTypeStatus() const{ return m_qualificationTypeStatus; }

    /**
     * <p>The initial status of the Qualification type.</p> <p>Constraints: Valid
     * values are: Active | Inactive</p>
     */
    inline bool QualificationTypeStatusHasBeenSet() const { return m_qualificationTypeStatusHasBeenSet; }

    /**
     * <p>The initial status of the Qualification type.</p> <p>Constraints: Valid
     * values are: Active | Inactive</p>
     */
    inline void SetQualificationTypeStatus(const QualificationTypeStatus& value) { m_qualificationTypeStatusHasBeenSet = true; m_qualificationTypeStatus = value; }

    /**
     * <p>The initial status of the Qualification type.</p> <p>Constraints: Valid
     * values are: Active | Inactive</p>
     */
    inline void SetQualificationTypeStatus(QualificationTypeStatus&& value) { m_qualificationTypeStatusHasBeenSet = true; m_qualificationTypeStatus = std::move(value); }

    /**
     * <p>The initial status of the Qualification type.</p> <p>Constraints: Valid
     * values are: Active | Inactive</p>
     */
    inline CreateQualificationTypeRequest& WithQualificationTypeStatus(const QualificationTypeStatus& value) { SetQualificationTypeStatus(value); return *this;}

    /**
     * <p>The initial status of the Qualification type.</p> <p>Constraints: Valid
     * values are: Active | Inactive</p>
     */
    inline CreateQualificationTypeRequest& WithQualificationTypeStatus(QualificationTypeStatus&& value) { SetQualificationTypeStatus(std::move(value)); return *this;}


    /**
     * <p>The number of seconds that a Worker must wait after requesting a
     * Qualification of the Qualification type before the worker can retry the
     * Qualification request.</p> <p>Constraints: None. If not specified, retries are
     * disabled and Workers can request a Qualification of this type only once, even if
     * the Worker has not been granted the Qualification. It is not possible to disable
     * retries for a Qualification type after it has been created with retries enabled.
     * If you want to disable retries, you must delete existing retry-enabled
     * Qualification type and then create a new Qualification type with retries
     * disabled.</p>
     */
    inline long long GetRetryDelayInSeconds() const{ return m_retryDelayInSeconds; }

    /**
     * <p>The number of seconds that a Worker must wait after requesting a
     * Qualification of the Qualification type before the worker can retry the
     * Qualification request.</p> <p>Constraints: None. If not specified, retries are
     * disabled and Workers can request a Qualification of this type only once, even if
     * the Worker has not been granted the Qualification. It is not possible to disable
     * retries for a Qualification type after it has been created with retries enabled.
     * If you want to disable retries, you must delete existing retry-enabled
     * Qualification type and then create a new Qualification type with retries
     * disabled.</p>
     */
    inline bool RetryDelayInSecondsHasBeenSet() const { return m_retryDelayInSecondsHasBeenSet; }

    /**
     * <p>The number of seconds that a Worker must wait after requesting a
     * Qualification of the Qualification type before the worker can retry the
     * Qualification request.</p> <p>Constraints: None. If not specified, retries are
     * disabled and Workers can request a Qualification of this type only once, even if
     * the Worker has not been granted the Qualification. It is not possible to disable
     * retries for a Qualification type after it has been created with retries enabled.
     * If you want to disable retries, you must delete existing retry-enabled
     * Qualification type and then create a new Qualification type with retries
     * disabled.</p>
     */
    inline void SetRetryDelayInSeconds(long long value) { m_retryDelayInSecondsHasBeenSet = true; m_retryDelayInSeconds = value; }

    /**
     * <p>The number of seconds that a Worker must wait after requesting a
     * Qualification of the Qualification type before the worker can retry the
     * Qualification request.</p> <p>Constraints: None. If not specified, retries are
     * disabled and Workers can request a Qualification of this type only once, even if
     * the Worker has not been granted the Qualification. It is not possible to disable
     * retries for a Qualification type after it has been created with retries enabled.
     * If you want to disable retries, you must delete existing retry-enabled
     * Qualification type and then create a new Qualification type with retries
     * disabled.</p>
     */
    inline CreateQualificationTypeRequest& WithRetryDelayInSeconds(long long value) { SetRetryDelayInSeconds(value); return *this;}


    /**
     * <p> The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified. </p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline const Aws::String& GetTest() const{ return m_test; }

    /**
     * <p> The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified. </p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }

    /**
     * <p> The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified. </p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline void SetTest(const Aws::String& value) { m_testHasBeenSet = true; m_test = value; }

    /**
     * <p> The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified. </p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline void SetTest(Aws::String&& value) { m_testHasBeenSet = true; m_test = std::move(value); }

    /**
     * <p> The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified. </p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline void SetTest(const char* value) { m_testHasBeenSet = true; m_test.assign(value); }

    /**
     * <p> The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified. </p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline CreateQualificationTypeRequest& WithTest(const Aws::String& value) { SetTest(value); return *this;}

    /**
     * <p> The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified. </p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline CreateQualificationTypeRequest& WithTest(Aws::String&& value) { SetTest(std::move(value)); return *this;}

    /**
     * <p> The questions for the Qualification test a Worker must answer correctly to
     * obtain a Qualification of this type. If this parameter is specified,
     * <code>TestDurationInSeconds</code> must also be specified. </p> <p>Constraints:
     * Must not be longer than 65535 bytes. Must be a QuestionForm data structure. This
     * parameter cannot be specified if AutoGranted is true.</p> <p>Constraints: None.
     * If not specified, the Worker may request the Qualification without answering any
     * questions.</p>
     */
    inline CreateQualificationTypeRequest& WithTest(const char* value) { SetTest(value); return *this;}


    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p> <p>Constraints: Must not be longer than
     * 65535 bytes.</p> <p>Constraints: None. If not specified, you must process
     * Qualification requests manually.</p>
     */
    inline const Aws::String& GetAnswerKey() const{ return m_answerKey; }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p> <p>Constraints: Must not be longer than
     * 65535 bytes.</p> <p>Constraints: None. If not specified, you must process
     * Qualification requests manually.</p>
     */
    inline bool AnswerKeyHasBeenSet() const { return m_answerKeyHasBeenSet; }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p> <p>Constraints: Must not be longer than
     * 65535 bytes.</p> <p>Constraints: None. If not specified, you must process
     * Qualification requests manually.</p>
     */
    inline void SetAnswerKey(const Aws::String& value) { m_answerKeyHasBeenSet = true; m_answerKey = value; }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p> <p>Constraints: Must not be longer than
     * 65535 bytes.</p> <p>Constraints: None. If not specified, you must process
     * Qualification requests manually.</p>
     */
    inline void SetAnswerKey(Aws::String&& value) { m_answerKeyHasBeenSet = true; m_answerKey = std::move(value); }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p> <p>Constraints: Must not be longer than
     * 65535 bytes.</p> <p>Constraints: None. If not specified, you must process
     * Qualification requests manually.</p>
     */
    inline void SetAnswerKey(const char* value) { m_answerKeyHasBeenSet = true; m_answerKey.assign(value); }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p> <p>Constraints: Must not be longer than
     * 65535 bytes.</p> <p>Constraints: None. If not specified, you must process
     * Qualification requests manually.</p>
     */
    inline CreateQualificationTypeRequest& WithAnswerKey(const Aws::String& value) { SetAnswerKey(value); return *this;}

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p> <p>Constraints: Must not be longer than
     * 65535 bytes.</p> <p>Constraints: None. If not specified, you must process
     * Qualification requests manually.</p>
     */
    inline CreateQualificationTypeRequest& WithAnswerKey(Aws::String&& value) { SetAnswerKey(std::move(value)); return *this;}

    /**
     * <p>The answers to the Qualification test specified in the Test parameter, in the
     * form of an AnswerKey data structure.</p> <p>Constraints: Must not be longer than
     * 65535 bytes.</p> <p>Constraints: None. If not specified, you must process
     * Qualification requests manually.</p>
     */
    inline CreateQualificationTypeRequest& WithAnswerKey(const char* value) { SetAnswerKey(value); return *this;}


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
    inline CreateQualificationTypeRequest& WithTestDurationInSeconds(long long value) { SetTestDurationInSeconds(value); return *this;}


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
    inline CreateQualificationTypeRequest& WithAutoGranted(bool value) { SetAutoGranted(value); return *this;}


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
    inline CreateQualificationTypeRequest& WithAutoGrantedValue(int value) { SetAutoGrantedValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_keywords;
    bool m_keywordsHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    QualificationTypeStatus m_qualificationTypeStatus;
    bool m_qualificationTypeStatusHasBeenSet;

    long long m_retryDelayInSeconds;
    bool m_retryDelayInSecondsHasBeenSet;

    Aws::String m_test;
    bool m_testHasBeenSet;

    Aws::String m_answerKey;
    bool m_answerKeyHasBeenSet;

    long long m_testDurationInSeconds;
    bool m_testDurationInSecondsHasBeenSet;

    bool m_autoGranted;
    bool m_autoGrantedHasBeenSet;

    int m_autoGrantedValue;
    bool m_autoGrantedValueHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
