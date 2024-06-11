﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/LocationListEntry.h>
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
namespace DataSync
{
namespace Model
{
  /**
   * <p>ListLocationsResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListLocationsResponse">AWS
   * API Reference</a></p>
   */
  class ListLocationsResult
  {
  public:
    AWS_DATASYNC_API ListLocationsResult();
    AWS_DATASYNC_API ListLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API ListLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains a list of locations.</p>
     */
    inline const Aws::Vector<LocationListEntry>& GetLocations() const{ return m_locations; }
    inline void SetLocations(const Aws::Vector<LocationListEntry>& value) { m_locations = value; }
    inline void SetLocations(Aws::Vector<LocationListEntry>&& value) { m_locations = std::move(value); }
    inline ListLocationsResult& WithLocations(const Aws::Vector<LocationListEntry>& value) { SetLocations(value); return *this;}
    inline ListLocationsResult& WithLocations(Aws::Vector<LocationListEntry>&& value) { SetLocations(std::move(value)); return *this;}
    inline ListLocationsResult& AddLocations(const LocationListEntry& value) { m_locations.push_back(value); return *this; }
    inline ListLocationsResult& AddLocations(LocationListEntry&& value) { m_locations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An opaque string that indicates the position at which to begin returning the
     * next list of locations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLocationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLocationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLocationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLocationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLocationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLocationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LocationListEntry> m_locations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
