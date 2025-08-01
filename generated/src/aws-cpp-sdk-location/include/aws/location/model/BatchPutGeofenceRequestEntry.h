/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/GeofenceGeometry.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Contains geofence geometry details. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/BatchPutGeofenceRequestEntry">AWS
   * API Reference</a></p>
   */
  class BatchPutGeofenceRequestEntry
  {
  public:
    AWS_LOCATIONSERVICE_API BatchPutGeofenceRequestEntry() = default;
    AWS_LOCATIONSERVICE_API BatchPutGeofenceRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API BatchPutGeofenceRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the geofence to be stored in a given geofence
     * collection.</p>
     */
    inline const Aws::String& GetGeofenceId() const { return m_geofenceId; }
    inline bool GeofenceIdHasBeenSet() const { return m_geofenceIdHasBeenSet; }
    template<typename GeofenceIdT = Aws::String>
    void SetGeofenceId(GeofenceIdT&& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = std::forward<GeofenceIdT>(value); }
    template<typename GeofenceIdT = Aws::String>
    BatchPutGeofenceRequestEntry& WithGeofenceId(GeofenceIdT&& value) { SetGeofenceId(std::forward<GeofenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details to specify the position of the geofence. Can be a
     * circle, a polygon, or a multipolygon. <code>Polygon</code> and
     * <code>MultiPolygon</code> geometries can be defined using their respective
     * parameters, or encoded in Geobuf format using the <code>Geobuf</code> parameter.
     * Including multiple geometry types in the same request will return a validation
     * error.</p>  <p>The geofence <code>Polygon</code> and
     * <code>MultiPolygon</code> formats support a maximum of 1,000 total vertices. The
     * <code>Geobuf</code> format supports a maximum of 100,000 vertices.</p> 
     */
    inline const GeofenceGeometry& GetGeometry() const { return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    template<typename GeometryT = GeofenceGeometry>
    void SetGeometry(GeometryT&& value) { m_geometryHasBeenSet = true; m_geometry = std::forward<GeometryT>(value); }
    template<typename GeometryT = GeofenceGeometry>
    BatchPutGeofenceRequestEntry& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associates one of more properties with the geofence. A property is a
     * key-value pair stored with the geofence and added to any geofence event
     * triggered with that geofence.</p> <p>Format: <code>"key" : "value"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetGeofenceProperties() const { return m_geofenceProperties; }
    inline bool GeofencePropertiesHasBeenSet() const { return m_geofencePropertiesHasBeenSet; }
    template<typename GeofencePropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetGeofenceProperties(GeofencePropertiesT&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties = std::forward<GeofencePropertiesT>(value); }
    template<typename GeofencePropertiesT = Aws::Map<Aws::String, Aws::String>>
    BatchPutGeofenceRequestEntry& WithGeofenceProperties(GeofencePropertiesT&& value) { SetGeofenceProperties(std::forward<GeofencePropertiesT>(value)); return *this;}
    template<typename GeofencePropertiesKeyT = Aws::String, typename GeofencePropertiesValueT = Aws::String>
    BatchPutGeofenceRequestEntry& AddGeofenceProperties(GeofencePropertiesKeyT&& key, GeofencePropertiesValueT&& value) {
      m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::forward<GeofencePropertiesKeyT>(key), std::forward<GeofencePropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_geofenceId;
    bool m_geofenceIdHasBeenSet = false;

    GeofenceGeometry m_geometry;
    bool m_geometryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_geofenceProperties;
    bool m_geofencePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
