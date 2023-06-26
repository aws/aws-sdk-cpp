/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class GetGeofenceRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API GetGeofenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetGeofence"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The geofence collection storing the target geofence.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>The geofence collection storing the target geofence.</p>
     */
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }

    /**
     * <p>The geofence collection storing the target geofence.</p>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionNameHasBeenSet = true; m_collectionName = value; }

    /**
     * <p>The geofence collection storing the target geofence.</p>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::move(value); }

    /**
     * <p>The geofence collection storing the target geofence.</p>
     */
    inline void SetCollectionName(const char* value) { m_collectionNameHasBeenSet = true; m_collectionName.assign(value); }

    /**
     * <p>The geofence collection storing the target geofence.</p>
     */
    inline GetGeofenceRequest& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>The geofence collection storing the target geofence.</p>
     */
    inline GetGeofenceRequest& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>The geofence collection storing the target geofence.</p>
     */
    inline GetGeofenceRequest& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>The geofence you're retrieving details for.</p>
     */
    inline const Aws::String& GetGeofenceId() const{ return m_geofenceId; }

    /**
     * <p>The geofence you're retrieving details for.</p>
     */
    inline bool GeofenceIdHasBeenSet() const { return m_geofenceIdHasBeenSet; }

    /**
     * <p>The geofence you're retrieving details for.</p>
     */
    inline void SetGeofenceId(const Aws::String& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = value; }

    /**
     * <p>The geofence you're retrieving details for.</p>
     */
    inline void SetGeofenceId(Aws::String&& value) { m_geofenceIdHasBeenSet = true; m_geofenceId = std::move(value); }

    /**
     * <p>The geofence you're retrieving details for.</p>
     */
    inline void SetGeofenceId(const char* value) { m_geofenceIdHasBeenSet = true; m_geofenceId.assign(value); }

    /**
     * <p>The geofence you're retrieving details for.</p>
     */
    inline GetGeofenceRequest& WithGeofenceId(const Aws::String& value) { SetGeofenceId(value); return *this;}

    /**
     * <p>The geofence you're retrieving details for.</p>
     */
    inline GetGeofenceRequest& WithGeofenceId(Aws::String&& value) { SetGeofenceId(std::move(value)); return *this;}

    /**
     * <p>The geofence you're retrieving details for.</p>
     */
    inline GetGeofenceRequest& WithGeofenceId(const char* value) { SetGeofenceId(value); return *this;}

  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    Aws::String m_geofenceId;
    bool m_geofenceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
