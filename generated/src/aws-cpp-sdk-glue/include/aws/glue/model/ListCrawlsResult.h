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
    AWS_GLUE_API ListCrawlsResult() = default;
    AWS_GLUE_API ListCrawlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListCrawlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>CrawlerHistory</code> objects representing the crawl runs
     * that meet your criteria.</p>
     */
    inline const Aws::Vector<CrawlerHistory>& GetCrawls() const { return m_crawls; }
    template<typename CrawlsT = Aws::Vector<CrawlerHistory>>
    void SetCrawls(CrawlsT&& value) { m_crawlsHasBeenSet = true; m_crawls = std::forward<CrawlsT>(value); }
    template<typename CrawlsT = Aws::Vector<CrawlerHistory>>
    ListCrawlsResult& WithCrawls(CrawlsT&& value) { SetCrawls(std::forward<CrawlsT>(value)); return *this;}
    template<typename CrawlsT = CrawlerHistory>
    ListCrawlsResult& AddCrawls(CrawlsT&& value) { m_crawlsHasBeenSet = true; m_crawls.emplace_back(std::forward<CrawlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCrawlsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCrawlsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CrawlerHistory> m_crawls;
    bool m_crawlsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
