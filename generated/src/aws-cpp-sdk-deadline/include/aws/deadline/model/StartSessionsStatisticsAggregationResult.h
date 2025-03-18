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
    AWS_DEADLINE_API StartSessionsStatisticsAggregationResult() = default;
    AWS_DEADLINE_API StartSessionsStatisticsAggregationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API StartSessionsStatisticsAggregationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the aggregated statistics. Use this identifier with
     * the <code>GetAggregatedStatisticsForSessions</code> operation to return the
     * statistics.</p>
     */
    inline const Aws::String& GetAggregationId() const { return m_aggregationId; }
    template<typename AggregationIdT = Aws::String>
    void SetAggregationId(AggregationIdT&& value) { m_aggregationIdHasBeenSet = true; m_aggregationId = std::forward<AggregationIdT>(value); }
    template<typename AggregationIdT = Aws::String>
    StartSessionsStatisticsAggregationResult& WithAggregationId(AggregationIdT&& value) { SetAggregationId(std::forward<AggregationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartSessionsStatisticsAggregationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aggregationId;
    bool m_aggregationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
