/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/LineageSyncSchedule.h>
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
   * <p>The Amaon Redshift lineage sync configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RedshiftLineageSyncConfigurationOutput">AWS
   * API Reference</a></p>
   */
  class RedshiftLineageSyncConfigurationOutput
  {
  public:
    AWS_DATAZONE_API RedshiftLineageSyncConfigurationOutput();
    AWS_DATAZONE_API RedshiftLineageSyncConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftLineageSyncConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the Amaon Redshift lineage sync configuration is
     * enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline RedshiftLineageSyncConfigurationOutput& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lineage job ID of the Amaon Redshift lineage sync configuration.</p>
     */
    inline const Aws::String& GetLineageJobId() const{ return m_lineageJobId; }
    inline bool LineageJobIdHasBeenSet() const { return m_lineageJobIdHasBeenSet; }
    inline void SetLineageJobId(const Aws::String& value) { m_lineageJobIdHasBeenSet = true; m_lineageJobId = value; }
    inline void SetLineageJobId(Aws::String&& value) { m_lineageJobIdHasBeenSet = true; m_lineageJobId = std::move(value); }
    inline void SetLineageJobId(const char* value) { m_lineageJobIdHasBeenSet = true; m_lineageJobId.assign(value); }
    inline RedshiftLineageSyncConfigurationOutput& WithLineageJobId(const Aws::String& value) { SetLineageJobId(value); return *this;}
    inline RedshiftLineageSyncConfigurationOutput& WithLineageJobId(Aws::String&& value) { SetLineageJobId(std::move(value)); return *this;}
    inline RedshiftLineageSyncConfigurationOutput& WithLineageJobId(const char* value) { SetLineageJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule of teh Amaon Redshift lineage sync configuration.</p>
     */
    inline const LineageSyncSchedule& GetSchedule() const{ return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    inline void SetSchedule(const LineageSyncSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }
    inline void SetSchedule(LineageSyncSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }
    inline RedshiftLineageSyncConfigurationOutput& WithSchedule(const LineageSyncSchedule& value) { SetSchedule(value); return *this;}
    inline RedshiftLineageSyncConfigurationOutput& WithSchedule(LineageSyncSchedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_lineageJobId;
    bool m_lineageJobIdHasBeenSet = false;

    LineageSyncSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
