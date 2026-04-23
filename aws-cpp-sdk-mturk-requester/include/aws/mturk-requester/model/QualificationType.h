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
#include <aws/mturk-requester/model/QualificationTypeStatus.h>
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
   * <p> The QualificationType data structure represents a Qualification type, a
   * description of a property of a Worker that must match the requirements of a HIT
   * for the Worker to be able to accept the HIT. The type also describes how a
   * Worker can obtain a Qualification of that type, such as through a Qualification
   * test. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/QualificationType">AWS
   * API Reference</a></p>
   */
  class AWS_MTURK_API QualificationType
  {
  public:
    QualificationType();
    QualificationType(Aws::Utils::Json::JsonView jsonValue);
    QualificationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A unique identifier for the Qualification type. A Qualification type is
     * given a Qualification type ID when you call the CreateQualificationType
     * operation. </p>
     */
    inline const Aws::String& GetQualificationTypeId() const{ return m_qualificationTypeId; }

    /**
     * <p> A unique identifier for the Qualification type. A Qualification type is
     * given a Qualification type ID when you call the CreateQualificationType
     * operation. </p>
     */
    inline bool QualificationTypeIdHasBeenSet() const { return m_qualificationTypeIdHasBeenSet; }

    /**
     * <p> A unique identifier for the Qualification type. A Qualification type is
     * given a Qualification type ID when you call the CreateQualificationType
     * operation. </p>
     */
    inline void SetQualificationTypeId(const Aws::String& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = value; }

    /**
     * <p> A unique identifier for the Qualification type. A Qualification type is
     * given a Qualification type ID when you call the CreateQualificationType
     * operation. </p>
     */
    inline void SetQualificationTypeId(Aws::String&& value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId = std::move(value); }

    /**
     * <p> A unique identifier for the Qualification type. A Qualification type is
     * given a Qualification type ID when you call the CreateQualificationType
     * operation. </p>
     */
    inline void SetQualificationTypeId(const char* value) { m_qualificationTypeIdHasBeenSet = true; m_qualificationTypeId.assign(value); }

    /**
     * <p> A unique identifier for the Qualification type. A Qualification type is
     * given a Qualification type ID when you call the CreateQualificationType
     * operation. </p>
     */
    inline QualificationType& WithQualificationTypeId(const Aws::String& value) { SetQualificationTypeId(value); return *this;}

    /**
     * <p> A unique identifier for the Qualification type. A Qualification type is
     * given a Qualification type ID when you call the CreateQualificationType
     * operation. </p>
     */
    inline QualificationType& WithQualificationTypeId(Aws::String&& value) { SetQualificationTypeId(std::move(value)); return *this;}

    /**
     * <p> A unique identifier for the Qualification type. A Qualification type is
     * given a Qualification type ID when you call the CreateQualificationType
     * operation. </p>
     */
    inline QualificationType& WithQualificationTypeId(const char* value) { SetQualificationTypeId(value); return *this;}


    /**
     * <p> The date and time the Qualification type was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The date and time the Qualification type was created. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p> The date and time the Qualification type was created. </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p> The date and time the Qualification type was created. </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p> The date and time the Qualification type was created. </p>
     */
    inline QualificationType& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The date and time the Qualification type was created. </p>
     */
    inline QualificationType& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> The name of the Qualification type. The type name is used to identify the
     * type, and to find the type using a Qualification type search. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the Qualification type. The type name is used to identify the
     * type, and to find the type using a Qualification type search. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the Qualification type. The type name is used to identify the
     * type, and to find the type using a Qualification type search. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the Qualification type. The type name is used to identify the
     * type, and to find the type using a Qualification type search. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the Qualification type. The type name is used to identify the
     * type, and to find the type using a Qualification type search. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the Qualification type. The type name is used to identify the
     * type, and to find the type using a Qualification type search. </p>
     */
    inline QualificationType& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the Qualification type. The type name is used to identify the
     * type, and to find the type using a Qualification type search. </p>
     */
    inline QualificationType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the Qualification type. The type name is used to identify the
     * type, and to find the type using a Qualification type search. </p>
     */
    inline QualificationType& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> A long description for the Qualification type. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A long description for the Qualification type. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A long description for the Qualification type. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A long description for the Qualification type. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A long description for the Qualification type. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A long description for the Qualification type. </p>
     */
    inline QualificationType& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A long description for the Qualification type. </p>
     */
    inline QualificationType& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A long description for the Qualification type. </p>
     */
    inline QualificationType& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> One or more words or phrases that describe theQualification type, separated
     * by commas. The Keywords make the type easier to find using a search. </p>
     */
    inline const Aws::String& GetKeywords() const{ return m_keywords; }

    /**
     * <p> One or more words or phrases that describe theQualification type, separated
     * by commas. The Keywords make the type easier to find using a search. </p>
     */
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }

    /**
     * <p> One or more words or phrases that describe theQualification type, separated
     * by commas. The Keywords make the type easier to find using a search. </p>
     */
    inline void SetKeywords(const Aws::String& value) { m_keywordsHasBeenSet = true; m_keywords = value; }

    /**
     * <p> One or more words or phrases that describe theQualification type, separated
     * by commas. The Keywords make the type easier to find using a search. </p>
     */
    inline void SetKeywords(Aws::String&& value) { m_keywordsHasBeenSet = true; m_keywords = std::move(value); }

    /**
     * <p> One or more words or phrases that describe theQualification type, separated
     * by commas. The Keywords make the type easier to find using a search. </p>
     */
    inline void SetKeywords(const char* value) { m_keywordsHasBeenSet = true; m_keywords.assign(value); }

    /**
     * <p> One or more words or phrases that describe theQualification type, separated
     * by commas. The Keywords make the type easier to find using a search. </p>
     */
    inline QualificationType& WithKeywords(const Aws::String& value) { SetKeywords(value); return *this;}

    /**
     * <p> One or more words or phrases that describe theQualification type, separated
     * by commas. The Keywords make the type easier to find using a search. </p>
     */
    inline QualificationType& WithKeywords(Aws::String&& value) { SetKeywords(std::move(value)); return *this;}

    /**
     * <p> One or more words or phrases that describe theQualification type, separated
     * by commas. The Keywords make the type easier to find using a search. </p>
     */
    inline QualificationType& WithKeywords(const char* value) { SetKeywords(value); return *this;}


    /**
     * <p> The status of the Qualification type. A Qualification type's status
     * determines if users can apply to receive a Qualification of this type, and if
     * HITs can be created with requirements based on this type. Valid values are
     * Active | Inactive. </p>
     */
    inline const QualificationTypeStatus& GetQualificationTypeStatus() const{ return m_qualificationTypeStatus; }

    /**
     * <p> The status of the Qualification type. A Qualification type's status
     * determines if users can apply to receive a Qualification of this type, and if
     * HITs can be created with requirements based on this type. Valid values are
     * Active | Inactive. </p>
     */
    inline bool QualificationTypeStatusHasBeenSet() const { return m_qualificationTypeStatusHasBeenSet; }

    /**
     * <p> The status of the Qualification type. A Qualification type's status
     * determines if users can apply to receive a Qualification of this type, and if
     * HITs can be created with requirements based on this type. Valid values are
     * Active | Inactive. </p>
     */
    inline void SetQualificationTypeStatus(const QualificationTypeStatus& value) { m_qualificationTypeStatusHasBeenSet = true; m_qualificationTypeStatus = value; }

    /**
     * <p> The status of the Qualification type. A Qualification type's status
     * determines if users can apply to receive a Qualification of this type, and if
     * HITs can be created with requirements based on this type. Valid values are
     * Active | Inactive. </p>
     */
    inline void SetQualificationTypeStatus(QualificationTypeStatus&& value) { m_qualificationTypeStatusHasBeenSet = true; m_qualificationTypeStatus = std::move(value); }

    /**
     * <p> The status of the Qualification type. A Qualification type's status
     * determines if users can apply to receive a Qualification of this type, and if
     * HITs can be created with requirements based on this type. Valid values are
     * Active | Inactive. </p>
     */
    inline QualificationType& WithQualificationTypeStatus(const QualificationTypeStatus& value) { SetQualificationTypeStatus(value); return *this;}

    /**
     * <p> The status of the Qualification type. A Qualification type's status
     * determines if users can apply to receive a Qualification of this type, and if
     * HITs can be created with requirements based on this type. Valid values are
     * Active | Inactive. </p>
     */
    inline QualificationType& WithQualificationTypeStatus(QualificationTypeStatus&& value) { SetQualificationTypeStatus(std::move(value)); return *this;}


    /**
     * <p> The questions for a Qualification test associated with this Qualification
     * type that a user can take to obtain a Qualification of this type. This parameter
     * must be specified if AnswerKey is present. A Qualification type cannot have both
     * a specified Test parameter and an AutoGranted value of true. </p>
     */
    inline const Aws::String& GetTest() const{ return m_test; }

    /**
     * <p> The questions for a Qualification test associated with this Qualification
     * type that a user can take to obtain a Qualification of this type. This parameter
     * must be specified if AnswerKey is present. A Qualification type cannot have both
     * a specified Test parameter and an AutoGranted value of true. </p>
     */
    inline bool TestHasBeenSet() const { return m_testHasBeenSet; }

    /**
     * <p> The questions for a Qualification test associated with this Qualification
     * type that a user can take to obtain a Qualification of this type. This parameter
     * must be specified if AnswerKey is present. A Qualification type cannot have both
     * a specified Test parameter and an AutoGranted value of true. </p>
     */
    inline void SetTest(const Aws::String& value) { m_testHasBeenSet = true; m_test = value; }

    /**
     * <p> The questions for a Qualification test associated with this Qualification
     * type that a user can take to obtain a Qualification of this type. This parameter
     * must be specified if AnswerKey is present. A Qualification type cannot have both
     * a specified Test parameter and an AutoGranted value of true. </p>
     */
    inline void SetTest(Aws::String&& value) { m_testHasBeenSet = true; m_test = std::move(value); }

    /**
     * <p> The questions for a Qualification test associated with this Qualification
     * type that a user can take to obtain a Qualification of this type. This parameter
     * must be specified if AnswerKey is present. A Qualification type cannot have both
     * a specified Test parameter and an AutoGranted value of true. </p>
     */
    inline void SetTest(const char* value) { m_testHasBeenSet = true; m_test.assign(value); }

    /**
     * <p> The questions for a Qualification test associated with this Qualification
     * type that a user can take to obtain a Qualification of this type. This parameter
     * must be specified if AnswerKey is present. A Qualification type cannot have both
     * a specified Test parameter and an AutoGranted value of true. </p>
     */
    inline QualificationType& WithTest(const Aws::String& value) { SetTest(value); return *this;}

    /**
     * <p> The questions for a Qualification test associated with this Qualification
     * type that a user can take to obtain a Qualification of this type. This parameter
     * must be specified if AnswerKey is present. A Qualification type cannot have both
     * a specified Test parameter and an AutoGranted value of true. </p>
     */
    inline QualificationType& WithTest(Aws::String&& value) { SetTest(std::move(value)); return *this;}

    /**
     * <p> The questions for a Qualification test associated with this Qualification
     * type that a user can take to obtain a Qualification of this type. This parameter
     * must be specified if AnswerKey is present. A Qualification type cannot have both
     * a specified Test parameter and an AutoGranted value of true. </p>
     */
    inline QualificationType& WithTest(const char* value) { SetTest(value); return *this;}


    /**
     * <p> The amount of time, in seconds, given to a Worker to complete the
     * Qualification test, beginning from the time the Worker requests the
     * Qualification. </p>
     */
    inline long long GetTestDurationInSeconds() const{ return m_testDurationInSeconds; }

    /**
     * <p> The amount of time, in seconds, given to a Worker to complete the
     * Qualification test, beginning from the time the Worker requests the
     * Qualification. </p>
     */
    inline bool TestDurationInSecondsHasBeenSet() const { return m_testDurationInSecondsHasBeenSet; }

    /**
     * <p> The amount of time, in seconds, given to a Worker to complete the
     * Qualification test, beginning from the time the Worker requests the
     * Qualification. </p>
     */
    inline void SetTestDurationInSeconds(long long value) { m_testDurationInSecondsHasBeenSet = true; m_testDurationInSeconds = value; }

    /**
     * <p> The amount of time, in seconds, given to a Worker to complete the
     * Qualification test, beginning from the time the Worker requests the
     * Qualification. </p>
     */
    inline QualificationType& WithTestDurationInSeconds(long long value) { SetTestDurationInSeconds(value); return *this;}


    /**
     * <p>The answers to the Qualification test specified in the Test parameter.</p>
     */
    inline const Aws::String& GetAnswerKey() const{ return m_answerKey; }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter.</p>
     */
    inline bool AnswerKeyHasBeenSet() const { return m_answerKeyHasBeenSet; }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter.</p>
     */
    inline void SetAnswerKey(const Aws::String& value) { m_answerKeyHasBeenSet = true; m_answerKey = value; }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter.</p>
     */
    inline void SetAnswerKey(Aws::String&& value) { m_answerKeyHasBeenSet = true; m_answerKey = std::move(value); }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter.</p>
     */
    inline void SetAnswerKey(const char* value) { m_answerKeyHasBeenSet = true; m_answerKey.assign(value); }

    /**
     * <p>The answers to the Qualification test specified in the Test parameter.</p>
     */
    inline QualificationType& WithAnswerKey(const Aws::String& value) { SetAnswerKey(value); return *this;}

    /**
     * <p>The answers to the Qualification test specified in the Test parameter.</p>
     */
    inline QualificationType& WithAnswerKey(Aws::String&& value) { SetAnswerKey(std::move(value)); return *this;}

    /**
     * <p>The answers to the Qualification test specified in the Test parameter.</p>
     */
    inline QualificationType& WithAnswerKey(const char* value) { SetAnswerKey(value); return *this;}


    /**
     * <p> The amount of time, in seconds, Workers must wait after taking the
     * Qualification test before they can take it again. Workers can take a
     * Qualification test multiple times if they were not granted the Qualification
     * from a previous attempt, or if the test offers a gradient score and they want a
     * better score. If not specified, retries are disabled and Workers can request a
     * Qualification only once. </p>
     */
    inline long long GetRetryDelayInSeconds() const{ return m_retryDelayInSeconds; }

    /**
     * <p> The amount of time, in seconds, Workers must wait after taking the
     * Qualification test before they can take it again. Workers can take a
     * Qualification test multiple times if they were not granted the Qualification
     * from a previous attempt, or if the test offers a gradient score and they want a
     * better score. If not specified, retries are disabled and Workers can request a
     * Qualification only once. </p>
     */
    inline bool RetryDelayInSecondsHasBeenSet() const { return m_retryDelayInSecondsHasBeenSet; }

    /**
     * <p> The amount of time, in seconds, Workers must wait after taking the
     * Qualification test before they can take it again. Workers can take a
     * Qualification test multiple times if they were not granted the Qualification
     * from a previous attempt, or if the test offers a gradient score and they want a
     * better score. If not specified, retries are disabled and Workers can request a
     * Qualification only once. </p>
     */
    inline void SetRetryDelayInSeconds(long long value) { m_retryDelayInSecondsHasBeenSet = true; m_retryDelayInSeconds = value; }

    /**
     * <p> The amount of time, in seconds, Workers must wait after taking the
     * Qualification test before they can take it again. Workers can take a
     * Qualification test multiple times if they were not granted the Qualification
     * from a previous attempt, or if the test offers a gradient score and they want a
     * better score. If not specified, retries are disabled and Workers can request a
     * Qualification only once. </p>
     */
    inline QualificationType& WithRetryDelayInSeconds(long long value) { SetRetryDelayInSeconds(value); return *this;}


    /**
     * <p> Specifies whether the Qualification type is one that a user can request
     * through the Amazon Mechanical Turk web site, such as by taking a Qualification
     * test. This value is False for Qualifications assigned automatically by the
     * system. Valid values are True | False. </p>
     */
    inline bool GetIsRequestable() const{ return m_isRequestable; }

    /**
     * <p> Specifies whether the Qualification type is one that a user can request
     * through the Amazon Mechanical Turk web site, such as by taking a Qualification
     * test. This value is False for Qualifications assigned automatically by the
     * system. Valid values are True | False. </p>
     */
    inline bool IsRequestableHasBeenSet() const { return m_isRequestableHasBeenSet; }

    /**
     * <p> Specifies whether the Qualification type is one that a user can request
     * through the Amazon Mechanical Turk web site, such as by taking a Qualification
     * test. This value is False for Qualifications assigned automatically by the
     * system. Valid values are True | False. </p>
     */
    inline void SetIsRequestable(bool value) { m_isRequestableHasBeenSet = true; m_isRequestable = value; }

    /**
     * <p> Specifies whether the Qualification type is one that a user can request
     * through the Amazon Mechanical Turk web site, such as by taking a Qualification
     * test. This value is False for Qualifications assigned automatically by the
     * system. Valid values are True | False. </p>
     */
    inline QualificationType& WithIsRequestable(bool value) { SetIsRequestable(value); return *this;}


    /**
     * <p>Specifies that requests for the Qualification type are granted immediately,
     * without prompting the Worker with a Qualification test. Valid values are True |
     * False.</p>
     */
    inline bool GetAutoGranted() const{ return m_autoGranted; }

    /**
     * <p>Specifies that requests for the Qualification type are granted immediately,
     * without prompting the Worker with a Qualification test. Valid values are True |
     * False.</p>
     */
    inline bool AutoGrantedHasBeenSet() const { return m_autoGrantedHasBeenSet; }

    /**
     * <p>Specifies that requests for the Qualification type are granted immediately,
     * without prompting the Worker with a Qualification test. Valid values are True |
     * False.</p>
     */
    inline void SetAutoGranted(bool value) { m_autoGrantedHasBeenSet = true; m_autoGranted = value; }

    /**
     * <p>Specifies that requests for the Qualification type are granted immediately,
     * without prompting the Worker with a Qualification test. Valid values are True |
     * False.</p>
     */
    inline QualificationType& WithAutoGranted(bool value) { SetAutoGranted(value); return *this;}


    /**
     * <p> The Qualification integer value to use for automatically granted
     * Qualifications, if AutoGranted is true. This is 1 by default. </p>
     */
    inline int GetAutoGrantedValue() const{ return m_autoGrantedValue; }

    /**
     * <p> The Qualification integer value to use for automatically granted
     * Qualifications, if AutoGranted is true. This is 1 by default. </p>
     */
    inline bool AutoGrantedValueHasBeenSet() const { return m_autoGrantedValueHasBeenSet; }

    /**
     * <p> The Qualification integer value to use for automatically granted
     * Qualifications, if AutoGranted is true. This is 1 by default. </p>
     */
    inline void SetAutoGrantedValue(int value) { m_autoGrantedValueHasBeenSet = true; m_autoGrantedValue = value; }

    /**
     * <p> The Qualification integer value to use for automatically granted
     * Qualifications, if AutoGranted is true. This is 1 by default. </p>
     */
    inline QualificationType& WithAutoGrantedValue(int value) { SetAutoGrantedValue(value); return *this;}

  private:

    Aws::String m_qualificationTypeId;
    bool m_qualificationTypeIdHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_keywords;
    bool m_keywordsHasBeenSet;

    QualificationTypeStatus m_qualificationTypeStatus;
    bool m_qualificationTypeStatusHasBeenSet;

    Aws::String m_test;
    bool m_testHasBeenSet;

    long long m_testDurationInSeconds;
    bool m_testDurationInSecondsHasBeenSet;

    Aws::String m_answerKey;
    bool m_answerKeyHasBeenSet;

    long long m_retryDelayInSeconds;
    bool m_retryDelayInSecondsHasBeenSet;

    bool m_isRequestable;
    bool m_isRequestableHasBeenSet;

    bool m_autoGranted;
    bool m_autoGrantedHasBeenSet;

    int m_autoGrantedValue;
    bool m_autoGrantedValueHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
