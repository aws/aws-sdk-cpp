/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/GeofenceGeometry.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains a list of geofences stored in a given geofence
   * collection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListGeofenceResponseEntry">AWS
   * API Reference</a></p>
   */
  class ListGeofenceResponseEntry
  {
  public:
    AWS_LOCATIONSERVICE_API ListGeofenceResponseEntry();
    AWS_LOCATIONSERVICE_API ListGeofenceResponseEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API ListGeofenceResponseEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp for when the geofence was stored in a geofence collection in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp for when the geofence was stored in a geofence collection in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the geofence was stored in a geofence collection in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The timestamp for when the geofence was stored in a geofence collection in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The timestamp for when the geofence was stored in a geofence collection in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline ListGeofenceResponseEntry& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the geofence was stored in a geofence collection in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline ListGeofenceResponseEntry& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The geofence identifier.</p>
     */
    inline const Aws::String& GetGeofenceId() const{ return m_geofenceId; }

    /**
     * <p>The geofence identifier.</p>
     */
    inline bool GeofenceIdHasBeenSet() const { return m_geofenceIdHasBeenSet; }

    /**
     * <p>The geofence identifier.</p>
     */
    inline void SetGeofenceId(const Aws::String& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = value; }

    /**
     * <p>The geofence identifier.</p>
     */
    inline void SetGeofenceId(Aws::String&& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = std::move(value); }

    /**
     * <p>The geofence identifier.</p>
     */
    inline void SetGeofenceId(const char* value) { m_geofenceIdHasBeenSet = true; m_geofenceId.assign(value); }

    /**
     * <p>The geofence identifier.</p>
     */
    inline ListGeofenceResponseEntry& WithGeofenceId(const Aws::String& value) { SetGeofenceId(value); return *this;}

    /**
     * <p>The geofence identifier.</p>
     */
    inline ListGeofenceResponseEntry& WithGeofenceId(Aws::String&& value) { SetGeofenceId(std::move(value)); return *this;}

    /**
     * <p>The geofence identifier.</p>
     */
    inline ListGeofenceResponseEntry& WithGeofenceId(const char* value) { SetGeofenceId(value); return *this;}


    /**
     * <p>Contains the geofence geometry details describing a polygon or a circle.</p>
     */
    inline const GeofenceGeometry& GetGeometry() const{ return m_geometry; }

    /**
     * <p>Contains the geofence geometry details describing a polygon or a circle.</p>
     */
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }

    /**
     * <p>Contains the geofence geometry details describing a polygon or a circle.</p>
     */
    inline void SetGeometry(const GeofenceGeometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }

    /**
     * <p>Contains the geofence geometry details describing a polygon or a circle.</p>
     */
    inline void SetGeometry(GeofenceGeometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }

    /**
     * <p>Contains the geofence geometry details describing a polygon or a circle.</p>
     */
    inline ListGeofenceResponseEntry& WithGeometry(const GeofenceGeometry& value) { SetGeometry(value); return *this;}

    /**
     * <p>Contains the geofence geometry details describing a polygon or a circle.</p>
     */
    inline ListGeofenceResponseEntry& WithGeometry(GeofenceGeometry&& value) { SetGeometry(std::move(value)); return *this;}


    /**
     * <p>Identifies the state of the geofence. A geofence will hold one of the
     * following states:</p> <ul> <li> <p> <code>ACTIVE</code> — The geofence has been
     * indexed by the system. </p> </li> <li> <p> <code>PENDING</code> — The geofence
     * is being processed by the system.</p> </li> <li> <p> <code>FAILED</code> — The
     * geofence failed to be indexed by the system.</p> </li> <li> <p>
     * <code>DELETED</code> — The geofence has been deleted from the system index.</p>
     * </li> <li> <p> <code>DELETING</code> — The geofence is being deleted from the
     * system index.</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Identifies the state of the geofence. A geofence will hold one of the
     * following states:</p> <ul> <li> <p> <code>ACTIVE</code> — The geofence has been
     * indexed by the system. </p> </li> <li> <p> <code>PENDING</code> — The geofence
     * is being processed by the system.</p> </li> <li> <p> <code>FAILED</code> — The
     * geofence failed to be indexed by the system.</p> </li> <li> <p>
     * <code>DELETED</code> — The geofence has been deleted from the system index.</p>
     * </li> <li> <p> <code>DELETING</code> — The geofence is being deleted from the
     * system index.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Identifies the state of the geofence. A geofence will hold one of the
     * following states:</p> <ul> <li> <p> <code>ACTIVE</code> — The geofence has been
     * indexed by the system. </p> </li> <li> <p> <code>PENDING</code> — The geofence
     * is being processed by the system.</p> </li> <li> <p> <code>FAILED</code> — The
     * geofence failed to be indexed by the system.</p> </li> <li> <p>
     * <code>DELETED</code> — The geofence has been deleted from the system index.</p>
     * </li> <li> <p> <code>DELETING</code> — The geofence is being deleted from the
     * system index.</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Identifies the state of the geofence. A geofence will hold one of the
     * following states:</p> <ul> <li> <p> <code>ACTIVE</code> — The geofence has been
     * indexed by the system. </p> </li> <li> <p> <code>PENDING</code> — The geofence
     * is being processed by the system.</p> </li> <li> <p> <code>FAILED</code> — The
     * geofence failed to be indexed by the system.</p> </li> <li> <p>
     * <code>DELETED</code> — The geofence has been deleted from the system index.</p>
     * </li> <li> <p> <code>DELETING</code> — The geofence is being deleted from the
     * system index.</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Identifies the state of the geofence. A geofence will hold one of the
     * following states:</p> <ul> <li> <p> <code>ACTIVE</code> — The geofence has been
     * indexed by the system. </p> </li> <li> <p> <code>PENDING</code> — The geofence
     * is being processed by the system.</p> </li> <li> <p> <code>FAILED</code> — The
     * geofence failed to be indexed by the system.</p> </li> <li> <p>
     * <code>DELETED</code> — The geofence has been deleted from the system index.</p>
     * </li> <li> <p> <code>DELETING</code> — The geofence is being deleted from the
     * system index.</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Identifies the state of the geofence. A geofence will hold one of the
     * following states:</p> <ul> <li> <p> <code>ACTIVE</code> — The geofence has been
     * indexed by the system. </p> </li> <li> <p> <code>PENDING</code> — The geofence
     * is being processed by the system.</p> </li> <li> <p> <code>FAILED</code> — The
     * geofence failed to be indexed by the system.</p> </li> <li> <p>
     * <code>DELETED</code> — The geofence has been deleted from the system index.</p>
     * </li> <li> <p> <code>DELETING</code> — The geofence is being deleted from the
     * system index.</p> </li> </ul>
     */
    inline ListGeofenceResponseEntry& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Identifies the state of the geofence. A geofence will hold one of the
     * following states:</p> <ul> <li> <p> <code>ACTIVE</code> — The geofence has been
     * indexed by the system. </p> </li> <li> <p> <code>PENDING</code> — The geofence
     * is being processed by the system.</p> </li> <li> <p> <code>FAILED</code> — The
     * geofence failed to be indexed by the system.</p> </li> <li> <p>
     * <code>DELETED</code> — The geofence has been deleted from the system index.</p>
     * </li> <li> <p> <code>DELETING</code> — The geofence is being deleted from the
     * system index.</p> </li> </ul>
     */
    inline ListGeofenceResponseEntry& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Identifies the state of the geofence. A geofence will hold one of the
     * following states:</p> <ul> <li> <p> <code>ACTIVE</code> — The geofence has been
     * indexed by the system. </p> </li> <li> <p> <code>PENDING</code> — The geofence
     * is being processed by the system.</p> </li> <li> <p> <code>FAILED</code> — The
     * geofence failed to be indexed by the system.</p> </li> <li> <p>
     * <code>DELETED</code> — The geofence has been deleted from the system index.</p>
     * </li> <li> <p> <code>DELETING</code> — The geofence is being deleted from the
     * system index.</p> </li> </ul>
     */
    inline ListGeofenceResponseEntry& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The timestamp for when the geofence was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The timestamp for when the geofence was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The timestamp for when the geofence was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The timestamp for when the geofence was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The timestamp for when the geofence was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline ListGeofenceResponseEntry& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp for when the geofence was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline ListGeofenceResponseEntry& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_geofenceId;
    bool m_geofenceIdHasBeenSet = false;

    GeofenceGeometry m_geometry;
    bool m_geometryHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
