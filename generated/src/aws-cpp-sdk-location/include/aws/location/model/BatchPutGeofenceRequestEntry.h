﻿/**
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
    AWS_LOCATIONSERVICE_API BatchPutGeofenceRequestEntry();
    AWS_LOCATIONSERVICE_API BatchPutGeofenceRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API BatchPutGeofenceRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the geofence to be stored in a given geofence
     * collection.</p>
     */
    inline const Aws::String& GetGeofenceId() const{ return m_geofenceId; }
    inline bool GeofenceIdHasBeenSet() const { return m_geofenceIdHasBeenSet; }
    inline void SetGeofenceId(const Aws::String& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = value; }
    inline void SetGeofenceId(Aws::String&& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = std::move(value); }
    inline void SetGeofenceId(const char* value) { m_geofenceIdHasBeenSet = true; m_geofenceId.assign(value); }
    inline BatchPutGeofenceRequestEntry& WithGeofenceId(const Aws::String& value) { SetGeofenceId(value); return *this;}
    inline BatchPutGeofenceRequestEntry& WithGeofenceId(Aws::String&& value) { SetGeofenceId(std::move(value)); return *this;}
    inline BatchPutGeofenceRequestEntry& WithGeofenceId(const char* value) { SetGeofenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details to specify the position of the geofence. Can be a
     * polygon, a circle or a polygon encoded in Geobuf format. Including multiple
     * selections will return a validation error.</p>  <p>The <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> format supports a maximum of 1,000 vertices. The <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">Geofence
     * geobuf</a> format supports a maximum of 100,000 vertices.</p> 
     */
    inline const GeofenceGeometry& GetGeometry() const{ return m_geometry; }
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }
    inline void SetGeometry(const GeofenceGeometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }
    inline void SetGeometry(GeofenceGeometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }
    inline BatchPutGeofenceRequestEntry& WithGeometry(const GeofenceGeometry& value) { SetGeometry(value); return *this;}
    inline BatchPutGeofenceRequestEntry& WithGeometry(GeofenceGeometry&& value) { SetGeometry(std::move(value)); return *this;}
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
    inline BatchPutGeofenceRequestEntry& WithGeofenceProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetGeofenceProperties(value); return *this;}
    inline BatchPutGeofenceRequestEntry& WithGeofenceProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetGeofenceProperties(std::move(value)); return *this;}
    inline BatchPutGeofenceRequestEntry& AddGeofenceProperties(const Aws::String& key, const Aws::String& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(key, value); return *this; }
    inline BatchPutGeofenceRequestEntry& AddGeofenceProperties(Aws::String&& key, const Aws::String& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::move(key), value); return *this; }
    inline BatchPutGeofenceRequestEntry& AddGeofenceProperties(const Aws::String& key, Aws::String&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(key, std::move(value)); return *this; }
    inline BatchPutGeofenceRequestEntry& AddGeofenceProperties(Aws::String&& key, Aws::String&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline BatchPutGeofenceRequestEntry& AddGeofenceProperties(const char* key, Aws::String&& value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(key, std::move(value)); return *this; }
    inline BatchPutGeofenceRequestEntry& AddGeofenceProperties(Aws::String&& key, const char* value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(std::move(key), value); return *this; }
    inline BatchPutGeofenceRequestEntry& AddGeofenceProperties(const char* key, const char* value) { m_geofencePropertiesHasBeenSet = true; m_geofenceProperties.emplace(key, value); return *this; }
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
