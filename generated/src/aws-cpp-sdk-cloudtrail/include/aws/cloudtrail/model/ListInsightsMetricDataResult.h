/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/InsightType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudTrail
{
namespace Model
{
  class ListInsightsMetricDataResult
  {
  public:
    AWS_CLOUDTRAIL_API ListInsightsMetricDataResult() = default;
    AWS_CLOUDTRAIL_API ListInsightsMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListInsightsMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Web Services service to which the request was made, such as
     * <code>iam.amazonaws.com</code> or <code>s3.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetEventSource() const { return m_eventSource; }
    template<typename EventSourceT = Aws::String>
    void SetEventSource(EventSourceT&& value) { m_eventSourceHasBeenSet = true; m_eventSource = std::forward<EventSourceT>(value); }
    template<typename EventSourceT = Aws::String>
    ListInsightsMetricDataResult& WithEventSource(EventSourceT&& value) { SetEventSource(std::forward<EventSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event, typically the Amazon Web Services API on which unusual
     * levels of activity were recorded.</p>
     */
    inline const Aws::String& GetEventName() const { return m_eventName; }
    template<typename EventNameT = Aws::String>
    void SetEventName(EventNameT&& value) { m_eventNameHasBeenSet = true; m_eventName = std::forward<EventNameT>(value); }
    template<typename EventNameT = Aws::String>
    ListInsightsMetricDataResult& WithEventName(EventNameT&& value) { SetEventName(std::forward<EventNameT>(value)); return *this;}
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
    inline InsightType GetInsightType() const { return m_insightType; }
    inline void SetInsightType(InsightType value) { m_insightTypeHasBeenSet = true; m_insightType = value; }
    inline ListInsightsMetricDataResult& WithInsightType(InsightType value) { SetInsightType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only returned if <code>InsightType</code> parameter was set to
     * <code>ApiErrorRateInsight</code>.</p> <p>If returning metrics for the
     * <code>ApiErrorRateInsight</code> Insights type, this is the error to retrieve
     * data for. For example, <code>AccessDenied</code>.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    ListInsightsMetricDataResult& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of timestamps at intervals corresponding to the specified time
     * period.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const { return m_timestamps; }
    template<typename TimestampsT = Aws::Vector<Aws::Utils::DateTime>>
    void SetTimestamps(TimestampsT&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::forward<TimestampsT>(value); }
    template<typename TimestampsT = Aws::Vector<Aws::Utils::DateTime>>
    ListInsightsMetricDataResult& WithTimestamps(TimestampsT&& value) { SetTimestamps(std::forward<TimestampsT>(value)); return *this;}
    template<typename TimestampsT = Aws::Utils::DateTime>
    ListInsightsMetricDataResult& AddTimestamps(TimestampsT&& value) { m_timestampsHasBeenSet = true; m_timestamps.emplace_back(std::forward<TimestampsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of values representing the API call rate or error rate at each
     * timestamp. The number of values is equal to the number of timestamps.</p>
     */
    inline const Aws::Vector<double>& GetValues() const { return m_values; }
    template<typename ValuesT = Aws::Vector<double>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<double>>
    ListInsightsMetricDataResult& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    inline ListInsightsMetricDataResult& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Only returned if the full results could not be returned in a single query.
     * You can set the <code>NextToken</code> parameter in the next request to this
     * value to continue retrieval.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInsightsMetricDataResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInsightsMetricDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventSource;
    bool m_eventSourceHasBeenSet = false;

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet = false;

    InsightType m_insightType{InsightType::NOT_SET};
    bool m_insightTypeHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
    bool m_timestampsHasBeenSet = false;

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
