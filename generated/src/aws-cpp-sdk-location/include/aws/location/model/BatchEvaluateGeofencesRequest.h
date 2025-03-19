/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/DevicePositionUpdate.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class BatchEvaluateGeofencesRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API BatchEvaluateGeofencesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchEvaluateGeofences"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The geofence collection used in evaluating the position of devices against
     * its geofences.</p>
     */
    inline const Aws::String& GetCollectionName() const { return m_collectionName; }
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }
    template<typename CollectionNameT = Aws::String>
    void SetCollectionName(CollectionNameT&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::forward<CollectionNameT>(value); }
    template<typename CollectionNameT = Aws::String>
    BatchEvaluateGeofencesRequest& WithCollectionName(CollectionNameT&& value) { SetCollectionName(std::forward<CollectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains device details for each device to be evaluated against the given
     * geofence collection.</p>
     */
    inline const Aws::Vector<DevicePositionUpdate>& GetDevicePositionUpdates() const { return m_devicePositionUpdates; }
    inline bool DevicePositionUpdatesHasBeenSet() const { return m_devicePositionUpdatesHasBeenSet; }
    template<typename DevicePositionUpdatesT = Aws::Vector<DevicePositionUpdate>>
    void SetDevicePositionUpdates(DevicePositionUpdatesT&& value) { m_devicePositionUpdatesHasBeenSet = true; m_devicePositionUpdates = std::forward<DevicePositionUpdatesT>(value); }
    template<typename DevicePositionUpdatesT = Aws::Vector<DevicePositionUpdate>>
    BatchEvaluateGeofencesRequest& WithDevicePositionUpdates(DevicePositionUpdatesT&& value) { SetDevicePositionUpdates(std::forward<DevicePositionUpdatesT>(value)); return *this;}
    template<typename DevicePositionUpdatesT = DevicePositionUpdate>
    BatchEvaluateGeofencesRequest& AddDevicePositionUpdates(DevicePositionUpdatesT&& value) { m_devicePositionUpdatesHasBeenSet = true; m_devicePositionUpdates.emplace_back(std::forward<DevicePositionUpdatesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    Aws::Vector<DevicePositionUpdate> m_devicePositionUpdates;
    bool m_devicePositionUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
