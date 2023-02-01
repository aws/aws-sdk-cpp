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
    AWS_LOCATIONSERVICE_API BatchEvaluateGeofencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchEvaluateGeofences"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The geofence collection used in evaluating the position of devices against
     * its geofences.</p>
     */
    inline const Aws::String& GetCollectionName() const{ return m_collectionName; }

    /**
     * <p>The geofence collection used in evaluating the position of devices against
     * its geofences.</p>
     */
    inline bool CollectionNameHasBeenSet() const { return m_collectionNameHasBeenSet; }

    /**
     * <p>The geofence collection used in evaluating the position of devices against
     * its geofences.</p>
     */
    inline void SetCollectionName(const Aws::String& value) { m_collectionNameHasBeenSet = true; m_collectionName = value; }

    /**
     * <p>The geofence collection used in evaluating the position of devices against
     * its geofences.</p>
     */
    inline void SetCollectionName(Aws::String&& value) { m_collectionNameHasBeenSet = true; m_collectionName = std::move(value); }

    /**
     * <p>The geofence collection used in evaluating the position of devices against
     * its geofences.</p>
     */
    inline void SetCollectionName(const char* value) { m_collectionNameHasBeenSet = true; m_collectionName.assign(value); }

    /**
     * <p>The geofence collection used in evaluating the position of devices against
     * its geofences.</p>
     */
    inline BatchEvaluateGeofencesRequest& WithCollectionName(const Aws::String& value) { SetCollectionName(value); return *this;}

    /**
     * <p>The geofence collection used in evaluating the position of devices against
     * its geofences.</p>
     */
    inline BatchEvaluateGeofencesRequest& WithCollectionName(Aws::String&& value) { SetCollectionName(std::move(value)); return *this;}

    /**
     * <p>The geofence collection used in evaluating the position of devices against
     * its geofences.</p>
     */
    inline BatchEvaluateGeofencesRequest& WithCollectionName(const char* value) { SetCollectionName(value); return *this;}


    /**
     * <p>Contains device details for each device to be evaluated against the given
     * geofence collection.</p>
     */
    inline const Aws::Vector<DevicePositionUpdate>& GetDevicePositionUpdates() const{ return m_devicePositionUpdates; }

    /**
     * <p>Contains device details for each device to be evaluated against the given
     * geofence collection.</p>
     */
    inline bool DevicePositionUpdatesHasBeenSet() const { return m_devicePositionUpdatesHasBeenSet; }

    /**
     * <p>Contains device details for each device to be evaluated against the given
     * geofence collection.</p>
     */
    inline void SetDevicePositionUpdates(const Aws::Vector<DevicePositionUpdate>& value) { m_devicePositionUpdatesHasBeenSet = true; m_devicePositionUpdates = value; }

    /**
     * <p>Contains device details for each device to be evaluated against the given
     * geofence collection.</p>
     */
    inline void SetDevicePositionUpdates(Aws::Vector<DevicePositionUpdate>&& value) { m_devicePositionUpdatesHasBeenSet = true; m_devicePositionUpdates = std::move(value); }

    /**
     * <p>Contains device details for each device to be evaluated against the given
     * geofence collection.</p>
     */
    inline BatchEvaluateGeofencesRequest& WithDevicePositionUpdates(const Aws::Vector<DevicePositionUpdate>& value) { SetDevicePositionUpdates(value); return *this;}

    /**
     * <p>Contains device details for each device to be evaluated against the given
     * geofence collection.</p>
     */
    inline BatchEvaluateGeofencesRequest& WithDevicePositionUpdates(Aws::Vector<DevicePositionUpdate>&& value) { SetDevicePositionUpdates(std::move(value)); return *this;}

    /**
     * <p>Contains device details for each device to be evaluated against the given
     * geofence collection.</p>
     */
    inline BatchEvaluateGeofencesRequest& AddDevicePositionUpdates(const DevicePositionUpdate& value) { m_devicePositionUpdatesHasBeenSet = true; m_devicePositionUpdates.push_back(value); return *this; }

    /**
     * <p>Contains device details for each device to be evaluated against the given
     * geofence collection.</p>
     */
    inline BatchEvaluateGeofencesRequest& AddDevicePositionUpdates(DevicePositionUpdate&& value) { m_devicePositionUpdatesHasBeenSet = true; m_devicePositionUpdates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_collectionName;
    bool m_collectionNameHasBeenSet = false;

    Aws::Vector<DevicePositionUpdate> m_devicePositionUpdates;
    bool m_devicePositionUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
