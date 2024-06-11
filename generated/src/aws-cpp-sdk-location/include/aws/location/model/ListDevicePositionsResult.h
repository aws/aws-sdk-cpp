﻿/**
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


    ///@{
    /**
     * <p>Contains details about each device's last known position.</p>
     */
    inline const Aws::Vector<ListDevicePositionsResponseEntry>& GetEntries() const{ return m_entries; }
    inline void SetEntries(const Aws::Vector<ListDevicePositionsResponseEntry>& value) { m_entries = value; }
    inline void SetEntries(Aws::Vector<ListDevicePositionsResponseEntry>&& value) { m_entries = std::move(value); }
    inline ListDevicePositionsResult& WithEntries(const Aws::Vector<ListDevicePositionsResponseEntry>& value) { SetEntries(value); return *this;}
    inline ListDevicePositionsResult& WithEntries(Aws::Vector<ListDevicePositionsResponseEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline ListDevicePositionsResult& AddEntries(const ListDevicePositionsResponseEntry& value) { m_entries.push_back(value); return *this; }
    inline ListDevicePositionsResult& AddEntries(ListDevicePositionsResponseEntry&& value) { m_entries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDevicePositionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDevicePositionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDevicePositionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDevicePositionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDevicePositionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDevicePositionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ListDevicePositionsResponseEntry> m_entries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
