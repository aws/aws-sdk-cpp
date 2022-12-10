/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/Feature.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class StartDeviceSyncRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API StartDeviceSyncRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDeviceSync"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the room with which the device to sync is associated.
     * Required.</p>
     */
    inline const Aws::String& GetRoomArn() const{ return m_roomArn; }

    /**
     * <p>The ARN of the room with which the device to sync is associated.
     * Required.</p>
     */
    inline bool RoomArnHasBeenSet() const { return m_roomArnHasBeenSet; }

    /**
     * <p>The ARN of the room with which the device to sync is associated.
     * Required.</p>
     */
    inline void SetRoomArn(const Aws::String& value) { m_roomArnHasBeenSet = true; m_roomArn = value; }

    /**
     * <p>The ARN of the room with which the device to sync is associated.
     * Required.</p>
     */
    inline void SetRoomArn(Aws::String&& value) { m_roomArnHasBeenSet = true; m_roomArn = std::move(value); }

    /**
     * <p>The ARN of the room with which the device to sync is associated.
     * Required.</p>
     */
    inline void SetRoomArn(const char* value) { m_roomArnHasBeenSet = true; m_roomArn.assign(value); }

    /**
     * <p>The ARN of the room with which the device to sync is associated.
     * Required.</p>
     */
    inline StartDeviceSyncRequest& WithRoomArn(const Aws::String& value) { SetRoomArn(value); return *this;}

    /**
     * <p>The ARN of the room with which the device to sync is associated.
     * Required.</p>
     */
    inline StartDeviceSyncRequest& WithRoomArn(Aws::String&& value) { SetRoomArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the room with which the device to sync is associated.
     * Required.</p>
     */
    inline StartDeviceSyncRequest& WithRoomArn(const char* value) { SetRoomArn(value); return *this;}


    /**
     * <p>The ARN of the device to sync. Required.</p>
     */
    inline const Aws::String& GetDeviceArn() const{ return m_deviceArn; }

    /**
     * <p>The ARN of the device to sync. Required.</p>
     */
    inline bool DeviceArnHasBeenSet() const { return m_deviceArnHasBeenSet; }

    /**
     * <p>The ARN of the device to sync. Required.</p>
     */
    inline void SetDeviceArn(const Aws::String& value) { m_deviceArnHasBeenSet = true; m_deviceArn = value; }

    /**
     * <p>The ARN of the device to sync. Required.</p>
     */
    inline void SetDeviceArn(Aws::String&& value) { m_deviceArnHasBeenSet = true; m_deviceArn = std::move(value); }

    /**
     * <p>The ARN of the device to sync. Required.</p>
     */
    inline void SetDeviceArn(const char* value) { m_deviceArnHasBeenSet = true; m_deviceArn.assign(value); }

    /**
     * <p>The ARN of the device to sync. Required.</p>
     */
    inline StartDeviceSyncRequest& WithDeviceArn(const Aws::String& value) { SetDeviceArn(value); return *this;}

    /**
     * <p>The ARN of the device to sync. Required.</p>
     */
    inline StartDeviceSyncRequest& WithDeviceArn(Aws::String&& value) { SetDeviceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the device to sync. Required.</p>
     */
    inline StartDeviceSyncRequest& WithDeviceArn(const char* value) { SetDeviceArn(value); return *this;}


    /**
     * <p>Request structure to start the device sync. Required.</p>
     */
    inline const Aws::Vector<Feature>& GetFeatures() const{ return m_features; }

    /**
     * <p>Request structure to start the device sync. Required.</p>
     */
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }

    /**
     * <p>Request structure to start the device sync. Required.</p>
     */
    inline void SetFeatures(const Aws::Vector<Feature>& value) { m_featuresHasBeenSet = true; m_features = value; }

    /**
     * <p>Request structure to start the device sync. Required.</p>
     */
    inline void SetFeatures(Aws::Vector<Feature>&& value) { m_featuresHasBeenSet = true; m_features = std::move(value); }

    /**
     * <p>Request structure to start the device sync. Required.</p>
     */
    inline StartDeviceSyncRequest& WithFeatures(const Aws::Vector<Feature>& value) { SetFeatures(value); return *this;}

    /**
     * <p>Request structure to start the device sync. Required.</p>
     */
    inline StartDeviceSyncRequest& WithFeatures(Aws::Vector<Feature>&& value) { SetFeatures(std::move(value)); return *this;}

    /**
     * <p>Request structure to start the device sync. Required.</p>
     */
    inline StartDeviceSyncRequest& AddFeatures(const Feature& value) { m_featuresHasBeenSet = true; m_features.push_back(value); return *this; }

    /**
     * <p>Request structure to start the device sync. Required.</p>
     */
    inline StartDeviceSyncRequest& AddFeatures(Feature&& value) { m_featuresHasBeenSet = true; m_features.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_roomArn;
    bool m_roomArnHasBeenSet = false;

    Aws::String m_deviceArn;
    bool m_deviceArnHasBeenSet = false;

    Aws::Vector<Feature> m_features;
    bool m_featuresHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
