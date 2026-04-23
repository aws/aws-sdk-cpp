/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/worklink/model/DeviceStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WorkLink
{
namespace Model
{
  class AWS_WORKLINK_API DescribeDeviceResult
  {
  public:
    DescribeDeviceResult();
    DescribeDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current state of the device.</p>
     */
    inline const DeviceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the device.</p>
     */
    inline void SetStatus(const DeviceStatus& value) { m_status = value; }

    /**
     * <p>The current state of the device.</p>
     */
    inline void SetStatus(DeviceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current state of the device.</p>
     */
    inline DescribeDeviceResult& WithStatus(const DeviceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the device.</p>
     */
    inline DescribeDeviceResult& WithStatus(DeviceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The model of the device.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * <p>The model of the device.</p>
     */
    inline void SetModel(const Aws::String& value) { m_model = value; }

    /**
     * <p>The model of the device.</p>
     */
    inline void SetModel(Aws::String&& value) { m_model = std::move(value); }

    /**
     * <p>The model of the device.</p>
     */
    inline void SetModel(const char* value) { m_model.assign(value); }

    /**
     * <p>The model of the device.</p>
     */
    inline DescribeDeviceResult& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * <p>The model of the device.</p>
     */
    inline DescribeDeviceResult& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}

    /**
     * <p>The model of the device.</p>
     */
    inline DescribeDeviceResult& WithModel(const char* value) { SetModel(value); return *this;}


    /**
     * <p>The manufacturer of the device.</p>
     */
    inline const Aws::String& GetManufacturer() const{ return m_manufacturer; }

    /**
     * <p>The manufacturer of the device.</p>
     */
    inline void SetManufacturer(const Aws::String& value) { m_manufacturer = value; }

    /**
     * <p>The manufacturer of the device.</p>
     */
    inline void SetManufacturer(Aws::String&& value) { m_manufacturer = std::move(value); }

    /**
     * <p>The manufacturer of the device.</p>
     */
    inline void SetManufacturer(const char* value) { m_manufacturer.assign(value); }

    /**
     * <p>The manufacturer of the device.</p>
     */
    inline DescribeDeviceResult& WithManufacturer(const Aws::String& value) { SetManufacturer(value); return *this;}

    /**
     * <p>The manufacturer of the device.</p>
     */
    inline DescribeDeviceResult& WithManufacturer(Aws::String&& value) { SetManufacturer(std::move(value)); return *this;}

    /**
     * <p>The manufacturer of the device.</p>
     */
    inline DescribeDeviceResult& WithManufacturer(const char* value) { SetManufacturer(value); return *this;}


    /**
     * <p>The operating system of the device.</p>
     */
    inline const Aws::String& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>The operating system of the device.</p>
     */
    inline void SetOperatingSystem(const Aws::String& value) { m_operatingSystem = value; }

    /**
     * <p>The operating system of the device.</p>
     */
    inline void SetOperatingSystem(Aws::String&& value) { m_operatingSystem = std::move(value); }

    /**
     * <p>The operating system of the device.</p>
     */
    inline void SetOperatingSystem(const char* value) { m_operatingSystem.assign(value); }

    /**
     * <p>The operating system of the device.</p>
     */
    inline DescribeDeviceResult& WithOperatingSystem(const Aws::String& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>The operating system of the device.</p>
     */
    inline DescribeDeviceResult& WithOperatingSystem(Aws::String&& value) { SetOperatingSystem(std::move(value)); return *this;}

    /**
     * <p>The operating system of the device.</p>
     */
    inline DescribeDeviceResult& WithOperatingSystem(const char* value) { SetOperatingSystem(value); return *this;}


    /**
     * <p>The operating system version of the device.</p>
     */
    inline const Aws::String& GetOperatingSystemVersion() const{ return m_operatingSystemVersion; }

    /**
     * <p>The operating system version of the device.</p>
     */
    inline void SetOperatingSystemVersion(const Aws::String& value) { m_operatingSystemVersion = value; }

    /**
     * <p>The operating system version of the device.</p>
     */
    inline void SetOperatingSystemVersion(Aws::String&& value) { m_operatingSystemVersion = std::move(value); }

    /**
     * <p>The operating system version of the device.</p>
     */
    inline void SetOperatingSystemVersion(const char* value) { m_operatingSystemVersion.assign(value); }

    /**
     * <p>The operating system version of the device.</p>
     */
    inline DescribeDeviceResult& WithOperatingSystemVersion(const Aws::String& value) { SetOperatingSystemVersion(value); return *this;}

    /**
     * <p>The operating system version of the device.</p>
     */
    inline DescribeDeviceResult& WithOperatingSystemVersion(Aws::String&& value) { SetOperatingSystemVersion(std::move(value)); return *this;}

    /**
     * <p>The operating system version of the device.</p>
     */
    inline DescribeDeviceResult& WithOperatingSystemVersion(const char* value) { SetOperatingSystemVersion(value); return *this;}


    /**
     * <p>The operating system patch level of the device.</p>
     */
    inline const Aws::String& GetPatchLevel() const{ return m_patchLevel; }

    /**
     * <p>The operating system patch level of the device.</p>
     */
    inline void SetPatchLevel(const Aws::String& value) { m_patchLevel = value; }

    /**
     * <p>The operating system patch level of the device.</p>
     */
    inline void SetPatchLevel(Aws::String&& value) { m_patchLevel = std::move(value); }

    /**
     * <p>The operating system patch level of the device.</p>
     */
    inline void SetPatchLevel(const char* value) { m_patchLevel.assign(value); }

    /**
     * <p>The operating system patch level of the device.</p>
     */
    inline DescribeDeviceResult& WithPatchLevel(const Aws::String& value) { SetPatchLevel(value); return *this;}

    /**
     * <p>The operating system patch level of the device.</p>
     */
    inline DescribeDeviceResult& WithPatchLevel(Aws::String&& value) { SetPatchLevel(std::move(value)); return *this;}

    /**
     * <p>The operating system patch level of the device.</p>
     */
    inline DescribeDeviceResult& WithPatchLevel(const char* value) { SetPatchLevel(value); return *this;}


    /**
     * <p>The date that the device first signed in to Amazon WorkLink.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstAccessedTime() const{ return m_firstAccessedTime; }

    /**
     * <p>The date that the device first signed in to Amazon WorkLink.</p>
     */
    inline void SetFirstAccessedTime(const Aws::Utils::DateTime& value) { m_firstAccessedTime = value; }

    /**
     * <p>The date that the device first signed in to Amazon WorkLink.</p>
     */
    inline void SetFirstAccessedTime(Aws::Utils::DateTime&& value) { m_firstAccessedTime = std::move(value); }

    /**
     * <p>The date that the device first signed in to Amazon WorkLink.</p>
     */
    inline DescribeDeviceResult& WithFirstAccessedTime(const Aws::Utils::DateTime& value) { SetFirstAccessedTime(value); return *this;}

    /**
     * <p>The date that the device first signed in to Amazon WorkLink.</p>
     */
    inline DescribeDeviceResult& WithFirstAccessedTime(Aws::Utils::DateTime&& value) { SetFirstAccessedTime(std::move(value)); return *this;}


    /**
     * <p>The date that the device last accessed Amazon WorkLink.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedTime() const{ return m_lastAccessedTime; }

    /**
     * <p>The date that the device last accessed Amazon WorkLink.</p>
     */
    inline void SetLastAccessedTime(const Aws::Utils::DateTime& value) { m_lastAccessedTime = value; }

    /**
     * <p>The date that the device last accessed Amazon WorkLink.</p>
     */
    inline void SetLastAccessedTime(Aws::Utils::DateTime&& value) { m_lastAccessedTime = std::move(value); }

    /**
     * <p>The date that the device last accessed Amazon WorkLink.</p>
     */
    inline DescribeDeviceResult& WithLastAccessedTime(const Aws::Utils::DateTime& value) { SetLastAccessedTime(value); return *this;}

    /**
     * <p>The date that the device last accessed Amazon WorkLink.</p>
     */
    inline DescribeDeviceResult& WithLastAccessedTime(Aws::Utils::DateTime&& value) { SetLastAccessedTime(std::move(value)); return *this;}


    /**
     * <p>The user name associated with the device.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name associated with the device.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_username = value; }

    /**
     * <p>The user name associated with the device.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_username = std::move(value); }

    /**
     * <p>The user name associated with the device.</p>
     */
    inline void SetUsername(const char* value) { m_username.assign(value); }

    /**
     * <p>The user name associated with the device.</p>
     */
    inline DescribeDeviceResult& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name associated with the device.</p>
     */
    inline DescribeDeviceResult& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name associated with the device.</p>
     */
    inline DescribeDeviceResult& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    DeviceStatus m_status;

    Aws::String m_model;

    Aws::String m_manufacturer;

    Aws::String m_operatingSystem;

    Aws::String m_operatingSystemVersion;

    Aws::String m_patchLevel;

    Aws::Utils::DateTime m_firstAccessedTime;

    Aws::Utils::DateTime m_lastAccessedTime;

    Aws::String m_username;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
