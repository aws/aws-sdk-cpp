/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/StatisticSummary.h>
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
  class ListDataQualityStatisticsResult
  {
  public:
    AWS_GLUE_API ListDataQualityStatisticsResult();
    AWS_GLUE_API ListDataQualityStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListDataQualityStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>StatisticSummaryList</code>.</p>
     */
    inline const Aws::Vector<StatisticSummary>& GetStatistics() const{ return m_statistics; }
    inline void SetStatistics(const Aws::Vector<StatisticSummary>& value) { m_statistics = value; }
    inline void SetStatistics(Aws::Vector<StatisticSummary>&& value) { m_statistics = std::move(value); }
    inline ListDataQualityStatisticsResult& WithStatistics(const Aws::Vector<StatisticSummary>& value) { SetStatistics(value); return *this;}
    inline ListDataQualityStatisticsResult& WithStatistics(Aws::Vector<StatisticSummary>&& value) { SetStatistics(std::move(value)); return *this;}
    inline ListDataQualityStatisticsResult& AddStatistics(const StatisticSummary& value) { m_statistics.push_back(value); return *this; }
    inline ListDataQualityStatisticsResult& AddStatistics(StatisticSummary&& value) { m_statistics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataQualityStatisticsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataQualityStatisticsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataQualityStatisticsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataQualityStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataQualityStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataQualityStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<StatisticSummary> m_statistics;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
