﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/CurrentMetricResult.h>
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
  class GetCurrentMetricDataResult
  {
  public:
    AWS_CONNECT_API GetCurrentMetricDataResult();
    AWS_CONNECT_API GetCurrentMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetCurrentMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p> <p>The token expires after 5 minutes from the time it is created.
     * Subsequent requests that use the token must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetCurrentMetricDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetCurrentMetricDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetCurrentMetricDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the real-time metrics.</p>
     */
    inline const Aws::Vector<CurrentMetricResult>& GetMetricResults() const{ return m_metricResults; }
    inline void SetMetricResults(const Aws::Vector<CurrentMetricResult>& value) { m_metricResults = value; }
    inline void SetMetricResults(Aws::Vector<CurrentMetricResult>&& value) { m_metricResults = std::move(value); }
    inline GetCurrentMetricDataResult& WithMetricResults(const Aws::Vector<CurrentMetricResult>& value) { SetMetricResults(value); return *this;}
    inline GetCurrentMetricDataResult& WithMetricResults(Aws::Vector<CurrentMetricResult>&& value) { SetMetricResults(std::move(value)); return *this;}
    inline GetCurrentMetricDataResult& AddMetricResults(const CurrentMetricResult& value) { m_metricResults.push_back(value); return *this; }
    inline GetCurrentMetricDataResult& AddMetricResults(CurrentMetricResult&& value) { m_metricResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the metrics were retrieved and cached for pagination.</p>
     */
    inline const Aws::Utils::DateTime& GetDataSnapshotTime() const{ return m_dataSnapshotTime; }
    inline void SetDataSnapshotTime(const Aws::Utils::DateTime& value) { m_dataSnapshotTime = value; }
    inline void SetDataSnapshotTime(Aws::Utils::DateTime&& value) { m_dataSnapshotTime = std::move(value); }
    inline GetCurrentMetricDataResult& WithDataSnapshotTime(const Aws::Utils::DateTime& value) { SetDataSnapshotTime(value); return *this;}
    inline GetCurrentMetricDataResult& WithDataSnapshotTime(Aws::Utils::DateTime&& value) { SetDataSnapshotTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total count of the result, regardless of the current page size. </p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }
    inline GetCurrentMetricDataResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCurrentMetricDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCurrentMetricDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCurrentMetricDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CurrentMetricResult> m_metricResults;

    Aws::Utils::DateTime m_dataSnapshotTime;

    long long m_approximateTotalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
