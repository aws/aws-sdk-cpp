/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace deadline
{
namespace Model
{

  /**
   */
  class GetSessionsStatisticsAggregationRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API GetSessionsStatisticsAggregationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSessionsStatisticsAggregation"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the farm to include in the statistics. This should be the
     * same as the farm ID used in the call to the
     * <code>StartSessionsStatisticsAggregation</code> operation.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline GetSessionsStatisticsAggregationRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline GetSessionsStatisticsAggregationRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline GetSessionsStatisticsAggregationRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier returned by the
     * <code>StartSessionsStatisticsAggregation</code> operation that identifies the
     * aggregated statistics.</p>
     */
    inline const Aws::String& GetAggregationId() const{ return m_aggregationId; }
    inline bool AggregationIdHasBeenSet() const { return m_aggregationIdHasBeenSet; }
    inline void SetAggregationId(const Aws::String& value) { m_aggregationIdHasBeenSet = true; m_aggregationId = value; }
    inline void SetAggregationId(Aws::String&& value) { m_aggregationIdHasBeenSet = true; m_aggregationId = std::move(value); }
    inline void SetAggregationId(const char* value) { m_aggregationIdHasBeenSet = true; m_aggregationId.assign(value); }
    inline GetSessionsStatisticsAggregationRequest& WithAggregationId(const Aws::String& value) { SetAggregationId(value); return *this;}
    inline GetSessionsStatisticsAggregationRequest& WithAggregationId(Aws::String&& value) { SetAggregationId(std::move(value)); return *this;}
    inline GetSessionsStatisticsAggregationRequest& WithAggregationId(const char* value) { SetAggregationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetSessionsStatisticsAggregationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or <code>null</code> to start from the
     * beginning.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetSessionsStatisticsAggregationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetSessionsStatisticsAggregationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetSessionsStatisticsAggregationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_aggregationId;
    bool m_aggregationIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
