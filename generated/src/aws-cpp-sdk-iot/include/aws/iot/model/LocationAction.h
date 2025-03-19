/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/LocationTimestamp.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p>The Amazon Location rule action sends device location updates from an MQTT
   * message to an Amazon Location tracker resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/LocationAction">AWS
   * API Reference</a></p>
   */
  class LocationAction
  {
  public:
    AWS_IOT_API LocationAction() = default;
    AWS_IOT_API LocationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API LocationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM role that grants permission to write to the Amazon Location
     * resource.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    LocationAction& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the tracker resource in Amazon Location in which the location is
     * updated.</p>
     */
    inline const Aws::String& GetTrackerName() const { return m_trackerName; }
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }
    template<typename TrackerNameT = Aws::String>
    void SetTrackerName(TrackerNameT&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::forward<TrackerNameT>(value); }
    template<typename TrackerNameT = Aws::String>
    LocationAction& WithTrackerName(TrackerNameT&& value) { SetTrackerName(std::forward<TrackerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the device providing the location data.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    LocationAction& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the location data was sampled. The default value is the time
     * the MQTT message was processed.</p>
     */
    inline const LocationTimestamp& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = LocationTimestamp>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = LocationTimestamp>
    LocationAction& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that evaluates to a double value that represents the latitude of the
     * device's location.</p>
     */
    inline const Aws::String& GetLatitude() const { return m_latitude; }
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }
    template<typename LatitudeT = Aws::String>
    void SetLatitude(LatitudeT&& value) { m_latitudeHasBeenSet = true; m_latitude = std::forward<LatitudeT>(value); }
    template<typename LatitudeT = Aws::String>
    LocationAction& WithLatitude(LatitudeT&& value) { SetLatitude(std::forward<LatitudeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that evaluates to a double value that represents the longitude of
     * the device's location.</p>
     */
    inline const Aws::String& GetLongitude() const { return m_longitude; }
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }
    template<typename LongitudeT = Aws::String>
    void SetLongitude(LongitudeT&& value) { m_longitudeHasBeenSet = true; m_longitude = std::forward<LongitudeT>(value); }
    template<typename LongitudeT = Aws::String>
    LocationAction& WithLongitude(LongitudeT&& value) { SetLongitude(std::forward<LongitudeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    LocationTimestamp m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_latitude;
    bool m_latitudeHasBeenSet = false;

    Aws::String m_longitude;
    bool m_longitudeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
