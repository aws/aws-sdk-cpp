/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_DEVICEFARM_API ListDevicePoolsResult
  {
  public:
    ListDevicePoolsResult();
    ListDevicePoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDevicePoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the device pools.</p>
     */
    inline const Aws::Vector<DevicePool>& GetDevicePools() const{ return m_devicePools; }

    /**
     * <p>Information about the device pools.</p>
     */
    inline void SetDevicePools(const Aws::Vector<DevicePool>& value) { m_devicePools = value; }

    /**
     * <p>Information about the device pools.</p>
     */
    inline void SetDevicePools(Aws::Vector<DevicePool>&& value) { m_devicePools = std::move(value); }

    /**
     * <p>Information about the device pools.</p>
     */
    inline ListDevicePoolsResult& WithDevicePools(const Aws::Vector<DevicePool>& value) { SetDevicePools(value); return *this;}

    /**
     * <p>Information about the device pools.</p>
     */
    inline ListDevicePoolsResult& WithDevicePools(Aws::Vector<DevicePool>&& value) { SetDevicePools(std::move(value)); return *this;}

    /**
     * <p>Information about the device pools.</p>
     */
    inline ListDevicePoolsResult& AddDevicePools(const DevicePool& value) { m_devicePools.push_back(value); return *this; }

    /**
     * <p>Information about the device pools.</p>
     */
    inline ListDevicePoolsResult& AddDevicePools(DevicePool&& value) { m_devicePools.push_back(std::move(value)); return *this; }


    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListDevicePoolsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListDevicePoolsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListDevicePoolsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DevicePool> m_devicePools;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
