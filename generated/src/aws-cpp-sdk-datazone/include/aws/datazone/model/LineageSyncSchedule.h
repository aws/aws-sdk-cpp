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
    AWS_DATAZONE_API LineageSyncSchedule() = default;
    AWS_DATAZONE_API LineageSyncSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LineageSyncSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The lineage sync schedule.</p>
     */
    inline const Aws::String& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = Aws::String>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = Aws::String>
    LineageSyncSchedule& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
