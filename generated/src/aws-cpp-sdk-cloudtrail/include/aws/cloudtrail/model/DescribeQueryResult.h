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
    AWS_CLOUDTRAIL_API DescribeQueryResult();
    AWS_CLOUDTRAIL_API DescribeQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API DescribeQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the query.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The ID of the query.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryId = value; }

    /**
     * <p>The ID of the query.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryId = std::move(value); }

    /**
     * <p>The ID of the query.</p>
     */
    inline void SetQueryId(const char* value) { m_queryId.assign(value); }

    /**
     * <p>The ID of the query.</p>
     */
    inline DescribeQueryResult& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The ID of the query.</p>
     */
    inline DescribeQueryResult& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the query.</p>
     */
    inline DescribeQueryResult& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>The SQL code of a query.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The SQL code of a query.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryString = value; }

    /**
     * <p>The SQL code of a query.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryString = std::move(value); }

    /**
     * <p>The SQL code of a query.</p>
     */
    inline void SetQueryString(const char* value) { m_queryString.assign(value); }

    /**
     * <p>The SQL code of a query.</p>
     */
    inline DescribeQueryResult& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The SQL code of a query.</p>
     */
    inline DescribeQueryResult& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The SQL code of a query.</p>
     */
    inline DescribeQueryResult& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The status of a query. Values for <code>QueryStatus</code> include
     * <code>QUEUED</code>, <code>RUNNING</code>, <code>FINISHED</code>,
     * <code>FAILED</code>, <code>TIMED_OUT</code>, or <code>CANCELLED</code> </p>
     */
    inline const QueryStatus& GetQueryStatus() const{ return m_queryStatus; }

    /**
     * <p>The status of a query. Values for <code>QueryStatus</code> include
     * <code>QUEUED</code>, <code>RUNNING</code>, <code>FINISHED</code>,
     * <code>FAILED</code>, <code>TIMED_OUT</code>, or <code>CANCELLED</code> </p>
     */
    inline void SetQueryStatus(const QueryStatus& value) { m_queryStatus = value; }

    /**
     * <p>The status of a query. Values for <code>QueryStatus</code> include
     * <code>QUEUED</code>, <code>RUNNING</code>, <code>FINISHED</code>,
     * <code>FAILED</code>, <code>TIMED_OUT</code>, or <code>CANCELLED</code> </p>
     */
    inline void SetQueryStatus(QueryStatus&& value) { m_queryStatus = std::move(value); }

    /**
     * <p>The status of a query. Values for <code>QueryStatus</code> include
     * <code>QUEUED</code>, <code>RUNNING</code>, <code>FINISHED</code>,
     * <code>FAILED</code>, <code>TIMED_OUT</code>, or <code>CANCELLED</code> </p>
     */
    inline DescribeQueryResult& WithQueryStatus(const QueryStatus& value) { SetQueryStatus(value); return *this;}

    /**
     * <p>The status of a query. Values for <code>QueryStatus</code> include
     * <code>QUEUED</code>, <code>RUNNING</code>, <code>FINISHED</code>,
     * <code>FAILED</code>, <code>TIMED_OUT</code>, or <code>CANCELLED</code> </p>
     */
    inline DescribeQueryResult& WithQueryStatus(QueryStatus&& value) { SetQueryStatus(std::move(value)); return *this;}


    /**
     * <p>Metadata about a query, including the number of events that were matched, the
     * total number of events scanned, the query run time in milliseconds, and the
     * query's creation time.</p>
     */
    inline const QueryStatisticsForDescribeQuery& GetQueryStatistics() const{ return m_queryStatistics; }

    /**
     * <p>Metadata about a query, including the number of events that were matched, the
     * total number of events scanned, the query run time in milliseconds, and the
     * query's creation time.</p>
     */
    inline void SetQueryStatistics(const QueryStatisticsForDescribeQuery& value) { m_queryStatistics = value; }

    /**
     * <p>Metadata about a query, including the number of events that were matched, the
     * total number of events scanned, the query run time in milliseconds, and the
     * query's creation time.</p>
     */
    inline void SetQueryStatistics(QueryStatisticsForDescribeQuery&& value) { m_queryStatistics = std::move(value); }

    /**
     * <p>Metadata about a query, including the number of events that were matched, the
     * total number of events scanned, the query run time in milliseconds, and the
     * query's creation time.</p>
     */
    inline DescribeQueryResult& WithQueryStatistics(const QueryStatisticsForDescribeQuery& value) { SetQueryStatistics(value); return *this;}

    /**
     * <p>Metadata about a query, including the number of events that were matched, the
     * total number of events scanned, the query run time in milliseconds, and the
     * query's creation time.</p>
     */
    inline DescribeQueryResult& WithQueryStatistics(QueryStatisticsForDescribeQuery&& value) { SetQueryStatistics(std::move(value)); return *this;}


    /**
     * <p>The error message returned if a query failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message returned if a query failed.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>The error message returned if a query failed.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>The error message returned if a query failed.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>The error message returned if a query failed.</p>
     */
    inline DescribeQueryResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message returned if a query failed.</p>
     */
    inline DescribeQueryResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message returned if a query failed.</p>
     */
    inline DescribeQueryResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The URI for the S3 bucket where CloudTrail delivered query results, if
     * applicable.</p>
     */
    inline const Aws::String& GetDeliveryS3Uri() const{ return m_deliveryS3Uri; }

    /**
     * <p>The URI for the S3 bucket where CloudTrail delivered query results, if
     * applicable.</p>
     */
    inline void SetDeliveryS3Uri(const Aws::String& value) { m_deliveryS3Uri = value; }

    /**
     * <p>The URI for the S3 bucket where CloudTrail delivered query results, if
     * applicable.</p>
     */
    inline void SetDeliveryS3Uri(Aws::String&& value) { m_deliveryS3Uri = std::move(value); }

    /**
     * <p>The URI for the S3 bucket where CloudTrail delivered query results, if
     * applicable.</p>
     */
    inline void SetDeliveryS3Uri(const char* value) { m_deliveryS3Uri.assign(value); }

    /**
     * <p>The URI for the S3 bucket where CloudTrail delivered query results, if
     * applicable.</p>
     */
    inline DescribeQueryResult& WithDeliveryS3Uri(const Aws::String& value) { SetDeliveryS3Uri(value); return *this;}

    /**
     * <p>The URI for the S3 bucket where CloudTrail delivered query results, if
     * applicable.</p>
     */
    inline DescribeQueryResult& WithDeliveryS3Uri(Aws::String&& value) { SetDeliveryS3Uri(std::move(value)); return *this;}

    /**
     * <p>The URI for the S3 bucket where CloudTrail delivered query results, if
     * applicable.</p>
     */
    inline DescribeQueryResult& WithDeliveryS3Uri(const char* value) { SetDeliveryS3Uri(value); return *this;}


    /**
     * <p>The delivery status.</p>
     */
    inline const DeliveryStatus& GetDeliveryStatus() const{ return m_deliveryStatus; }

    /**
     * <p>The delivery status.</p>
     */
    inline void SetDeliveryStatus(const DeliveryStatus& value) { m_deliveryStatus = value; }

    /**
     * <p>The delivery status.</p>
     */
    inline void SetDeliveryStatus(DeliveryStatus&& value) { m_deliveryStatus = std::move(value); }

    /**
     * <p>The delivery status.</p>
     */
    inline DescribeQueryResult& WithDeliveryStatus(const DeliveryStatus& value) { SetDeliveryStatus(value); return *this;}

    /**
     * <p>The delivery status.</p>
     */
    inline DescribeQueryResult& WithDeliveryStatus(DeliveryStatus&& value) { SetDeliveryStatus(std::move(value)); return *this;}

  private:

    Aws::String m_queryId;

    Aws::String m_queryString;

    QueryStatus m_queryStatus;

    QueryStatisticsForDescribeQuery m_queryStatistics;

    Aws::String m_errorMessage;

    Aws::String m_deliveryS3Uri;

    DeliveryStatus m_deliveryStatus;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
