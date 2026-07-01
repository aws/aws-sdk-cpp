/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/Timezone.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>Contains the current state of lineage sync for a Snowflake connection,
 * including the schedule, timezone, enabled state, and the ID of the associated
 * lineage job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/LineageSyncOutput">AWS
 * API Reference</a></p>
 */
class LineageSyncOutput {
 public:
  AWS_DATAZONE_API LineageSyncOutput() = default;
  AWS_DATAZONE_API LineageSyncOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API LineageSyncOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the lineage sync job.</p>
   */
  inline const Aws::String& GetLineageJobId() const { return m_lineageJobId; }
  inline bool LineageJobIdHasBeenSet() const { return m_lineageJobIdHasBeenSet; }
  template <typename LineageJobIdT = Aws::String>
  void SetLineageJobId(LineageJobIdT&& value) {
    m_lineageJobIdHasBeenSet = true;
    m_lineageJobId = std::forward<LineageJobIdT>(value);
  }
  template <typename LineageJobIdT = Aws::String>
  LineageSyncOutput& WithLineageJobId(LineageJobIdT&& value) {
    SetLineageJobId(std::forward<LineageJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timezone of the lineage sync schedule.</p>
   */
  inline Timezone GetTimezone() const { return m_timezone; }
  inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
  inline void SetTimezone(Timezone value) {
    m_timezoneHasBeenSet = true;
    m_timezone = value;
  }
  inline LineageSyncOutput& WithTimezone(Timezone value) {
    SetTimezone(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether lineage sync is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline LineageSyncOutput& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schedule of the lineage sync.</p>
   */
  inline const Aws::String& GetSchedule() const { return m_schedule; }
  inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
  template <typename ScheduleT = Aws::String>
  void SetSchedule(ScheduleT&& value) {
    m_scheduleHasBeenSet = true;
    m_schedule = std::forward<ScheduleT>(value);
  }
  template <typename ScheduleT = Aws::String>
  LineageSyncOutput& WithSchedule(ScheduleT&& value) {
    SetSchedule(std::forward<ScheduleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_lineageJobId;

  Timezone m_timezone{Timezone::NOT_SET};

  bool m_enabled{false};

  Aws::String m_schedule;
  bool m_lineageJobIdHasBeenSet = false;
  bool m_timezoneHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_scheduleHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
