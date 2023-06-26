/**
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
  class UpdateDeviceInstanceResult
  {
  public:
    AWS_DEVICEFARM_API UpdateDeviceInstanceResult();
    AWS_DEVICEFARM_API UpdateDeviceInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API UpdateDeviceInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateDeviceInstanceResult& WithDeviceInstance(const DeviceInstance& value) { SetDeviceInstance(value); return *this;}

    /**
     * <p>An object that contains information about your device instance.</p>
     */
    inline UpdateDeviceInstanceResult& WithDeviceInstance(DeviceInstance&& value) { SetDeviceInstance(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateDeviceInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateDeviceInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateDeviceInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeviceInstance m_deviceInstance;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
