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


    ///@{
    /**
     * <p>The name of the tracker resource to delete the device position history
     * from.</p>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }
    inline void SetTrackerName(const Aws::String& value) { m_trackerNameHasBeenSet = true; m_trackerName = value; }
    inline void SetTrackerName(Aws::String&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::move(value); }
    inline void SetTrackerName(const char* value) { m_trackerNameHasBeenSet = true; m_trackerName.assign(value); }
    inline BatchDeleteDevicePositionHistoryRequest& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}
    inline BatchDeleteDevicePositionHistoryRequest& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}
    inline BatchDeleteDevicePositionHistoryRequest& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Devices whose position history you want to delete.</p> <ul> <li> <p>For
     * example, for two devices: <code>“DeviceIds” : [DeviceId1,DeviceId2]</code> </p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceIds() const{ return m_deviceIds; }
    inline bool DeviceIdsHasBeenSet() const { return m_deviceIdsHasBeenSet; }
    inline void SetDeviceIds(const Aws::Vector<Aws::String>& value) { m_deviceIdsHasBeenSet = true; m_deviceIds = value; }
    inline void SetDeviceIds(Aws::Vector<Aws::String>&& value) { m_deviceIdsHasBeenSet = true; m_deviceIds = std::move(value); }
    inline BatchDeleteDevicePositionHistoryRequest& WithDeviceIds(const Aws::Vector<Aws::String>& value) { SetDeviceIds(value); return *this;}
    inline BatchDeleteDevicePositionHistoryRequest& WithDeviceIds(Aws::Vector<Aws::String>&& value) { SetDeviceIds(std::move(value)); return *this;}
    inline BatchDeleteDevicePositionHistoryRequest& AddDeviceIds(const Aws::String& value) { m_deviceIdsHasBeenSet = true; m_deviceIds.push_back(value); return *this; }
    inline BatchDeleteDevicePositionHistoryRequest& AddDeviceIds(Aws::String&& value) { m_deviceIdsHasBeenSet = true; m_deviceIds.push_back(std::move(value)); return *this; }
    inline BatchDeleteDevicePositionHistoryRequest& AddDeviceIds(const char* value) { m_deviceIdsHasBeenSet = true; m_deviceIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceIds;
    bool m_deviceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
