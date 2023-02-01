/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/DeviceInstance.h>
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
namespace DeviceFarm
{
namespace Model
{
  class GetDeviceInstanceResult
  {
  public:
    AWS_DEVICEFARM_API GetDeviceInstanceResult();
    AWS_DEVICEFARM_API GetDeviceInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetDeviceInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about your device instance.</p>
     */
    inline const DeviceInstance& GetDeviceInstance() const{ return m_deviceInstance; }

    /**
     * <p>An object that contains information about your device instance.</p>
     */
    inline void SetDeviceInstance(const DeviceInstance& value) { m_deviceInstance = value; }

    /**
     * <p>An object that contains information about your device instance.</p>
     */
    inline void SetDeviceInstance(DeviceInstance&& value) { m_deviceInstance = std::move(value); }

    /**
     * <p>An object that contains information about your device instance.</p>
     */
    inline GetDeviceInstanceResult& WithDeviceInstance(const DeviceInstance& value) { SetDeviceInstance(value); return *this;}

    /**
     * <p>An object that contains information about your device instance.</p>
     */
    inline GetDeviceInstanceResult& WithDeviceInstance(DeviceInstance&& value) { SetDeviceInstance(std::move(value)); return *this;}

  private:

    DeviceInstance m_deviceInstance;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
