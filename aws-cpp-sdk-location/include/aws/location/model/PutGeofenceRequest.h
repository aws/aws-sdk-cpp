/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/GeofenceGeometry.h>
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


    /**
     * <p>The geofence collection to store the geofence in.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>The geofence collection to store the geofence in.</p>
     */
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }

    /**
     * <p>The geofence collection to store the geofence in.</p>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionNameHasBeenSet = true; m_collectionName = value; }

    /**
     * <p>The geofence collection to store the geofence in.</p>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::move(value); }

    /**
     * <p>The geofence collection to store the geofence in.</p>
     */
    inline void SetCollectionName(const char* value) { m_collectionNameHasBeenSet = true; m_collectionName.assign(value); }

    /**
     * <p>The geofence collection to store the geofence in.</p>
     */
    inline PutGeofenceRequest& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>The geofence collection to store the geofence in.</p>
     */
    inline PutGeofenceRequest& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>The geofence collection to store the geofence in.</p>
     */
    inline PutGeofenceRequest& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>An identifier for the geofence. For example,
     * <code>ExampleGeofence-1</code>.</p>
     */
    inline const Aws::String& GetGeofenceId() const{ return m_geofenceId; }

    /**
     * <p>An identifier for the geofence. For example,
     * <code>ExampleGeofence-1</code>.</p>
     */
    inline bool GeofenceIdHasBeenSet() const { return m_geofenceIdHasBeenSet; }

    /**
     * <p>An identifier for the geofence. For example,
     * <code>ExampleGeofence-1</code>.</p>
     */
    inline void SetGeofenceId(const Aws::String& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = value; }

    /**
     * <p>An identifier for the geofence. For example,
     * <code>ExampleGeofence-1</code>.</p>
     */
    inline void SetGeofenceId(Aws::String&& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = std::move(value); }

    /**
     * <p>An identifier for the geofence. For example,
     * <code>ExampleGeofence-1</code>.</p>
     */
    inline void SetGeofenceId(const char* value) { m_geofenceIdHasBeenSet = true; m_geofenceId.assign(value); }

    /**
     * <p>An identifier for the geofence. For example,
     * <code>ExampleGeofence-1</code>.</p>
     */
    inline PutGeofenceRequest& WithGeofenceId(const Aws::String& value) { SetGeofenceId(value); return *this;}

    /**
     * <p>An identifier for the geofence. For example,
     * <code>ExampleGeofence-1</code>.</p>
     */
    inline PutGeofenceRequest& WithGeofenceId(Aws::String&& value) { SetGeofenceId(std::move(value)); return *this;}

    /**
     * <p>An identifier for the geofence. For example,
     * <code>ExampleGeofence-1</code>.</p>
     */
    inline PutGeofenceRequest& WithGeofenceId(const char* value) { SetGeofenceId(value); return *this;}


    /**
     * <p>Contains the details to specify the position of the geofence. Can be either a
     * polygon or a circle. Including both will return a validation error.</p> 
     * <p>Each <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> can have a maximum of 1,000 vertices.</p> 
     */
    inline const GeofenceGeometry& GetGeometry() const{ return m_geometry; }

    /**
     * <p>Contains the details to specify the position of the geofence. Can be either a
     * polygon or a circle. Including both will return a validation error.</p> 
     * <p>Each <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> can have a maximum of 1,000 vertices.</p> 
     */
    inline bool GeometryHasBeenSet() const { return m_geometryHasBeenSet; }

    /**
     * <p>Contains the details to specify the position of the geofence. Can be either a
     * polygon or a circle. Including both will return a validation error.</p> 
     * <p>Each <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> can have a maximum of 1,000 vertices.</p> 
     */
    inline void SetGeometry(const GeofenceGeometry& value) { m_geometryHasBeenSet = true; m_geometry = value; }

    /**
     * <p>Contains the details to specify the position of the geofence. Can be either a
     * polygon or a circle. Including both will return a validation error.</p> 
     * <p>Each <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> can have a maximum of 1,000 vertices.</p> 
     */
    inline void SetGeometry(GeofenceGeometry&& value) { m_geometryHasBeenSet = true; m_geometry = std::move(value); }

    /**
     * <p>Contains the details to specify the position of the geofence. Can be either a
     * polygon or a circle. Including both will return a validation error.</p> 
     * <p>Each <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> can have a maximum of 1,000 vertices.</p> 
     */
    inline PutGeofenceRequest& WithGeometry(const GeofenceGeometry& value) { SetGeometry(value); return *this;}

    /**
     * <p>Contains the details to specify the position of the geofence. Can be either a
     * polygon or a circle. Including both will return a validation error.</p> 
     * <p>Each <a
     * href="https://docs.aws.amazon.com/location-geofences/latest/APIReference/API_GeofenceGeometry.html">
     * geofence polygon</a> can have a maximum of 1,000 vertices.</p> 
     */
    inline PutGeofenceRequest& WithGeometry(GeofenceGeometry&& value) { SetGeometry(std::move(value)); return *this;}

  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    Aws::String m_geofenceId;
    bool m_geofenceIdHasBeenSet = false;

    GeofenceGeometry m_geometry;
    bool m_geometryHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
