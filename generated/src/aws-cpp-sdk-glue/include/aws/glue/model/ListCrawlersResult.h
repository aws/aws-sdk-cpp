/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListCrawlersResult
  {
  public:
    AWS_GLUE_API ListCrawlersResult() = default;
    AWS_GLUE_API ListCrawlersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListCrawlersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The names of all crawlers in the account, or the crawlers with the specified
     * tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCrawlerNames() const { return m_crawlerNames; }
    template<typename CrawlerNamesT = Aws::Vector<Aws::String>>
    void SetCrawlerNames(CrawlerNamesT&& value) { m_crawlerNamesHasBeenSet = true; m_crawlerNames = std::forward<CrawlerNamesT>(value); }
    template<typename CrawlerNamesT = Aws::Vector<Aws::String>>
    ListCrawlersResult& WithCrawlerNames(CrawlerNamesT&& value) { SetCrawlerNames(std::forward<CrawlerNamesT>(value)); return *this;}
    template<typename CrawlerNamesT = Aws::String>
    ListCrawlersResult& AddCrawlerNames(CrawlerNamesT&& value) { m_crawlerNamesHasBeenSet = true; m_crawlerNames.emplace_back(std::forward<CrawlerNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCrawlersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCrawlersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_crawlerNames;
    bool m_crawlerNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
