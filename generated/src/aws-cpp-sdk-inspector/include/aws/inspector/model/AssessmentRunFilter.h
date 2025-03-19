/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AssessmentRunFilter
  {
  public:
    AWS_INSPECTOR_API AssessmentRunFilter() = default;
    AWS_INSPECTOR_API AssessmentRunFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssessmentRunFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For a record to match a filter, an explicit value or a string containing a
     * wildcard that is specified for this data type property must match the value of
     * the <b>assessmentRunName</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline const Aws::String& GetNamePattern() const { return m_namePattern; }
    inline bool NamePatternHasBeenSet() const { return m_namePatternHasBeenSet; }
    template<typename NamePatternT = Aws::String>
    void SetNamePattern(NamePatternT&& value) { m_namePatternHasBeenSet = true; m_namePattern = std::forward<NamePatternT>(value); }
    template<typename NamePatternT = Aws::String>
    AssessmentRunFilter& WithNamePattern(NamePatternT&& value) { SetNamePattern(std::forward<NamePatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, one of the values specified for this data
     * type property must be the exact match of the value of the
     * <b>assessmentRunState</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline const Aws::Vector<AssessmentRunState>& GetStates() const { return m_states; }
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
    template<typename StatesT = Aws::Vector<AssessmentRunState>>
    void SetStates(StatesT&& value) { m_statesHasBeenSet = true; m_states = std::forward<StatesT>(value); }
    template<typename StatesT = Aws::Vector<AssessmentRunState>>
    AssessmentRunFilter& WithStates(StatesT&& value) { SetStates(std::forward<StatesT>(value)); return *this;}
    inline AssessmentRunFilter& AddStates(AssessmentRunState value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>durationInSeconds</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline const DurationRange& GetDurationRange() const { return m_durationRange; }
    inline bool DurationRangeHasBeenSet() const { return m_durationRangeHasBeenSet; }
    template<typename DurationRangeT = DurationRange>
    void SetDurationRange(DurationRangeT&& value) { m_durationRangeHasBeenSet = true; m_durationRange = std::forward<DurationRangeT>(value); }
    template<typename DurationRangeT = DurationRange>
    AssessmentRunFilter& WithDurationRange(DurationRangeT&& value) { SetDurationRange(std::forward<DurationRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must be contained in the list of values of the
     * <b>rulesPackages</b> property of the <a>AssessmentRun</a> data type.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const { return m_rulesPackageArns; }
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    void SetRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::forward<RulesPackageArnsT>(value); }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    AssessmentRunFilter& WithRulesPackageArns(RulesPackageArnsT&& value) { SetRulesPackageArns(std::forward<RulesPackageArnsT>(value)); return *this;}
    template<typename RulesPackageArnsT = Aws::String>
    AssessmentRunFilter& AddRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.emplace_back(std::forward<RulesPackageArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>startTime</b> property of the <a>AssessmentRun</a> data
     * type.</p>
     */
    inline const TimestampRange& GetStartTimeRange() const { return m_startTimeRange; }
    inline bool StartTimeRangeHasBeenSet() const { return m_startTimeRangeHasBeenSet; }
    template<typename StartTimeRangeT = TimestampRange>
    void SetStartTimeRange(StartTimeRangeT&& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = std::forward<StartTimeRangeT>(value); }
    template<typename StartTimeRangeT = TimestampRange>
    AssessmentRunFilter& WithStartTimeRange(StartTimeRangeT&& value) { SetStartTimeRange(std::forward<StartTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must inclusively match any value between the specified minimum and
     * maximum values of the <b>completedAt</b> property of the <a>AssessmentRun</a>
     * data type.</p>
     */
    inline const TimestampRange& GetCompletionTimeRange() const { return m_completionTimeRange; }
    inline bool CompletionTimeRangeHasBeenSet() const { return m_completionTimeRangeHasBeenSet; }
    template<typename CompletionTimeRangeT = TimestampRange>
    void SetCompletionTimeRange(CompletionTimeRangeT&& value) { m_completionTimeRangeHasBeenSet = true; m_completionTimeRange = std::forward<CompletionTimeRangeT>(value); }
    template<typename CompletionTimeRangeT = TimestampRange>
    AssessmentRunFilter& WithCompletionTimeRange(CompletionTimeRangeT&& value) { SetCompletionTimeRange(std::forward<CompletionTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a record to match a filter, the value that is specified for this data
     * type property must match the <b>stateChangedAt</b> property of the
     * <a>AssessmentRun</a> data type.</p>
     */
    inline const TimestampRange& GetStateChangeTimeRange() const { return m_stateChangeTimeRange; }
    inline bool StateChangeTimeRangeHasBeenSet() const { return m_stateChangeTimeRangeHasBeenSet; }
    template<typename StateChangeTimeRangeT = TimestampRange>
    void SetStateChangeTimeRange(StateChangeTimeRangeT&& value) { m_stateChangeTimeRangeHasBeenSet = true; m_stateChangeTimeRange = std::forward<StateChangeTimeRangeT>(value); }
    template<typename StateChangeTimeRangeT = TimestampRange>
    AssessmentRunFilter& WithStateChangeTimeRange(StateChangeTimeRangeT&& value) { SetStateChangeTimeRange(std::forward<StateChangeTimeRangeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namePattern;
    bool m_namePatternHasBeenSet = false;

    Aws::Vector<AssessmentRunState> m_states;
    bool m_statesHasBeenSet = false;

    DurationRange m_durationRange;
    bool m_durationRangeHasBeenSet = false;

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet = false;

    TimestampRange m_startTimeRange;
    bool m_startTimeRangeHasBeenSet = false;

    TimestampRange m_completionTimeRange;
    bool m_completionTimeRangeHasBeenSet = false;

    TimestampRange m_stateChangeTimeRange;
    bool m_stateChangeTimeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
