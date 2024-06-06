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


    /**
     * <p>The name of the tracker resource to be associated with verification
     * request.</p>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }

    /**
     * <p>The name of the tracker resource to be associated with verification
     * request.</p>
     */
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }

    /**
     * <p>The name of the tracker resource to be associated with verification
     * request.</p>
     */
    inline void SetTrackerName(const Aws::String& value) { m_trackerNameHasBeenSet = true; m_trackerName = value; }

    /**
     * <p>The name of the tracker resource to be associated with verification
     * request.</p>
     */
    inline void SetTrackerName(Aws::String&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::move(value); }

    /**
     * <p>The name of the tracker resource to be associated with verification
     * request.</p>
     */
    inline void SetTrackerName(const char* value) { m_trackerNameHasBeenSet = true; m_trackerName.assign(value); }

    /**
     * <p>The name of the tracker resource to be associated with verification
     * request.</p>
     */
    inline VerifyDevicePositionRequest& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}

    /**
     * <p>The name of the tracker resource to be associated with verification
     * request.</p>
     */
    inline VerifyDevicePositionRequest& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}

    /**
     * <p>The name of the tracker resource to be associated with verification
     * request.</p>
     */
    inline VerifyDevicePositionRequest& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}


    /**
     * <p>The device's state, including position, IP address, cell signals and Wi-Fi
     * access points.</p>
     */
    inline const DeviceState& GetDeviceState() const{ return m_deviceState; }

    /**
     * <p>The device's state, including position, IP address, cell signals and Wi-Fi
     * access points.</p>
     */
    inline bool DeviceStateHasBeenSet() const { return m_deviceStateHasBeenSet; }

    /**
     * <p>The device's state, including position, IP address, cell signals and Wi-Fi
     * access points.</p>
     */
    inline void SetDeviceState(const DeviceState& value) { m_deviceStateHasBeenSet = true; m_deviceState = value; }

    /**
     * <p>The device's state, including position, IP address, cell signals and Wi-Fi
     * access points.</p>
     */
    inline void SetDeviceState(DeviceState&& value) { m_deviceStateHasBeenSet = true; m_deviceState = std::move(value); }

    /**
     * <p>The device's state, including position, IP address, cell signals and Wi-Fi
     * access points.</p>
     */
    inline VerifyDevicePositionRequest& WithDeviceState(const DeviceState& value) { SetDeviceState(value); return *this;}

    /**
     * <p>The device's state, including position, IP address, cell signals and Wi-Fi
     * access points.</p>
     */
    inline VerifyDevicePositionRequest& WithDeviceState(DeviceState&& value) { SetDeviceState(std::move(value)); return *this;}


    /**
     * <p>The distance unit for the verification request.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline const DistanceUnit& GetDistanceUnit() const{ return m_distanceUnit; }

    /**
     * <p>The distance unit for the verification request.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline bool DistanceUnitHasBeenSet() const { return m_distanceUnitHasBeenSet; }

    /**
     * <p>The distance unit for the verification request.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline void SetDistanceUnit(const DistanceUnit& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }

    /**
     * <p>The distance unit for the verification request.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline void SetDistanceUnit(DistanceUnit&& value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = std::move(value); }

    /**
     * <p>The distance unit for the verification request.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline VerifyDevicePositionRequest& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}

    /**
     * <p>The distance unit for the verification request.</p> <p>Default Value:
     * <code>Kilometers</code> </p>
     */
    inline VerifyDevicePositionRequest& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}

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
