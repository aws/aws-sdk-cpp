/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CrawlsFilter.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class ListCrawlsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API ListCrawlsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCrawls"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the crawler whose runs you want to retrieve.</p>
     */
    inline const Aws::String& GetCrawlerName() const{ return m_crawlerName; }

    /**
     * <p>The name of the crawler whose runs you want to retrieve.</p>
     */
    inline bool CrawlerNameHasBeenSet() const { return m_crawlerNameHasBeenSet; }

    /**
     * <p>The name of the crawler whose runs you want to retrieve.</p>
     */
    inline void SetCrawlerName(const Aws::String& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = value; }

    /**
     * <p>The name of the crawler whose runs you want to retrieve.</p>
     */
    inline void SetCrawlerName(Aws::String&& value) { m_crawlerNameHasBeenSet = true; m_crawlerName = std::move(value); }

    /**
     * <p>The name of the crawler whose runs you want to retrieve.</p>
     */
    inline void SetCrawlerName(const char* value) { m_crawlerNameHasBeenSet = true; m_crawlerName.assign(value); }

    /**
     * <p>The name of the crawler whose runs you want to retrieve.</p>
     */
    inline ListCrawlsRequest& WithCrawlerName(const Aws::String& value) { SetCrawlerName(value); return *this;}

    /**
     * <p>The name of the crawler whose runs you want to retrieve.</p>
     */
    inline ListCrawlsRequest& WithCrawlerName(Aws::String&& value) { SetCrawlerName(std::move(value)); return *this;}

    /**
     * <p>The name of the crawler whose runs you want to retrieve.</p>
     */
    inline ListCrawlsRequest& WithCrawlerName(const char* value) { SetCrawlerName(value); return *this;}


    /**
     * <p>The maximum number of results to return. The default is 20, and maximum is
     * 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return. The default is 20, and maximum is
     * 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return. The default is 20, and maximum is
     * 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return. The default is 20, and maximum is
     * 100.</p>
     */
    inline ListCrawlsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filters the crawls by the criteria you specify in a list of
     * <code>CrawlsFilter</code> objects.</p>
     */
    inline const Aws::Vector<CrawlsFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters the crawls by the criteria you specify in a list of
     * <code>CrawlsFilter</code> objects.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters the crawls by the criteria you specify in a list of
     * <code>CrawlsFilter</code> objects.</p>
     */
    inline void SetFilters(const Aws::Vector<CrawlsFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters the crawls by the criteria you specify in a list of
     * <code>CrawlsFilter</code> objects.</p>
     */
    inline void SetFilters(Aws::Vector<CrawlsFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters the crawls by the criteria you specify in a list of
     * <code>CrawlsFilter</code> objects.</p>
     */
    inline ListCrawlsRequest& WithFilters(const Aws::Vector<CrawlsFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters the crawls by the criteria you specify in a list of
     * <code>CrawlsFilter</code> objects.</p>
     */
    inline ListCrawlsRequest& WithFilters(Aws::Vector<CrawlsFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters the crawls by the criteria you specify in a list of
     * <code>CrawlsFilter</code> objects.</p>
     */
    inline ListCrawlsRequest& AddFilters(const CrawlsFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters the crawls by the criteria you specify in a list of
     * <code>CrawlsFilter</code> objects.</p>
     */
    inline ListCrawlsRequest& AddFilters(CrawlsFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline ListCrawlsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline ListCrawlsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline ListCrawlsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_crawlerName;
    bool m_crawlerNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<CrawlsFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
