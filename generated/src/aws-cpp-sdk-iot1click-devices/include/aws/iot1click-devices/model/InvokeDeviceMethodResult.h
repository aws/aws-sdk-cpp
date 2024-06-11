﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InvokeDeviceMethodResult
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API InvokeDeviceMethodResult();
    AWS_IOT1CLICKDEVICESSERVICE_API InvokeDeviceMethodResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKDEVICESSERVICE_API InvokeDeviceMethodResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A JSON encoded string containing the device method response.</p>
     */
    inline const Aws::String& GetDeviceMethodResponse() const{ return m_deviceMethodResponse; }
    inline void SetDeviceMethodResponse(const Aws::String& value) { m_deviceMethodResponse = value; }
    inline void SetDeviceMethodResponse(Aws::String&& value) { m_deviceMethodResponse = std::move(value); }
    inline void SetDeviceMethodResponse(const char* value) { m_deviceMethodResponse.assign(value); }
    inline InvokeDeviceMethodResult& WithDeviceMethodResponse(const Aws::String& value) { SetDeviceMethodResponse(value); return *this;}
    inline InvokeDeviceMethodResult& WithDeviceMethodResponse(Aws::String&& value) { SetDeviceMethodResponse(std::move(value)); return *this;}
    inline InvokeDeviceMethodResult& WithDeviceMethodResponse(const char* value) { SetDeviceMethodResponse(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InvokeDeviceMethodResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InvokeDeviceMethodResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InvokeDeviceMethodResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_deviceMethodResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
