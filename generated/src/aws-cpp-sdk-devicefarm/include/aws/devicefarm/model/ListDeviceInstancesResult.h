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
    AWS_DEVICEFARM_API ListDeviceInstancesResult() = default;
    AWS_DEVICEFARM_API ListDeviceInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListDeviceInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about your device instances.</p>
     */
    inline const Aws::Vector<DeviceInstance>& GetDeviceInstances() const { return m_deviceInstances; }
    template<typename DeviceInstancesT = Aws::Vector<DeviceInstance>>
    void SetDeviceInstances(DeviceInstancesT&& value) { m_deviceInstancesHasBeenSet = true; m_deviceInstances = std::forward<DeviceInstancesT>(value); }
    template<typename DeviceInstancesT = Aws::Vector<DeviceInstance>>
    ListDeviceInstancesResult& WithDeviceInstances(DeviceInstancesT&& value) { SetDeviceInstances(std::forward<DeviceInstancesT>(value)); return *this;}
    template<typename DeviceInstancesT = DeviceInstance>
    ListDeviceInstancesResult& AddDeviceInstances(DeviceInstancesT&& value) { m_deviceInstancesHasBeenSet = true; m_deviceInstances.emplace_back(std::forward<DeviceInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that can be used in the next call to this operation to return
     * the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeviceInstancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDeviceInstancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceInstance> m_deviceInstances;
    bool m_deviceInstancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
