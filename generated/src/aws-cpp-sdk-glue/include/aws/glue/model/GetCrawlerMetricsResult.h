/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CrawlerMetrics.h>
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
  class GetCrawlerMetricsResult
  {
  public:
    AWS_GLUE_API GetCrawlerMetricsResult() = default;
    AWS_GLUE_API GetCrawlerMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetCrawlerMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of metrics for the specified crawler.</p>
     */
    inline const Aws::Vector<CrawlerMetrics>& GetCrawlerMetricsList() const { return m_crawlerMetricsList; }
    template<typename CrawlerMetricsListT = Aws::Vector<CrawlerMetrics>>
    void SetCrawlerMetricsList(CrawlerMetricsListT&& value) { m_crawlerMetricsListHasBeenSet = true; m_crawlerMetricsList = std::forward<CrawlerMetricsListT>(value); }
    template<typename CrawlerMetricsListT = Aws::Vector<CrawlerMetrics>>
    GetCrawlerMetricsResult& WithCrawlerMetricsList(CrawlerMetricsListT&& value) { SetCrawlerMetricsList(std::forward<CrawlerMetricsListT>(value)); return *this;}
    template<typename CrawlerMetricsListT = CrawlerMetrics>
    GetCrawlerMetricsResult& AddCrawlerMetricsList(CrawlerMetricsListT&& value) { m_crawlerMetricsListHasBeenSet = true; m_crawlerMetricsList.emplace_back(std::forward<CrawlerMetricsListT>(value)); return *this; }
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
    GetCrawlerMetricsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCrawlerMetricsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CrawlerMetrics> m_crawlerMetricsList;
    bool m_crawlerMetricsListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
