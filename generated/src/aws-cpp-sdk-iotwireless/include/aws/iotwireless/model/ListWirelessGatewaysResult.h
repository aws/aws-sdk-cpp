/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/WirelessGatewayStatistics.h>
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
  class ListWirelessGatewaysResult
  {
  public:
    AWS_IOTWIRELESS_API ListWirelessGatewaysResult() = default;
    AWS_IOTWIRELESS_API ListWirelessGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListWirelessGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWirelessGatewaysResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline const Aws::Vector<WirelessGatewayStatistics>& GetWirelessGatewayList() const { return m_wirelessGatewayList; }
    template<typename WirelessGatewayListT = Aws::Vector<WirelessGatewayStatistics>>
    void SetWirelessGatewayList(WirelessGatewayListT&& value) { m_wirelessGatewayListHasBeenSet = true; m_wirelessGatewayList = std::forward<WirelessGatewayListT>(value); }
    template<typename WirelessGatewayListT = Aws::Vector<WirelessGatewayStatistics>>
    ListWirelessGatewaysResult& WithWirelessGatewayList(WirelessGatewayListT&& value) { SetWirelessGatewayList(std::forward<WirelessGatewayListT>(value)); return *this;}
    template<typename WirelessGatewayListT = WirelessGatewayStatistics>
    ListWirelessGatewaysResult& AddWirelessGatewayList(WirelessGatewayListT&& value) { m_wirelessGatewayListHasBeenSet = true; m_wirelessGatewayList.emplace_back(std::forward<WirelessGatewayListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWirelessGatewaysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<WirelessGatewayStatistics> m_wirelessGatewayList;
    bool m_wirelessGatewayListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
