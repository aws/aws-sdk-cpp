/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/DevicePosition.h>
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
namespace LocationService
{
namespace Model
{
  class GetDevicePositionHistoryResult
  {
  public:
    AWS_LOCATIONSERVICE_API GetDevicePositionHistoryResult() = default;
    AWS_LOCATIONSERVICE_API GetDevicePositionHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API GetDevicePositionHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains the position history details for the requested device.</p>
     */
    inline const Aws::Vector<DevicePosition>& GetDevicePositions() const { return m_devicePositions; }
    template<typename DevicePositionsT = Aws::Vector<DevicePosition>>
    void SetDevicePositions(DevicePositionsT&& value) { m_devicePositionsHasBeenSet = true; m_devicePositions = std::forward<DevicePositionsT>(value); }
    template<typename DevicePositionsT = Aws::Vector<DevicePosition>>
    GetDevicePositionHistoryResult& WithDevicePositions(DevicePositionsT&& value) { SetDevicePositions(std::forward<DevicePositionsT>(value)); return *this;}
    template<typename DevicePositionsT = DevicePosition>
    GetDevicePositionHistoryResult& AddDevicePositions(DevicePositionsT&& value) { m_devicePositionsHasBeenSet = true; m_devicePositions.emplace_back(std::forward<DevicePositionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDevicePositionHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDevicePositionHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DevicePosition> m_devicePositions;
    bool m_devicePositionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
