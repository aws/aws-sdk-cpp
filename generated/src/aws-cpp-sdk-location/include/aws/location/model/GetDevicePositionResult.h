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
    AWS_LOCATIONSERVICE_API GetDevicePositionResult();
    AWS_LOCATIONSERVICE_API GetDevicePositionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API GetDevicePositionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The accuracy of the device position.</p>
     */
    inline const PositionalAccuracy& GetAccuracy() const{ return m_accuracy; }

    /**
     * <p>The accuracy of the device position.</p>
     */
    inline void SetAccuracy(const PositionalAccuracy& value) { m_accuracy = value; }

    /**
     * <p>The accuracy of the device position.</p>
     */
    inline void SetAccuracy(PositionalAccuracy&& value) { m_accuracy = std::move(value); }

    /**
     * <p>The accuracy of the device position.</p>
     */
    inline GetDevicePositionResult& WithAccuracy(const PositionalAccuracy& value) { SetAccuracy(value); return *this;}

    /**
     * <p>The accuracy of the device position.</p>
     */
    inline GetDevicePositionResult& WithAccuracy(PositionalAccuracy&& value) { SetAccuracy(std::move(value)); return *this;}


    /**
     * <p>The device whose position you retrieved.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The device whose position you retrieved.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceId = value; }

    /**
     * <p>The device whose position you retrieved.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceId = std::move(value); }

    /**
     * <p>The device whose position you retrieved.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceId.assign(value); }

    /**
     * <p>The device whose position you retrieved.</p>
     */
    inline GetDevicePositionResult& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The device whose position you retrieved.</p>
     */
    inline GetDevicePositionResult& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The device whose position you retrieved.</p>
     */
    inline GetDevicePositionResult& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The last known device position.</p>
     */
    inline const Aws::Vector<double>& GetPosition() const{ return m_position; }

    /**
     * <p>The last known device position.</p>
     */
    inline void SetPosition(const Aws::Vector<double>& value) { m_position = value; }

    /**
     * <p>The last known device position.</p>
     */
    inline void SetPosition(Aws::Vector<double>&& value) { m_position = std::move(value); }

    /**
     * <p>The last known device position.</p>
     */
    inline GetDevicePositionResult& WithPosition(const Aws::Vector<double>& value) { SetPosition(value); return *this;}

    /**
     * <p>The last known device position.</p>
     */
    inline GetDevicePositionResult& WithPosition(Aws::Vector<double>&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>The last known device position.</p>
     */
    inline GetDevicePositionResult& AddPosition(double value) { m_position.push_back(value); return *this; }


    /**
     * <p>The properties associated with the position.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPositionProperties() const{ return m_positionProperties; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline void SetPositionProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_positionProperties = value; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline void SetPositionProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_positionProperties = std::move(value); }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline GetDevicePositionResult& WithPositionProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetPositionProperties(value); return *this;}

    /**
     * <p>The properties associated with the position.</p>
     */
    inline GetDevicePositionResult& WithPositionProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetPositionProperties(std::move(value)); return *this;}

    /**
     * <p>The properties associated with the position.</p>
     */
    inline GetDevicePositionResult& AddPositionProperties(const Aws::String& key, const Aws::String& value) { m_positionProperties.emplace(key, value); return *this; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline GetDevicePositionResult& AddPositionProperties(Aws::String&& key, const Aws::String& value) { m_positionProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline GetDevicePositionResult& AddPositionProperties(const Aws::String& key, Aws::String&& value) { m_positionProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline GetDevicePositionResult& AddPositionProperties(Aws::String&& key, Aws::String&& value) { m_positionProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline GetDevicePositionResult& AddPositionProperties(const char* key, Aws::String&& value) { m_positionProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline GetDevicePositionResult& AddPositionProperties(Aws::String&& key, const char* value) { m_positionProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The properties associated with the position.</p>
     */
    inline GetDevicePositionResult& AddPositionProperties(const char* key, const char* value) { m_positionProperties.emplace(key, value); return *this; }


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
    inline GetDevicePositionResult& WithReceivedTime(const Aws::Utils::DateTime& value) { SetReceivedTime(value); return *this;}

    /**
     * <p>The timestamp for when the tracker resource received the device position in
     * <a href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline GetDevicePositionResult& WithReceivedTime(Aws::Utils::DateTime&& value) { SetReceivedTime(std::move(value)); return *this;}


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
    inline GetDevicePositionResult& WithSampleTime(const Aws::Utils::DateTime& value) { SetSampleTime(value); return *this;}

    /**
     * <p>The timestamp at which the device's position was determined. Uses <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601 </a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. </p>
     */
    inline GetDevicePositionResult& WithSampleTime(Aws::Utils::DateTime&& value) { SetSampleTime(std::move(value)); return *this;}

  private:

    PositionalAccuracy m_accuracy;

    Aws::String m_deviceId;

    Aws::Vector<double> m_position;

    Aws::Map<Aws::String, Aws::String> m_positionProperties;

    Aws::Utils::DateTime m_receivedTime;

    Aws::Utils::DateTime m_sampleTime;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
