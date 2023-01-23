/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/location/model/ListTrackersResponseEntry.h>
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
  class ListTrackersResult
  {
  public:
    AWS_LOCATIONSERVICE_API ListTrackersResult();
    AWS_LOCATIONSERVICE_API ListTrackersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ListTrackersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains tracker resources in your AWS account. Details include tracker name,
     * description and timestamps for when the tracker was created and last
     * updated.</p>
     */
    inline const Aws::Vector<ListTrackersResponseEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>Contains tracker resources in your AWS account. Details include tracker name,
     * description and timestamps for when the tracker was created and last
     * updated.</p>
     */
    inline void SetEntries(const Aws::Vector<ListTrackersResponseEntry>& value) { m_entries = value; }

    /**
     * <p>Contains tracker resources in your AWS account. Details include tracker name,
     * description and timestamps for when the tracker was created and last
     * updated.</p>
     */
    inline void SetEntries(Aws::Vector<ListTrackersResponseEntry>&& value) { m_entries = std::move(value); }

    /**
     * <p>Contains tracker resources in your AWS account. Details include tracker name,
     * description and timestamps for when the tracker was created and last
     * updated.</p>
     */
    inline ListTrackersResult& WithEntries(const Aws::Vector<ListTrackersResponseEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>Contains tracker resources in your AWS account. Details include tracker name,
     * description and timestamps for when the tracker was created and last
     * updated.</p>
     */
    inline ListTrackersResult& WithEntries(Aws::Vector<ListTrackersResponseEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>Contains tracker resources in your AWS account. Details include tracker name,
     * description and timestamps for when the tracker was created and last
     * updated.</p>
     */
    inline ListTrackersResult& AddEntries(const ListTrackersResponseEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>Contains tracker resources in your AWS account. Details include tracker name,
     * description and timestamps for when the tracker was created and last
     * updated.</p>
     */
    inline ListTrackersResult& AddEntries(ListTrackersResponseEntry&& value) { m_entries.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline ListTrackersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline ListTrackersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token indicating there are additional pages available. You can
     * use the token in a following request to fetch the next set of results. </p>
     */
    inline ListTrackersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListTrackersResponseEntry> m_entries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
