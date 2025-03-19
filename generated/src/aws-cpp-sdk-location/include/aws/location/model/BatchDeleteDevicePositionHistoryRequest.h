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
    AWS_LOCATIONSERVICE_API BatchDeleteDevicePositionHistoryRequest() = default;

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
    inline const Aws::String& GetTrackerName() const { return m_trackerName; }
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }
    template<typename TrackerNameT = Aws::String>
    void SetTrackerName(TrackerNameT&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::forward<TrackerNameT>(value); }
    template<typename TrackerNameT = Aws::String>
    BatchDeleteDevicePositionHistoryRequest& WithTrackerName(TrackerNameT&& value) { SetTrackerName(std::forward<TrackerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Devices whose position history you want to delete.</p> <ul> <li> <p>For
     * example, for two devices: <code>“DeviceIds” : [DeviceId1,DeviceId2]</code> </p>
     * </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceIds() const { return m_deviceIds; }
    inline bool DeviceIdsHasBeenSet() const { return m_deviceIdsHasBeenSet; }
    template<typename DeviceIdsT = Aws::Vector<Aws::String>>
    void SetDeviceIds(DeviceIdsT&& value) { m_deviceIdsHasBeenSet = true; m_deviceIds = std::forward<DeviceIdsT>(value); }
    template<typename DeviceIdsT = Aws::Vector<Aws::String>>
    BatchDeleteDevicePositionHistoryRequest& WithDeviceIds(DeviceIdsT&& value) { SetDeviceIds(std::forward<DeviceIdsT>(value)); return *this;}
    template<typename DeviceIdsT = Aws::String>
    BatchDeleteDevicePositionHistoryRequest& AddDeviceIds(DeviceIdsT&& value) { m_deviceIdsHasBeenSet = true; m_deviceIds.emplace_back(std::forward<DeviceIdsT>(value)); return *this; }
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
