﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/DeviceInstance.h>
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


    ///@{
    /**
     * <p>An object that contains information about your device instance.</p>
     */
    inline const DeviceInstance& GetDeviceInstance() const{ return m_deviceInstance; }
    inline void SetDeviceInstance(const DeviceInstance& value) { m_deviceInstance = value; }
    inline void SetDeviceInstance(DeviceInstance&& value) { m_deviceInstance = std::move(value); }
    inline GetDeviceInstanceResult& WithDeviceInstance(const DeviceInstance& value) { SetDeviceInstance(value); return *this;}
    inline GetDeviceInstanceResult& WithDeviceInstance(DeviceInstance&& value) { SetDeviceInstance(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDeviceInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDeviceInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDeviceInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DeviceInstance m_deviceInstance;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
