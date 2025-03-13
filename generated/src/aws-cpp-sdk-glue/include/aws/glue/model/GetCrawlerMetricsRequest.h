/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetCrawlerMetricsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetCrawlerMetricsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCrawlerMetrics"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of the names of crawlers about which to retrieve metrics.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCrawlerNameList() const { return m_crawlerNameList; }
    inline bool CrawlerNameListHasBeenSet() const { return m_crawlerNameListHasBeenSet; }
    template<typename CrawlerNameListT = Aws::Vector<Aws::String>>
    void SetCrawlerNameList(CrawlerNameListT&& value) { m_crawlerNameListHasBeenSet = true; m_crawlerNameList = std::forward<CrawlerNameListT>(value); }
    template<typename CrawlerNameListT = Aws::Vector<Aws::String>>
    GetCrawlerMetricsRequest& WithCrawlerNameList(CrawlerNameListT&& value) { SetCrawlerNameList(std::forward<CrawlerNameListT>(value)); return *this;}
    template<typename CrawlerNameListT = Aws::String>
    GetCrawlerMetricsRequest& AddCrawlerNameList(CrawlerNameListT&& value) { m_crawlerNameListHasBeenSet = true; m_crawlerNameList.emplace_back(std::forward<CrawlerNameListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum size of a list to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetCrawlerMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCrawlerMetricsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_crawlerNameList;
    bool m_crawlerNameListHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
