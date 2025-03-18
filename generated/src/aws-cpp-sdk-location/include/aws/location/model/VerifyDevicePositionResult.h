/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/InferredState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/location/model/DistanceUnit.h>
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
  class VerifyDevicePositionResult
  {
  public:
    AWS_LOCATIONSERVICE_API VerifyDevicePositionResult() = default;
    AWS_LOCATIONSERVICE_API VerifyDevicePositionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API VerifyDevicePositionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The inferred state of the device, given the provided position, IP address,
     * cellular signals, and Wi-Fi- access points.</p>
     */
    inline const InferredState& GetInferredState() const { return m_inferredState; }
    template<typename InferredStateT = InferredState>
    void SetInferredState(InferredStateT&& value) { m_inferredStateHasBeenSet = true; m_inferredState = std::forward<InferredStateT>(value); }
    template<typename InferredStateT = InferredState>
    VerifyDevicePositionResult& WithInferredState(InferredStateT&& value) { SetInferredState(std::forward<InferredStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device identifier.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    VerifyDevicePositionResult& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
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
    VerifyDevicePositionResult& WithSampleTime(SampleTimeT&& value) { SetSampleTime(std::forward<SampleTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the tracker resource received the device position in
     * <a href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetReceivedTime() const { return m_receivedTime; }
    template<typename ReceivedTimeT = Aws::Utils::DateTime>
    void SetReceivedTime(ReceivedTimeT&& value) { m_receivedTimeHasBeenSet = true; m_receivedTime = std::forward<ReceivedTimeT>(value); }
    template<typename ReceivedTimeT = Aws::Utils::DateTime>
    VerifyDevicePositionResult& WithReceivedTime(ReceivedTimeT&& value) { SetReceivedTime(std::forward<ReceivedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distance unit for the verification response.</p>
     */
    inline DistanceUnit GetDistanceUnit() const { return m_distanceUnit; }
    inline void SetDistanceUnit(DistanceUnit value) { m_distanceUnitHasBeenSet = true; m_distanceUnit = value; }
    inline VerifyDevicePositionResult& WithDistanceUnit(DistanceUnit value) { SetDistanceUnit(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    VerifyDevicePositionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InferredState m_inferredState;
    bool m_inferredStateHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Utils::DateTime m_sampleTime{};
    bool m_sampleTimeHasBeenSet = false;

    Aws::Utils::DateTime m_receivedTime{};
    bool m_receivedTimeHasBeenSet = false;

    DistanceUnit m_distanceUnit{DistanceUnit::NOT_SET};
    bool m_distanceUnitHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
