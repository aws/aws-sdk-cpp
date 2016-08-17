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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/Attribute.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about an Inspector assessment.</p> <p>This data type is
   * used as the response element in the <a>DescribeAssessment</a> action.</p>
   */
  class AWS_INSPECTOR_API Assessment
  {
  public:
    Assessment();
    Assessment(const Aws::Utils::Json::JsonValue& jsonValue);
    Assessment& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The ARN of the assessment.</p>
     */
    inline const Aws::String& GetAssessmentArn() const{ return m_assessmentArn; }

    /**
     * <p>The ARN of the assessment.</p>
     */
    inline void SetAssessmentArn(const Aws::String& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN of the assessment.</p>
     */
    inline void SetAssessmentArn(Aws::String&& value) { m_assessmentArnHasBeenSet = true; m_assessmentArn = value; }

    /**
     * <p>The ARN of the assessment.</p>
     */
    inline void SetAssessmentArn(const char* value) { m_assessmentArnHasBeenSet = true; m_assessmentArn.assign(value); }

    /**
     * <p>The ARN of the assessment.</p>
     */
    inline Assessment& WithAssessmentArn(const Aws::String& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN of the assessment.</p>
     */
    inline Assessment& WithAssessmentArn(Aws::String&& value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The ARN of the assessment.</p>
     */
    inline Assessment& WithAssessmentArn(const char* value) { SetAssessmentArn(value); return *this;}

    /**
     * <p>The name of the assessment.</p>
     */
    inline const Aws::String& GetAssessmentName() const{ return m_assessmentName; }

    /**
     * <p>The name of the assessment.</p>
     */
    inline void SetAssessmentName(const Aws::String& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }

    /**
     * <p>The name of the assessment.</p>
     */
    inline void SetAssessmentName(Aws::String&& value) { m_assessmentNameHasBeenSet = true; m_assessmentName = value; }

    /**
     * <p>The name of the assessment.</p>
     */
    inline void SetAssessmentName(const char* value) { m_assessmentNameHasBeenSet = true; m_assessmentName.assign(value); }

    /**
     * <p>The name of the assessment.</p>
     */
    inline Assessment& WithAssessmentName(const Aws::String& value) { SetAssessmentName(value); return *this;}

    /**
     * <p>The name of the assessment.</p>
     */
    inline Assessment& WithAssessmentName(Aws::String&& value) { SetAssessmentName(value); return *this;}

    /**
     * <p>The name of the assessment.</p>
     */
    inline Assessment& WithAssessmentName(const char* value) { SetAssessmentName(value); return *this;}

    /**
     * <p>The ARN of the application that corresponds to this assessment.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The ARN of the application that corresponds to this assessment.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The ARN of the application that corresponds to this assessment.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The ARN of the application that corresponds to this assessment.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>The ARN of the application that corresponds to this assessment.</p>
     */
    inline Assessment& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The ARN of the application that corresponds to this assessment.</p>
     */
    inline Assessment& WithApplicationArn(Aws::String&& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The ARN of the application that corresponds to this assessment.</p>
     */
    inline Assessment& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The state of the assessment. Values can be set to <i>Created</i>,
     * <i>Collecting Data</i>, <i>Stopping</i>, and <i>Completed</i>.</p>
     */
    inline const Aws::String& GetAssessmentState() const{ return m_assessmentState; }

    /**
     * <p>The state of the assessment. Values can be set to <i>Created</i>,
     * <i>Collecting Data</i>, <i>Stopping</i>, and <i>Completed</i>.</p>
     */
    inline void SetAssessmentState(const Aws::String& value) { m_assessmentStateHasBeenSet = true; m_assessmentState = value; }

    /**
     * <p>The state of the assessment. Values can be set to <i>Created</i>,
     * <i>Collecting Data</i>, <i>Stopping</i>, and <i>Completed</i>.</p>
     */
    inline void SetAssessmentState(Aws::String&& value) { m_assessmentStateHasBeenSet = true; m_assessmentState = value; }

    /**
     * <p>The state of the assessment. Values can be set to <i>Created</i>,
     * <i>Collecting Data</i>, <i>Stopping</i>, and <i>Completed</i>.</p>
     */
    inline void SetAssessmentState(const char* value) { m_assessmentStateHasBeenSet = true; m_assessmentState.assign(value); }

    /**
     * <p>The state of the assessment. Values can be set to <i>Created</i>,
     * <i>Collecting Data</i>, <i>Stopping</i>, and <i>Completed</i>.</p>
     */
    inline Assessment& WithAssessmentState(const Aws::String& value) { SetAssessmentState(value); return *this;}

    /**
     * <p>The state of the assessment. Values can be set to <i>Created</i>,
     * <i>Collecting Data</i>, <i>Stopping</i>, and <i>Completed</i>.</p>
     */
    inline Assessment& WithAssessmentState(Aws::String&& value) { SetAssessmentState(value); return *this;}

    /**
     * <p>The state of the assessment. Values can be set to <i>Created</i>,
     * <i>Collecting Data</i>, <i>Stopping</i>, and <i>Completed</i>.</p>
     */
    inline Assessment& WithAssessmentState(const char* value) { SetAssessmentState(value); return *this;}

    /**
     * <p>This data type property is not currently used.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>This data type property is not currently used.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>This data type property is not currently used.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>This data type property is not currently used.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p>This data type property is not currently used.</p>
     */
    inline Assessment& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>This data type property is not currently used.</p>
     */
    inline Assessment& WithFailureMessage(Aws::String&& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>This data type property is not currently used.</p>
     */
    inline Assessment& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}

    /**
     * <p>Boolean value (true or false) specifying whether the data collection process
     * is completed.</p>
     */
    inline bool GetDataCollected() const{ return m_dataCollected; }

    /**
     * <p>Boolean value (true or false) specifying whether the data collection process
     * is completed.</p>
     */
    inline void SetDataCollected(bool value) { m_dataCollectedHasBeenSet = true; m_dataCollected = value; }

    /**
     * <p>Boolean value (true or false) specifying whether the data collection process
     * is completed.</p>
     */
    inline Assessment& WithDataCollected(bool value) { SetDataCollected(value); return *this;}

    /**
     * <p>The assessment start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The assessment start time.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The assessment start time.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The assessment start time.</p>
     */
    inline Assessment& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The assessment start time.</p>
     */
    inline Assessment& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>The assessment end time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The assessment end time.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The assessment end time.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The assessment end time.</p>
     */
    inline Assessment& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The assessment end time.</p>
     */
    inline Assessment& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(value); return *this;}

    /**
     * <p>The assessment duration in seconds. The default value is 3600 seconds (one
     * hour). The maximum value is 86400 seconds (one day).</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The assessment duration in seconds. The default value is 3600 seconds (one
     * hour). The maximum value is 86400 seconds (one day).</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>The assessment duration in seconds. The default value is 3600 seconds (one
     * hour). The maximum value is 86400 seconds (one day).</p>
     */
    inline Assessment& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributesForFindings() const{ return m_userAttributesForFindings; }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline void SetUserAttributesForFindings(const Aws::Vector<Attribute>& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = value; }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline void SetUserAttributesForFindings(Aws::Vector<Attribute>&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings = value; }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline Assessment& WithUserAttributesForFindings(const Aws::Vector<Attribute>& value) { SetUserAttributesForFindings(value); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline Assessment& WithUserAttributesForFindings(Aws::Vector<Attribute>&& value) { SetUserAttributesForFindings(value); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline Assessment& AddUserAttributesForFindings(const Attribute& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(value); return *this; }

    /**
     * <p>The user-defined attributes that are assigned to every generated finding.</p>
     */
    inline Assessment& AddUserAttributesForFindings(Attribute&& value) { m_userAttributesForFindingsHasBeenSet = true; m_userAttributesForFindings.push_back(value); return *this; }

  private:
    Aws::String m_assessmentArn;
    bool m_assessmentArnHasBeenSet;
    Aws::String m_assessmentName;
    bool m_assessmentNameHasBeenSet;
    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet;
    Aws::String m_assessmentState;
    bool m_assessmentStateHasBeenSet;
    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet;
    bool m_dataCollected;
    bool m_dataCollectedHasBeenSet;
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet;
    Aws::Vector<Attribute> m_userAttributesForFindings;
    bool m_userAttributesForFindingsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
