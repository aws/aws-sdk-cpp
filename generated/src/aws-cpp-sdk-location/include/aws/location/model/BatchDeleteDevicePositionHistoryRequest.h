/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchDeleteDevicePositionHistoryRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API BatchDeleteDevicePositionHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteDevicePositionHistory"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Devices whose position history you want to delete.</p> <ul> <li> <p>For
     * example, for two devices: <code>“DeviceIds” : [DeviceId1,DeviceId2]</code> </p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceIds() const{ return m_deviceIds; }

    /**
     * <p>Devices whose position history you want to delete.</p> <ul> <li> <p>For
     * example, for two devices: <code>“DeviceIds” : [DeviceId1,DeviceId2]</code> </p>
     * </li> </ul>
     */
    inline bool DeviceIdsHasBeenSet() const { return m_deviceIdsHasBeenSet; }

    /**
     * <p>Devices whose position history you want to delete.</p> <ul> <li> <p>For
     * example, for two devices: <code>“DeviceIds” : [DeviceId1,DeviceId2]</code> </p>
     * </li> </ul>
     */
    inline void SetDeviceIds(const Aws::Vector<Aws::String>& value) { m_deviceIdsHasBeenSet = true; m_deviceIds = value; }

    /**
     * <p>Devices whose position history you want to delete.</p> <ul> <li> <p>For
     * example, for two devices: <code>“DeviceIds” : [DeviceId1,DeviceId2]</code> </p>
     * </li> </ul>
     */
    inline void SetDeviceIds(Aws::Vector<Aws::String>&& value) { m_deviceIdsHasBeenSet = true; m_deviceIds = std::move(value); }

    /**
     * <p>Devices whose position history you want to delete.</p> <ul> <li> <p>For
     * example, for two devices: <code>“DeviceIds” : [DeviceId1,DeviceId2]</code> </p>
     * </li> </ul>
     */
    inline BatchDeleteDevicePositionHistoryRequest& WithDeviceIds(const Aws::Vector<Aws::String>& value) { SetDeviceIds(value); return *this;}

    /**
     * <p>Devices whose position history you want to delete.</p> <ul> <li> <p>For
     * example, for two devices: <code>“DeviceIds” : [DeviceId1,DeviceId2]</code> </p>
     * </li> </ul>
     */
    inline BatchDeleteDevicePositionHistoryRequest& WithDeviceIds(Aws::Vector<Aws::String>&& value) { SetDeviceIds(std::move(value)); return *this;}

    /**
     * <p>Devices whose position history you want to delete.</p> <ul> <li> <p>For
     * example, for two devices: <code>“DeviceIds” : [DeviceId1,DeviceId2]</code> </p>
     * </li> </ul>
     */
    inline BatchDeleteDevicePositionHistoryRequest& AddDeviceIds(const Aws::String& value) { m_deviceIdsHasBeenSet = true; m_deviceIds.push_back(value); return *this; }

    /**
     * <p>Devices whose position history you want to delete.</p> <ul> <li> <p>For
     * example, for two devices: <code>“DeviceIds” : [DeviceId1,DeviceId2]</code> </p>
     * </li> </ul>
     */
    inline BatchDeleteDevicePositionHistoryRequest& AddDeviceIds(Aws::String&& value) { m_deviceIdsHasBeenSet = true; m_deviceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Devices whose position history you want to delete.</p> <ul> <li> <p>For
     * example, for two devices: <code>“DeviceIds” : [DeviceId1,DeviceId2]</code> </p>
     * </li> </ul>
     */
    inline BatchDeleteDevicePositionHistoryRequest& AddDeviceIds(const char* value) { m_deviceIdsHasBeenSet = true; m_deviceIds.push_back(value); return *this; }


    /**
     * <p>The name of the tracker resource to delete the device position history
     * from.</p>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }

    /**
     * <p>The name of the tracker resource to delete the device position history
     * from.</p>
     */
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }

    /**
     * <p>The name of the tracker resource to delete the device position history
     * from.</p>
     */
    inline void SetTrackerName(const Aws::String& value) { m_trackerNameHasBeenSet = true; m_trackerName = value; }

    /**
     * <p>The name of the tracker resource to delete the device position history
     * from.</p>
     */
    inline void SetTrackerName(Aws::String&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::move(value); }

    /**
     * <p>The name of the tracker resource to delete the device position history
     * from.</p>
     */
    inline void SetTrackerName(const char* value) { m_trackerNameHasBeenSet = true; m_trackerName.assign(value); }

    /**
     * <p>The name of the tracker resource to delete the device position history
     * from.</p>
     */
    inline BatchDeleteDevicePositionHistoryRequest& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}

    /**
     * <p>The name of the tracker resource to delete the device position history
     * from.</p>
     */
    inline BatchDeleteDevicePositionHistoryRequest& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}

    /**
     * <p>The name of the tracker resource to delete the device position history
     * from.</p>
     */
    inline BatchDeleteDevicePositionHistoryRequest& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_deviceIds;
    bool m_deviceIdsHasBeenSet = false;

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
