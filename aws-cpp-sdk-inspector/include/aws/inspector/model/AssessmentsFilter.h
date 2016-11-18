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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/TimestampRange.h>
#include <aws/inspector/model/DurationRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>This data type is used as the request parameter in the <a>ListAssessments</a>
   * and <a>ListAttachedAssessments</a> actions.</p>
   */
  class AWS_INSPECTOR_API AssessmentsFilter
  {
  public:
    AssessmentsFilter();
    AssessmentsFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    AssessmentsFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>assessmentName</b> property of the <a>Assessment</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentNamePatterns() const{ return m_assessmentNamePatterns; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>assessmentName</b> property of the <a>Assessment</a> data type.</p>
     */
    inline void SetAssessmentNamePatterns(const Aws::Vector<Aws::String>& value) { m_assessmentNamePatternsHasBeenSet = true; m_assessmentNamePatterns = value; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>assessmentName</b> property of the <a>Assessment</a> data type.</p>
     */
    inline void SetAssessmentNamePatterns(Aws::Vector<Aws::String>&& value) { m_assessmentNamePatternsHasBeenSet = true; m_assessmentNamePatterns = value; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>assessmentName</b> property of the <a>Assessment</a> data type.</p>
     */
    inline AssessmentsFilter& WithAssessmentNamePatterns(const Aws::Vector<Aws::String>& value) { SetAssessmentNamePatterns(value); return *this;}

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>assessmentName</b> property of the <a>Assessment</a> data type.</p>
     */
    inline AssessmentsFilter& WithAssessmentNamePatterns(Aws::Vector<Aws::String>&& value) { SetAssessmentNamePatterns(value); return *this;}

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>assessmentName</b> property of the <a>Assessment</a> data type.</p>
     */
    inline AssessmentsFilter& AddAssessmentNamePatterns(const Aws::String& value) { m_assessmentNamePatternsHasBeenSet = true; m_assessmentNamePatterns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>assessmentName</b> property of the <a>Assessment</a> data type.</p>
     */
    inline AssessmentsFilter& AddAssessmentNamePatterns(Aws::String&& value) { m_assessmentNamePatternsHasBeenSet = true; m_assessmentNamePatterns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard specified for this data type property must match the value of the
     * <b>assessmentName</b> property of the <a>Assessment</a> data type.</p>
     */
    inline AssessmentsFilter& AddAssessmentNamePatterns(const char* value) { m_assessmentNamePatternsHasBeenSet = true; m_assessmentNamePatterns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>assessmentState</b>
     * property of the <a>Assessment</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentStates() const{ return m_assessmentStates; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>assessmentState</b>
     * property of the <a>Assessment</a> data type.</p>
     */
    inline void SetAssessmentStates(const Aws::Vector<Aws::String>& value) { m_assessmentStatesHasBeenSet = true; m_assessmentStates = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>assessmentState</b>
     * property of the <a>Assessment</a> data type.</p>
     */
    inline void SetAssessmentStates(Aws::Vector<Aws::String>&& value) { m_assessmentStatesHasBeenSet = true; m_assessmentStates = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>assessmentState</b>
     * property of the <a>Assessment</a> data type.</p>
     */
    inline AssessmentsFilter& WithAssessmentStates(const Aws::Vector<Aws::String>& value) { SetAssessmentStates(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>assessmentState</b>
     * property of the <a>Assessment</a> data type.</p>
     */
    inline AssessmentsFilter& WithAssessmentStates(Aws::Vector<Aws::String>&& value) { SetAssessmentStates(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>assessmentState</b>
     * property of the <a>Assessment</a> data type.</p>
     */
    inline AssessmentsFilter& AddAssessmentStates(const Aws::String& value) { m_assessmentStatesHasBeenSet = true; m_assessmentStates.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>assessmentState</b>
     * property of the <a>Assessment</a> data type.</p>
     */
    inline AssessmentsFilter& AddAssessmentStates(Aws::String&& value) { m_assessmentStatesHasBeenSet = true; m_assessmentStates.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>assessmentState</b>
     * property of the <a>Assessment</a> data type.</p>
     */
    inline AssessmentsFilter& AddAssessmentStates(const char* value) { m_assessmentStatesHasBeenSet = true; m_assessmentStates.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>dataCollected</b>
     * property of the <a>Assessment</a> data type.</p>
     */
    inline bool GetDataCollected() const{ return m_dataCollected; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>dataCollected</b>
     * property of the <a>Assessment</a> data type.</p>
     */
    inline void SetDataCollected(bool value) { m_dataCollectedHasBeenSet = true; m_dataCollected = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must be the exact match of the value of the <b>dataCollected</b>
     * property of the <a>Assessment</a> data type.</p>
     */
    inline AssessmentsFilter& WithDataCollected(bool value) { SetDataCollected(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>startTime</b> property of the <a>Assessment</a> data
     * type.</p>
     */
    inline const TimestampRange& GetStartTimeRange() const{ return m_startTimeRange; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>startTime</b> property of the <a>Assessment</a> data
     * type.</p>
     */
    inline void SetStartTimeRange(const TimestampRange& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>startTime</b> property of the <a>Assessment</a> data
     * type.</p>
     */
    inline void SetStartTimeRange(TimestampRange&& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>startTime</b> property of the <a>Assessment</a> data
     * type.</p>
     */
    inline AssessmentsFilter& WithStartTimeRange(const TimestampRange& value) { SetStartTimeRange(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>startTime</b> property of the <a>Assessment</a> data
     * type.</p>
     */
    inline AssessmentsFilter& WithStartTimeRange(TimestampRange&& value) { SetStartTimeRange(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>endTime</b> property of the <a>Assessment</a> data
     * type.</p>
     */
    inline const TimestampRange& GetEndTimeRange() const{ return m_endTimeRange; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>endTime</b> property of the <a>Assessment</a> data
     * type.</p>
     */
    inline void SetEndTimeRange(const TimestampRange& value) { m_endTimeRangeHasBeenSet = true; m_endTimeRange = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>endTime</b> property of the <a>Assessment</a> data
     * type.</p>
     */
    inline void SetEndTimeRange(TimestampRange&& value) { m_endTimeRangeHasBeenSet = true; m_endTimeRange = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>endTime</b> property of the <a>Assessment</a> data
     * type.</p>
     */
    inline AssessmentsFilter& WithEndTimeRange(const TimestampRange& value) { SetEndTimeRange(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>endTime</b> property of the <a>Assessment</a> data
     * type.</p>
     */
    inline AssessmentsFilter& WithEndTimeRange(TimestampRange&& value) { SetEndTimeRange(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the <a>Assessment</a>
     * data type.</p>
     */
    inline const DurationRange& GetDurationRange() const{ return m_durationRange; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the <a>Assessment</a>
     * data type.</p>
     */
    inline void SetDurationRange(const DurationRange& value) { m_durationRangeHasBeenSet = true; m_durationRange = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the <a>Assessment</a>
     * data type.</p>
     */
    inline void SetDurationRange(DurationRange&& value) { m_durationRangeHasBeenSet = true; m_durationRange = value; }

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the <a>Assessment</a>
     * data type.</p>
     */
    inline AssessmentsFilter& WithDurationRange(const DurationRange& value) { SetDurationRange(value); return *this;}

    /**
     * <p>For a record to match a filter, the value specified for this data type
     * property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the <a>Assessment</a>
     * data type.</p>
     */
    inline AssessmentsFilter& WithDurationRange(DurationRange&& value) { SetDurationRange(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_assessmentNamePatterns;
    bool m_assessmentNamePatternsHasBeenSet;
    Aws::Vector<Aws::String> m_assessmentStates;
    bool m_assessmentStatesHasBeenSet;
    bool m_dataCollected;
    bool m_dataCollectedHasBeenSet;
    TimestampRange m_startTimeRange;
    bool m_startTimeRangeHasBeenSet;
    TimestampRange m_endTimeRange;
    bool m_endTimeRangeHasBeenSet;
    DurationRange m_durationRange;
    bool m_durationRangeHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
