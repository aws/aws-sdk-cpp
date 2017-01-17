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
#include <aws/devicefarm/model/Device.h>

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
   * <p>Represents the result of a get device request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDeviceResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API GetDeviceResult
  {
  public:
    GetDeviceResult();
    GetDeviceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeviceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Device& GetDevice() const{ return m_device; }

    
    inline void SetDevice(const Device& value) { m_device = value; }

    
    inline void SetDevice(Device&& value) { m_device = value; }

    
    inline GetDeviceResult& WithDevice(const Device& value) { SetDevice(value); return *this;}

    
    inline GetDeviceResult& WithDevice(Device&& value) { SetDevice(value); return *this;}

  private:
    Device m_device;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
