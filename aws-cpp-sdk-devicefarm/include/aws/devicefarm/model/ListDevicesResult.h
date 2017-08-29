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
#include <aws/devicefarm/model/Device.h>
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
   * <p>Represents the result of a list devices operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevicesResult">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API ListDevicesResult
  {
  public:
    ListDevicesResult();
    ListDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the devices.</p>
     */
    inline const Aws::Vector<Device>& GetDevices() const{ return m_devices; }

    /**
     * <p>Information about the devices.</p>
     */
    inline void SetDevices(const Aws::Vector<Device>& value) { m_devices = value; }

    /**
     * <p>Information about the devices.</p>
     */
    inline void SetDevices(Aws::Vector<Device>&& value) { m_devices = std::move(value); }

    /**
     * <p>Information about the devices.</p>
     */
    inline ListDevicesResult& WithDevices(const Aws::Vector<Device>& value) { SetDevices(value); return *this;}

    /**
     * <p>Information about the devices.</p>
     */
    inline ListDevicesResult& WithDevices(Aws::Vector<Device>&& value) { SetDevices(std::move(value)); return *this;}

    /**
     * <p>Information about the devices.</p>
     */
    inline ListDevicesResult& AddDevices(const Device& value) { m_devices.push_back(value); return *this; }

    /**
     * <p>Information about the devices.</p>
     */
    inline ListDevicesResult& AddDevices(Device&& value) { m_devices.push_back(std::move(value)); return *this; }


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
    inline ListDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned, which can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline ListDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Device> m_devices;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
