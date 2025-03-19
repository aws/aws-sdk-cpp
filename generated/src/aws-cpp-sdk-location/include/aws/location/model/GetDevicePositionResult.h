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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LocationService
{
namespace Model
{
  class GetDevicePositionResult
  {
  public:
    AWS_LOCATIONSERVICE_API GetDevicePositionResult() = default;
    AWS_LOCATIONSERVICE_API GetDevicePositionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API GetDevicePositionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The device whose position you retrieved.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    GetDevicePositionResult& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const { return m_sampleTime; }
    template<typename SampleTimeT = Aws::Utils::DateTime>
    void SetSampleTime(SampleTimeT&& value) { m_sampleTimeHasBeenSet = true; m_sampleTime = std::forward<SampleTimeT>(value); }
    template<typename SampleTimeT = Aws::Utils::DateTime>
    GetDevicePositionResult& WithSampleTime(SampleTimeT&& value) { SetSampleTime(std::forward<SampleTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the tracker resource received the device position.
     * Uses <a href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601
     * </a> format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetReceivedTime() const { return m_receivedTime; }
    template<typename ReceivedTimeT = Aws::Utils::DateTime>
    void SetReceivedTime(ReceivedTimeT&& value) { m_receivedTimeHasBeenSet = true; m_receivedTime = std::forward<ReceivedTimeT>(value); }
    template<typename ReceivedTimeT = Aws::Utils::DateTime>
    GetDevicePositionResult& WithReceivedTime(ReceivedTimeT&& value) { SetReceivedTime(std::forward<ReceivedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last known device position.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const { return m_position; }
    template<typename PositionT = Aws::Vector<double>>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::Vector<double>>
    GetDevicePositionResult& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    inline GetDevicePositionResult& AddPosition(double value) { m_positionHasBeenSet = true; m_position.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The accuracy of the device position.</p>
     */
    inline const PositionalAccuracy& GetAccuracy() const { return m_accuracy; }
    template<typename AccuracyT = PositionalAccuracy>
    void SetAccuracy(AccuracyT&& value) { m_accuracyHasBeenSet = true; m_accuracy = std::forward<AccuracyT>(value); }
    template<typename AccuracyT = PositionalAccuracy>
    GetDevicePositionResult& WithAccuracy(AccuracyT&& value) { SetAccuracy(std::forward<AccuracyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties associated with the position.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPositionProperties() const { return m_positionProperties; }
    template<typename PositionPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetPositionProperties(PositionPropertiesT&& value) { m_positionPropertiesHasBeenSet = true; m_positionProperties = std::forward<PositionPropertiesT>(value); }
    template<typename PositionPropertiesT = Aws::Map<Aws::String, Aws::String>>
    GetDevicePositionResult& WithPositionProperties(PositionPropertiesT&& value) { SetPositionProperties(std::forward<PositionPropertiesT>(value)); return *this;}
    template<typename PositionPropertiesKeyT = Aws::String, typename PositionPropertiesValueT = Aws::String>
    GetDevicePositionResult& AddPositionProperties(PositionPropertiesKeyT&& key, PositionPropertiesValueT&& value) {
      m_positionPropertiesHasBeenSet = true; m_positionProperties.emplace(std::forward<PositionPropertiesKeyT>(key), std::forward<PositionPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDevicePositionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
