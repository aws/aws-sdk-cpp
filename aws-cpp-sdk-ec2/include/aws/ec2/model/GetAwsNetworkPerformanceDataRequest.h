/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DataQuery.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class GetAwsNetworkPerformanceDataRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetAwsNetworkPerformanceDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAwsNetworkPerformanceData"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A list of network performance data queries.</p>
     */
    inline const Aws::Vector<DataQuery>& GetDataQueries() const{ return m_dataQueries; }

    /**
     * <p>A list of network performance data queries.</p>
     */
    inline bool DataQueriesHasBeenSet() const { return m_dataQueriesHasBeenSet; }

    /**
     * <p>A list of network performance data queries.</p>
     */
    inline void SetDataQueries(const Aws::Vector<DataQuery>& value) { m_dataQueriesHasBeenSet = true; m_dataQueries = value; }

    /**
     * <p>A list of network performance data queries.</p>
     */
    inline void SetDataQueries(Aws::Vector<DataQuery>&& value) { m_dataQueriesHasBeenSet = true; m_dataQueries = std::move(value); }

    /**
     * <p>A list of network performance data queries.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& WithDataQueries(const Aws::Vector<DataQuery>& value) { SetDataQueries(value); return *this;}

    /**
     * <p>A list of network performance data queries.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& WithDataQueries(Aws::Vector<DataQuery>&& value) { SetDataQueries(std::move(value)); return *this;}

    /**
     * <p>A list of network performance data queries.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& AddDataQueries(const DataQuery& value) { m_dataQueriesHasBeenSet = true; m_dataQueries.push_back(value); return *this; }

    /**
     * <p>A list of network performance data queries.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& AddDataQueries(DataQuery&& value) { m_dataQueriesHasBeenSet = true; m_dataQueries.push_back(std::move(value)); return *this; }


    /**
     * <p>The starting time for the performance data request. The starting time must be
     * formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-10T12:00:00.000Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The starting time for the performance data request. The starting time must be
     * formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-10T12:00:00.000Z</code>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The starting time for the performance data request. The starting time must be
     * formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-10T12:00:00.000Z</code>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The starting time for the performance data request. The starting time must be
     * formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-10T12:00:00.000Z</code>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The starting time for the performance data request. The starting time must be
     * formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-10T12:00:00.000Z</code>.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The starting time for the performance data request. The starting time must be
     * formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-10T12:00:00.000Z</code>.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The ending time for the performance data request. The end time must be
     * formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-12T12:00:00.000Z</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The ending time for the performance data request. The end time must be
     * formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-12T12:00:00.000Z</code>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The ending time for the performance data request. The end time must be
     * formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-12T12:00:00.000Z</code>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The ending time for the performance data request. The end time must be
     * formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-12T12:00:00.000Z</code>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The ending time for the performance data request. The end time must be
     * formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-12T12:00:00.000Z</code>.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The ending time for the performance data request. The end time must be
     * formatted as <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2022-06-12T12:00:00.000Z</code>.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline GetAwsNetworkPerformanceDataRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<DataQuery> m_dataQueries;
    bool m_dataQueriesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
