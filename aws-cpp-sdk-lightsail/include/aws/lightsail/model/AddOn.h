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
   * <p>Describes an add-on that is enabled for an Amazon Lightsail
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AddOn">AWS API
   * Reference</a></p>
   */
  class AddOn
  {
  public:
    AWS_LIGHTSAIL_API AddOn();
    AWS_LIGHTSAIL_API AddOn(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API AddOn& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the add-on.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the add-on.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the add-on.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the add-on.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the add-on.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the add-on.</p>
     */
    inline AddOn& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the add-on.</p>
     */
    inline AddOn& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the add-on.</p>
     */
    inline AddOn& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the add-on.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the add-on.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the add-on.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the add-on.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the add-on.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the add-on.</p>
     */
    inline AddOn& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the add-on.</p>
     */
    inline AddOn& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the add-on.</p>
     */
    inline AddOn& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The daily time when an automatic snapshot is created.</p> <p>The time shown
     * is in <code>HH:00</code> format, and in Coordinated Universal Time (UTC).</p>
     * <p>The snapshot is automatically created between the time shown and up to 45
     * minutes after.</p>
     */
    inline const Aws::String& GetSnapshotTimeOfDay() const{ return m_snapshotTimeOfDay; }

    /**
     * <p>The daily time when an automatic snapshot is created.</p> <p>The time shown
     * is in <code>HH:00</code> format, and in Coordinated Universal Time (UTC).</p>
     * <p>The snapshot is automatically created between the time shown and up to 45
     * minutes after.</p>
     */
    inline bool SnapshotTimeOfDayHasBeenSet() const { return m_snapshotTimeOfDayHasBeenSet; }

    /**
     * <p>The daily time when an automatic snapshot is created.</p> <p>The time shown
     * is in <code>HH:00</code> format, and in Coordinated Universal Time (UTC).</p>
     * <p>The snapshot is automatically created between the time shown and up to 45
     * minutes after.</p>
     */
    inline void SetSnapshotTimeOfDay(const Aws::String& value) { m_snapshotTimeOfDayHasBeenSet = true; m_snapshotTimeOfDay = value; }

    /**
     * <p>The daily time when an automatic snapshot is created.</p> <p>The time shown
     * is in <code>HH:00</code> format, and in Coordinated Universal Time (UTC).</p>
     * <p>The snapshot is automatically created between the time shown and up to 45
     * minutes after.</p>
     */
    inline void SetSnapshotTimeOfDay(Aws::String&& value) { m_snapshotTimeOfDayHasBeenSet = true; m_snapshotTimeOfDay = std::move(value); }

    /**
     * <p>The daily time when an automatic snapshot is created.</p> <p>The time shown
     * is in <code>HH:00</code> format, and in Coordinated Universal Time (UTC).</p>
     * <p>The snapshot is automatically created between the time shown and up to 45
     * minutes after.</p>
     */
    inline void SetSnapshotTimeOfDay(const char* value) { m_snapshotTimeOfDayHasBeenSet = true; m_snapshotTimeOfDay.assign(value); }

    /**
     * <p>The daily time when an automatic snapshot is created.</p> <p>The time shown
     * is in <code>HH:00</code> format, and in Coordinated Universal Time (UTC).</p>
     * <p>The snapshot is automatically created between the time shown and up to 45
     * minutes after.</p>
     */
    inline AddOn& WithSnapshotTimeOfDay(const Aws::String& value) { SetSnapshotTimeOfDay(value); return *this;}

    /**
     * <p>The daily time when an automatic snapshot is created.</p> <p>The time shown
     * is in <code>HH:00</code> format, and in Coordinated Universal Time (UTC).</p>
     * <p>The snapshot is automatically created between the time shown and up to 45
     * minutes after.</p>
     */
    inline AddOn& WithSnapshotTimeOfDay(Aws::String&& value) { SetSnapshotTimeOfDay(std::move(value)); return *this;}

    /**
     * <p>The daily time when an automatic snapshot is created.</p> <p>The time shown
     * is in <code>HH:00</code> format, and in Coordinated Universal Time (UTC).</p>
     * <p>The snapshot is automatically created between the time shown and up to 45
     * minutes after.</p>
     */
    inline AddOn& WithSnapshotTimeOfDay(const char* value) { SetSnapshotTimeOfDay(value); return *this;}


    /**
     * <p>The next daily time an automatic snapshot will be created.</p> <p>The time
     * shown is in <code>HH:00</code> format, and in Coordinated Universal Time
     * (UTC).</p> <p>The snapshot is automatically created between the time shown and
     * up to 45 minutes after.</p>
     */
    inline const Aws::String& GetNextSnapshotTimeOfDay() const{ return m_nextSnapshotTimeOfDay; }

    /**
     * <p>The next daily time an automatic snapshot will be created.</p> <p>The time
     * shown is in <code>HH:00</code> format, and in Coordinated Universal Time
     * (UTC).</p> <p>The snapshot is automatically created between the time shown and
     * up to 45 minutes after.</p>
     */
    inline bool NextSnapshotTimeOfDayHasBeenSet() const { return m_nextSnapshotTimeOfDayHasBeenSet; }

    /**
     * <p>The next daily time an automatic snapshot will be created.</p> <p>The time
     * shown is in <code>HH:00</code> format, and in Coordinated Universal Time
     * (UTC).</p> <p>The snapshot is automatically created between the time shown and
     * up to 45 minutes after.</p>
     */
    inline void SetNextSnapshotTimeOfDay(const Aws::String& value) { m_nextSnapshotTimeOfDayHasBeenSet = true; m_nextSnapshotTimeOfDay = value; }

    /**
     * <p>The next daily time an automatic snapshot will be created.</p> <p>The time
     * shown is in <code>HH:00</code> format, and in Coordinated Universal Time
     * (UTC).</p> <p>The snapshot is automatically created between the time shown and
     * up to 45 minutes after.</p>
     */
    inline void SetNextSnapshotTimeOfDay(Aws::String&& value) { m_nextSnapshotTimeOfDayHasBeenSet = true; m_nextSnapshotTimeOfDay = std::move(value); }

    /**
     * <p>The next daily time an automatic snapshot will be created.</p> <p>The time
     * shown is in <code>HH:00</code> format, and in Coordinated Universal Time
     * (UTC).</p> <p>The snapshot is automatically created between the time shown and
     * up to 45 minutes after.</p>
     */
    inline void SetNextSnapshotTimeOfDay(const char* value) { m_nextSnapshotTimeOfDayHasBeenSet = true; m_nextSnapshotTimeOfDay.assign(value); }

    /**
     * <p>The next daily time an automatic snapshot will be created.</p> <p>The time
     * shown is in <code>HH:00</code> format, and in Coordinated Universal Time
     * (UTC).</p> <p>The snapshot is automatically created between the time shown and
     * up to 45 minutes after.</p>
     */
    inline AddOn& WithNextSnapshotTimeOfDay(const Aws::String& value) { SetNextSnapshotTimeOfDay(value); return *this;}

    /**
     * <p>The next daily time an automatic snapshot will be created.</p> <p>The time
     * shown is in <code>HH:00</code> format, and in Coordinated Universal Time
     * (UTC).</p> <p>The snapshot is automatically created between the time shown and
     * up to 45 minutes after.</p>
     */
    inline AddOn& WithNextSnapshotTimeOfDay(Aws::String&& value) { SetNextSnapshotTimeOfDay(std::move(value)); return *this;}

    /**
     * <p>The next daily time an automatic snapshot will be created.</p> <p>The time
     * shown is in <code>HH:00</code> format, and in Coordinated Universal Time
     * (UTC).</p> <p>The snapshot is automatically created between the time shown and
     * up to 45 minutes after.</p>
     */
    inline AddOn& WithNextSnapshotTimeOfDay(const char* value) { SetNextSnapshotTimeOfDay(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_snapshotTimeOfDay;
    bool m_snapshotTimeOfDayHasBeenSet = false;

    Aws::String m_nextSnapshotTimeOfDay;
    bool m_nextSnapshotTimeOfDayHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
