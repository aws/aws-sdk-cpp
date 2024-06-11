﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/ListGeofenceResponseEntry.h>
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
  class ListGeofencesResult
  {
  public:
    AWS_LOCATIONSERVICE_API ListGeofencesResult();
    AWS_LOCATIONSERVICE_API ListGeofencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ListGeofencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a list of geofences stored in the geofence collection.</p>
     */
    inline const Aws::Vector<ListGeofenceResponseEntry>& GetEntries() const{ return m_entries; }
    inline void SetEntries(const Aws::Vector<ListGeofenceResponseEntry>& value) { m_entries = value; }
    inline void SetEntries(Aws::Vector<ListGeofenceResponseEntry>&& value) { m_entries = std::move(value); }
    inline ListGeofencesResult& WithEntries(const Aws::Vector<ListGeofenceResponseEntry>& value) { SetEntries(value); return *this;}
    inline ListGeofencesResult& WithEntries(Aws::Vector<ListGeofenceResponseEntry>&& value) { SetEntries(std::move(value)); return *this;}
    inline ListGeofencesResult& AddEntries(const ListGeofenceResponseEntry& value) { m_entries.push_back(value); return *this; }
    inline ListGeofencesResult& AddEntries(ListGeofenceResponseEntry&& value) { m_entries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListGeofencesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListGeofencesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListGeofencesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGeofencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGeofencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGeofencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ListGeofenceResponseEntry> m_entries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
