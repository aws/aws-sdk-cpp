/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/location/model/PositionalAccuracy.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Contains the device position details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/DevicePosition">AWS
   * API Reference</a></p>
   */
  class DevicePosition
  {
  public:
    AWS_LOCATIONSERVICE_API DevicePosition();
    AWS_LOCATIONSERVICE_API DevicePosition(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API DevicePosition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device whose position you retrieved.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline DevicePosition& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline DevicePosition& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline DevicePosition& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const{ return m_sampleTime; }
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }
    inline void SetSampleTime(const Aws::Utils::DateTime& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = value; }
    inline void SetSampleTime(Aws::Utils::DateTime&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::move(value); }
    inline DevicePosition& WithSampleTime(const Aws::Utils::DateTime& value) { SetSampleTime(value); return *this;}
    inline DevicePosition& WithSampleTime(Aws::Utils::DateTime&& value) { SetSampleTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the tracker resource received the device position in
     * <a href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetReceivedTime() const{ return m_receivedTime; }
    inline bool ReceivedTimeHasBeenSet() const { return m_receivedTimeHasBeenSet; }
    inline void SetReceivedTime(const Aws::Utils::DateTime& value) { m_receivedTimeHasBeenSet = true; m_receivedTime = value; }
    inline void SetReceivedTime(Aws::Utils::DateTime&& value) { m_receivedTimeHasBeenSet = true; m_receivedTime = std::move(value); }
    inline DevicePosition& WithReceivedTime(const Aws::Utils::DateTime& value) { SetReceivedTime(value); return *this;}
    inline DevicePosition& WithReceivedTime(Aws::Utils::DateTime&& value) { SetReceivedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last known device position.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::Vector<double>& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::Vector<double>&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline DevicePosition& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}
    inline DevicePosition& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}
    inline DevicePosition& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The accuracy of the device position.</p>
     */
    inline const PositionalAccuracy& GetAccuracy() const{ return m_accuracy; }
    inline bool AccuracyHasBeenSet() const { return m_accuracyHasBeenSet; }
    inline void SetAccuracy(const PositionalAccuracy& value) { m_accuracyHasBeenSet = true; m_accuracy = value; }
    inline void SetAccuracy(PositionalAccuracy&& value) { m_accuracyHasBeenSet = true; m_accuracy = std::move(value); }
    inline DevicePosition& WithAccuracy(const PositionalAccuracy& value) { SetAccuracy(value); return *this;}
    inline DevicePosition& WithAccuracy(PositionalAccuracy&& value) { SetAccuracy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties associated with the position.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPositionProperties() const{ return m_positionProperties; }
    inline bool PositionPropertiesHasBeenSet() const { return m_positionPropertiesHasBeenSet; }
    inline void SetPositionProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties = value; }
    inline void SetPositionProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties = std::move(value); }
    inline DevicePosition& WithPositionProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetPositionProperties(value); return *this;}
    inline DevicePosition& WithPositionProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetPositionProperties(std::move(value)); return *this;}
    inline DevicePosition& AddPositionProperties(const Aws::String& key, const Aws::String& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(key, value); return *this; }
    inline DevicePosition& AddPositionProperties(Aws::String&& key, const Aws::String& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(std::move(key), value); return *this; }
    inline DevicePosition& AddPositionProperties(const Aws::String& key, Aws::String&& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(key, std::move(value)); return *this; }
    inline DevicePosition& AddPositionProperties(Aws::String&& key, Aws::String&& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline DevicePosition& AddPositionProperties(const char* key, Aws::String&& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(key, std::move(value)); return *this; }
    inline DevicePosition& AddPositionProperties(Aws::String&& key, const char* value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(std::move(key), value); return *this; }
    inline DevicePosition& AddPositionProperties(const char* key, const char* value) { m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Utils::DateTime m_sampleTime;
    bool m_sampleTimeHasBeenSet = false;

    Aws::Utils::DateTime m_receivedTime;
    bool m_receivedTimeHasBeenSet = false;

    Aws::Vector<double> m_position;
    bool m_positionHasBeenSet = false;

    PositionalAccuracy m_accuracy;
    bool m_accuracyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_positionProperties;
    bool m_positionPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
