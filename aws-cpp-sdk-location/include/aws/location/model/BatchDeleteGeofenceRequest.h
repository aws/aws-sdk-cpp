/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class BatchDeleteGeofenceRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API BatchDeleteGeofenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteGeofence"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The geofence collection storing the geofences to be deleted.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>The geofence collection storing the geofences to be deleted.</p>
     */
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }

    /**
     * <p>The geofence collection storing the geofences to be deleted.</p>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionNameHasBeenSet = true; m_collectionName = value; }

    /**
     * <p>The geofence collection storing the geofences to be deleted.</p>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::move(value); }

    /**
     * <p>The geofence collection storing the geofences to be deleted.</p>
     */
    inline void SetCollectionName(const char* value) { m_collectionNameHasBeenSet = true; m_collectionName.assign(value); }

    /**
     * <p>The geofence collection storing the geofences to be deleted.</p>
     */
    inline BatchDeleteGeofenceRequest& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>The geofence collection storing the geofences to be deleted.</p>
     */
    inline BatchDeleteGeofenceRequest& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>The geofence collection storing the geofences to be deleted.</p>
     */
    inline BatchDeleteGeofenceRequest& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>The batch of geofences to be deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGeofenceIds() const{ return m_geofenceIds; }

    /**
     * <p>The batch of geofences to be deleted.</p>
     */
    inline bool GeofenceIdsHasBeenSet() const { return m_geofenceIdsHasBeenSet; }

    /**
     * <p>The batch of geofences to be deleted.</p>
     */
    inline void SetGeofenceIds(const Aws::Vector<Aws::String>& value) { m_geofenceIdsHasBeenSet = true; m_geofenceIds = value; }

    /**
     * <p>The batch of geofences to be deleted.</p>
     */
    inline void SetGeofenceIds(Aws::Vector<Aws::String>&& value) { m_geofenceIdsHasBeenSet = true; m_geofenceIds = std::move(value); }

    /**
     * <p>The batch of geofences to be deleted.</p>
     */
    inline BatchDeleteGeofenceRequest& WithGeofenceIds(const Aws::Vector<Aws::String>& value) { SetGeofenceIds(value); return *this;}

    /**
     * <p>The batch of geofences to be deleted.</p>
     */
    inline BatchDeleteGeofenceRequest& WithGeofenceIds(Aws::Vector<Aws::String>&& value) { SetGeofenceIds(std::move(value)); return *this;}

    /**
     * <p>The batch of geofences to be deleted.</p>
     */
    inline BatchDeleteGeofenceRequest& AddGeofenceIds(const Aws::String& value) { m_geofenceIdsHasBeenSet = true; m_geofenceIds.push_back(value); return *this; }

    /**
     * <p>The batch of geofences to be deleted.</p>
     */
    inline BatchDeleteGeofenceRequest& AddGeofenceIds(Aws::String&& value) { m_geofenceIdsHasBeenSet = true; m_geofenceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The batch of geofences to be deleted.</p>
     */
    inline BatchDeleteGeofenceRequest& AddGeofenceIds(const char* value) { m_geofenceIdsHasBeenSet = true; m_geofenceIds.push_back(value); return *this; }

  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_geofenceIds;
    bool m_geofenceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
