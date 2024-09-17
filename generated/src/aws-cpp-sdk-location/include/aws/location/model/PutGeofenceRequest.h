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
    AWS_LOCATIONSERVICE_API PutGeofenceRequest();

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
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }
    inline void SetCollectionName(const Aws::String& value) { m_collectionNameHasBeenSet = true; m_collectionName = value; }
    inline void SetCollectionName(Aws::String&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::move(value); }
    inline void SetCollectionName(const char* value) { m_collectionNameHasBeenSet = true; m_collectionName.assign(value); }
    inline PutGeofenceRequest& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}
    inline PutGeofenceRequest& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}
    inline PutGeofenceRequest& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for the geofence. For example,
     * <code>ExampleGeofence-1</code>.</p>
     */
    inline const Aws::String& GetGeofenceId() const{ return m_geofenceId; }
    inline bool GeofenceIdHasBeenSet() const { return m_geofenceIdHasBeenSet; }
    inline void SetGeofenceId(const Aws::String& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = value; }
    inline void SetGeofenceId(Aws::String&& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = std::move(value); }
    inline void SetGeofenceId(const char* value) { m_geofenceIdHasBeenSet = true; m_geofenceId.assign(value); }
    inline PutGeofenceRequest& WithGeofenceId(const Aws::String& value) { SetGeofenceId(value); return *this;}
    inline PutGeofenceRequest& WithGeofenceId(Aws::String&& value) { SetGeofenceId(std::move(value)); return *this;}
    inline PutGeofenceRequest& WithGeofenceId(const char* value) { SetGeofenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details to specify the position of the geofence. Can be a
     * polygon, a circle or a polygon encoded in Geobuf format. Including multiple
     * selections will return a validation error.</p>  <p>The <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> format supports a maximum of 1,000 vertices. The <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">Geofence
     * Geobuf</a> format supports a maximum of 100,000 vertices.</p> 
     */
    inline const GeofenceGeometry& GetGeometry() const{ return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    inline void SetGeometry(const GeofenceGeometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }
    inline void SetGeometry(GeofenceGeometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }
    inline PutGeofenceRequest& WithGeometry(const GeofenceGeometry& value) { SetGeometry(value); return *this;}
    inline PutGeofenceRequest& WithGeometry(GeofenceGeometry&& value) { SetGeometry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associates one of more properties with the geofence. A property is a
     * key-value pair stored with the geofence and added to any geofence event
     * triggered with that geofence.</p> <p>Format: <code>"key" : "value"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetGeofenceProperties() const{ return m_geofenceProperties; }
    inline bool GeofencePropertiesHasBeenSet() const { return m_geofencePropertiesHasBeenSet; }
    inline void SetGeofenceProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties = value; }
    inline void SetGeofenceProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties = std::move(value); }
    inline PutGeofenceRequest& WithGeofenceProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetGeofenceProperties(value); return *this;}
    inline PutGeofenceRequest& WithGeofenceProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetGeofenceProperties(std::move(value)); return *this;}
    inline PutGeofenceRequest& AddGeofenceProperties(const Aws::String& key, const Aws::String& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(key, value); return *this; }
    inline PutGeofenceRequest& AddGeofenceProperties(Aws::String&& key, const Aws::String& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::move(key), value); return *this; }
    inline PutGeofenceRequest& AddGeofenceProperties(const Aws::String& key, Aws::String&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(key, std::move(value)); return *this; }
    inline PutGeofenceRequest& AddGeofenceProperties(Aws::String&& key, Aws::String&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline PutGeofenceRequest& AddGeofenceProperties(const char* key, Aws::String&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(key, std::move(value)); return *this; }
    inline PutGeofenceRequest& AddGeofenceProperties(Aws::String&& key, const char* value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::move(key), value); return *this; }
    inline PutGeofenceRequest& AddGeofenceProperties(const char* key, const char* value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(key, value); return *this; }
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
