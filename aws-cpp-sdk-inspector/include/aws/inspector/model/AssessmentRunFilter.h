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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/DurationRange.h>
#include <aws/inspector/model/TimestampRange.h>
#include <aws/inspector/model/AssessmentRunState.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Used as the request parameter in the <a>ListAssessmentRuns</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AssessmentRunFilter">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API AssessmentRunFilter
  {
  public:
    AssessmentRunFilter();
    AssessmentRunFilter(Aws::Utils::Json::JsonView jsonValue);
    AssessmentRunFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentRunName</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline const Aws::String& GetNamePattern() const{ return m_namePattern; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentRunName</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline bool NamePatternHasBeenSet() const { return m_namePatternHasBeenSet; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentRunName</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline void SetNamePattern(const Aws::String& value) { m_namePatternHasBeenSet = true; m_namePattern = value; }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentRunName</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline void SetNamePattern(Aws::String&& value) { m_namePatternHasBeenSet = true; m_namePattern = std::move(value); }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentRunName</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline void SetNamePattern(const char* value) { m_namePatternHasBeenSet = true; m_namePattern.assign(value); }

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentRunName</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& WithNamePattern(const Aws::String& value) { SetNamePattern(value); return *this;}

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentRunName</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& WithNamePattern(Aws::String&& value) { SetNamePattern(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentRunName</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& WithNamePattern(const char* value) { SetNamePattern(value); return *this;}


    /**
     * <p>For a record to match a filter, one of the values specified for this data
     * type property must be the exact match of the value of the
     * <b>assessmentRunState</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline const Aws::Vector<AssessmentRunState>& GetStates() const{ return m_states; }

    /**
     * <p>For a record to match a filter, one of the values specified for this data
     * type property must be the exact match of the value of the
     * <b>assessmentRunState</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>For a record to match a filter, one of the values specified for this data
     * type property must be the exact match of the value of the
     * <b>assessmentRunState</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline void SetStates(const Aws::Vector<AssessmentRunState>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>For a record to match a filter, one of the values specified for this data
     * type property must be the exact match of the value of the
     * <b>assessmentRunState</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline void SetStates(Aws::Vector<AssessmentRunState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>For a record to match a filter, one of the values specified for this data
     * type property must be the exact match of the value of the
     * <b>assessmentRunState</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& WithStates(const Aws::Vector<AssessmentRunState>& value) { SetStates(value); return *this;}

    /**
     * <p>For a record to match a filter, one of the values specified for this data
     * type property must be the exact match of the value of the
     * <b>assessmentRunState</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& WithStates(Aws::Vector<AssessmentRunState>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, one of the values specified for this data
     * type property must be the exact match of the value of the
     * <b>assessmentRunState</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& AddStates(const AssessmentRunState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, one of the values specified for this data
     * type property must be the exact match of the value of the
     * <b>assessmentRunState</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& AddStates(AssessmentRunState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }


    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline const DurationRange& GetDurationRange() const{ return m_durationRange; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline bool DurationRangeHasBeenSet() const { return m_durationRangeHasBeenSet; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline void SetDurationRange(const DurationRange& value) { m_durationRangeHasBeenSet = true; m_durationRange = value; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline void SetDurationRange(DurationRange&& value) { m_durationRangeHasBeenSet = true; m_durationRange = std::move(value); }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& WithDurationRange(const DurationRange& value) { SetDurationRange(value); return *this;}

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& WithDurationRange(DurationRange&& value) { SetDurationRange(std::move(value)); return *this;}


    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackages</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const{ return m_rulesPackageArns; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackages</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackages</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline void SetRulesPackageArns(const Aws::Vector<Aws::String>& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = value; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackages</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline void SetRulesPackageArns(Aws::Vector<Aws::String>&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::move(value); }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackages</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& WithRulesPackageArns(const Aws::Vector<Aws::String>& value) { SetRulesPackageArns(value); return *this;}

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackages</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& WithRulesPackageArns(Aws::Vector<Aws::String>&& value) { SetRulesPackageArns(std::move(value)); return *this;}

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackages</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& AddRulesPackageArns(const Aws::String& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackages</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& AddRulesPackageArns(Aws::String&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(std::move(value)); return *this; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackages</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& AddRulesPackageArns(const char* value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.push_back(value); return *this; }


    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>startTime</b> property of the <a>AssessmentRun</a> data
     * type.</p>
     */
    inline const TimestampRange& GetStartTimeRange() const{ return m_startTimeRange; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>startTime</b> property of the <a>AssessmentRun</a> data
     * type.</p>
     */
    inline bool StartTimeRangeHasBeenSet() const { return m_startTimeRangeHasBeenSet; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>startTime</b> property of the <a>AssessmentRun</a> data
     * type.</p>
     */
    inline void SetStartTimeRange(const TimestampRange& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = value; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>startTime</b> property of the <a>AssessmentRun</a> data
     * type.</p>
     */
    inline void SetStartTimeRange(TimestampRange&& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = std::move(value); }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>startTime</b> property of the <a>AssessmentRun</a> data
     * type.</p>
     */
    inline AssessmentRunFilter& WithStartTimeRange(const TimestampRange& value) { SetStartTimeRange(value); return *this;}

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>startTime</b> property of the <a>AssessmentRun</a> data
     * type.</p>
     */
    inline AssessmentRunFilter& WithStartTimeRange(TimestampRange&& value) { SetStartTimeRange(std::move(value)); return *this;}


    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>completedAt</b> property of the <a>AssessmentRun</a>
     * data type.</p>
     */
    inline const TimestampRange& GetCompletionTimeRange() const{ return m_completionTimeRange; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>completedAt</b> property of the <a>AssessmentRun</a>
     * data type.</p>
     */
    inline bool CompletionTimeRangeHasBeenSet() const { return m_completionTimeRangeHasBeenSet; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>completedAt</b> property of the <a>AssessmentRun</a>
     * data type.</p>
     */
    inline void SetCompletionTimeRange(const TimestampRange& value) { m_completionTimeRangeHasBeenSet = true; m_completionTimeRange = value; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>completedAt</b> property of the <a>AssessmentRun</a>
     * data type.</p>
     */
    inline void SetCompletionTimeRange(TimestampRange&& value) { m_completionTimeRangeHasBeenSet = true; m_completionTimeRange = std::move(value); }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>completedAt</b> property of the <a>AssessmentRun</a>
     * data type.</p>
     */
    inline AssessmentRunFilter& WithCompletionTimeRange(const TimestampRange& value) { SetCompletionTimeRange(value); return *this;}

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>completedAt</b> property of the <a>AssessmentRun</a>
     * data type.</p>
     */
    inline AssessmentRunFilter& WithCompletionTimeRange(TimestampRange&& value) { SetCompletionTimeRange(std::move(value)); return *this;}


    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must match the <b>stateChangedAt</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline const TimestampRange& GetStateChangeTimeRange() const{ return m_stateChangeTimeRange; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must match the <b>stateChangedAt</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline bool StateChangeTimeRangeHasBeenSet() const { return m_stateChangeTimeRangeHasBeenSet; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must match the <b>stateChangedAt</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline void SetStateChangeTimeRange(const TimestampRange& value) { m_stateChangeTimeRangeHasBeenSet = true; m_stateChangeTimeRange = value; }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must match the <b>stateChangedAt</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline void SetStateChangeTimeRange(TimestampRange&& value) { m_stateChangeTimeRangeHasBeenSet = true; m_stateChangeTimeRange = std::move(value); }

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must match the <b>stateChangedAt</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& WithStateChangeTimeRange(const TimestampRange& value) { SetStateChangeTimeRange(value); return *this;}

    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must match the <b>stateChangedAt</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline AssessmentRunFilter& WithStateChangeTimeRange(TimestampRange&& value) { SetStateChangeTimeRange(std::move(value)); return *this;}

  private:

    Aws::String m_namePattern;
    bool m_namePatternHasBeenSet;

    Aws::Vector<AssessmentRunState> m_states;
    bool m_statesHasBeenSet;

    DurationRange m_durationRange;
    bool m_durationRangeHasBeenSet;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet;

    TimestampRange m_startTimeRange;
    bool m_startTimeRangeHasBeenSet;

    TimestampRange m_completionTimeRange;
    bool m_completionTimeRangeHasBeenSet;

    TimestampRange m_stateChangeTimeRange;
    bool m_stateChangeTimeRangeHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
