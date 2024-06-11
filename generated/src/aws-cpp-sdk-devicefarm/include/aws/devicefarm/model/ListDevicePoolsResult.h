﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/DevicePool.h>
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
   * <p>Represents the result of a list device pools request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevicePoolsResult">AWS
   * API Reference</a></p>
   */
  class ListDevicePoolsResult
  {
  public:
    AWS_DEVICEFARM_API ListDevicePoolsResult();
    AWS_DEVICEFARM_API ListDevicePoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListDevicePoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the device pools.</p>
     */
    inline const Aws::Vector<DevicePool>& GetDevicePools() const{ return m_devicePools; }
    inline void SetDevicePools(const Aws::Vector<DevicePool>& value) { m_devicePools = value; }
    inline void SetDevicePools(Aws::Vector<DevicePool>&& value) { m_devicePools = std::move(value); }
    inline ListDevicePoolsResult& WithDevicePools(const Aws::Vector<DevicePool>& value) { SetDevicePools(value); return *this;}
    inline ListDevicePoolsResult& WithDevicePools(Aws::Vector<DevicePool>&& value) { SetDevicePools(std::move(value)); return *this;}
    inline ListDevicePoolsResult& AddDevicePools(const DevicePool& value) { m_devicePools.push_back(value); return *this; }
    inline ListDevicePoolsResult& AddDevicePools(DevicePool&& value) { m_devicePools.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDevicePoolsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDevicePoolsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDevicePoolsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDevicePoolsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDevicePoolsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDevicePoolsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DevicePool> m_devicePools;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
