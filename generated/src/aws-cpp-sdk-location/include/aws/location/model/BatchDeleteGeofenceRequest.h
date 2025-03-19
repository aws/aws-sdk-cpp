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
    AWS_LOCATIONSERVICE_API BatchDeleteGeofenceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteGeofence"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The geofence collection storing the geofences to be deleted.</p>
     */
    inline const Aws::String& GetCollectionName() const { return m_collectionName; }
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }
    template<typename CollectionNameT = Aws::String>
    void SetCollectionName(CollectionNameT&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::forward<CollectionNameT>(value); }
    template<typename CollectionNameT = Aws::String>
    BatchDeleteGeofenceRequest& WithCollectionName(CollectionNameT&& value) { SetCollectionName(std::forward<CollectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The batch of geofences to be deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGeofenceIds() const { return m_geofenceIds; }
    inline bool GeofenceIdsHasBeenSet() const { return m_geofenceIdsHasBeenSet; }
    template<typename GeofenceIdsT = Aws::Vector<Aws::String>>
    void SetGeofenceIds(GeofenceIdsT&& value) { m_geofenceIdsHasBeenSet = true; m_geofenceIds = std::forward<GeofenceIdsT>(value); }
    template<typename GeofenceIdsT = Aws::Vector<Aws::String>>
    BatchDeleteGeofenceRequest& WithGeofenceIds(GeofenceIdsT&& value) { SetGeofenceIds(std::forward<GeofenceIdsT>(value)); return *this;}
    template<typename GeofenceIdsT = Aws::String>
    BatchDeleteGeofenceRequest& AddGeofenceIds(GeofenceIdsT&& value) { m_geofenceIdsHasBeenSet = true; m_geofenceIds.emplace_back(std::forward<GeofenceIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_geofenceIds;
    bool m_geofenceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
