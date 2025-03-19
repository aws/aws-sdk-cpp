/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/DeviceState.h>
#include <aws/location/model/DistanceUnit.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class VerifyDevicePositionRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API VerifyDevicePositionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "VerifyDevicePosition"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the tracker resource to be associated with verification
     * request.</p>
     */
    inline const Aws::String& GetTrackerName() const { return m_trackerName; }
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }
    template<typename TrackerNameT = Aws::String>
    void SetTrackerName(TrackerNameT&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::forward<TrackerNameT>(value); }
    template<typename TrackerNameT = Aws::String>
    VerifyDevicePositionRequest& WithTrackerName(TrackerNameT&& value) { SetTrackerName(std::forward<TrackerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's state, including position, IP address, cell signals and Wi-Fi
     * access points.</p>
     */
    inline const DeviceState& GetDeviceState() const { return m_deviceState; }
    inline bool DeviceStateHasBeenSet() const { return m_deviceStateHasBeenSet; }
    template<typename DeviceStateT = DeviceState>
    void SetDeviceState(DeviceStateT&& value) { m_deviceStateHasBeenSet = true; m_deviceState = std::forward<DeviceStateT>(value); }
    template<typename DeviceStateT = DeviceState>
    VerifyDevicePositionRequest& WithDeviceState(DeviceStateT&& value) { SetDeviceState(std::forward<DeviceStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distance unit for the verification request.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline DistanceUnit GetDistanceUnit() const { return m_distanceUnit; }
    inline bool DistanceUnitHasBeenSet() const { return m_distanceUnitHasBeenSet; }
    inline void SetDistanceUnit(DistanceUnit value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }
    inline VerifyDevicePositionRequest& WithDistanceUnit(DistanceUnit value) { SetDistanceUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;

    DeviceState m_deviceState;
    bool m_deviceStateHasBeenSet = false;

    DistanceUnit m_distanceUnit{DistanceUnit::NOT_SET};
    bool m_distanceUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
