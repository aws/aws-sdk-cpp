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
namespace IoT1ClickDevicesService
{
namespace Model
{
  class AWS_IOT1CLICKDEVICESSERVICE_API InvokeDeviceMethodResult
  {
  public:
    InvokeDeviceMethodResult();
    InvokeDeviceMethodResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    InvokeDeviceMethodResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JSON encoded string containing the device method response.</p>
     */
    inline const Aws::String& GetDeviceMethodResponse() const{ return m_deviceMethodResponse; }

    /**
     * <p>A JSON encoded string containing the device method response.</p>
     */
    inline void SetDeviceMethodResponse(const Aws::String& value) { m_deviceMethodResponse = value; }

    /**
     * <p>A JSON encoded string containing the device method response.</p>
     */
    inline void SetDeviceMethodResponse(Aws::String&& value) { m_deviceMethodResponse = std::move(value); }

    /**
     * <p>A JSON encoded string containing the device method response.</p>
     */
    inline void SetDeviceMethodResponse(const char* value) { m_deviceMethodResponse.assign(value); }

    /**
     * <p>A JSON encoded string containing the device method response.</p>
     */
    inline InvokeDeviceMethodResult& WithDeviceMethodResponse(const Aws::String& value) { SetDeviceMethodResponse(value); return *this;}

    /**
     * <p>A JSON encoded string containing the device method response.</p>
     */
    inline InvokeDeviceMethodResult& WithDeviceMethodResponse(Aws::String&& value) { SetDeviceMethodResponse(std::move(value)); return *this;}

    /**
     * <p>A JSON encoded string containing the device method response.</p>
     */
    inline InvokeDeviceMethodResult& WithDeviceMethodResponse(const char* value) { SetDeviceMethodResponse(value); return *this;}

  private:

    Aws::String m_deviceMethodResponse;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
