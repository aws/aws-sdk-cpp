/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the input of a ListScrapers operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ListScrapersRequest">AWS
   * API Reference</a></p>
   */
  class ListScrapersRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API ListScrapersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListScrapers"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;

    AWS_PROMETHEUSSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A list of scraper filters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetFilters() const{ return m_filters; }

    /**
     * <p>A list of scraper filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A list of scraper filters.</p>
     */
    inline void SetFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A list of scraper filters.</p>
     */
    inline void SetFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A list of scraper filters.</p>
     */
    inline ListScrapersRequest& WithFilters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetFilters(value); return *this;}

    /**
     * <p>A list of scraper filters.</p>
     */
    inline ListScrapersRequest& WithFilters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A list of scraper filters.</p>
     */
    inline ListScrapersRequest& AddFilters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }

    /**
     * <p>A list of scraper filters.</p>
     */
    inline ListScrapersRequest& AddFilters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of scraper filters.</p>
     */
    inline ListScrapersRequest& AddFilters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of scraper filters.</p>
     */
    inline ListScrapersRequest& AddFilters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of scraper filters.</p>
     */
    inline ListScrapersRequest& AddFilters(const char* key, Aws::Vector<Aws::String>&& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of scraper filters.</p>
     */
    inline ListScrapersRequest& AddFilters(const char* key, const Aws::Vector<Aws::String>& value) { m_filtersHasBeenSet = true; m_filters.emplace(key, value); return *this; }


    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListScrapers request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListScrapers request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListScrapers request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListScrapers request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListScrapers request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListScrapers request.</p>
     */
    inline ListScrapersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListScrapers request.</p>
     */
    inline ListScrapersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token to request the next page in a paginated list. This token is
     * obtained from the output of the previous ListScrapers request.</p>
     */
    inline ListScrapersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Maximum results to return in response (default=100, maximum=1000).</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum results to return in response (default=100, maximum=1000).</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum results to return in response (default=100, maximum=1000).</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum results to return in response (default=100, maximum=1000).</p>
     */
    inline ListScrapersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
