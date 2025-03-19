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
    AWS_LOCATIONSERVICE_API DevicePosition() = default;
    AWS_LOCATIONSERVICE_API DevicePosition(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API DevicePosition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device whose position you retrieved.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    DevicePosition& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const { return m_sampleTime; }
    inline bool SampleTimeHasBeenSet() const { return m_sampleTimeHasBeenSet; }
    template<typename SampleTimeT = Aws::Utils::DateTime>
    void SetSampleTime(SampleTimeT&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::forward<SampleTimeT>(value); }
    template<typename SampleTimeT = Aws::Utils::DateTime>
    DevicePosition& WithSampleTime(SampleTimeT&& value) { SetSampleTime(std::forward<SampleTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the tracker resource received the device position in
     * <a href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetReceivedTime() const { return m_receivedTime; }
    inline bool ReceivedTimeHasBeenSet() const { return m_receivedTimeHasBeenSet; }
    template<typename ReceivedTimeT = Aws::Utils::DateTime>
    void SetReceivedTime(ReceivedTimeT&& value) { m_receivedTimeHasBeenSet = true; m_receivedTime = std::forward<ReceivedTimeT>(value); }
    template<typename ReceivedTimeT = Aws::Utils::DateTime>
    DevicePosition& WithReceivedTime(ReceivedTimeT&& value) { SetReceivedTime(std::forward<ReceivedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last known device position.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    DevicePosition& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline DevicePosition& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The accuracy of the device position.</p>
     */
    inline const PositionalAccuracy& GetAccuracy() const { return m_accuracy; }
    inline bool AccuracyHasBeenSet() const { return m_accuracyHasBeenSet; }
    template<typename AccuracyT = PositionalAccuracy>
    void SetAccuracy(AccuracyT&& value) { m_accuracyHasBeenSet = true; m_accuracy = std::forward<AccuracyT>(value); }
    template<typename AccuracyT = PositionalAccuracy>
    DevicePosition& WithAccuracy(AccuracyT&& value) { SetAccuracy(std::forward<AccuracyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties associated with the position.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPositionProperties() const { return m_positionProperties; }
    inline bool PositionPropertiesHasBeenSet() const { return m_positionPropertiesHasBeenSet; }
    template<typename PositionPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetPositionProperties(PositionPropertiesT&& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties = std::forward<PositionPropertiesT>(value); }
    template<typename PositionPropertiesT = Aws::Map<Aws::String, Aws::String>>
    DevicePosition& WithPositionProperties(PositionPropertiesT&& value) { SetPositionProperties(std::forward<PositionPropertiesT>(value)); return *this;}
    template<typename PositionPropertiesKeyT = Aws::String, typename PositionPropertiesValueT = Aws::String>
    DevicePosition& AddPositionProperties(PositionPropertiesKeyT&& key, PositionPropertiesValueT&& value) {
      m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(std::forward<PositionPropertiesKeyT>(key), std::forward<PositionPropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Utils::DateTime m_sampleTime{};
    bool m_sampleTimeHasBeenSet = false;

    Aws::Utils::DateTime m_receivedTime{};
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
