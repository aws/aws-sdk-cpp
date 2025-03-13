/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Crawler.h>
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
    AWS_GLUE_API BatchGetCrawlersResult() = default;
    AWS_GLUE_API BatchGetCrawlersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetCrawlersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of crawler definitions.</p>
     */
    inline const Aws::Vector<Crawler>& GetCrawlers() const { return m_crawlers; }
    template<typename CrawlersT = Aws::Vector<Crawler>>
    void SetCrawlers(CrawlersT&& value) { m_crawlersHasBeenSet = true; m_crawlers = std::forward<CrawlersT>(value); }
    template<typename CrawlersT = Aws::Vector<Crawler>>
    BatchGetCrawlersResult& WithCrawlers(CrawlersT&& value) { SetCrawlers(std::forward<CrawlersT>(value)); return *this;}
    template<typename CrawlersT = Crawler>
    BatchGetCrawlersResult& AddCrawlers(CrawlersT&& value) { m_crawlersHasBeenSet = true; m_crawlers.emplace_back(std::forward<CrawlersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of names of crawlers that were not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCrawlersNotFound() const { return m_crawlersNotFound; }
    template<typename CrawlersNotFoundT = Aws::Vector<Aws::String>>
    void SetCrawlersNotFound(CrawlersNotFoundT&& value) { m_crawlersNotFoundHasBeenSet = true; m_crawlersNotFound = std::forward<CrawlersNotFoundT>(value); }
    template<typename CrawlersNotFoundT = Aws::Vector<Aws::String>>
    BatchGetCrawlersResult& WithCrawlersNotFound(CrawlersNotFoundT&& value) { SetCrawlersNotFound(std::forward<CrawlersNotFoundT>(value)); return *this;}
    template<typename CrawlersNotFoundT = Aws::String>
    BatchGetCrawlersResult& AddCrawlersNotFound(CrawlersNotFoundT&& value) { m_crawlersNotFoundHasBeenSet = true; m_crawlersNotFound.emplace_back(std::forward<CrawlersNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetCrawlersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Crawler> m_crawlers;
    bool m_crawlersHasBeenSet = false;

    Aws::Vector<Aws::String> m_crawlersNotFound;
    bool m_crawlersNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
