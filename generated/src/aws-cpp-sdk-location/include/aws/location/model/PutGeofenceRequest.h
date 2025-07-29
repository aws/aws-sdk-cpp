/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/GeofenceGeometry.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class PutGeofenceRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API PutGeofenceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutGeofence"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The geofence collection to store the geofence in.</p>
     */
    inline const Aws::String& GetCollectionName() const { return m_collectionName; }
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }
    template<typename CollectionNameT = Aws::String>
    void SetCollectionName(CollectionNameT&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::forward<CollectionNameT>(value); }
    template<typename CollectionNameT = Aws::String>
    PutGeofenceRequest& WithCollectionName(CollectionNameT&& value) { SetCollectionName(std::forward<CollectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for the geofence. For example,
     * <code>ExampleGeofence-1</code>.</p>
     */
    inline const Aws::String& GetGeofenceId() const { return m_geofenceId; }
    inline bool GeofenceIdHasBeenSet() const { return m_geofenceIdHasBeenSet; }
    template<typename GeofenceIdT = Aws::String>
    void SetGeofenceId(GeofenceIdT&& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = std::forward<GeofenceIdT>(value); }
    template<typename GeofenceIdT = Aws::String>
    PutGeofenceRequest& WithGeofenceId(GeofenceIdT&& value) { SetGeofenceId(std::forward<GeofenceIdT>(value)); return *this;}
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
    PutGeofenceRequest& WithGeometry(GeometryT&& value) { SetGeometry(std::forward<GeometryT>(value)); return *this;}
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
    PutGeofenceRequest& WithGeofenceProperties(GeofencePropertiesT&& value) { SetGeofenceProperties(std::forward<GeofencePropertiesT>(value)); return *this;}
    template<typename GeofencePropertiesKeyT = Aws::String, typename GeofencePropertiesValueT = Aws::String>
    PutGeofenceRequest& AddGeofenceProperties(GeofencePropertiesKeyT&& key, GeofencePropertiesValueT&& value) {
      m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::forward<GeofencePropertiesKeyT>(key), std::forward<GeofencePropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

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
