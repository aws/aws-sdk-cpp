/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/GeofenceGeometry.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_LOCATIONSERVICE_API GetGeofenceResult() = default;
    AWS_LOCATIONSERVICE_API GetGeofenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API GetGeofenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The geofence identifier.</p>
     */
    inline const Aws::String& GetGeofenceId() const { return m_geofenceId; }
    template<typename GeofenceIdT = Aws::String>
    void SetGeofenceId(GeofenceIdT&& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = std::forward<GeofenceIdT>(value); }
    template<typename GeofenceIdT = Aws::String>
    GetGeofenceResult& WithGeofenceId(GeofenceIdT&& value) { SetGeofenceId(std::forward<GeofenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the geofence geometry details describing the position of the
     * geofence. Can be a circle, a polygon, or a multipolygon.</p>
     */
    inline const GeofenceGeometry& GetGeometry() const { return m_geometry; }
    template<typename GeometryT = GeofenceGeometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = GeofenceGeometry>
    GetGeofenceResult& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    GetGeofenceResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the geofence collection was created in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    GetGeofenceResult& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the geofence collection was last updated in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code> </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetGeofenceResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User defined properties of the geofence. A property is a key-value pair
     * stored with the geofence and added to any geofence event triggered with that
     * geofence.</p> <p>Format: <code>"key" : "value"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetGeofenceProperties() const { return m_geofenceProperties; }
    template<typename GeofencePropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetGeofenceProperties(GeofencePropertiesT&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties = std::forward<GeofencePropertiesT>(value); }
    template<typename GeofencePropertiesT = Aws::Map<Aws::String, Aws::String>>
    GetGeofenceResult& WithGeofenceProperties(GeofencePropertiesT&& value) { SetGeofenceProperties(std::forward<GeofencePropertiesT>(value)); return *this;}
    template<typename GeofencePropertiesKeyT = Aws::String, typename GeofencePropertiesValueT = Aws::String>
    GetGeofenceResult& AddGeofenceProperties(GeofencePropertiesKeyT&& key, GeofencePropertiesValueT&& value) {
      m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::forward<GeofencePropertiesKeyT>(key), std::forward<GeofencePropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGeofenceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_geofenceId;
    bool m_geofenceIdHasBeenSet = false;

    GeofenceGeometry m_geometry;
    bool m_geometryHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_geofenceProperties;
    bool m_geofencePropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
