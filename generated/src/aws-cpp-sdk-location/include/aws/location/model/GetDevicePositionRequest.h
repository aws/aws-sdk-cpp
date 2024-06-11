﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
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
  class GetDevicePositionRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API GetDevicePositionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDevicePosition"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The tracker resource receiving the position update.</p>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }
    inline void SetTrackerName(const Aws::String& value) { m_trackerNameHasBeenSet = true; m_trackerName = value; }
    inline void SetTrackerName(Aws::String&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::move(value); }
    inline void SetTrackerName(const char* value) { m_trackerNameHasBeenSet = true; m_trackerName.assign(value); }
    inline GetDevicePositionRequest& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}
    inline GetDevicePositionRequest& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}
    inline GetDevicePositionRequest& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device whose position you want to retrieve.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline GetDevicePositionRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline GetDevicePositionRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline GetDevicePositionRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}
  private:

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
