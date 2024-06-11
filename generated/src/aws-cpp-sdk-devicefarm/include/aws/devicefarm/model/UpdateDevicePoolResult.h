﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/DevicePool.h>
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
  /**
   * <p>Represents the result of an update device pool request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDevicePoolResult">AWS
   * API Reference</a></p>
   */
  class UpdateDevicePoolResult
  {
  public:
    AWS_DEVICEFARM_API UpdateDevicePoolResult();
    AWS_DEVICEFARM_API UpdateDevicePoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API UpdateDevicePoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The device pool you just updated.</p>
     */
    inline const DevicePool& GetDevicePool() const{ return m_devicePool; }
    inline void SetDevicePool(const DevicePool& value) { m_devicePool = value; }
    inline void SetDevicePool(DevicePool&& value) { m_devicePool = std::move(value); }
    inline UpdateDevicePoolResult& WithDevicePool(const DevicePool& value) { SetDevicePool(value); return *this;}
    inline UpdateDevicePoolResult& WithDevicePool(DevicePool&& value) { SetDevicePool(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDevicePoolResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDevicePoolResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDevicePoolResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DevicePool m_devicePool;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
