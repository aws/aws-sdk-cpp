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
    AWS_IOTWIRELESS_API ListWirelessGatewaysResult();
    AWS_IOTWIRELESS_API ListWirelessGatewaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListWirelessGatewaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListWirelessGatewaysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListWirelessGatewaysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListWirelessGatewaysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline const Aws::Vector<WirelessGatewayStatistics>& GetWirelessGatewayList() const{ return m_wirelessGatewayList; }

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline void SetWirelessGatewayList(const Aws::Vector<WirelessGatewayStatistics>& value) { m_wirelessGatewayList = value; }

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline void SetWirelessGatewayList(Aws::Vector<WirelessGatewayStatistics>&& value) { m_wirelessGatewayList = std::move(value); }

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline ListWirelessGatewaysResult& WithWirelessGatewayList(const Aws::Vector<WirelessGatewayStatistics>& value) { SetWirelessGatewayList(value); return *this;}

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline ListWirelessGatewaysResult& WithWirelessGatewayList(Aws::Vector<WirelessGatewayStatistics>&& value) { SetWirelessGatewayList(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline ListWirelessGatewaysResult& AddWirelessGatewayList(const WirelessGatewayStatistics& value) { m_wirelessGatewayList.push_back(value); return *this; }

    /**
     * <p>The ID of the wireless gateway.</p>
     */
    inline ListWirelessGatewaysResult& AddWirelessGatewayList(WirelessGatewayStatistics&& value) { m_wirelessGatewayList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<WirelessGatewayStatistics> m_wirelessGatewayList;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
