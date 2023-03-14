/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/MetricResultV2.h>
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
namespace Connect
{
namespace Model
{
  class GetMetricDataV2Result
  {
  public:
    AWS_CONNECT_API GetMetricDataV2Result();
    AWS_CONNECT_API GetMetricDataV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetMetricDataV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline GetMetricDataV2Result& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline GetMetricDataV2Result& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline GetMetricDataV2Result& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the metrics requested in the API request If no grouping is
     * specified, a summary of metric data is returned. </p>
     */
    inline const Aws::Vector<MetricResultV2>& GetMetricResults() const{ return m_metricResults; }

    /**
     * <p>Information about the metrics requested in the API request If no grouping is
     * specified, a summary of metric data is returned. </p>
     */
    inline void SetMetricResults(const Aws::Vector<MetricResultV2>& value) { m_metricResults = value; }

    /**
     * <p>Information about the metrics requested in the API request If no grouping is
     * specified, a summary of metric data is returned. </p>
     */
    inline void SetMetricResults(Aws::Vector<MetricResultV2>&& value) { m_metricResults = std::move(value); }

    /**
     * <p>Information about the metrics requested in the API request If no grouping is
     * specified, a summary of metric data is returned. </p>
     */
    inline GetMetricDataV2Result& WithMetricResults(const Aws::Vector<MetricResultV2>& value) { SetMetricResults(value); return *this;}

    /**
     * <p>Information about the metrics requested in the API request If no grouping is
     * specified, a summary of metric data is returned. </p>
     */
    inline GetMetricDataV2Result& WithMetricResults(Aws::Vector<MetricResultV2>&& value) { SetMetricResults(std::move(value)); return *this;}

    /**
     * <p>Information about the metrics requested in the API request If no grouping is
     * specified, a summary of metric data is returned. </p>
     */
    inline GetMetricDataV2Result& AddMetricResults(const MetricResultV2& value) { m_metricResults.push_back(value); return *this; }

    /**
     * <p>Information about the metrics requested in the API request If no grouping is
     * specified, a summary of metric data is returned. </p>
     */
    inline GetMetricDataV2Result& AddMetricResults(MetricResultV2&& value) { m_metricResults.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMetricDataV2Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMetricDataV2Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMetricDataV2Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<MetricResultV2> m_metricResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
