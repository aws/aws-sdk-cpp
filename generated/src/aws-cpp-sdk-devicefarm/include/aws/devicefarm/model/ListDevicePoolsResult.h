/**
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
    AWS_DEVICEFARM_API ListDevicePoolsResult() = default;
    AWS_DEVICEFARM_API ListDevicePoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListDevicePoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the device pools.</p>
     */
    inline const Aws::Vector<DevicePool>& GetDevicePools() const { return m_devicePools; }
    template<typename DevicePoolsT = Aws::Vector<DevicePool>>
    void SetDevicePools(DevicePoolsT&& value) { m_devicePoolsHasBeenSet = true; m_devicePools = std::forward<DevicePoolsT>(value); }
    template<typename DevicePoolsT = Aws::Vector<DevicePool>>
    ListDevicePoolsResult& WithDevicePools(DevicePoolsT&& value) { SetDevicePools(std::forward<DevicePoolsT>(value)); return *this;}
    template<typename DevicePoolsT = DevicePool>
    ListDevicePoolsResult& AddDevicePools(DevicePoolsT&& value) { m_devicePoolsHasBeenSet = true; m_devicePools.emplace_back(std::forward<DevicePoolsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDevicePoolsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDevicePoolsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DevicePool> m_devicePools;
    bool m_devicePoolsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
