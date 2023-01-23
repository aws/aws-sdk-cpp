/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/TimeRange.h>
#include <aws/macie2/model/UsageRecord.h>
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
namespace Macie2
{
namespace Model
{
  class GetUsageStatisticsResult
  {
  public:
    AWS_MACIE2_API GetUsageStatisticsResult();
    AWS_MACIE2_API GetUsageStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetUsageStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline GetUsageStatisticsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline GetUsageStatisticsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline GetUsageStatisticsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for an account that matches the filter criteria specified in
     * the request.</p>
     */
    inline const Aws::Vector<UsageRecord>& GetRecords() const{ return m_records; }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for an account that matches the filter criteria specified in
     * the request.</p>
     */
    inline void SetRecords(const Aws::Vector<UsageRecord>& value) { m_records = value; }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for an account that matches the filter criteria specified in
     * the request.</p>
     */
    inline void SetRecords(Aws::Vector<UsageRecord>&& value) { m_records = std::move(value); }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for an account that matches the filter criteria specified in
     * the request.</p>
     */
    inline GetUsageStatisticsResult& WithRecords(const Aws::Vector<UsageRecord>& value) { SetRecords(value); return *this;}

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for an account that matches the filter criteria specified in
     * the request.</p>
     */
    inline GetUsageStatisticsResult& WithRecords(Aws::Vector<UsageRecord>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for an account that matches the filter criteria specified in
     * the request.</p>
     */
    inline GetUsageStatisticsResult& AddRecords(const UsageRecord& value) { m_records.push_back(value); return *this; }

    /**
     * <p>An array of objects that contains the results of the query. Each object
     * contains the data for an account that matches the filter criteria specified in
     * the request.</p>
     */
    inline GetUsageStatisticsResult& AddRecords(UsageRecord&& value) { m_records.push_back(std::move(value)); return *this; }


    /**
     * <p>The inclusive time period that the usage data applies to. Possible values
     * are: MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS,
     * for the preceding 30 days.</p>
     */
    inline const TimeRange& GetTimeRange() const{ return m_timeRange; }

    /**
     * <p>The inclusive time period that the usage data applies to. Possible values
     * are: MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS,
     * for the preceding 30 days.</p>
     */
    inline void SetTimeRange(const TimeRange& value) { m_timeRange = value; }

    /**
     * <p>The inclusive time period that the usage data applies to. Possible values
     * are: MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS,
     * for the preceding 30 days.</p>
     */
    inline void SetTimeRange(TimeRange&& value) { m_timeRange = std::move(value); }

    /**
     * <p>The inclusive time period that the usage data applies to. Possible values
     * are: MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS,
     * for the preceding 30 days.</p>
     */
    inline GetUsageStatisticsResult& WithTimeRange(const TimeRange& value) { SetTimeRange(value); return *this;}

    /**
     * <p>The inclusive time period that the usage data applies to. Possible values
     * are: MONTH_TO_DATE, for the current calendar month to date; and, PAST_30_DAYS,
     * for the preceding 30 days.</p>
     */
    inline GetUsageStatisticsResult& WithTimeRange(TimeRange&& value) { SetTimeRange(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<UsageRecord> m_records;

    TimeRange m_timeRange;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
