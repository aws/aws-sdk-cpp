/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/ScheduledSplitConfig.h>
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
   * <p>An array of structures that define the traffic allocation percentages among
   * the feature variations during each step of a launch. This also defines the start
   * time of each step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/ScheduledSplitsLaunchConfig">AWS
   * API Reference</a></p>
   */
  class ScheduledSplitsLaunchConfig
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ScheduledSplitsLaunchConfig();
    AWS_CLOUDWATCHEVIDENTLY_API ScheduledSplitsLaunchConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API ScheduledSplitsLaunchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch. This also defines the
     * start time of each step.</p>
     */
    inline const Aws::Vector<ScheduledSplitConfig>& GetSteps() const{ return m_steps; }

    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch. This also defines the
     * start time of each step.</p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch. This also defines the
     * start time of each step.</p>
     */
    inline void SetSteps(const Aws::Vector<ScheduledSplitConfig>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch. This also defines the
     * start time of each step.</p>
     */
    inline void SetSteps(Aws::Vector<ScheduledSplitConfig>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch. This also defines the
     * start time of each step.</p>
     */
    inline ScheduledSplitsLaunchConfig& WithSteps(const Aws::Vector<ScheduledSplitConfig>& value) { SetSteps(value); return *this;}

    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch. This also defines the
     * start time of each step.</p>
     */
    inline ScheduledSplitsLaunchConfig& WithSteps(Aws::Vector<ScheduledSplitConfig>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch. This also defines the
     * start time of each step.</p>
     */
    inline ScheduledSplitsLaunchConfig& AddSteps(const ScheduledSplitConfig& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>An array of structures that define the traffic allocation percentages among
     * the feature variations during each step of the launch. This also defines the
     * start time of each step.</p>
     */
    inline ScheduledSplitsLaunchConfig& AddSteps(ScheduledSplitConfig&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ScheduledSplitConfig> m_steps;
    bool m_stepsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
