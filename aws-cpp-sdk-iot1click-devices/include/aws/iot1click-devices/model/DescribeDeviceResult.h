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
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/iot1click-devices/model/DeviceDescription.h>
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
namespace IoT1ClickDevicesService
{
namespace Model
{
  class AWS_IOT1CLICKDEVICESSERVICE_API DescribeDeviceResult
  {
  public:
    DescribeDeviceResult();
    DescribeDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Device details.</p>
     */
    inline const DeviceDescription& GetDeviceDescription() const{ return m_deviceDescription; }

    /**
     * <p>Device details.</p>
     */
    inline void SetDeviceDescription(const DeviceDescription& value) { m_deviceDescription = value; }

    /**
     * <p>Device details.</p>
     */
    inline void SetDeviceDescription(DeviceDescription&& value) { m_deviceDescription = std::move(value); }

    /**
     * <p>Device details.</p>
     */
    inline DescribeDeviceResult& WithDeviceDescription(const DeviceDescription& value) { SetDeviceDescription(value); return *this;}

    /**
     * <p>Device details.</p>
     */
    inline DescribeDeviceResult& WithDeviceDescription(DeviceDescription&& value) { SetDeviceDescription(std::move(value)); return *this;}

  private:

    DeviceDescription m_deviceDescription;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
