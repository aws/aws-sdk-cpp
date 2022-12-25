/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/LocationFilter.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>ListLocationsRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListLocationsRequest">AWS
   * API Reference</a></p>
   */
  class ListLocationsRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API ListLocationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLocations"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of locations to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of locations to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of locations to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of locations to return.</p>
     */
    inline ListLocationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An opaque string that indicates the position at which to begin the next list
     * of locations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque string that indicates the position at which to begin the next list
     * of locations.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An opaque string that indicates the position at which to begin the next list
     * of locations.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An opaque string that indicates the position at which to begin the next list
     * of locations.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An opaque string that indicates the position at which to begin the next list
     * of locations.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An opaque string that indicates the position at which to begin the next list
     * of locations.</p>
     */
    inline ListLocationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin the next list
     * of locations.</p>
     */
    inline ListLocationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque string that indicates the position at which to begin the next list
     * of locations.</p>
     */
    inline ListLocationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>You can use API filters to narrow down the list of resources returned by
     * <code>ListLocations</code>. For example, to retrieve all tasks on a specific
     * source location, you can use <code>ListLocations</code> with filter name
     * <code>LocationType S3</code> and <code>Operator Equals</code>.</p>
     */
    inline const Aws::Vector<LocationFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>You can use API filters to narrow down the list of resources returned by
     * <code>ListLocations</code>. For example, to retrieve all tasks on a specific
     * source location, you can use <code>ListLocations</code> with filter name
     * <code>LocationType S3</code> and <code>Operator Equals</code>.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>You can use API filters to narrow down the list of resources returned by
     * <code>ListLocations</code>. For example, to retrieve all tasks on a specific
     * source location, you can use <code>ListLocations</code> with filter name
     * <code>LocationType S3</code> and <code>Operator Equals</code>.</p>
     */
    inline void SetFilters(const Aws::Vector<LocationFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>You can use API filters to narrow down the list of resources returned by
     * <code>ListLocations</code>. For example, to retrieve all tasks on a specific
     * source location, you can use <code>ListLocations</code> with filter name
     * <code>LocationType S3</code> and <code>Operator Equals</code>.</p>
     */
    inline void SetFilters(Aws::Vector<LocationFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>You can use API filters to narrow down the list of resources returned by
     * <code>ListLocations</code>. For example, to retrieve all tasks on a specific
     * source location, you can use <code>ListLocations</code> with filter name
     * <code>LocationType S3</code> and <code>Operator Equals</code>.</p>
     */
    inline ListLocationsRequest& WithFilters(const Aws::Vector<LocationFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>You can use API filters to narrow down the list of resources returned by
     * <code>ListLocations</code>. For example, to retrieve all tasks on a specific
     * source location, you can use <code>ListLocations</code> with filter name
     * <code>LocationType S3</code> and <code>Operator Equals</code>.</p>
     */
    inline ListLocationsRequest& WithFilters(Aws::Vector<LocationFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>You can use API filters to narrow down the list of resources returned by
     * <code>ListLocations</code>. For example, to retrieve all tasks on a specific
     * source location, you can use <code>ListLocations</code> with filter name
     * <code>LocationType S3</code> and <code>Operator Equals</code>.</p>
     */
    inline ListLocationsRequest& AddFilters(const LocationFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>You can use API filters to narrow down the list of resources returned by
     * <code>ListLocations</code>. For example, to retrieve all tasks on a specific
     * source location, you can use <code>ListLocations</code> with filter name
     * <code>LocationType S3</code> and <code>Operator Equals</code>.</p>
     */
    inline ListLocationsRequest& AddFilters(LocationFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<LocationFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
