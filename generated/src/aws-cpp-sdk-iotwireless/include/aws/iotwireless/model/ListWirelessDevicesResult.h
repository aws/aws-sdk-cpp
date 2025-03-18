/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/WirelessDeviceStatistics.h>
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
  class ListWirelessDevicesResult
  {
  public:
    AWS_IOTWIRELESS_API ListWirelessDevicesResult() = default;
    AWS_IOTWIRELESS_API ListWirelessDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListWirelessDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWirelessDevicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the wireless device.</p>
     */
    inline const Aws::Vector<WirelessDeviceStatistics>& GetWirelessDeviceList() const { return m_wirelessDeviceList; }
    template<typename WirelessDeviceListT = Aws::Vector<WirelessDeviceStatistics>>
    void SetWirelessDeviceList(WirelessDeviceListT&& value) { m_wirelessDeviceListHasBeenSet = true; m_wirelessDeviceList = std::forward<WirelessDeviceListT>(value); }
    template<typename WirelessDeviceListT = Aws::Vector<WirelessDeviceStatistics>>
    ListWirelessDevicesResult& WithWirelessDeviceList(WirelessDeviceListT&& value) { SetWirelessDeviceList(std::forward<WirelessDeviceListT>(value)); return *this;}
    template<typename WirelessDeviceListT = WirelessDeviceStatistics>
    ListWirelessDevicesResult& AddWirelessDeviceList(WirelessDeviceListT&& value) { m_wirelessDeviceListHasBeenSet = true; m_wirelessDeviceList.emplace_back(std::forward<WirelessDeviceListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWirelessDevicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<WirelessDeviceStatistics> m_wirelessDeviceList;
    bool m_wirelessDeviceListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
