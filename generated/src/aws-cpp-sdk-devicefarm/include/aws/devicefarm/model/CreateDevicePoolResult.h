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
   * <p>Represents the result of a create device pool request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateDevicePoolResult">AWS
   * API Reference</a></p>
   */
  class CreateDevicePoolResult
  {
  public:
    AWS_DEVICEFARM_API CreateDevicePoolResult();
    AWS_DEVICEFARM_API CreateDevicePoolResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API CreateDevicePoolResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The newly created device pool.</p>
     */
    inline const DevicePool& GetDevicePool() const{ return m_devicePool; }
    inline void SetDevicePool(const DevicePool& value) { m_devicePool = value; }
    inline void SetDevicePool(DevicePool&& value) { m_devicePool = std::move(value); }
    inline CreateDevicePoolResult& WithDevicePool(const DevicePool& value) { SetDevicePool(value); return *this;}
    inline CreateDevicePoolResult& WithDevicePool(DevicePool&& value) { SetDevicePool(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDevicePoolResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDevicePoolResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDevicePoolResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DevicePool m_devicePool;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
