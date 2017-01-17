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
   * <p>Represents the result of a get device pool request.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePoolResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API GetDevicePoolResult
  {
  public:
    GetDevicePoolResult();
    GetDevicePoolResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDevicePoolResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const DevicePool& GetDevicePool() const{ return m_devicePool; }

    
    inline void SetDevicePool(const DevicePool& value) { m_devicePool = value; }

    
    inline void SetDevicePool(DevicePool&& value) { m_devicePool = value; }

    
    inline GetDevicePoolResult& WithDevicePool(const DevicePool& value) { SetDevicePool(value); return *this;}

    
    inline GetDevicePoolResult& WithDevicePool(DevicePool&& value) { SetDevicePool(value); return *this;}

  private:
    DevicePool m_devicePool;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
