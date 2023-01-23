/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/ListRouteCalculatorsResponseEntry.h>
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
  class ListRouteCalculatorsResult
  {
  public:
    AWS_LOCATIONSERVICE_API ListRouteCalculatorsResult();
    AWS_LOCATIONSERVICE_API ListRouteCalculatorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ListRouteCalculatorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the route calculator resources that exist in your AWS account</p>
     */
    inline const Aws::Vector<ListRouteCalculatorsResponseEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>Lists the route calculator resources that exist in your AWS account</p>
     */
    inline void SetEntries(const Aws::Vector<ListRouteCalculatorsResponseEntry>& value) { m_entries = value; }

    /**
     * <p>Lists the route calculator resources that exist in your AWS account</p>
     */
    inline void SetEntries(Aws::Vector<ListRouteCalculatorsResponseEntry>&& value) { m_entries = std::move(value); }

    /**
     * <p>Lists the route calculator resources that exist in your AWS account</p>
     */
    inline ListRouteCalculatorsResult& WithEntries(const Aws::Vector<ListRouteCalculatorsResponseEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>Lists the route calculator resources that exist in your AWS account</p>
     */
    inline ListRouteCalculatorsResult& WithEntries(Aws::Vector<ListRouteCalculatorsResponseEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>Lists the route calculator resources that exist in your AWS account</p>
     */
    inline ListRouteCalculatorsResult& AddEntries(const ListRouteCalculatorsResponseEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>Lists the route calculator resources that exist in your AWS account</p>
     */
    inline ListRouteCalculatorsResult& AddEntries(ListRouteCalculatorsResponseEntry&& value) { m_entries.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a subsequent request to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a subsequent request to fetch the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a subsequent request to fetch the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a subsequent request to fetch the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a subsequent request to fetch the next set of results.</p>
     */
    inline ListRouteCalculatorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a subsequent request to fetch the next set of results.</p>
     */
    inline ListRouteCalculatorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a subsequent request to fetch the next set of results.</p>
     */
    inline ListRouteCalculatorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListRouteCalculatorsResponseEntry> m_entries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
