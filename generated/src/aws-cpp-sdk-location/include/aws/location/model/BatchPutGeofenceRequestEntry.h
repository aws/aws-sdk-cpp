/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
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


    /**
     * <p>The identifier for the geofence to be stored in a given geofence
     * collection.</p>
     */
    inline const Aws::String& GetGeofenceId() const{ return m_geofenceId; }

    /**
     * <p>The identifier for the geofence to be stored in a given geofence
     * collection.</p>
     */
    inline bool GeofenceIdHasBeenSet() const { return m_geofenceIdHasBeenSet; }

    /**
     * <p>The identifier for the geofence to be stored in a given geofence
     * collection.</p>
     */
    inline void SetGeofenceId(const Aws::String& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = value; }

    /**
     * <p>The identifier for the geofence to be stored in a given geofence
     * collection.</p>
     */
    inline void SetGeofenceId(Aws::String&& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = std::move(value); }

    /**
     * <p>The identifier for the geofence to be stored in a given geofence
     * collection.</p>
     */
    inline void SetGeofenceId(const char* value) { m_geofenceIdHasBeenSet = true; m_geofenceId.assign(value); }

    /**
     * <p>The identifier for the geofence to be stored in a given geofence
     * collection.</p>
     */
    inline BatchPutGeofenceRequestEntry& WithGeofenceId(const Aws::String& value) { SetGeofenceId(value); return *this;}

    /**
     * <p>The identifier for the geofence to be stored in a given geofence
     * collection.</p>
     */
    inline BatchPutGeofenceRequestEntry& WithGeofenceId(Aws::String&& value) { SetGeofenceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the geofence to be stored in a given geofence
     * collection.</p>
     */
    inline BatchPutGeofenceRequestEntry& WithGeofenceId(const char* value) { SetGeofenceId(value); return *this;}


    /**
     * <p>Contains the details of the position of the geofence. Can be either a polygon
     * or a circle. Including both will return a validation error.</p>  <p>Each
     * <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> can have a maximum of 1,000 vertices.</p> 
     */
    inline const GeofenceGeometry& GetGeometry() const{ return m_geometry; }

    /**
     * <p>Contains the details of the position of the geofence. Can be either a polygon
     * or a circle. Including both will return a validation error.</p>  <p>Each
     * <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> can have a maximum of 1,000 vertices.</p> 
     */
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }

    /**
     * <p>Contains the details of the position of the geofence. Can be either a polygon
     * or a circle. Including both will return a validation error.</p>  <p>Each
     * <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> can have a maximum of 1,000 vertices.</p> 
     */
    inline void SetGeometry(const GeofenceGeometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }

    /**
     * <p>Contains the details of the position of the geofence. Can be either a polygon
     * or a circle. Including both will return a validation error.</p>  <p>Each
     * <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> can have a maximum of 1,000 vertices.</p> 
     */
    inline void SetGeometry(GeofenceGeometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }

    /**
     * <p>Contains the details of the position of the geofence. Can be either a polygon
     * or a circle. Including both will return a validation error.</p>  <p>Each
     * <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> can have a maximum of 1,000 vertices.</p> 
     */
    inline BatchPutGeofenceRequestEntry& WithGeometry(const GeofenceGeometry& value) { SetGeometry(value); return *this;}

    /**
     * <p>Contains the details of the position of the geofence. Can be either a polygon
     * or a circle. Including both will return a validation error.</p>  <p>Each
     * <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> can have a maximum of 1,000 vertices.</p> 
     */
    inline BatchPutGeofenceRequestEntry& WithGeometry(GeofenceGeometry&& value) { SetGeometry(std::move(value)); return *this;}

  private:

    Aws::String m_geofenceId;
    bool m_geofenceIdHasBeenSet = false;

    GeofenceGeometry m_geometry;
    bool m_geometryHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
