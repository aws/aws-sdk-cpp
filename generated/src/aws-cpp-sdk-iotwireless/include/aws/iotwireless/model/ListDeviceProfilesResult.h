/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/DeviceProfile.h>
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
namespace IoTWireless
{
namespace Model
{
  class ListDeviceProfilesResult
  {
  public:
    AWS_IOTWIRELESS_API ListDeviceProfilesResult() = default;
    AWS_IOTWIRELESS_API ListDeviceProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListDeviceProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeviceProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of device profiles.</p>
     */
    inline const Aws::Vector<DeviceProfile>& GetDeviceProfileList() const { return m_deviceProfileList; }
    template<typename DeviceProfileListT = Aws::Vector<DeviceProfile>>
    void SetDeviceProfileList(DeviceProfileListT&& value) { m_deviceProfileListHasBeenSet = true; m_deviceProfileList = std::forward<DeviceProfileListT>(value); }
    template<typename DeviceProfileListT = Aws::Vector<DeviceProfile>>
    ListDeviceProfilesResult& WithDeviceProfileList(DeviceProfileListT&& value) { SetDeviceProfileList(std::forward<DeviceProfileListT>(value)); return *this;}
    template<typename DeviceProfileListT = DeviceProfile>
    ListDeviceProfilesResult& AddDeviceProfileList(DeviceProfileListT&& value) { m_deviceProfileListHasBeenSet = true; m_deviceProfileList.emplace_back(std::forward<DeviceProfileListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDeviceProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<DeviceProfile> m_deviceProfileList;
    bool m_deviceProfileListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
