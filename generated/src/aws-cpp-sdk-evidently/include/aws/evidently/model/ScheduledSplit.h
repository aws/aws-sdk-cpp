/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/SegmentOverride.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>This structure defines the traffic allocation percentages among the feature
   * variations during one step of a launch, and the start time of that
   * step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ScheduledSplit">AWS
   * API Reference</a></p>
   */
  class ScheduledSplit
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ScheduledSplit() = default;
    AWS_CLOUDWATCHEVIDENTLY_API ScheduledSplit(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ScheduledSplit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The traffic allocation percentages among the feature variations during one
     * step of a launch. This is a set of key-value pairs. The keys are variation
     * names. The values represent the percentage of traffic to allocate to that
     * variation during this step.</p> <p>The values is expressed in thousandths of a
     * percent, so assigning a weight of 50000 assigns 50% of traffic to that
     * variation.</p> <p>If the sum of the weights for all the variations in a segment
     * override does not add up to 100,000, then the remaining traffic that matches
     * this segment is not assigned by this segment override, and instead moves on to
     * the next segment override or the default traffic split.</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetGroupWeights() const { return m_groupWeights; }
    inline bool GroupWeightsHasBeenSet() const { return m_groupWeightsHasBeenSet; }
    template<typename GroupWeightsT = Aws::Map<Aws::String, long long>>
    void SetGroupWeights(GroupWeightsT&& value) { m_groupWeightsHasBeenSet = true; m_groupWeights = std::forward<GroupWeightsT>(value); }
    template<typename GroupWeightsT = Aws::Map<Aws::String, long long>>
    ScheduledSplit& WithGroupWeights(GroupWeightsT&& value) { SetGroupWeights(std::forward<GroupWeightsT>(value)); return *this;}
    inline ScheduledSplit& AddGroupWeights(Aws::String key, long long value) {
      m_groupWeightsHasBeenSet = true; m_groupWeights.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Use this parameter to specify different traffic splits for one or more
     * audience <i>segments</i>. A segment is a portion of your audience that share one
     * or more characteristics. Examples could be Chrome browser users, users in
     * Europe, or Firefox browser users in Europe who also fit other criteria that your
     * application collects, such as age.</p> <p>This parameter is an array of up to
     * six segment override objects. Each of these objects specifies a segment that you
     * have already created, and defines the traffic split for that segment.</p>
     */
    inline const Aws::Vector<SegmentOverride>& GetSegmentOverrides() const { return m_segmentOverrides; }
    inline bool SegmentOverridesHasBeenSet() const { return m_segmentOverridesHasBeenSet; }
    template<typename SegmentOverridesT = Aws::Vector<SegmentOverride>>
    void SetSegmentOverrides(SegmentOverridesT&& value) { m_segmentOverridesHasBeenSet = true; m_segmentOverrides = std::forward<SegmentOverridesT>(value); }
    template<typename SegmentOverridesT = Aws::Vector<SegmentOverride>>
    ScheduledSplit& WithSegmentOverrides(SegmentOverridesT&& value) { SetSegmentOverrides(std::forward<SegmentOverridesT>(value)); return *this;}
    template<typename SegmentOverridesT = SegmentOverride>
    ScheduledSplit& AddSegmentOverrides(SegmentOverridesT&& value) { m_segmentOverridesHasBeenSet = true; m_segmentOverrides.emplace_back(std::forward<SegmentOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that this step of the launch starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ScheduledSplit& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, long long> m_groupWeights;
    bool m_groupWeightsHasBeenSet = false;

    Aws::Vector<SegmentOverride> m_segmentOverrides;
    bool m_segmentOverridesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
