/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{
  class StartSessionsStatisticsAggregationResult
  {
  public:
    AWS_DEADLINE_API StartSessionsStatisticsAggregationResult();
    AWS_DEADLINE_API StartSessionsStatisticsAggregationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API StartSessionsStatisticsAggregationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the aggregated statistics. Use this identifier with
     * the <code>GetAggregatedStatisticsForSessions</code> operation to return the
     * statistics.</p>
     */
    inline const Aws::String& GetAggregationId() const{ return m_aggregationId; }

    /**
     * <p>A unique identifier for the aggregated statistics. Use this identifier with
     * the <code>GetAggregatedStatisticsForSessions</code> operation to return the
     * statistics.</p>
     */
    inline void SetAggregationId(const Aws::String& value) { m_aggregationId = value; }

    /**
     * <p>A unique identifier for the aggregated statistics. Use this identifier with
     * the <code>GetAggregatedStatisticsForSessions</code> operation to return the
     * statistics.</p>
     */
    inline void SetAggregationId(Aws::String&& value) { m_aggregationId = std::move(value); }

    /**
     * <p>A unique identifier for the aggregated statistics. Use this identifier with
     * the <code>GetAggregatedStatisticsForSessions</code> operation to return the
     * statistics.</p>
     */
    inline void SetAggregationId(const char* value) { m_aggregationId.assign(value); }

    /**
     * <p>A unique identifier for the aggregated statistics. Use this identifier with
     * the <code>GetAggregatedStatisticsForSessions</code> operation to return the
     * statistics.</p>
     */
    inline StartSessionsStatisticsAggregationResult& WithAggregationId(const Aws::String& value) { SetAggregationId(value); return *this;}

    /**
     * <p>A unique identifier for the aggregated statistics. Use this identifier with
     * the <code>GetAggregatedStatisticsForSessions</code> operation to return the
     * statistics.</p>
     */
    inline StartSessionsStatisticsAggregationResult& WithAggregationId(Aws::String&& value) { SetAggregationId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the aggregated statistics. Use this identifier with
     * the <code>GetAggregatedStatisticsForSessions</code> operation to return the
     * statistics.</p>
     */
    inline StartSessionsStatisticsAggregationResult& WithAggregationId(const char* value) { SetAggregationId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartSessionsStatisticsAggregationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartSessionsStatisticsAggregationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartSessionsStatisticsAggregationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_aggregationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
