/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CrawlerHistory.h>
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
namespace Glue
{
namespace Model
{
  class ListCrawlsResult
  {
  public:
    AWS_GLUE_API ListCrawlsResult();
    AWS_GLUE_API ListCrawlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListCrawlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>CrawlerHistory</code> objects representing the crawl runs
     * that meet your criteria.</p>
     */
    inline const Aws::Vector<CrawlerHistory>& GetCrawls() const{ return m_crawls; }

    /**
     * <p>A list of <code>CrawlerHistory</code> objects representing the crawl runs
     * that meet your criteria.</p>
     */
    inline void SetCrawls(const Aws::Vector<CrawlerHistory>& value) { m_crawls = value; }

    /**
     * <p>A list of <code>CrawlerHistory</code> objects representing the crawl runs
     * that meet your criteria.</p>
     */
    inline void SetCrawls(Aws::Vector<CrawlerHistory>&& value) { m_crawls = std::move(value); }

    /**
     * <p>A list of <code>CrawlerHistory</code> objects representing the crawl runs
     * that meet your criteria.</p>
     */
    inline ListCrawlsResult& WithCrawls(const Aws::Vector<CrawlerHistory>& value) { SetCrawls(value); return *this;}

    /**
     * <p>A list of <code>CrawlerHistory</code> objects representing the crawl runs
     * that meet your criteria.</p>
     */
    inline ListCrawlsResult& WithCrawls(Aws::Vector<CrawlerHistory>&& value) { SetCrawls(std::move(value)); return *this;}

    /**
     * <p>A list of <code>CrawlerHistory</code> objects representing the crawl runs
     * that meet your criteria.</p>
     */
    inline ListCrawlsResult& AddCrawls(const CrawlerHistory& value) { m_crawls.push_back(value); return *this; }

    /**
     * <p>A list of <code>CrawlerHistory</code> objects representing the crawl runs
     * that meet your criteria.</p>
     */
    inline ListCrawlsResult& AddCrawls(CrawlerHistory&& value) { m_crawls.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline ListCrawlsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline ListCrawlsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline ListCrawlsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CrawlerHistory> m_crawls;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
