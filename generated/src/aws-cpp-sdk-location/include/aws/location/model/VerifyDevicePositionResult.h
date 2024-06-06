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
    AWS_LOCATIONSERVICE_API VerifyDevicePositionResult();
    AWS_LOCATIONSERVICE_API VerifyDevicePositionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API VerifyDevicePositionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The inferred state of the device, given the provided position, IP address,
     * cellular signals, and Wi-Fi- access points.</p>
     */
    inline const InferredState& GetInferredState() const{ return m_inferredState; }

    /**
     * <p>The inferred state of the device, given the provided position, IP address,
     * cellular signals, and Wi-Fi- access points.</p>
     */
    inline void SetInferredState(const InferredState& value) { m_inferredState = value; }

    /**
     * <p>The inferred state of the device, given the provided position, IP address,
     * cellular signals, and Wi-Fi- access points.</p>
     */
    inline void SetInferredState(InferredState&& value) { m_inferredState = std::move(value); }

    /**
     * <p>The inferred state of the device, given the provided position, IP address,
     * cellular signals, and Wi-Fi- access points.</p>
     */
    inline VerifyDevicePositionResult& WithInferredState(const InferredState& value) { SetInferredState(value); return *this;}

    /**
     * <p>The inferred state of the device, given the provided position, IP address,
     * cellular signals, and Wi-Fi- access points.</p>
     */
    inline VerifyDevicePositionResult& WithInferredState(InferredState&& value) { SetInferredState(std::move(value)); return *this;}


    /**
     * <p>The device identifier.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The device identifier.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceId = value; }

    /**
     * <p>The device identifier.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceId = std::move(value); }

    /**
     * <p>The device identifier.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceId.assign(value); }

    /**
     * <p>The device identifier.</p>
     */
    inline VerifyDevicePositionResult& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The device identifier.</p>
     */
    inline VerifyDevicePositionResult& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The device identifier.</p>
     */
    inline VerifyDevicePositionResult& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetSampleTime() const{ return m_sampleTime; }

    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetSampleTime(const Aws::Utils::DateTime& value) { m_sampleTime = value; }

    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetSampleTime(Aws::Utils::DateTime&& value) { m_sampleTime = std::move(value); }

    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline VerifyDevicePositionResult& WithSampleTime(const Aws::Utils::DateTime& value) { SetSampleTime(value); return *this;}

    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline VerifyDevicePositionResult& WithSampleTime(Aws::Utils::DateTime&& value) { SetSampleTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp for when the tracker resource received the device position in
     * <a href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline const Aws::Utils::DateTime& GetReceivedTime() const{ return m_receivedTime; }

    /**
     * <p>The timestamp for when the tracker resource received the device position in
     * <a href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetReceivedTime(const Aws::Utils::DateTime& value) { m_receivedTime = value; }

    /**
     * <p>The timestamp for when the tracker resource received the device position in
     * <a href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline void SetReceivedTime(Aws::Utils::DateTime&& value) { m_receivedTime = std::move(value); }

    /**
     * <p>The timestamp for when the tracker resource received the device position in
     * <a href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline VerifyDevicePositionResult& WithReceivedTime(const Aws::Utils::DateTime& value) { SetReceivedTime(value); return *this;}

    /**
     * <p>The timestamp for when the tracker resource received the device position in
     * <a href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline VerifyDevicePositionResult& WithReceivedTime(Aws::Utils::DateTime&& value) { SetReceivedTime(std::move(value)); return *this;}


    /**
     * <p>The distance unit for the verification response.</p>
     */
    inline const DistanceUnit& GetDistanceUnit() const{ return m_distanceUnit; }

    /**
     * <p>The distance unit for the verification response.</p>
     */
    inline void SetDistanceUnit(const DistanceUnit& value) { m_distanceUnit = value; }

    /**
     * <p>The distance unit for the verification response.</p>
     */
    inline void SetDistanceUnit(DistanceUnit&& value) { m_distanceUnit = std::move(value); }

    /**
     * <p>The distance unit for the verification response.</p>
     */
    inline VerifyDevicePositionResult& WithDistanceUnit(const DistanceUnit& value) { SetDistanceUnit(value); return *this;}

    /**
     * <p>The distance unit for the verification response.</p>
     */
    inline VerifyDevicePositionResult& WithDistanceUnit(DistanceUnit&& value) { SetDistanceUnit(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline VerifyDevicePositionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline VerifyDevicePositionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline VerifyDevicePositionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    InferredState m_inferredState;

    Aws::String m_deviceId;

    Aws::Utils::DateTime m_sampleTime;

    Aws::Utils::DateTime m_receivedTime;

    DistanceUnit m_distanceUnit;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
