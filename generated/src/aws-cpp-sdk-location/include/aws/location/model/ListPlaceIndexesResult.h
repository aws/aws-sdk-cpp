/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/ListPlaceIndexesResponseEntry.h>
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
  class ListPlaceIndexesResult
  {
  public:
    AWS_LOCATIONSERVICE_API ListPlaceIndexesResult();
    AWS_LOCATIONSERVICE_API ListPlaceIndexesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ListPlaceIndexesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the place index resources that exist in your AWS account</p>
     */
    inline const Aws::Vector<ListPlaceIndexesResponseEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>Lists the place index resources that exist in your AWS account</p>
     */
    inline void SetEntries(const Aws::Vector<ListPlaceIndexesResponseEntry>& value) { m_entries = value; }

    /**
     * <p>Lists the place index resources that exist in your AWS account</p>
     */
    inline void SetEntries(Aws::Vector<ListPlaceIndexesResponseEntry>&& value) { m_entries = std::move(value); }

    /**
     * <p>Lists the place index resources that exist in your AWS account</p>
     */
    inline ListPlaceIndexesResult& WithEntries(const Aws::Vector<ListPlaceIndexesResponseEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>Lists the place index resources that exist in your AWS account</p>
     */
    inline ListPlaceIndexesResult& WithEntries(Aws::Vector<ListPlaceIndexesResponseEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>Lists the place index resources that exist in your AWS account</p>
     */
    inline ListPlaceIndexesResult& AddEntries(const ListPlaceIndexesResponseEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>Lists the place index resources that exist in your AWS account</p>
     */
    inline ListPlaceIndexesResult& AddEntries(ListPlaceIndexesResponseEntry&& value) { m_entries.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token indicating that there are additional pages available. You
     * can use the token in a new request to fetch the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token indicating that there are additional pages available. You
     * can use the token in a new request to fetch the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token indicating that there are additional pages available. You
     * can use the token in a new request to fetch the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token indicating that there are additional pages available. You
     * can use the token in a new request to fetch the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token indicating that there are additional pages available. You
     * can use the token in a new request to fetch the next page of results.</p>
     */
    inline ListPlaceIndexesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token indicating that there are additional pages available. You
     * can use the token in a new request to fetch the next page of results.</p>
     */
    inline ListPlaceIndexesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token indicating that there are additional pages available. You
     * can use the token in a new request to fetch the next page of results.</p>
     */
    inline ListPlaceIndexesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListPlaceIndexesResponseEntry> m_entries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
