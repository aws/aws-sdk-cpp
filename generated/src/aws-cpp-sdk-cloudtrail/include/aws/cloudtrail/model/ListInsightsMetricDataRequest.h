/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/InsightType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudtrail/model/InsightsMetricDataType.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class ListInsightsMetricDataRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API ListInsightsMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInsightsMetricData"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services service to which the request was made, such as
     * <code>iam.amazonaws.com</code> or <code>s3.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetEventSource() const{ return m_eventSource; }
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }
    inline void SetEventSource(const Aws::String& value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }
    inline void SetEventSource(Aws::String&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::move(value); }
    inline void SetEventSource(const char* value) { m_eventSourceHasBeenSet = true; m_eventSource.assign(value); }
    inline ListInsightsMetricDataRequest& WithEventSource(const Aws::String& value) { SetEventSource(value); return *this;}
    inline ListInsightsMetricDataRequest& WithEventSource(Aws::String&& value) { SetEventSource(std::move(value)); return *this;}
    inline ListInsightsMetricDataRequest& WithEventSource(const char* value) { SetEventSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event, typically the Amazon Web Services API on which unusual
     * levels of activity were recorded.</p>
     */
    inline const Aws::String& GetEventName() const{ return m_eventName; }
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }
    inline void SetEventName(const Aws::String& value) { m_eventNameHasBeenSet = true; m_eventName = value; }
    inline void SetEventName(Aws::String&& value) { m_eventNameHasBeenSet = true; m_eventName = std::move(value); }
    inline void SetEventName(const char* value) { m_eventNameHasBeenSet = true; m_eventName.assign(value); }
    inline ListInsightsMetricDataRequest& WithEventName(const Aws::String& value) { SetEventName(value); return *this;}
    inline ListInsightsMetricDataRequest& WithEventName(Aws::String&& value) { SetEventName(std::move(value)); return *this;}
    inline ListInsightsMetricDataRequest& WithEventName(const char* value) { SetEventName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of CloudTrail Insights event, which is either
     * <code>ApiCallRateInsight</code> or <code>ApiErrorRateInsight</code>. The
     * <code>ApiCallRateInsight</code> Insights type analyzes write-only management API
     * calls that are aggregated per minute against a baseline API call volume. The
     * <code>ApiErrorRateInsight</code> Insights type analyzes management API calls
     * that result in error codes.</p>
     */
    inline const InsightType& GetInsightType() const{ return m_insightType; }
    inline bool InsightTypeHasBeenSet() const { return m_insightTypeHasBeenSet; }
    inline void SetInsightType(const InsightType& value) { m_insightTypeHasBeenSet = true; m_insightType = value; }
    inline void SetInsightType(InsightType&& value) { m_insightTypeHasBeenSet = true; m_insightType = std::move(value); }
    inline ListInsightsMetricDataRequest& WithInsightType(const InsightType& value) { SetInsightType(value); return *this;}
    inline ListInsightsMetricDataRequest& WithInsightType(InsightType&& value) { SetInsightType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Conditionally required if the <code>InsightType</code> parameter is set to
     * <code>ApiErrorRateInsight</code>.</p> <p>If returning metrics for the
     * <code>ApiErrorRateInsight</code> Insights type, this is the error to retrieve
     * data for. For example, <code>AccessDenied</code>.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline ListInsightsMetricDataRequest& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline ListInsightsMetricDataRequest& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline ListInsightsMetricDataRequest& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies, in UTC, the start time for time-series data. The value specified
     * is inclusive; results include data points with the specified time stamp.</p>
     * <p>The default is 90 days before the time of request.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ListInsightsMetricDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListInsightsMetricDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies, in UTC, the end time for time-series data. The value specified is
     * exclusive; results include data points up to the specified time stamp.</p>
     * <p>The default is the time of request.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ListInsightsMetricDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListInsightsMetricDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Granularity of data to retrieve, in seconds. Valid values are
     * <code>60</code>, <code>300</code>, and <code>3600</code>. If you specify any
     * other value, you will get an error. The default is 3600 seconds.</p>
     */
    inline int GetPeriod() const{ return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(int value) { m_periodHasBeenSet = true; m_period = value; }
    inline ListInsightsMetricDataRequest& WithPeriod(int value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of data points to return. Valid values are <code>NonZeroData</code> and
     * <code>FillWithZeros</code>. The default is <code>NonZeroData</code>.</p>
     */
    inline const InsightsMetricDataType& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const InsightsMetricDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(InsightsMetricDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline ListInsightsMetricDataRequest& WithDataType(const InsightsMetricDataType& value) { SetDataType(value); return *this;}
    inline ListInsightsMetricDataRequest& WithDataType(InsightsMetricDataType&& value) { SetDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of data points to return. Valid values are integers from 1
     * to 21600. The default value is 21600.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInsightsMetricDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returned if all datapoints can't be returned in a single call. For example,
     * due to reaching <code>MaxResults</code>.</p> <p>Add this parameter to the
     * request to continue retrieving results starting from the last evaluated
     * point.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListInsightsMetricDataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInsightsMetricDataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInsightsMetricDataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet = false;

    InsightType m_insightType;
    bool m_insightTypeHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_period;
    bool m_periodHasBeenSet = false;

    InsightsMetricDataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
