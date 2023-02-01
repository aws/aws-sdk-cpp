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
    AWS_IOTWIRELESS_API ListWirelessDevicesResult();
    AWS_IOTWIRELESS_API ListWirelessDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListWirelessDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListWirelessDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListWirelessDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline ListWirelessDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the wireless device.</p>
     */
    inline const Aws::Vector<WirelessDeviceStatistics>& GetWirelessDeviceList() const{ return m_wirelessDeviceList; }

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline void SetWirelessDeviceList(const Aws::Vector<WirelessDeviceStatistics>& value) { m_wirelessDeviceList = value; }

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline void SetWirelessDeviceList(Aws::Vector<WirelessDeviceStatistics>&& value) { m_wirelessDeviceList = std::move(value); }

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline ListWirelessDevicesResult& WithWirelessDeviceList(const Aws::Vector<WirelessDeviceStatistics>& value) { SetWirelessDeviceList(value); return *this;}

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline ListWirelessDevicesResult& WithWirelessDeviceList(Aws::Vector<WirelessDeviceStatistics>&& value) { SetWirelessDeviceList(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline ListWirelessDevicesResult& AddWirelessDeviceList(const WirelessDeviceStatistics& value) { m_wirelessDeviceList.push_back(value); return *this; }

    /**
     * <p>The ID of the wireless device.</p>
     */
    inline ListWirelessDevicesResult& AddWirelessDeviceList(WirelessDeviceStatistics&& value) { m_wirelessDeviceList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<WirelessDeviceStatistics> m_wirelessDeviceList;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
