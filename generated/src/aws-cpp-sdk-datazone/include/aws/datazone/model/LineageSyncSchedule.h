/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The lineage sync schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/LineageSyncSchedule">AWS
   * API Reference</a></p>
   */
  class LineageSyncSchedule
  {
  public:
    AWS_DATAZONE_API LineageSyncSchedule();
    AWS_DATAZONE_API LineageSyncSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LineageSyncSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lineage sync schedule.</p>
     */
    inline const Aws::String& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const Aws::String& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(Aws::String&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline void SetSchedule(const char* value) { m_scheduleHasBeenSet = true; m_schedule.assign(value); }
    inline LineageSyncSchedule& WithSchedule(const Aws::String& value) { SetSchedule(value); return *this;}
    inline LineageSyncSchedule& WithSchedule(Aws::String&& value) { SetSchedule(std::move(value)); return *this;}
    inline LineageSyncSchedule& WithSchedule(const char* value) { SetSchedule(value); return *this;}
    ///@}
  private:

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
