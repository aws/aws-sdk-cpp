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
    AWS_LOCATIONSERVICE_API VerifyDevicePositionRequest();

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
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }
    inline void SetTrackerName(const Aws::String& value) { m_trackerNameHasBeenSet = true; m_trackerName = value; }
    inline void SetTrackerName(Aws::String&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::move(value); }
    inline void SetTrackerName(const char* value) { m_trackerNameHasBeenSet = true; m_trackerName.assign(value); }
    inline VerifyDevicePositionRequest& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}
    inline VerifyDevicePositionRequest& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}
    inline VerifyDevicePositionRequest& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's state, including position, IP address, cell signals and Wi-Fi
     * access points.</p>
     */
    inline const DeviceState& GetDeviceState() const{ return m_deviceState; }
    inline bool DeviceStateHasBeenSet() const { return m_deviceStateHasBeenSet; }
    inline void SetDeviceState(const DeviceState& value) { m_deviceStateHasBeenSet = true; m_deviceState = value; }
    inline void SetDeviceState(DeviceState&& value) { m_deviceStateHasBeenSet = true; m_deviceState = std::move(value); }
    inline VerifyDevicePositionRequest& WithDeviceState(const DeviceState& value) { SetDeviceState(value); return *this;}
    inline VerifyDevicePositionRequest& WithDeviceState(DeviceState&& value) { SetDeviceState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distance unit for the verification request.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline const DistanceUnit& GetDistanceUnit() const{ return m_distanceUnit; }
    inline bool DistanceUnitHasBeenSet() const { return m_distanceUnitHasBeenSet; }
    inline void SetDistanceUnit(const DistanceUnit& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }
    inline void SetDistanceUnit(DistanceUnit&& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = std::move(value); }
    inline VerifyDevicePositionRequest& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}
    inline VerifyDevicePositionRequest& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;

    DeviceState m_deviceState;
    bool m_deviceStateHasBeenSet = false;

    DistanceUnit m_distanceUnit;
    bool m_distanceUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
