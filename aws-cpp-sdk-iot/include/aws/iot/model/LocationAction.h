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
    AWS_IOT_API LocationAction();
    AWS_IOT_API LocationAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API LocationAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IAM role that grants permission to write to the Amazon Location
     * resource.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The IAM role that grants permission to write to the Amazon Location
     * resource.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The IAM role that grants permission to write to the Amazon Location
     * resource.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The IAM role that grants permission to write to the Amazon Location
     * resource.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The IAM role that grants permission to write to the Amazon Location
     * resource.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The IAM role that grants permission to write to the Amazon Location
     * resource.</p>
     */
    inline LocationAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The IAM role that grants permission to write to the Amazon Location
     * resource.</p>
     */
    inline LocationAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The IAM role that grants permission to write to the Amazon Location
     * resource.</p>
     */
    inline LocationAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of the tracker resource in Amazon Location in which the location is
     * updated.</p>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }

    /**
     * <p>The name of the tracker resource in Amazon Location in which the location is
     * updated.</p>
     */
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }

    /**
     * <p>The name of the tracker resource in Amazon Location in which the location is
     * updated.</p>
     */
    inline void SetTrackerName(const Aws::String& value) { m_trackerNameHasBeenSet = true; m_trackerName = value; }

    /**
     * <p>The name of the tracker resource in Amazon Location in which the location is
     * updated.</p>
     */
    inline void SetTrackerName(Aws::String&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::move(value); }

    /**
     * <p>The name of the tracker resource in Amazon Location in which the location is
     * updated.</p>
     */
    inline void SetTrackerName(const char* value) { m_trackerNameHasBeenSet = true; m_trackerName.assign(value); }

    /**
     * <p>The name of the tracker resource in Amazon Location in which the location is
     * updated.</p>
     */
    inline LocationAction& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}

    /**
     * <p>The name of the tracker resource in Amazon Location in which the location is
     * updated.</p>
     */
    inline LocationAction& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}

    /**
     * <p>The name of the tracker resource in Amazon Location in which the location is
     * updated.</p>
     */
    inline LocationAction& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}


    /**
     * <p>The unique ID of the device providing the location data.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The unique ID of the device providing the location data.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The unique ID of the device providing the location data.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The unique ID of the device providing the location data.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The unique ID of the device providing the location data.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The unique ID of the device providing the location data.</p>
     */
    inline LocationAction& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The unique ID of the device providing the location data.</p>
     */
    inline LocationAction& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the device providing the location data.</p>
     */
    inline LocationAction& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The time that the location data was sampled. The default value is the time
     * the MQTT message was processed.</p>
     */
    inline const LocationTimestamp& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time that the location data was sampled. The default value is the time
     * the MQTT message was processed.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time that the location data was sampled. The default value is the time
     * the MQTT message was processed.</p>
     */
    inline void SetTimestamp(const LocationTimestamp& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time that the location data was sampled. The default value is the time
     * the MQTT message was processed.</p>
     */
    inline void SetTimestamp(LocationTimestamp&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The time that the location data was sampled. The default value is the time
     * the MQTT message was processed.</p>
     */
    inline LocationAction& WithTimestamp(const LocationTimestamp& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time that the location data was sampled. The default value is the time
     * the MQTT message was processed.</p>
     */
    inline LocationAction& WithTimestamp(LocationTimestamp&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>A string that evaluates to a double value that represents the latitude of the
     * device's location.</p>
     */
    inline const Aws::String& GetLatitude() const{ return m_latitude; }

    /**
     * <p>A string that evaluates to a double value that represents the latitude of the
     * device's location.</p>
     */
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }

    /**
     * <p>A string that evaluates to a double value that represents the latitude of the
     * device's location.</p>
     */
    inline void SetLatitude(const Aws::String& value) { m_latitudeHasBeenSet = true; m_latitude = value; }

    /**
     * <p>A string that evaluates to a double value that represents the latitude of the
     * device's location.</p>
     */
    inline void SetLatitude(Aws::String&& value) { m_latitudeHasBeenSet = true; m_latitude = std::move(value); }

    /**
     * <p>A string that evaluates to a double value that represents the latitude of the
     * device's location.</p>
     */
    inline void SetLatitude(const char* value) { m_latitudeHasBeenSet = true; m_latitude.assign(value); }

    /**
     * <p>A string that evaluates to a double value that represents the latitude of the
     * device's location.</p>
     */
    inline LocationAction& WithLatitude(const Aws::String& value) { SetLatitude(value); return *this;}

    /**
     * <p>A string that evaluates to a double value that represents the latitude of the
     * device's location.</p>
     */
    inline LocationAction& WithLatitude(Aws::String&& value) { SetLatitude(std::move(value)); return *this;}

    /**
     * <p>A string that evaluates to a double value that represents the latitude of the
     * device's location.</p>
     */
    inline LocationAction& WithLatitude(const char* value) { SetLatitude(value); return *this;}


    /**
     * <p>A string that evaluates to a double value that represents the longitude of
     * the device's location.</p>
     */
    inline const Aws::String& GetLongitude() const{ return m_longitude; }

    /**
     * <p>A string that evaluates to a double value that represents the longitude of
     * the device's location.</p>
     */
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }

    /**
     * <p>A string that evaluates to a double value that represents the longitude of
     * the device's location.</p>
     */
    inline void SetLongitude(const Aws::String& value) { m_longitudeHasBeenSet = true; m_longitude = value; }

    /**
     * <p>A string that evaluates to a double value that represents the longitude of
     * the device's location.</p>
     */
    inline void SetLongitude(Aws::String&& value) { m_longitudeHasBeenSet = true; m_longitude = std::move(value); }

    /**
     * <p>A string that evaluates to a double value that represents the longitude of
     * the device's location.</p>
     */
    inline void SetLongitude(const char* value) { m_longitudeHasBeenSet = true; m_longitude.assign(value); }

    /**
     * <p>A string that evaluates to a double value that represents the longitude of
     * the device's location.</p>
     */
    inline LocationAction& WithLongitude(const Aws::String& value) { SetLongitude(value); return *this;}

    /**
     * <p>A string that evaluates to a double value that represents the longitude of
     * the device's location.</p>
     */
    inline LocationAction& WithLongitude(Aws::String&& value) { SetLongitude(std::move(value)); return *this;}

    /**
     * <p>A string that evaluates to a double value that represents the longitude of
     * the device's location.</p>
     */
    inline LocationAction& WithLongitude(const char* value) { SetLongitude(value); return *this;}

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
