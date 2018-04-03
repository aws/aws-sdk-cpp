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
  class AWS_DEVICEFARM_API UpdateDeviceInstanceResult
  {
  public:
    UpdateDeviceInstanceResult();
    UpdateDeviceInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDeviceInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing information about your device instance.</p>
     */
    inline const DeviceInstance& GetDeviceInstance() const{ return m_deviceInstance; }

    /**
     * <p>An object containing information about your device instance.</p>
     */
    inline void SetDeviceInstance(const DeviceInstance& value) { m_deviceInstance = value; }

    /**
     * <p>An object containing information about your device instance.</p>
     */
    inline void SetDeviceInstance(DeviceInstance&& value) { m_deviceInstance = std::move(value); }

    /**
     * <p>An object containing information about your device instance.</p>
     */
    inline UpdateDeviceInstanceResult& WithDeviceInstance(const DeviceInstance& value) { SetDeviceInstance(value); return *this;}

    /**
     * <p>An object containing information about your device instance.</p>
     */
    inline UpdateDeviceInstanceResult& WithDeviceInstance(DeviceInstance&& value) { SetDeviceInstance(std::move(value)); return *this;}

  private:

    DeviceInstance m_deviceInstance;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
