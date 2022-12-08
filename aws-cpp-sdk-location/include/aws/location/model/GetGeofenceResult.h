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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LocationService
{
namespace Model
{
  class GetGeofenceResult
  {
  public:
    AWS_LOCATIONSERVICE_API GetGeofenceResult();
    AWS_LOCATIONSERVICE_API GetGeofenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API GetGeofenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp for when the geofence collection was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The timestamp for when the geofence collection was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTime = value; }

    /**
     * <p>The timestamp for when the geofence collection was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTime = std::move(value); }

    /**
     * <p>The timestamp for when the geofence collection was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline GetGeofenceResult& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The timestamp for when the geofence collection was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline GetGeofenceResult& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The geofence identifier.</p>
     */
    inline const Aws::String& GetGeofenceId() const{ return m_geofenceId; }

    /**
     * <p>The geofence identifier.</p>
     */
    inline void SetGeofenceId(const Aws::String& value) { m_geofenceId = value; }

    /**
     * <p>The geofence identifier.</p>
     */
    inline void SetGeofenceId(Aws::String&& value) { m_geofenceId = std::move(value); }

    /**
     * <p>The geofence identifier.</p>
     */
    inline void SetGeofenceId(const char* value) { m_geofenceId.assign(value); }

    /**
     * <p>The geofence identifier.</p>
     */
    inline GetGeofenceResult& WithGeofenceId(const Aws::String& value) { SetGeofenceId(value); return *this;}

    /**
     * <p>The geofence identifier.</p>
     */
    inline GetGeofenceResult& WithGeofenceId(Aws::String&& value) { SetGeofenceId(std::move(value)); return *this;}

    /**
     * <p>The geofence identifier.</p>
     */
    inline GetGeofenceResult& WithGeofenceId(const char* value) { SetGeofenceId(value); return *this;}


    /**
     * <p>Contains the geofence geometry details describing a polygon or a circle.</p>
     */
    inline const GeofenceGeometry& GetGeometry() const{ return m_geometry; }

    /**
     * <p>Contains the geofence geometry details describing a polygon or a circle.</p>
     */
    inline void SetGeometry(const GeofenceGeometry& value) { m_geometry = value; }

    /**
     * <p>Contains the geofence geometry details describing a polygon or a circle.</p>
     */
    inline void SetGeometry(GeofenceGeometry&& value) { m_geometry = std::move(value); }

    /**
     * <p>Contains the geofence geometry details describing a polygon or a circle.</p>
     */
    inline GetGeofenceResult& WithGeometry(const GeofenceGeometry& value) { SetGeometry(value); return *this;}

    /**
     * <p>Contains the geofence geometry details describing a polygon or a circle.</p>
     */
    inline GetGeofenceResult& WithGeometry(GeofenceGeometry&& value) { SetGeometry(std::move(value)); return *this;}


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
    inline void SetStatus(const Aws::String& value) { m_status = value; }

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
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

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
    inline void SetStatus(const char* value) { m_status.assign(value); }

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
    inline GetGeofenceResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

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
    inline GetGeofenceResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

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
    inline GetGeofenceResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The timestamp for when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The timestamp for when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>The timestamp for when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>The timestamp for when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline GetGeofenceResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The timestamp for when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline GetGeofenceResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createTime;

    Aws::String m_geofenceId;

    GeofenceGeometry m_geometry;

    Aws::String m_status;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
