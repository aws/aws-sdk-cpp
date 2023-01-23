/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/DeviceInstance.h>
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
  class ListDeviceInstancesResult
  {
  public:
    AWS_DEVICEFARM_API ListDeviceInstancesResult();
    AWS_DEVICEFARM_API ListDeviceInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListDeviceInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about your device instances.</p>
     */
    inline const Aws::Vector<DeviceInstance>& GetDeviceInstances() const{ return m_deviceInstances; }

    /**
     * <p>An object that contains information about your device instances.</p>
     */
    inline void SetDeviceInstances(const Aws::Vector<DeviceInstance>& value) { m_deviceInstances = value; }

    /**
     * <p>An object that contains information about your device instances.</p>
     */
    inline void SetDeviceInstances(Aws::Vector<DeviceInstance>&& value) { m_deviceInstances = std::move(value); }

    /**
     * <p>An object that contains information about your device instances.</p>
     */
    inline ListDeviceInstancesResult& WithDeviceInstances(const Aws::Vector<DeviceInstance>& value) { SetDeviceInstances(value); return *this;}

    /**
     * <p>An object that contains information about your device instances.</p>
     */
    inline ListDeviceInstancesResult& WithDeviceInstances(Aws::Vector<DeviceInstance>&& value) { SetDeviceInstances(std::move(value)); return *this;}

    /**
     * <p>An object that contains information about your device instances.</p>
     */
    inline ListDeviceInstancesResult& AddDeviceInstances(const DeviceInstance& value) { m_deviceInstances.push_back(value); return *this; }

    /**
     * <p>An object that contains information about your device instances.</p>
     */
    inline ListDeviceInstancesResult& AddDeviceInstances(DeviceInstance&& value) { m_deviceInstances.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListDeviceInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListDeviceInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline ListDeviceInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeviceInstance> m_deviceInstances;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
