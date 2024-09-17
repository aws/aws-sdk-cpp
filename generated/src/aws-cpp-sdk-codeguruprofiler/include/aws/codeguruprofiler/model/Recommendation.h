/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeguruprofiler/model/Pattern.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguruprofiler/model/Match.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>A potential improvement that was found from analyzing the profiling
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/Recommendation">AWS
   * API Reference</a></p>
   */
  class Recommendation
  {
  public:
    AWS_CODEGURUPROFILER_API Recommendation();
    AWS_CODEGURUPROFILER_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>How many different places in the profile graph triggered a match.</p>
     */
    inline int GetAllMatchesCount() const{ return m_allMatchesCount; }
    inline bool AllMatchesCountHasBeenSet() const { return m_allMatchesCountHasBeenSet; }
    inline void SetAllMatchesCount(int value) { m_allMatchesCountHasBeenSet = true; m_allMatchesCount = value; }
    inline Recommendation& WithAllMatchesCount(int value) { SetAllMatchesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How much of the total sample count is potentially affected.</p>
     */
    inline double GetAllMatchesSum() const{ return m_allMatchesSum; }
    inline bool AllMatchesSumHasBeenSet() const { return m_allMatchesSumHasBeenSet; }
    inline void SetAllMatchesSum(double value) { m_allMatchesSumHasBeenSet = true; m_allMatchesSum = value; }
    inline Recommendation& WithAllMatchesSum(double value) { SetAllMatchesSum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>End time of the profile that was used by this analysis. This is specified
     * using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline Recommendation& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline Recommendation& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern that analysis recognized in the profile to make this
     * recommendation.</p>
     */
    inline const Pattern& GetPattern() const{ return m_pattern; }
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
    inline void SetPattern(const Pattern& value) { m_patternHasBeenSet = true; m_pattern = value; }
    inline void SetPattern(Pattern&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }
    inline Recommendation& WithPattern(const Pattern& value) { SetPattern(value); return *this;}
    inline Recommendation& WithPattern(Pattern&& value) { SetPattern(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the profile that was used by this analysis. This is
     * specified using the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z
     * represents 1 millisecond past June 1, 2020 1:15:02 PM UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline Recommendation& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline Recommendation& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the matches with most impact. </p>
     */
    inline const Aws::Vector<Match>& GetTopMatches() const{ return m_topMatches; }
    inline bool TopMatchesHasBeenSet() const { return m_topMatchesHasBeenSet; }
    inline void SetTopMatches(const Aws::Vector<Match>& value) { m_topMatchesHasBeenSet = true; m_topMatches = value; }
    inline void SetTopMatches(Aws::Vector<Match>&& value) { m_topMatchesHasBeenSet = true; m_topMatches = std::move(value); }
    inline Recommendation& WithTopMatches(const Aws::Vector<Match>& value) { SetTopMatches(value); return *this;}
    inline Recommendation& WithTopMatches(Aws::Vector<Match>&& value) { SetTopMatches(std::move(value)); return *this;}
    inline Recommendation& AddTopMatches(const Match& value) { m_topMatchesHasBeenSet = true; m_topMatches.push_back(value); return *this; }
    inline Recommendation& AddTopMatches(Match&& value) { m_topMatchesHasBeenSet = true; m_topMatches.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_allMatchesCount;
    bool m_allMatchesCountHasBeenSet = false;

    double m_allMatchesSum;
    bool m_allMatchesSumHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Pattern m_pattern;
    bool m_patternHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Vector<Match> m_topMatches;
    bool m_topMatchesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
