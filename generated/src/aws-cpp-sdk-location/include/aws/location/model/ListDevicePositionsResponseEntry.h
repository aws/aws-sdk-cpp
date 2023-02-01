/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/PositionalAccuracy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains the tracker resource details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/ListDevicePositionsResponseEntry">AWS
   * API Reference</a></p>
   */
  class ListDevicePositionsResponseEntry
  {
  public:
    AWS_LOCATIONSERVICE_API ListDevicePositionsResponseEntry();
    AWS_LOCATIONSERVICE_API ListDevicePositionsResponseEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API ListDevicePositionsResponseEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The accuracy of the device position.</p>
     */
    inline const PositionalAccuracy& GetAccuracy() const{ return m_accuracy; }

    /**
     * <p>The accuracy of the device position.</p>
     */
    inline bool AccuracyHasBeenSet() const { return m_accuracyHasBeenSet; }

    /**
     * <p>The accuracy of the device position.</p>
     */
    inline void SetAccuracy(const PositionalAccuracy& value) { m_accuracyHasBeenSet = true; m_accuracy = value; }

    /**
     * <p>The accuracy of the device position.</p>
     */
    inline void SetAccuracy(PositionalAccuracy&& value) { m_accuracyHasBeenSet = true; m_accuracy = std::move(value); }

    /**
     * <p>The accuracy of the device position.</p>
     */
    inline ListDevicePositionsResponseEntry& WithAccuracy(const PositionalAccuracy& value) { SetAccuracy(value); return *this;}

    /**
     * <p>The accuracy of the device position.</p>
     */
    inline ListDevicePositionsResponseEntry& WithAccuracy(PositionalAccuracy&& value) { SetAccuracy(std::move(value)); return *this;}


    /**
     * <p>The ID of the device for this position.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The ID of the device for this position.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The ID of the device for this position.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The ID of the device for this position.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The ID of the device for this position.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The ID of the device for this position.</p>
     */
    inline ListDevicePositionsResponseEntry& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The ID of the device for this position.</p>
     */
    inline ListDevicePositionsResponseEntry& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the device for this position.</p>
     */
    inline ListDevicePositionsResponseEntry& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The last known device position. Empty if no positions currently stored.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }

    /**
     * <p>The last known device position. Empty if no positions currently stored.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>The last known device position. Empty if no positions currently stored.</p>
     */
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>The last known device position. Empty if no positions currently stored.</p>
     */
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>The last known device position. Empty if no positions currently stored.</p>
     */
    inline ListDevicePositionsResponseEntry& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}

    /**
     * <p>The last known device position. Empty if no positions currently stored.</p>
     */
    inline ListDevicePositionsResponseEntry& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>The last known device position. Empty if no positions currently stored.</p>
     */
    inline ListDevicePositionsResponseEntry& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }


    /**
     * <p>The properties associated with the position.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPositionProperties() const{ return m_positionProperties; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline bool PositionPropertiesHasBeenSet() const { return m_positionPropertiesHasBeenSet; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline void SetPositionProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties = value; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline void SetPositionProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties = std::move(value); }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline ListDevicePositionsResponseEntry& WithPositionProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetPositionProperties(value); return *this;}

    /**
     * <p>The properties associated with the position.</p>
     */
    inline ListDevicePositionsResponseEntry& WithPositionProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetPositionProperties(std::move(value)); return *this;}

    /**
     * <p>The properties associated with the position.</p>
     */
    inline ListDevicePositionsResponseEntry& AddPositionProperties(const Aws::String& key, const Aws::String& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(key, value); return *this; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline ListDevicePositionsResponseEntry& AddPositionProperties(Aws::String&& key, const Aws::String& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline ListDevicePositionsResponseEntry& AddPositionProperties(const Aws::String& key, Aws::String&& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline ListDevicePositionsResponseEntry& AddPositionProperties(Aws::String&& key, Aws::String&& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline ListDevicePositionsResponseEntry& AddPositionProperties(const char* key, Aws::String&& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline ListDevicePositionsResponseEntry& AddPositionProperties(Aws::String&& key, const char* value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline ListDevicePositionsResponseEntry& AddPositionProperties(const char* key, const char* value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(key, value); return *this; }


    /**
     * <p>The timestamp at which the device position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const{ return m_sampleTime; }

    /**
     * <p>The timestamp at which the device position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }

    /**
     * <p>The timestamp at which the device position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline void SetSampleTime(const Aws::Utils::DateTime& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = value; }

    /**
     * <p>The timestamp at which the device position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline void SetSampleTime(Aws::Utils::DateTime&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::move(value); }

    /**
     * <p>The timestamp at which the device position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline ListDevicePositionsResponseEntry& WithSampleTime(const Aws::Utils::DateTime& value) { SetSampleTime(value); return *this;}

    /**
     * <p>The timestamp at which the device position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>.</p>
     */
    inline ListDevicePositionsResponseEntry& WithSampleTime(Aws::Utils::DateTime&& value) { SetSampleTime(std::move(value)); return *this;}

  private:

    PositionalAccuracy m_accuracy;
    bool m_accuracyHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_positionProperties;
    bool m_positionPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_sampleTime;
    bool m_sampleTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
