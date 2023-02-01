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
    AWS_GLUE_API GetCrawlerMetricsResult();
    AWS_GLUE_API GetCrawlerMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetCrawlerMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of metrics for the specified crawler.</p>
     */
    inline const Aws::Vector<CrawlerMetrics>& GetCrawlerMetricsList() const{ return m_crawlerMetricsList; }

    /**
     * <p>A list of metrics for the specified crawler.</p>
     */
    inline void SetCrawlerMetricsList(const Aws::Vector<CrawlerMetrics>& value) { m_crawlerMetricsList = value; }

    /**
     * <p>A list of metrics for the specified crawler.</p>
     */
    inline void SetCrawlerMetricsList(Aws::Vector<CrawlerMetrics>&& value) { m_crawlerMetricsList = std::move(value); }

    /**
     * <p>A list of metrics for the specified crawler.</p>
     */
    inline GetCrawlerMetricsResult& WithCrawlerMetricsList(const Aws::Vector<CrawlerMetrics>& value) { SetCrawlerMetricsList(value); return *this;}

    /**
     * <p>A list of metrics for the specified crawler.</p>
     */
    inline GetCrawlerMetricsResult& WithCrawlerMetricsList(Aws::Vector<CrawlerMetrics>&& value) { SetCrawlerMetricsList(std::move(value)); return *this;}

    /**
     * <p>A list of metrics for the specified crawler.</p>
     */
    inline GetCrawlerMetricsResult& AddCrawlerMetricsList(const CrawlerMetrics& value) { m_crawlerMetricsList.push_back(value); return *this; }

    /**
     * <p>A list of metrics for the specified crawler.</p>
     */
    inline GetCrawlerMetricsResult& AddCrawlerMetricsList(CrawlerMetrics&& value) { m_crawlerMetricsList.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline GetCrawlerMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline GetCrawlerMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline GetCrawlerMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CrawlerMetrics> m_crawlerMetricsList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
