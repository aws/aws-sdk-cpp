/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_CLOUDWATCHEVIDENTLY_API ScheduledSplit
  {
  public:
    ScheduledSplit();
    ScheduledSplit(Aws::Utils::Json::JsonView jsonValue);
    ScheduledSplit& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The traffic allocation percentages among the feature variations during one
     * step of a launch. This is a set of key-value pairs. The keys are variation
     * names. The values represent the percentage of traffic to allocate to that
     * variation during this step.</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetGroupWeights() const{ return m_groupWeights; }

    /**
     * <p>The traffic allocation percentages among the feature variations during one
     * step of a launch. This is a set of key-value pairs. The keys are variation
     * names. The values represent the percentage of traffic to allocate to that
     * variation during this step.</p>
     */
    inline bool GroupWeightsHasBeenSet() const { return m_groupWeightsHasBeenSet; }

    /**
     * <p>The traffic allocation percentages among the feature variations during one
     * step of a launch. This is a set of key-value pairs. The keys are variation
     * names. The values represent the percentage of traffic to allocate to that
     * variation during this step.</p>
     */
    inline void SetGroupWeights(const Aws::Map<Aws::String, long long>& value) { m_groupWeightsHasBeenSet = true; m_groupWeights = value; }

    /**
     * <p>The traffic allocation percentages among the feature variations during one
     * step of a launch. This is a set of key-value pairs. The keys are variation
     * names. The values represent the percentage of traffic to allocate to that
     * variation during this step.</p>
     */
    inline void SetGroupWeights(Aws::Map<Aws::String, long long>&& value) { m_groupWeightsHasBeenSet = true; m_groupWeights = std::move(value); }

    /**
     * <p>The traffic allocation percentages among the feature variations during one
     * step of a launch. This is a set of key-value pairs. The keys are variation
     * names. The values represent the percentage of traffic to allocate to that
     * variation during this step.</p>
     */
    inline ScheduledSplit& WithGroupWeights(const Aws::Map<Aws::String, long long>& value) { SetGroupWeights(value); return *this;}

    /**
     * <p>The traffic allocation percentages among the feature variations during one
     * step of a launch. This is a set of key-value pairs. The keys are variation
     * names. The values represent the percentage of traffic to allocate to that
     * variation during this step.</p>
     */
    inline ScheduledSplit& WithGroupWeights(Aws::Map<Aws::String, long long>&& value) { SetGroupWeights(std::move(value)); return *this;}

    /**
     * <p>The traffic allocation percentages among the feature variations during one
     * step of a launch. This is a set of key-value pairs. The keys are variation
     * names. The values represent the percentage of traffic to allocate to that
     * variation during this step.</p>
     */
    inline ScheduledSplit& AddGroupWeights(const Aws::String& key, long long value) { m_groupWeightsHasBeenSet = true; m_groupWeights.emplace(key, value); return *this; }

    /**
     * <p>The traffic allocation percentages among the feature variations during one
     * step of a launch. This is a set of key-value pairs. The keys are variation
     * names. The values represent the percentage of traffic to allocate to that
     * variation during this step.</p>
     */
    inline ScheduledSplit& AddGroupWeights(Aws::String&& key, long long value) { m_groupWeightsHasBeenSet = true; m_groupWeights.emplace(std::move(key), value); return *this; }

    /**
     * <p>The traffic allocation percentages among the feature variations during one
     * step of a launch. This is a set of key-value pairs. The keys are variation
     * names. The values represent the percentage of traffic to allocate to that
     * variation during this step.</p>
     */
    inline ScheduledSplit& AddGroupWeights(const char* key, long long value) { m_groupWeightsHasBeenSet = true; m_groupWeights.emplace(key, value); return *this; }


    /**
     * <p>The date and time that this step of the launch starts.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time that this step of the launch starts.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time that this step of the launch starts.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time that this step of the launch starts.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time that this step of the launch starts.</p>
     */
    inline ScheduledSplit& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time that this step of the launch starts.</p>
     */
    inline ScheduledSplit& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::Map<Aws::String, long long> m_groupWeights;
    bool m_groupWeightsHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
