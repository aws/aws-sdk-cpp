/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint/model/BaseKpiResult.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides the results of a query that retrieved the data for a standard metric
   * that applies to a campaign, and provides information about that
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/CampaignDateRangeKpiResponse">AWS
   * API Reference</a></p>
   */
  class CampaignDateRangeKpiResponse
  {
  public:
    AWS_PINPOINT_API CampaignDateRangeKpiResponse();
    AWS_PINPOINT_API CampaignDateRangeKpiResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API CampaignDateRangeKpiResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline CampaignDateRangeKpiResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline CampaignDateRangeKpiResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the application that the metric applies to.</p>
     */
    inline CampaignDateRangeKpiResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The unique identifier for the campaign that the metric applies to.</p>
     */
    inline const Aws::String& GetCampaignId() const{ return m_campaignId; }

    /**
     * <p>The unique identifier for the campaign that the metric applies to.</p>
     */
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }

    /**
     * <p>The unique identifier for the campaign that the metric applies to.</p>
     */
    inline void SetCampaignId(const Aws::String& value) { m_campaignIdHasBeenSet = true; m_campaignId = value; }

    /**
     * <p>The unique identifier for the campaign that the metric applies to.</p>
     */
    inline void SetCampaignId(Aws::String&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::move(value); }

    /**
     * <p>The unique identifier for the campaign that the metric applies to.</p>
     */
    inline void SetCampaignId(const char* value) { m_campaignIdHasBeenSet = true; m_campaignId.assign(value); }

    /**
     * <p>The unique identifier for the campaign that the metric applies to.</p>
     */
    inline CampaignDateRangeKpiResponse& WithCampaignId(const Aws::String& value) { SetCampaignId(value); return *this;}

    /**
     * <p>The unique identifier for the campaign that the metric applies to.</p>
     */
    inline CampaignDateRangeKpiResponse& WithCampaignId(Aws::String&& value) { SetCampaignId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the campaign that the metric applies to.</p>
     */
    inline CampaignDateRangeKpiResponse& WithCampaignId(const char* value) { SetCampaignId(value); return *this;}


    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline CampaignDateRangeKpiResponse& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The last date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline CampaignDateRangeKpiResponse& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of possible values,
     * see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline const Aws::String& GetKpiName() const{ return m_kpiName; }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of possible values,
     * see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline bool KpiNameHasBeenSet() const { return m_kpiNameHasBeenSet; }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of possible values,
     * see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline void SetKpiName(const Aws::String& value) { m_kpiNameHasBeenSet = true; m_kpiName = value; }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of possible values,
     * see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline void SetKpiName(Aws::String&& value) { m_kpiNameHasBeenSet = true; m_kpiName = std::move(value); }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of possible values,
     * see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline void SetKpiName(const char* value) { m_kpiNameHasBeenSet = true; m_kpiName.assign(value); }

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of possible values,
     * see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline CampaignDateRangeKpiResponse& WithKpiName(const Aws::String& value) { SetKpiName(value); return *this;}

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of possible values,
     * see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline CampaignDateRangeKpiResponse& WithKpiName(Aws::String&& value) { SetKpiName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric, also referred to as a <i>key performance indicator
     * (KPI)</i>, that the data was retrieved for. This value describes the associated
     * metric and consists of two or more terms, which are comprised of lowercase
     * alphanumeric characters, separated by a hyphen. For a list of possible values,
     * see the <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/developerguide/analytics-standard-metrics.html">Amazon
     * Pinpoint Developer Guide</a>.</p>
     */
    inline CampaignDateRangeKpiResponse& WithKpiName(const char* value) { SetKpiName(value); return *this;}


    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline const BaseKpiResult& GetKpiResult() const{ return m_kpiResult; }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline bool KpiResultHasBeenSet() const { return m_kpiResultHasBeenSet; }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline void SetKpiResult(const BaseKpiResult& value) { m_kpiResultHasBeenSet = true; m_kpiResult = value; }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline void SetKpiResult(BaseKpiResult&& value) { m_kpiResultHasBeenSet = true; m_kpiResult = std::move(value); }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline CampaignDateRangeKpiResponse& WithKpiResult(const BaseKpiResult& value) { SetKpiResult(value); return *this;}

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the value for the metric and metadata about that value.</p>
     */
    inline CampaignDateRangeKpiResponse& WithKpiResult(BaseKpiResult&& value) { SetKpiResult(std::move(value)); return *this;}


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Campaign Metrics resource
     * because the resource returns all results in a single page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Campaign Metrics resource
     * because the resource returns all results in a single page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Campaign Metrics resource
     * because the resource returns all results in a single page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Campaign Metrics resource
     * because the resource returns all results in a single page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Campaign Metrics resource
     * because the resource returns all results in a single page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Campaign Metrics resource
     * because the resource returns all results in a single page.</p>
     */
    inline CampaignDateRangeKpiResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Campaign Metrics resource
     * because the resource returns all results in a single page.</p>
     */
    inline CampaignDateRangeKpiResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null for the Campaign Metrics resource
     * because the resource returns all results in a single page.</p>
     */
    inline CampaignDateRangeKpiResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline CampaignDateRangeKpiResponse& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The first date and time of the date range that was used to filter the query
     * results, in extended ISO 8601 format. The date range is inclusive.</p>
     */
    inline CampaignDateRangeKpiResponse& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_kpiName;
    bool m_kpiNameHasBeenSet = false;

    BaseKpiResult m_kpiResult;
    bool m_kpiResultHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
