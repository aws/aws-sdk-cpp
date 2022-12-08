/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT1ClickProjects
{
namespace Model
{
  class GetDevicesInPlacementResult
  {
  public:
    AWS_IOT1CLICKPROJECTS_API GetDevicesInPlacementResult();
    AWS_IOT1CLICKPROJECTS_API GetDevicesInPlacementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKPROJECTS_API GetDevicesInPlacementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDevices() const{ return m_devices; }

    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline void SetDevices(const Aws::Map<Aws::String, Aws::String>& value) { m_devices = value; }

    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline void SetDevices(Aws::Map<Aws::String, Aws::String>&& value) { m_devices = std::move(value); }

    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline GetDevicesInPlacementResult& WithDevices(const Aws::Map<Aws::String, Aws::String>& value) { SetDevices(value); return *this;}

    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline GetDevicesInPlacementResult& WithDevices(Aws::Map<Aws::String, Aws::String>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline GetDevicesInPlacementResult& AddDevices(const Aws::String& key, const Aws::String& value) { m_devices.emplace(key, value); return *this; }

    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline GetDevicesInPlacementResult& AddDevices(Aws::String&& key, const Aws::String& value) { m_devices.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline GetDevicesInPlacementResult& AddDevices(const Aws::String& key, Aws::String&& value) { m_devices.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline GetDevicesInPlacementResult& AddDevices(Aws::String&& key, Aws::String&& value) { m_devices.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline GetDevicesInPlacementResult& AddDevices(const char* key, Aws::String&& value) { m_devices.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline GetDevicesInPlacementResult& AddDevices(Aws::String&& key, const char* value) { m_devices.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object containing the devices (zero or more) within the placement.</p>
     */
    inline GetDevicesInPlacementResult& AddDevices(const char* key, const char* value) { m_devices.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_devices;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
