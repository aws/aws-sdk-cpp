/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Displays the next seven maintenance window occurrences and their start
   * times.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ScheduledJobRollout">AWS
   * API Reference</a></p>
   */
  class ScheduledJobRollout
  {
  public:
    AWS_IOT_API ScheduledJobRollout();
    AWS_IOT_API ScheduledJobRollout(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ScheduledJobRollout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Displays the start times of the next seven maintenance window
     * occurrences.</p>
     */
    inline const Aws::String& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Displays the start times of the next seven maintenance window
     * occurrences.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Displays the start times of the next seven maintenance window
     * occurrences.</p>
     */
    inline void SetStartTime(const Aws::String& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Displays the start times of the next seven maintenance window
     * occurrences.</p>
     */
    inline void SetStartTime(Aws::String&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Displays the start times of the next seven maintenance window
     * occurrences.</p>
     */
    inline void SetStartTime(const char* value) { m_startTimeHasBeenSet = true; m_startTime.assign(value); }

    /**
     * <p>Displays the start times of the next seven maintenance window
     * occurrences.</p>
     */
    inline ScheduledJobRollout& WithStartTime(const Aws::String& value) { SetStartTime(value); return *this;}

    /**
     * <p>Displays the start times of the next seven maintenance window
     * occurrences.</p>
     */
    inline ScheduledJobRollout& WithStartTime(Aws::String&& value) { SetStartTime(std::move(value)); return *this;}

    /**
     * <p>Displays the start times of the next seven maintenance window
     * occurrences.</p>
     */
    inline ScheduledJobRollout& WithStartTime(const char* value) { SetStartTime(value); return *this;}

  private:

    Aws::String m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
