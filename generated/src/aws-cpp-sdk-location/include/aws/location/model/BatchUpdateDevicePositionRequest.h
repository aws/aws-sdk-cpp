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
  class BatchUpdateDevicePositionRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API BatchUpdateDevicePositionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateDevicePosition"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline void SetTrackerName(const Aws::String& value) { m_trackerNameHasBeenSet = true; m_trackerName = value; }

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline void SetTrackerName(Aws::String&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::move(value); }

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline void SetTrackerName(const char* value) { m_trackerNameHasBeenSet = true; m_trackerName.assign(value); }

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline BatchUpdateDevicePositionRequest& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline BatchUpdateDevicePositionRequest& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}

    /**
     * <p>The name of the tracker resource to update.</p>
     */
    inline BatchUpdateDevicePositionRequest& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}


    /**
     * <p>Contains the position update details for each device.</p>
     */
    inline const Aws::Vector<DevicePositionUpdate>& GetUpdates() const{ return m_updates; }

    /**
     * <p>Contains the position update details for each device.</p>
     */
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }

    /**
     * <p>Contains the position update details for each device.</p>
     */
    inline void SetUpdates(const Aws::Vector<DevicePositionUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }

    /**
     * <p>Contains the position update details for each device.</p>
     */
    inline void SetUpdates(Aws::Vector<DevicePositionUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }

    /**
     * <p>Contains the position update details for each device.</p>
     */
    inline BatchUpdateDevicePositionRequest& WithUpdates(const Aws::Vector<DevicePositionUpdate>& value) { SetUpdates(value); return *this;}

    /**
     * <p>Contains the position update details for each device.</p>
     */
    inline BatchUpdateDevicePositionRequest& WithUpdates(Aws::Vector<DevicePositionUpdate>&& value) { SetUpdates(std::move(value)); return *this;}

    /**
     * <p>Contains the position update details for each device.</p>
     */
    inline BatchUpdateDevicePositionRequest& AddUpdates(const DevicePositionUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }

    /**
     * <p>Contains the position update details for each device.</p>
     */
    inline BatchUpdateDevicePositionRequest& AddUpdates(DevicePositionUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;

    Aws::Vector<DevicePositionUpdate> m_updates;
    bool m_updatesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
