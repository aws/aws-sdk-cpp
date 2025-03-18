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
  class GetCrawlersResult
  {
  public:
    AWS_GLUE_API GetCrawlersResult() = default;
    AWS_GLUE_API GetCrawlersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetCrawlersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of crawler metadata.</p>
     */
    inline const Aws::Vector<Crawler>& GetCrawlers() const { return m_crawlers; }
    template<typename CrawlersT = Aws::Vector<Crawler>>
    void SetCrawlers(CrawlersT&& value) { m_crawlersHasBeenSet = true; m_crawlers = std::forward<CrawlersT>(value); }
    template<typename CrawlersT = Aws::Vector<Crawler>>
    GetCrawlersResult& WithCrawlers(CrawlersT&& value) { SetCrawlers(std::forward<CrawlersT>(value)); return *this;}
    template<typename CrawlersT = Crawler>
    GetCrawlersResult& AddCrawlers(CrawlersT&& value) { m_crawlersHasBeenSet = true; m_crawlers.emplace_back(std::forward<CrawlersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the returned list has not reached the end of those
     * defined in this customer account.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCrawlersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCrawlersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Crawler> m_crawlers;
    bool m_crawlersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
