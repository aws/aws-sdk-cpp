/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/MaintenanceDay.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for MaintenanceUpdateSettings<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MaintenanceUpdateSettings">AWS
   * API Reference</a></p>
   */
  class MaintenanceUpdateSettings
  {
  public:
    AWS_MEDIALIVE_API MaintenanceUpdateSettings();
    AWS_MEDIALIVE_API MaintenanceUpdateSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MaintenanceUpdateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Choose one day of the week for maintenance. The chosen day is used for all
     * future maintenance windows.
     */
    inline const MaintenanceDay& GetMaintenanceDay() const{ return m_maintenanceDay; }

    /**
     * Choose one day of the week for maintenance. The chosen day is used for all
     * future maintenance windows.
     */
    inline bool MaintenanceDayHasBeenSet() const { return m_maintenanceDayHasBeenSet; }

    /**
     * Choose one day of the week for maintenance. The chosen day is used for all
     * future maintenance windows.
     */
    inline void SetMaintenanceDay(const MaintenanceDay& value) { m_maintenanceDayHasBeenSet = true; m_maintenanceDay = value; }

    /**
     * Choose one day of the week for maintenance. The chosen day is used for all
     * future maintenance windows.
     */
    inline void SetMaintenanceDay(MaintenanceDay&& value) { m_maintenanceDayHasBeenSet = true; m_maintenanceDay = std::move(value); }

    /**
     * Choose one day of the week for maintenance. The chosen day is used for all
     * future maintenance windows.
     */
    inline MaintenanceUpdateSettings& WithMaintenanceDay(const MaintenanceDay& value) { SetMaintenanceDay(value); return *this;}

    /**
     * Choose one day of the week for maintenance. The chosen day is used for all
     * future maintenance windows.
     */
    inline MaintenanceUpdateSettings& WithMaintenanceDay(MaintenanceDay&& value) { SetMaintenanceDay(std::move(value)); return *this;}


    /**
     * Choose a specific date for maintenance to occur. The chosen date is used for the
     * next maintenance window only.
     */
    inline const Aws::String& GetMaintenanceScheduledDate() const{ return m_maintenanceScheduledDate; }

    /**
     * Choose a specific date for maintenance to occur. The chosen date is used for the
     * next maintenance window only.
     */
    inline bool MaintenanceScheduledDateHasBeenSet() const { return m_maintenanceScheduledDateHasBeenSet; }

    /**
     * Choose a specific date for maintenance to occur. The chosen date is used for the
     * next maintenance window only.
     */
    inline void SetMaintenanceScheduledDate(const Aws::String& value) { m_maintenanceScheduledDateHasBeenSet = true; m_maintenanceScheduledDate = value; }

    /**
     * Choose a specific date for maintenance to occur. The chosen date is used for the
     * next maintenance window only.
     */
    inline void SetMaintenanceScheduledDate(Aws::String&& value) { m_maintenanceScheduledDateHasBeenSet = true; m_maintenanceScheduledDate = std::move(value); }

    /**
     * Choose a specific date for maintenance to occur. The chosen date is used for the
     * next maintenance window only.
     */
    inline void SetMaintenanceScheduledDate(const char* value) { m_maintenanceScheduledDateHasBeenSet = true; m_maintenanceScheduledDate.assign(value); }

    /**
     * Choose a specific date for maintenance to occur. The chosen date is used for the
     * next maintenance window only.
     */
    inline MaintenanceUpdateSettings& WithMaintenanceScheduledDate(const Aws::String& value) { SetMaintenanceScheduledDate(value); return *this;}

    /**
     * Choose a specific date for maintenance to occur. The chosen date is used for the
     * next maintenance window only.
     */
    inline MaintenanceUpdateSettings& WithMaintenanceScheduledDate(Aws::String&& value) { SetMaintenanceScheduledDate(std::move(value)); return *this;}

    /**
     * Choose a specific date for maintenance to occur. The chosen date is used for the
     * next maintenance window only.
     */
    inline MaintenanceUpdateSettings& WithMaintenanceScheduledDate(const char* value) { SetMaintenanceScheduledDate(value); return *this;}


    /**
     * Choose the hour that maintenance will start. The chosen time is used for all
     * future maintenance windows.
     */
    inline const Aws::String& GetMaintenanceStartTime() const{ return m_maintenanceStartTime; }

    /**
     * Choose the hour that maintenance will start. The chosen time is used for all
     * future maintenance windows.
     */
    inline bool MaintenanceStartTimeHasBeenSet() const { return m_maintenanceStartTimeHasBeenSet; }

    /**
     * Choose the hour that maintenance will start. The chosen time is used for all
     * future maintenance windows.
     */
    inline void SetMaintenanceStartTime(const Aws::String& value) { m_maintenanceStartTimeHasBeenSet = true; m_maintenanceStartTime = value; }

    /**
     * Choose the hour that maintenance will start. The chosen time is used for all
     * future maintenance windows.
     */
    inline void SetMaintenanceStartTime(Aws::String&& value) { m_maintenanceStartTimeHasBeenSet = true; m_maintenanceStartTime = std::move(value); }

    /**
     * Choose the hour that maintenance will start. The chosen time is used for all
     * future maintenance windows.
     */
    inline void SetMaintenanceStartTime(const char* value) { m_maintenanceStartTimeHasBeenSet = true; m_maintenanceStartTime.assign(value); }

    /**
     * Choose the hour that maintenance will start. The chosen time is used for all
     * future maintenance windows.
     */
    inline MaintenanceUpdateSettings& WithMaintenanceStartTime(const Aws::String& value) { SetMaintenanceStartTime(value); return *this;}

    /**
     * Choose the hour that maintenance will start. The chosen time is used for all
     * future maintenance windows.
     */
    inline MaintenanceUpdateSettings& WithMaintenanceStartTime(Aws::String&& value) { SetMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * Choose the hour that maintenance will start. The chosen time is used for all
     * future maintenance windows.
     */
    inline MaintenanceUpdateSettings& WithMaintenanceStartTime(const char* value) { SetMaintenanceStartTime(value); return *this;}

  private:

    MaintenanceDay m_maintenanceDay;
    bool m_maintenanceDayHasBeenSet = false;

    Aws::String m_maintenanceScheduledDate;
    bool m_maintenanceScheduledDateHasBeenSet = false;

    Aws::String m_maintenanceStartTime;
    bool m_maintenanceStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
