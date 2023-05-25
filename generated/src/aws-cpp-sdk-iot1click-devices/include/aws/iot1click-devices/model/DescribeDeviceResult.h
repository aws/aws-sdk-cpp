/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/iot1click-devices/model/DeviceDescription.h>
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
  class DescribeDeviceResult
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API DescribeDeviceResult();
    AWS_IOT1CLICKDEVICESSERVICE_API DescribeDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKDEVICESSERVICE_API DescribeDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeviceDescription m_deviceDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
