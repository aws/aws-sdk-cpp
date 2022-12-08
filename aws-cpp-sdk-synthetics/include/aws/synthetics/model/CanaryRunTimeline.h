/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>This structure contains the start and end times of a single canary
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryRunTimeline">AWS
   * API Reference</a></p>
   */
  class CanaryRunTimeline
  {
  public:
    AWS_SYNTHETICS_API CanaryRunTimeline();
    AWS_SYNTHETICS_API CanaryRunTimeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API CanaryRunTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time of the run.</p>
     */
    inline const Aws::Utils::DateTime& GetStarted() const{ return m_started; }

    /**
     * <p>The start time of the run.</p>
     */
    inline bool StartedHasBeenSet() const { return m_startedHasBeenSet; }

    /**
     * <p>The start time of the run.</p>
     */
    inline void SetStarted(const Aws::Utils::DateTime& value) { m_startedHasBeenSet = true; m_started = value; }

    /**
     * <p>The start time of the run.</p>
     */
    inline void SetStarted(Aws::Utils::DateTime&& value) { m_startedHasBeenSet = true; m_started = std::move(value); }

    /**
     * <p>The start time of the run.</p>
     */
    inline CanaryRunTimeline& WithStarted(const Aws::Utils::DateTime& value) { SetStarted(value); return *this;}

    /**
     * <p>The start time of the run.</p>
     */
    inline CanaryRunTimeline& WithStarted(Aws::Utils::DateTime&& value) { SetStarted(std::move(value)); return *this;}


    /**
     * <p>The end time of the run.</p>
     */
    inline const Aws::Utils::DateTime& GetCompleted() const{ return m_completed; }

    /**
     * <p>The end time of the run.</p>
     */
    inline bool CompletedHasBeenSet() const { return m_completedHasBeenSet; }

    /**
     * <p>The end time of the run.</p>
     */
    inline void SetCompleted(const Aws::Utils::DateTime& value) { m_completedHasBeenSet = true; m_completed = value; }

    /**
     * <p>The end time of the run.</p>
     */
    inline void SetCompleted(Aws::Utils::DateTime&& value) { m_completedHasBeenSet = true; m_completed = std::move(value); }

    /**
     * <p>The end time of the run.</p>
     */
    inline CanaryRunTimeline& WithCompleted(const Aws::Utils::DateTime& value) { SetCompleted(value); return *this;}

    /**
     * <p>The end time of the run.</p>
     */
    inline CanaryRunTimeline& WithCompleted(Aws::Utils::DateTime&& value) { SetCompleted(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_started;
    bool m_startedHasBeenSet = false;

    Aws::Utils::DateTime m_completed;
    bool m_completedHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
