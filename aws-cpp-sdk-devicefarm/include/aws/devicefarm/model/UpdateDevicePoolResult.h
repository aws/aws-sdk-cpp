﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/model/DevicePool.h>

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
  /**
   * <p>Represents the result of an update device pool request.</p>
   */
  class AWS_DEVICEFARM_API UpdateDevicePoolResult
  {
  public:
    UpdateDevicePoolResult();
    UpdateDevicePoolResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateDevicePoolResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const DevicePool& GetDevicePool() const{ return m_devicePool; }

    
    inline void SetDevicePool(const DevicePool& value) { m_devicePool = value; }

    
    inline void SetDevicePool(DevicePool&& value) { m_devicePool = value; }

    
    inline UpdateDevicePoolResult& WithDevicePool(const DevicePool& value) { SetDevicePool(value); return *this;}

    
    inline UpdateDevicePoolResult& WithDevicePool(DevicePool&& value) { SetDevicePool(value); return *this;}

  private:
    DevicePool m_devicePool;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
