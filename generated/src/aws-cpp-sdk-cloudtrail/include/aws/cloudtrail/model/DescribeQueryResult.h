/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/QueryStatus.h>
#include <aws/cloudtrail/model/QueryStatisticsForDescribeQuery.h>
#include <aws/cloudtrail/model/DeliveryStatus.h>
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
  class DescribeQueryResult
  {
  public:
    AWS_CLOUDTRAIL_API DescribeQueryResult() = default;
    AWS_CLOUDTRAIL_API DescribeQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API DescribeQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the query.</p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    DescribeQueryResult& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL code of a query.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    DescribeQueryResult& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a query. Values for <code>QueryStatus</code> include
     * <code>QUEUED</code>, <code>RUNNING</code>, <code>FINISHED</code>,
     * <code>FAILED</code>, <code>TIMED_OUT</code>, or <code>CANCELLED</code> </p>
     */
    inline QueryStatus GetQueryStatus() const { return m_queryStatus; }
    inline void SetQueryStatus(QueryStatus value) { m_queryStatusHasBeenSet = true; m_queryStatus = value; }
    inline DescribeQueryResult& WithQueryStatus(QueryStatus value) { SetQueryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata about a query, including the number of events that were matched, the
     * total number of events scanned, the query run time in milliseconds, and the
     * query's creation time.</p>
     */
    inline const QueryStatisticsForDescribeQuery& GetQueryStatistics() const { return m_queryStatistics; }
    template<typename QueryStatisticsT = QueryStatisticsForDescribeQuery>
    void SetQueryStatistics(QueryStatisticsT&& value) { m_queryStatisticsHasBeenSet = true; m_queryStatistics = std::forward<QueryStatisticsT>(value); }
    template<typename QueryStatisticsT = QueryStatisticsForDescribeQuery>
    DescribeQueryResult& WithQueryStatistics(QueryStatisticsT&& value) { SetQueryStatistics(std::forward<QueryStatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message returned if a query failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DescribeQueryResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI for the S3 bucket where CloudTrail delivered query results, if
     * applicable.</p>
     */
    inline const Aws::String& GetDeliveryS3Uri() const { return m_deliveryS3Uri; }
    template<typename DeliveryS3UriT = Aws::String>
    void SetDeliveryS3Uri(DeliveryS3UriT&& value) { m_deliveryS3UriHasBeenSet = true; m_deliveryS3Uri = std::forward<DeliveryS3UriT>(value); }
    template<typename DeliveryS3UriT = Aws::String>
    DescribeQueryResult& WithDeliveryS3Uri(DeliveryS3UriT&& value) { SetDeliveryS3Uri(std::forward<DeliveryS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delivery status.</p>
     */
    inline DeliveryStatus GetDeliveryStatus() const { return m_deliveryStatus; }
    inline void SetDeliveryStatus(DeliveryStatus value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = value; }
    inline DescribeQueryResult& WithDeliveryStatus(DeliveryStatus value) { SetDeliveryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The prompt used for a generated query. For information about generated
     * queries, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/lake-query-generator.html">Create
     * CloudTrail Lake queries from natural language prompts</a> in the <i>CloudTrail
     * </i> user guide. </p>
     */
    inline const Aws::String& GetPrompt() const { return m_prompt; }
    template<typename PromptT = Aws::String>
    void SetPrompt(PromptT&& value) { m_promptHasBeenSet = true; m_prompt = std::forward<PromptT>(value); }
    template<typename PromptT = Aws::String>
    DescribeQueryResult& WithPrompt(PromptT&& value) { SetPrompt(std::forward<PromptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The account ID of the event data store owner. </p>
     */
    inline const Aws::String& GetEventDataStoreOwnerAccountId() const { return m_eventDataStoreOwnerAccountId; }
    template<typename EventDataStoreOwnerAccountIdT = Aws::String>
    void SetEventDataStoreOwnerAccountId(EventDataStoreOwnerAccountIdT&& value) { m_eventDataStoreOwnerAccountIdHasBeenSet = true; m_eventDataStoreOwnerAccountId = std::forward<EventDataStoreOwnerAccountIdT>(value); }
    template<typename EventDataStoreOwnerAccountIdT = Aws::String>
    DescribeQueryResult& WithEventDataStoreOwnerAccountId(EventDataStoreOwnerAccountIdT&& value) { SetEventDataStoreOwnerAccountId(std::forward<EventDataStoreOwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    QueryStatus m_queryStatus{QueryStatus::NOT_SET};
    bool m_queryStatusHasBeenSet = false;

    QueryStatisticsForDescribeQuery m_queryStatistics;
    bool m_queryStatisticsHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_deliveryS3Uri;
    bool m_deliveryS3UriHasBeenSet = false;

    DeliveryStatus m_deliveryStatus{DeliveryStatus::NOT_SET};
    bool m_deliveryStatusHasBeenSet = false;

    Aws::String m_prompt;
    bool m_promptHasBeenSet = false;

    Aws::String m_eventDataStoreOwnerAccountId;
    bool m_eventDataStoreOwnerAccountIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
