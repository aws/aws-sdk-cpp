/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/BatchPutGeofenceRequestEntry.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class BatchPutGeofenceRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API BatchPutGeofenceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchPutGeofence"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The geofence collection storing the geofences.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>The geofence collection storing the geofences.</p>
     */
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }

    /**
     * <p>The geofence collection storing the geofences.</p>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionNameHasBeenSet = true; m_collectionName = value; }

    /**
     * <p>The geofence collection storing the geofences.</p>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::move(value); }

    /**
     * <p>The geofence collection storing the geofences.</p>
     */
    inline void SetCollectionName(const char* value) { m_collectionNameHasBeenSet = true; m_collectionName.assign(value); }

    /**
     * <p>The geofence collection storing the geofences.</p>
     */
    inline BatchPutGeofenceRequest& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>The geofence collection storing the geofences.</p>
     */
    inline BatchPutGeofenceRequest& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>The geofence collection storing the geofences.</p>
     */
    inline BatchPutGeofenceRequest& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>The batch of geofences to be stored in a geofence collection.</p>
     */
    inline const Aws::Vector<BatchPutGeofenceRequestEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>The batch of geofences to be stored in a geofence collection.</p>
     */
    inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }

    /**
     * <p>The batch of geofences to be stored in a geofence collection.</p>
     */
    inline void SetEntries(const Aws::Vector<BatchPutGeofenceRequestEntry>& value) { m_entriesHasBeenSet = true; m_entries = value; }

    /**
     * <p>The batch of geofences to be stored in a geofence collection.</p>
     */
    inline void SetEntries(Aws::Vector<BatchPutGeofenceRequestEntry>&& value) { m_entriesHasBeenSet = true; m_entries = std::move(value); }

    /**
     * <p>The batch of geofences to be stored in a geofence collection.</p>
     */
    inline BatchPutGeofenceRequest& WithEntries(const Aws::Vector<BatchPutGeofenceRequestEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>The batch of geofences to be stored in a geofence collection.</p>
     */
    inline BatchPutGeofenceRequest& WithEntries(Aws::Vector<BatchPutGeofenceRequestEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>The batch of geofences to be stored in a geofence collection.</p>
     */
    inline BatchPutGeofenceRequest& AddEntries(const BatchPutGeofenceRequestEntry& value) { m_entriesHasBeenSet = true; m_entries.push_back(value); return *this; }

    /**
     * <p>The batch of geofences to be stored in a geofence collection.</p>
     */
    inline BatchPutGeofenceRequest& AddEntries(BatchPutGeofenceRequestEntry&& value) { m_entriesHasBeenSet = true; m_entries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    Aws::Vector<BatchPutGeofenceRequestEntry> m_entries;
    bool m_entriesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
