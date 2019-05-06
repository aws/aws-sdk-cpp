/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class AWS_XRAY_API GetTimeSeriesServiceStatisticsRequest : public XRayRequest
  {
  public:
    GetTimeSeriesServiceStatisticsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTimeSeriesServiceStatistics"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The start of the time frame for which to aggregate statistics.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time frame for which to aggregate statistics.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time frame for which to aggregate statistics.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time frame for which to aggregate statistics.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time frame for which to aggregate statistics.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time frame for which to aggregate statistics.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time frame for which to aggregate statistics.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time frame for which to aggregate statistics.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time frame for which to aggregate statistics.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time frame for which to aggregate statistics.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time frame for which to aggregate statistics.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time frame for which to aggregate statistics.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The case-sensitive name of the group for which to pull statistics from.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The case-sensitive name of the group for which to pull statistics from.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The case-sensitive name of the group for which to pull statistics from.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The case-sensitive name of the group for which to pull statistics from.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The case-sensitive name of the group for which to pull statistics from.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The case-sensitive name of the group for which to pull statistics from.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The case-sensitive name of the group for which to pull statistics from.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The case-sensitive name of the group for which to pull statistics from.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The ARN of the group for which to pull statistics from.</p>
     */
    inline const Aws::String& GetGroupARN() const{ return m_groupARN; }

    /**
     * <p>The ARN of the group for which to pull statistics from.</p>
     */
    inline bool GroupARNHasBeenSet() const { return m_groupARNHasBeenSet; }

    /**
     * <p>The ARN of the group for which to pull statistics from.</p>
     */
    inline void SetGroupARN(const Aws::String& value) { m_groupARNHasBeenSet = true; m_groupARN = value; }

    /**
     * <p>The ARN of the group for which to pull statistics from.</p>
     */
    inline void SetGroupARN(Aws::String&& value) { m_groupARNHasBeenSet = true; m_groupARN = std::move(value); }

    /**
     * <p>The ARN of the group for which to pull statistics from.</p>
     */
    inline void SetGroupARN(const char* value) { m_groupARNHasBeenSet = true; m_groupARN.assign(value); }

    /**
     * <p>The ARN of the group for which to pull statistics from.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithGroupARN(const Aws::String& value) { SetGroupARN(value); return *this;}

    /**
     * <p>The ARN of the group for which to pull statistics from.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithGroupARN(Aws::String&& value) { SetGroupARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the group for which to pull statistics from.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithGroupARN(const char* value) { SetGroupARN(value); return *this;}


    /**
     * <p>A filter expression defining entities that will be aggregated for statistics.
     * Supports ID, service, and edge functions. If no selector expression is
     * specified, edge statistics are returned. </p>
     */
    inline const Aws::String& GetEntitySelectorExpression() const{ return m_entitySelectorExpression; }

    /**
     * <p>A filter expression defining entities that will be aggregated for statistics.
     * Supports ID, service, and edge functions. If no selector expression is
     * specified, edge statistics are returned. </p>
     */
    inline bool EntitySelectorExpressionHasBeenSet() const { return m_entitySelectorExpressionHasBeenSet; }

    /**
     * <p>A filter expression defining entities that will be aggregated for statistics.
     * Supports ID, service, and edge functions. If no selector expression is
     * specified, edge statistics are returned. </p>
     */
    inline void SetEntitySelectorExpression(const Aws::String& value) { m_entitySelectorExpressionHasBeenSet = true; m_entitySelectorExpression = value; }

    /**
     * <p>A filter expression defining entities that will be aggregated for statistics.
     * Supports ID, service, and edge functions. If no selector expression is
     * specified, edge statistics are returned. </p>
     */
    inline void SetEntitySelectorExpression(Aws::String&& value) { m_entitySelectorExpressionHasBeenSet = true; m_entitySelectorExpression = std::move(value); }

    /**
     * <p>A filter expression defining entities that will be aggregated for statistics.
     * Supports ID, service, and edge functions. If no selector expression is
     * specified, edge statistics are returned. </p>
     */
    inline void SetEntitySelectorExpression(const char* value) { m_entitySelectorExpressionHasBeenSet = true; m_entitySelectorExpression.assign(value); }

    /**
     * <p>A filter expression defining entities that will be aggregated for statistics.
     * Supports ID, service, and edge functions. If no selector expression is
     * specified, edge statistics are returned. </p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithEntitySelectorExpression(const Aws::String& value) { SetEntitySelectorExpression(value); return *this;}

    /**
     * <p>A filter expression defining entities that will be aggregated for statistics.
     * Supports ID, service, and edge functions. If no selector expression is
     * specified, edge statistics are returned. </p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithEntitySelectorExpression(Aws::String&& value) { SetEntitySelectorExpression(std::move(value)); return *this;}

    /**
     * <p>A filter expression defining entities that will be aggregated for statistics.
     * Supports ID, service, and edge functions. If no selector expression is
     * specified, edge statistics are returned. </p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithEntitySelectorExpression(const char* value) { SetEntitySelectorExpression(value); return *this;}


    /**
     * <p>Aggregation period in seconds.</p>
     */
    inline int GetPeriod() const{ return m_period; }

    /**
     * <p>Aggregation period in seconds.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>Aggregation period in seconds.</p>
     */
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>Aggregation period in seconds.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithPeriod(int value) { SetPeriod(value); return *this;}


    /**
     * <p>Pagination token. Not used.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetTimeSeriesServiceStatisticsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;

    Aws::String m_groupARN;
    bool m_groupARNHasBeenSet;

    Aws::String m_entitySelectorExpression;
    bool m_entitySelectorExpressionHasBeenSet;

    int m_period;
    bool m_periodHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
