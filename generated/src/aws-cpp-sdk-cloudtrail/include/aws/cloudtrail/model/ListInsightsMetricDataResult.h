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
    AWS_CLOUDTRAIL_API ListInsightsMetricDataResult();
    AWS_CLOUDTRAIL_API ListInsightsMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListInsightsMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Web Services service to which the request was made, such as
     * <code>iam.amazonaws.com</code> or <code>s3.amazonaws.com</code>.</p>
     */
    inline const Aws::String& GetEventSource() const{ return m_eventSource; }

    /**
     * <p>The Amazon Web Services service to which the request was made, such as
     * <code>iam.amazonaws.com</code> or <code>s3.amazonaws.com</code>.</p>
     */
    inline void SetEventSource(const Aws::String& value) { m_eventSource = value; }

    /**
     * <p>The Amazon Web Services service to which the request was made, such as
     * <code>iam.amazonaws.com</code> or <code>s3.amazonaws.com</code>.</p>
     */
    inline void SetEventSource(Aws::String&& value) { m_eventSource = std::move(value); }

    /**
     * <p>The Amazon Web Services service to which the request was made, such as
     * <code>iam.amazonaws.com</code> or <code>s3.amazonaws.com</code>.</p>
     */
    inline void SetEventSource(const char* value) { m_eventSource.assign(value); }

    /**
     * <p>The Amazon Web Services service to which the request was made, such as
     * <code>iam.amazonaws.com</code> or <code>s3.amazonaws.com</code>.</p>
     */
    inline ListInsightsMetricDataResult& WithEventSource(const Aws::String& value) { SetEventSource(value); return *this;}

    /**
     * <p>The Amazon Web Services service to which the request was made, such as
     * <code>iam.amazonaws.com</code> or <code>s3.amazonaws.com</code>.</p>
     */
    inline ListInsightsMetricDataResult& WithEventSource(Aws::String&& value) { SetEventSource(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services service to which the request was made, such as
     * <code>iam.amazonaws.com</code> or <code>s3.amazonaws.com</code>.</p>
     */
    inline ListInsightsMetricDataResult& WithEventSource(const char* value) { SetEventSource(value); return *this;}


    /**
     * <p>The name of the event, typically the Amazon Web Services API on which unusual
     * levels of activity were recorded.</p>
     */
    inline const Aws::String& GetEventName() const{ return m_eventName; }

    /**
     * <p>The name of the event, typically the Amazon Web Services API on which unusual
     * levels of activity were recorded.</p>
     */
    inline void SetEventName(const Aws::String& value) { m_eventName = value; }

    /**
     * <p>The name of the event, typically the Amazon Web Services API on which unusual
     * levels of activity were recorded.</p>
     */
    inline void SetEventName(Aws::String&& value) { m_eventName = std::move(value); }

    /**
     * <p>The name of the event, typically the Amazon Web Services API on which unusual
     * levels of activity were recorded.</p>
     */
    inline void SetEventName(const char* value) { m_eventName.assign(value); }

    /**
     * <p>The name of the event, typically the Amazon Web Services API on which unusual
     * levels of activity were recorded.</p>
     */
    inline ListInsightsMetricDataResult& WithEventName(const Aws::String& value) { SetEventName(value); return *this;}

    /**
     * <p>The name of the event, typically the Amazon Web Services API on which unusual
     * levels of activity were recorded.</p>
     */
    inline ListInsightsMetricDataResult& WithEventName(Aws::String&& value) { SetEventName(std::move(value)); return *this;}

    /**
     * <p>The name of the event, typically the Amazon Web Services API on which unusual
     * levels of activity were recorded.</p>
     */
    inline ListInsightsMetricDataResult& WithEventName(const char* value) { SetEventName(value); return *this;}


    /**
     * <p>The type of CloudTrail Insights event, which is either
     * <code>ApiCallRateInsight</code> or <code>ApiErrorRateInsight</code>. The
     * <code>ApiCallRateInsight</code> Insights type analyzes write-only management API
     * calls that are aggregated per minute against a baseline API call volume. The
     * <code>ApiErrorRateInsight</code> Insights type analyzes management API calls
     * that result in error codes.</p>
     */
    inline const InsightType& GetInsightType() const{ return m_insightType; }

    /**
     * <p>The type of CloudTrail Insights event, which is either
     * <code>ApiCallRateInsight</code> or <code>ApiErrorRateInsight</code>. The
     * <code>ApiCallRateInsight</code> Insights type analyzes write-only management API
     * calls that are aggregated per minute against a baseline API call volume. The
     * <code>ApiErrorRateInsight</code> Insights type analyzes management API calls
     * that result in error codes.</p>
     */
    inline void SetInsightType(const InsightType& value) { m_insightType = value; }

    /**
     * <p>The type of CloudTrail Insights event, which is either
     * <code>ApiCallRateInsight</code> or <code>ApiErrorRateInsight</code>. The
     * <code>ApiCallRateInsight</code> Insights type analyzes write-only management API
     * calls that are aggregated per minute against a baseline API call volume. The
     * <code>ApiErrorRateInsight</code> Insights type analyzes management API calls
     * that result in error codes.</p>
     */
    inline void SetInsightType(InsightType&& value) { m_insightType = std::move(value); }

    /**
     * <p>The type of CloudTrail Insights event, which is either
     * <code>ApiCallRateInsight</code> or <code>ApiErrorRateInsight</code>. The
     * <code>ApiCallRateInsight</code> Insights type analyzes write-only management API
     * calls that are aggregated per minute against a baseline API call volume. The
     * <code>ApiErrorRateInsight</code> Insights type analyzes management API calls
     * that result in error codes.</p>
     */
    inline ListInsightsMetricDataResult& WithInsightType(const InsightType& value) { SetInsightType(value); return *this;}

    /**
     * <p>The type of CloudTrail Insights event, which is either
     * <code>ApiCallRateInsight</code> or <code>ApiErrorRateInsight</code>. The
     * <code>ApiCallRateInsight</code> Insights type analyzes write-only management API
     * calls that are aggregated per minute against a baseline API call volume. The
     * <code>ApiErrorRateInsight</code> Insights type analyzes management API calls
     * that result in error codes.</p>
     */
    inline ListInsightsMetricDataResult& WithInsightType(InsightType&& value) { SetInsightType(std::move(value)); return *this;}


    /**
     * <p>Only returned if <code>InsightType</code> parameter was set to
     * <code>ApiErrorRateInsight</code>.</p> <p>If returning metrics for the
     * <code>ApiErrorRateInsight</code> Insights type, this is the error to retrieve
     * data for. For example, <code>AccessDenied</code>.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Only returned if <code>InsightType</code> parameter was set to
     * <code>ApiErrorRateInsight</code>.</p> <p>If returning metrics for the
     * <code>ApiErrorRateInsight</code> Insights type, this is the error to retrieve
     * data for. For example, <code>AccessDenied</code>.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCode = value; }

    /**
     * <p>Only returned if <code>InsightType</code> parameter was set to
     * <code>ApiErrorRateInsight</code>.</p> <p>If returning metrics for the
     * <code>ApiErrorRateInsight</code> Insights type, this is the error to retrieve
     * data for. For example, <code>AccessDenied</code>.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCode = std::move(value); }

    /**
     * <p>Only returned if <code>InsightType</code> parameter was set to
     * <code>ApiErrorRateInsight</code>.</p> <p>If returning metrics for the
     * <code>ApiErrorRateInsight</code> Insights type, this is the error to retrieve
     * data for. For example, <code>AccessDenied</code>.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCode.assign(value); }

    /**
     * <p>Only returned if <code>InsightType</code> parameter was set to
     * <code>ApiErrorRateInsight</code>.</p> <p>If returning metrics for the
     * <code>ApiErrorRateInsight</code> Insights type, this is the error to retrieve
     * data for. For example, <code>AccessDenied</code>.</p>
     */
    inline ListInsightsMetricDataResult& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Only returned if <code>InsightType</code> parameter was set to
     * <code>ApiErrorRateInsight</code>.</p> <p>If returning metrics for the
     * <code>ApiErrorRateInsight</code> Insights type, this is the error to retrieve
     * data for. For example, <code>AccessDenied</code>.</p>
     */
    inline ListInsightsMetricDataResult& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>Only returned if <code>InsightType</code> parameter was set to
     * <code>ApiErrorRateInsight</code>.</p> <p>If returning metrics for the
     * <code>ApiErrorRateInsight</code> Insights type, this is the error to retrieve
     * data for. For example, <code>AccessDenied</code>.</p>
     */
    inline ListInsightsMetricDataResult& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>List of timestamps at intervals corresponding to the specified time
     * period.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const{ return m_timestamps; }

    /**
     * <p>List of timestamps at intervals corresponding to the specified time
     * period.</p>
     */
    inline void SetTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestamps = value; }

    /**
     * <p>List of timestamps at intervals corresponding to the specified time
     * period.</p>
     */
    inline void SetTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestamps = std::move(value); }

    /**
     * <p>List of timestamps at intervals corresponding to the specified time
     * period.</p>
     */
    inline ListInsightsMetricDataResult& WithTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestamps(value); return *this;}

    /**
     * <p>List of timestamps at intervals corresponding to the specified time
     * period.</p>
     */
    inline ListInsightsMetricDataResult& WithTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestamps(std::move(value)); return *this;}

    /**
     * <p>List of timestamps at intervals corresponding to the specified time
     * period.</p>
     */
    inline ListInsightsMetricDataResult& AddTimestamps(const Aws::Utils::DateTime& value) { m_timestamps.push_back(value); return *this; }

    /**
     * <p>List of timestamps at intervals corresponding to the specified time
     * period.</p>
     */
    inline ListInsightsMetricDataResult& AddTimestamps(Aws::Utils::DateTime&& value) { m_timestamps.push_back(std::move(value)); return *this; }


    /**
     * <p>List of values representing the API call rate or error rate at each
     * timestamp. The number of values is equal to the number of timestamps.</p>
     */
    inline const Aws::Vector<double>& GetValues() const{ return m_values; }

    /**
     * <p>List of values representing the API call rate or error rate at each
     * timestamp. The number of values is equal to the number of timestamps.</p>
     */
    inline void SetValues(const Aws::Vector<double>& value) { m_values = value; }

    /**
     * <p>List of values representing the API call rate or error rate at each
     * timestamp. The number of values is equal to the number of timestamps.</p>
     */
    inline void SetValues(Aws::Vector<double>&& value) { m_values = std::move(value); }

    /**
     * <p>List of values representing the API call rate or error rate at each
     * timestamp. The number of values is equal to the number of timestamps.</p>
     */
    inline ListInsightsMetricDataResult& WithValues(const Aws::Vector<double>& value) { SetValues(value); return *this;}

    /**
     * <p>List of values representing the API call rate or error rate at each
     * timestamp. The number of values is equal to the number of timestamps.</p>
     */
    inline ListInsightsMetricDataResult& WithValues(Aws::Vector<double>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>List of values representing the API call rate or error rate at each
     * timestamp. The number of values is equal to the number of timestamps.</p>
     */
    inline ListInsightsMetricDataResult& AddValues(double value) { m_values.push_back(value); return *this; }


    /**
     * <p>Only returned if the full results could not be returned in a single query.
     * You can set the <code>NextToken</code> parameter in the next request to this
     * value to continue retrieval.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Only returned if the full results could not be returned in a single query.
     * You can set the <code>NextToken</code> parameter in the next request to this
     * value to continue retrieval.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Only returned if the full results could not be returned in a single query.
     * You can set the <code>NextToken</code> parameter in the next request to this
     * value to continue retrieval.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Only returned if the full results could not be returned in a single query.
     * You can set the <code>NextToken</code> parameter in the next request to this
     * value to continue retrieval.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Only returned if the full results could not be returned in a single query.
     * You can set the <code>NextToken</code> parameter in the next request to this
     * value to continue retrieval.</p>
     */
    inline ListInsightsMetricDataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Only returned if the full results could not be returned in a single query.
     * You can set the <code>NextToken</code> parameter in the next request to this
     * value to continue retrieval.</p>
     */
    inline ListInsightsMetricDataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Only returned if the full results could not be returned in a single query.
     * You can set the <code>NextToken</code> parameter in the next request to this
     * value to continue retrieval.</p>
     */
    inline ListInsightsMetricDataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListInsightsMetricDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListInsightsMetricDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListInsightsMetricDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_eventSource;

    Aws::String m_eventName;

    InsightType m_insightType;

    Aws::String m_errorCode;

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;

    Aws::Vector<double> m_values;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
