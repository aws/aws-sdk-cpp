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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_IOT1CLICKDEVICESSERVICE_API ListDevicesResult
  {
  public:
    ListDevicesResult();
    ListDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of devices.</p>
     */
    inline const Aws::Vector<DeviceDescription>& GetDevices() const{ return m_devices; }

    /**
     * <p>A list of devices.</p>
     */
    inline void SetDevices(const Aws::Vector<DeviceDescription>& value) { m_devices = value; }

    /**
     * <p>A list of devices.</p>
     */
    inline void SetDevices(Aws::Vector<DeviceDescription>&& value) { m_devices = std::move(value); }

    /**
     * <p>A list of devices.</p>
     */
    inline ListDevicesResult& WithDevices(const Aws::Vector<DeviceDescription>& value) { SetDevices(value); return *this;}

    /**
     * <p>A list of devices.</p>
     */
    inline ListDevicesResult& WithDevices(Aws::Vector<DeviceDescription>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>A list of devices.</p>
     */
    inline ListDevicesResult& AddDevices(const DeviceDescription& value) { m_devices.push_back(value); return *this; }

    /**
     * <p>A list of devices.</p>
     */
    inline ListDevicesResult& AddDevices(DeviceDescription&& value) { m_devices.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeviceDescription> m_devices;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
