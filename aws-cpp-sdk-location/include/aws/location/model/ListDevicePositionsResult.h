/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/ListDevicePositionsResponseEntry.h>
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
  class ListDevicePositionsResult
  {
  public:
    AWS_LOCATIONSERVICE_API ListDevicePositionsResult();
    AWS_LOCATIONSERVICE_API ListDevicePositionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ListDevicePositionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains details about each device's last known position. These details
     * includes the device ID, the time when the position was sampled on the device,
     * the time that the service received the update, and the most recent
     * coordinates.</p>
     */
    inline const Aws::Vector<ListDevicePositionsResponseEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>Contains details about each device's last known position. These details
     * includes the device ID, the time when the position was sampled on the device,
     * the time that the service received the update, and the most recent
     * coordinates.</p>
     */
    inline void SetEntries(const Aws::Vector<ListDevicePositionsResponseEntry>& value) { m_entries = value; }

    /**
     * <p>Contains details about each device's last known position. These details
     * includes the device ID, the time when the position was sampled on the device,
     * the time that the service received the update, and the most recent
     * coordinates.</p>
     */
    inline void SetEntries(Aws::Vector<ListDevicePositionsResponseEntry>&& value) { m_entries = std::move(value); }

    /**
     * <p>Contains details about each device's last known position. These details
     * includes the device ID, the time when the position was sampled on the device,
     * the time that the service received the update, and the most recent
     * coordinates.</p>
     */
    inline ListDevicePositionsResult& WithEntries(const Aws::Vector<ListDevicePositionsResponseEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>Contains details about each device's last known position. These details
     * includes the device ID, the time when the position was sampled on the device,
     * the time that the service received the update, and the most recent
     * coordinates.</p>
     */
    inline ListDevicePositionsResult& WithEntries(Aws::Vector<ListDevicePositionsResponseEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>Contains details about each device's last known position. These details
     * includes the device ID, the time when the position was sampled on the device,
     * the time that the service received the update, and the most recent
     * coordinates.</p>
     */
    inline ListDevicePositionsResult& AddEntries(const ListDevicePositionsResponseEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>Contains details about each device's last known position. These details
     * includes the device ID, the time when the position was sampled on the device,
     * the time that the service received the update, and the most recent
     * coordinates.</p>
     */
    inline ListDevicePositionsResult& AddEntries(ListDevicePositionsResponseEntry&& value) { m_entries.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results.</p>
     */
    inline ListDevicePositionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results.</p>
     */
    inline ListDevicePositionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results.</p>
     */
    inline ListDevicePositionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListDevicePositionsResponseEntry> m_entries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
