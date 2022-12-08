/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Crawler.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class BatchGetCrawlersResult
  {
  public:
    AWS_GLUE_API BatchGetCrawlersResult();
    AWS_GLUE_API BatchGetCrawlersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetCrawlersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of crawler definitions.</p>
     */
    inline const Aws::Vector<Crawler>& GetCrawlers() const{ return m_crawlers; }

    /**
     * <p>A list of crawler definitions.</p>
     */
    inline void SetCrawlers(const Aws::Vector<Crawler>& value) { m_crawlers = value; }

    /**
     * <p>A list of crawler definitions.</p>
     */
    inline void SetCrawlers(Aws::Vector<Crawler>&& value) { m_crawlers = std::move(value); }

    /**
     * <p>A list of crawler definitions.</p>
     */
    inline BatchGetCrawlersResult& WithCrawlers(const Aws::Vector<Crawler>& value) { SetCrawlers(value); return *this;}

    /**
     * <p>A list of crawler definitions.</p>
     */
    inline BatchGetCrawlersResult& WithCrawlers(Aws::Vector<Crawler>&& value) { SetCrawlers(std::move(value)); return *this;}

    /**
     * <p>A list of crawler definitions.</p>
     */
    inline BatchGetCrawlersResult& AddCrawlers(const Crawler& value) { m_crawlers.push_back(value); return *this; }

    /**
     * <p>A list of crawler definitions.</p>
     */
    inline BatchGetCrawlersResult& AddCrawlers(Crawler&& value) { m_crawlers.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of names of crawlers that were not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCrawlersNotFound() const{ return m_crawlersNotFound; }

    /**
     * <p>A list of names of crawlers that were not found.</p>
     */
    inline void SetCrawlersNotFound(const Aws::Vector<Aws::String>& value) { m_crawlersNotFound = value; }

    /**
     * <p>A list of names of crawlers that were not found.</p>
     */
    inline void SetCrawlersNotFound(Aws::Vector<Aws::String>&& value) { m_crawlersNotFound = std::move(value); }

    /**
     * <p>A list of names of crawlers that were not found.</p>
     */
    inline BatchGetCrawlersResult& WithCrawlersNotFound(const Aws::Vector<Aws::String>& value) { SetCrawlersNotFound(value); return *this;}

    /**
     * <p>A list of names of crawlers that were not found.</p>
     */
    inline BatchGetCrawlersResult& WithCrawlersNotFound(Aws::Vector<Aws::String>&& value) { SetCrawlersNotFound(std::move(value)); return *this;}

    /**
     * <p>A list of names of crawlers that were not found.</p>
     */
    inline BatchGetCrawlersResult& AddCrawlersNotFound(const Aws::String& value) { m_crawlersNotFound.push_back(value); return *this; }

    /**
     * <p>A list of names of crawlers that were not found.</p>
     */
    inline BatchGetCrawlersResult& AddCrawlersNotFound(Aws::String&& value) { m_crawlersNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of names of crawlers that were not found.</p>
     */
    inline BatchGetCrawlersResult& AddCrawlersNotFound(const char* value) { m_crawlersNotFound.push_back(value); return *this; }

  private:

    Aws::Vector<Crawler> m_crawlers;

    Aws::Vector<Aws::String> m_crawlersNotFound;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
