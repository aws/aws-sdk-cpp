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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/TimeSeriesServiceStatistics.h>
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
namespace XRay
{
namespace Model
{
  class AWS_XRAY_API GetTimeSeriesServiceStatisticsResult
  {
  public:
    GetTimeSeriesServiceStatisticsResult();
    GetTimeSeriesServiceStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetTimeSeriesServiceStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The collection of statistics.</p>
     */
    inline const Aws::Vector<TimeSeriesServiceStatistics>& GetTimeSeriesServiceStatistics() const{ return m_timeSeriesServiceStatistics; }

    /**
     * <p>The collection of statistics.</p>
     */
    inline void SetTimeSeriesServiceStatistics(const Aws::Vector<TimeSeriesServiceStatistics>& value) { m_timeSeriesServiceStatistics = value; }

    /**
     * <p>The collection of statistics.</p>
     */
    inline void SetTimeSeriesServiceStatistics(Aws::Vector<TimeSeriesServiceStatistics>&& value) { m_timeSeriesServiceStatistics = std::move(value); }

    /**
     * <p>The collection of statistics.</p>
     */
    inline GetTimeSeriesServiceStatisticsResult& WithTimeSeriesServiceStatistics(const Aws::Vector<TimeSeriesServiceStatistics>& value) { SetTimeSeriesServiceStatistics(value); return *this;}

    /**
     * <p>The collection of statistics.</p>
     */
    inline GetTimeSeriesServiceStatisticsResult& WithTimeSeriesServiceStatistics(Aws::Vector<TimeSeriesServiceStatistics>&& value) { SetTimeSeriesServiceStatistics(std::move(value)); return *this;}

    /**
     * <p>The collection of statistics.</p>
     */
    inline GetTimeSeriesServiceStatisticsResult& AddTimeSeriesServiceStatistics(const TimeSeriesServiceStatistics& value) { m_timeSeriesServiceStatistics.push_back(value); return *this; }

    /**
     * <p>The collection of statistics.</p>
     */
    inline GetTimeSeriesServiceStatisticsResult& AddTimeSeriesServiceStatistics(TimeSeriesServiceStatistics&& value) { m_timeSeriesServiceStatistics.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag indicating whether or not a group's filter expression has been
     * consistent, or if a returned aggregation may show statistics from an older
     * version of the group's filter expression.</p>
     */
    inline bool GetContainsOldGroupVersions() const{ return m_containsOldGroupVersions; }

    /**
     * <p>A flag indicating whether or not a group's filter expression has been
     * consistent, or if a returned aggregation may show statistics from an older
     * version of the group's filter expression.</p>
     */
    inline void SetContainsOldGroupVersions(bool value) { m_containsOldGroupVersions = value; }

    /**
     * <p>A flag indicating whether or not a group's filter expression has been
     * consistent, or if a returned aggregation may show statistics from an older
     * version of the group's filter expression.</p>
     */
    inline GetTimeSeriesServiceStatisticsResult& WithContainsOldGroupVersions(bool value) { SetContainsOldGroupVersions(value); return *this;}


    /**
     * <p>Pagination token. Not used.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetTimeSeriesServiceStatisticsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetTimeSeriesServiceStatisticsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetTimeSeriesServiceStatisticsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TimeSeriesServiceStatistics> m_timeSeriesServiceStatistics;

    bool m_containsOldGroupVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
