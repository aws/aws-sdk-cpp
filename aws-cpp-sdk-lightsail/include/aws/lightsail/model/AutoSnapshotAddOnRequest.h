/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a request to enable or modify the automatic snapshot add-on for an
   * Amazon Lightsail instance or disk.</p> <p>When you modify the automatic snapshot
   * time for a resource, it is typically effective immediately except under the
   * following conditions:</p> <ul> <li> <p>If an automatic snapshot has been created
   * for the current day, and you change the snapshot time to a later time of day,
   * then the new snapshot time will be effective the following day. This ensures
   * that two snapshots are not created for the current day.</p> </li> <li> <p>If an
   * automatic snapshot has not yet been created for the current day, and you change
   * the snapshot time to an earlier time of day, then the new snapshot time will be
   * effective the following day and a snapshot is automatically created at the
   * previously set time for the current day. This ensures that a snapshot is created
   * for the current day.</p> </li> <li> <p>If an automatic snapshot has not yet been
   * created for the current day, and you change the snapshot time to a time that is
   * within 30 minutes from your current time, then the new snapshot time will be
   * effective the following day and a snapshot is automatically created at the
   * previously set time for the current day. This ensures that a snapshot is created
   * for the current day, because 30 minutes is required between your current time
   * and the new snapshot time that you specify.</p> </li> <li> <p>If an automatic
   * snapshot is scheduled to be created within 30 minutes from your current time and
   * you change the snapshot time, then the new snapshot time will be effective the
   * following day and a snapshot is automatically created at the previously set time
   * for the current day. This ensures that a snapshot is created for the current
   * day, because 30 minutes is required between your current time and the new
   * snapshot time that you specify.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AutoSnapshotAddOnRequest">AWS
   * API Reference</a></p>
   */
  class AutoSnapshotAddOnRequest
  {
  public:
    AWS_LIGHTSAIL_API AutoSnapshotAddOnRequest();
    AWS_LIGHTSAIL_API AutoSnapshotAddOnRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AutoSnapshotAddOnRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The daily time when an automatic snapshot will be created.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in <code>HH:00</code> format, and in an
     * hourly increment.</p> </li> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>The snapshot will be automatically created between the
     * time specified and up to 45 minutes after.</p> </li> </ul>
     */
    inline const Aws::String& GetSnapshotTimeOfDay() const{ return m_snapshotTimeOfDay; }

    /**
     * <p>The daily time when an automatic snapshot will be created.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in <code>HH:00</code> format, and in an
     * hourly increment.</p> </li> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>The snapshot will be automatically created between the
     * time specified and up to 45 minutes after.</p> </li> </ul>
     */
    inline bool SnapshotTimeOfDayHasBeenSet() const { return m_snapshotTimeOfDayHasBeenSet; }

    /**
     * <p>The daily time when an automatic snapshot will be created.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in <code>HH:00</code> format, and in an
     * hourly increment.</p> </li> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>The snapshot will be automatically created between the
     * time specified and up to 45 minutes after.</p> </li> </ul>
     */
    inline void SetSnapshotTimeOfDay(const Aws::String& value) { m_snapshotTimeOfDayHasBeenSet = true; m_snapshotTimeOfDay = value; }

    /**
     * <p>The daily time when an automatic snapshot will be created.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in <code>HH:00</code> format, and in an
     * hourly increment.</p> </li> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>The snapshot will be automatically created between the
     * time specified and up to 45 minutes after.</p> </li> </ul>
     */
    inline void SetSnapshotTimeOfDay(Aws::String&& value) { m_snapshotTimeOfDayHasBeenSet = true; m_snapshotTimeOfDay = std::move(value); }

    /**
     * <p>The daily time when an automatic snapshot will be created.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in <code>HH:00</code> format, and in an
     * hourly increment.</p> </li> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>The snapshot will be automatically created between the
     * time specified and up to 45 minutes after.</p> </li> </ul>
     */
    inline void SetSnapshotTimeOfDay(const char* value) { m_snapshotTimeOfDayHasBeenSet = true; m_snapshotTimeOfDay.assign(value); }

    /**
     * <p>The daily time when an automatic snapshot will be created.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in <code>HH:00</code> format, and in an
     * hourly increment.</p> </li> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>The snapshot will be automatically created between the
     * time specified and up to 45 minutes after.</p> </li> </ul>
     */
    inline AutoSnapshotAddOnRequest& WithSnapshotTimeOfDay(const Aws::String& value) { SetSnapshotTimeOfDay(value); return *this;}

    /**
     * <p>The daily time when an automatic snapshot will be created.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in <code>HH:00</code> format, and in an
     * hourly increment.</p> </li> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>The snapshot will be automatically created between the
     * time specified and up to 45 minutes after.</p> </li> </ul>
     */
    inline AutoSnapshotAddOnRequest& WithSnapshotTimeOfDay(Aws::String&& value) { SetSnapshotTimeOfDay(std::move(value)); return *this;}

    /**
     * <p>The daily time when an automatic snapshot will be created.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in <code>HH:00</code> format, and in an
     * hourly increment.</p> </li> <li> <p>Specified in Coordinated Universal Time
     * (UTC).</p> </li> <li> <p>The snapshot will be automatically created between the
     * time specified and up to 45 minutes after.</p> </li> </ul>
     */
    inline AutoSnapshotAddOnRequest& WithSnapshotTimeOfDay(const char* value) { SetSnapshotTimeOfDay(value); return *this;}

  private:

    Aws::String m_snapshotTimeOfDay;
    bool m_snapshotTimeOfDayHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
