/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/MaintenanceDay.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * Create maintenance setting for a flow<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddMaintenance">AWS
   * API Reference</a></p>
   */
  class AddMaintenance
  {
  public:
    AWS_MEDIACONNECT_API AddMaintenance();
    AWS_MEDIACONNECT_API AddMaintenance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddMaintenance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A day of a week when the maintenance will happen. Use
     * Monday/Tuesday/Wednesday/Thursday/Friday/Saturday/Sunday.
     */
    inline const MaintenanceDay& GetMaintenanceDay() const{ return m_maintenanceDay; }

    /**
     * A day of a week when the maintenance will happen. Use
     * Monday/Tuesday/Wednesday/Thursday/Friday/Saturday/Sunday.
     */
    inline bool MaintenanceDayHasBeenSet() const { return m_maintenanceDayHasBeenSet; }

    /**
     * A day of a week when the maintenance will happen. Use
     * Monday/Tuesday/Wednesday/Thursday/Friday/Saturday/Sunday.
     */
    inline void SetMaintenanceDay(const MaintenanceDay& value) { m_maintenanceDayHasBeenSet = true; m_maintenanceDay = value; }

    /**
     * A day of a week when the maintenance will happen. Use
     * Monday/Tuesday/Wednesday/Thursday/Friday/Saturday/Sunday.
     */
    inline void SetMaintenanceDay(MaintenanceDay&& value) { m_maintenanceDayHasBeenSet = true; m_maintenanceDay = std::move(value); }

    /**
     * A day of a week when the maintenance will happen. Use
     * Monday/Tuesday/Wednesday/Thursday/Friday/Saturday/Sunday.
     */
    inline AddMaintenance& WithMaintenanceDay(const MaintenanceDay& value) { SetMaintenanceDay(value); return *this;}

    /**
     * A day of a week when the maintenance will happen. Use
     * Monday/Tuesday/Wednesday/Thursday/Friday/Saturday/Sunday.
     */
    inline AddMaintenance& WithMaintenanceDay(MaintenanceDay&& value) { SetMaintenanceDay(std::move(value)); return *this;}


    /**
     * UTC time when the maintenance will happen. Use 24-hour HH:MM format. Minutes
     * must be 00. Example: 13:00. The default value is 02:00.
     */
    inline const Aws::String& GetMaintenanceStartHour() const{ return m_maintenanceStartHour; }

    /**
     * UTC time when the maintenance will happen. Use 24-hour HH:MM format. Minutes
     * must be 00. Example: 13:00. The default value is 02:00.
     */
    inline bool MaintenanceStartHourHasBeenSet() const { return m_maintenanceStartHourHasBeenSet; }

    /**
     * UTC time when the maintenance will happen. Use 24-hour HH:MM format. Minutes
     * must be 00. Example: 13:00. The default value is 02:00.
     */
    inline void SetMaintenanceStartHour(const Aws::String& value) { m_maintenanceStartHourHasBeenSet = true; m_maintenanceStartHour = value; }

    /**
     * UTC time when the maintenance will happen. Use 24-hour HH:MM format. Minutes
     * must be 00. Example: 13:00. The default value is 02:00.
     */
    inline void SetMaintenanceStartHour(Aws::String&& value) { m_maintenanceStartHourHasBeenSet = true; m_maintenanceStartHour = std::move(value); }

    /**
     * UTC time when the maintenance will happen. Use 24-hour HH:MM format. Minutes
     * must be 00. Example: 13:00. The default value is 02:00.
     */
    inline void SetMaintenanceStartHour(const char* value) { m_maintenanceStartHourHasBeenSet = true; m_maintenanceStartHour.assign(value); }

    /**
     * UTC time when the maintenance will happen. Use 24-hour HH:MM format. Minutes
     * must be 00. Example: 13:00. The default value is 02:00.
     */
    inline AddMaintenance& WithMaintenanceStartHour(const Aws::String& value) { SetMaintenanceStartHour(value); return *this;}

    /**
     * UTC time when the maintenance will happen. Use 24-hour HH:MM format. Minutes
     * must be 00. Example: 13:00. The default value is 02:00.
     */
    inline AddMaintenance& WithMaintenanceStartHour(Aws::String&& value) { SetMaintenanceStartHour(std::move(value)); return *this;}

    /**
     * UTC time when the maintenance will happen. Use 24-hour HH:MM format. Minutes
     * must be 00. Example: 13:00. The default value is 02:00.
     */
    inline AddMaintenance& WithMaintenanceStartHour(const char* value) { SetMaintenanceStartHour(value); return *this;}

  private:

    MaintenanceDay m_maintenanceDay;
    bool m_maintenanceDayHasBeenSet = false;

    Aws::String m_maintenanceStartHour;
    bool m_maintenanceStartHourHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
