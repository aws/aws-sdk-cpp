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
  class AWS_SYNTHETICS_API CanaryRunTimeline
  {
  public:
    CanaryRunTimeline();
    CanaryRunTimeline(Aws::Utils::Json::JsonView jsonValue);
    CanaryRunTimeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_startedHasBeenSet;

    Aws::Utils::DateTime m_completed;
    bool m_completedHasBeenSet;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
