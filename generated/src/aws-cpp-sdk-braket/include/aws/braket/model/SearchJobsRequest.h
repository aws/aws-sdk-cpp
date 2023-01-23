/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/BraketRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/SearchJobsFilter.h>
#include <utility>

namespace Aws
{
namespace Braket
{
namespace Model
{

  /**
   */
  class SearchJobsRequest : public BraketRequest
  {
  public:
    AWS_BRAKET_API SearchJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchJobs"; }

    AWS_BRAKET_API Aws::String SerializePayload() const override;


    /**
     * <p>The filter values to use when searching for a job.</p>
     */
    inline const Aws::Vector<SearchJobsFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filter values to use when searching for a job.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filter values to use when searching for a job.</p>
     */
    inline void SetFilters(const Aws::Vector<SearchJobsFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filter values to use when searching for a job.</p>
     */
    inline void SetFilters(Aws::Vector<SearchJobsFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filter values to use when searching for a job.</p>
     */
    inline SearchJobsRequest& WithFilters(const Aws::Vector<SearchJobsFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filter values to use when searching for a job.</p>
     */
    inline SearchJobsRequest& WithFilters(Aws::Vector<SearchJobsFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filter values to use when searching for a job.</p>
     */
    inline SearchJobsRequest& AddFilters(const SearchJobsFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filter values to use when searching for a job.</p>
     */
    inline SearchJobsRequest& AddFilters(SearchJobsFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response.</p>
     */
    inline SearchJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline SearchJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline SearchJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results returned in the response. Use the
     * token returned from the previous request to continue results where the previous
     * request ended.</p>
     */
    inline SearchJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SearchJobsFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
