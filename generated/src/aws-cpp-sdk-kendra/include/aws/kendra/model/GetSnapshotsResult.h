/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/TimeRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace kendra
{
namespace Model
{
  class GetSnapshotsResult
  {
  public:
    AWS_KENDRA_API GetSnapshotsResult();
    AWS_KENDRA_API GetSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API GetSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date-time for the beginning and end of the time window for the search
     * metrics data.</p>
     */
    inline const TimeRange& GetSnapShotTimeFilter() const{ return m_snapShotTimeFilter; }

    /**
     * <p>The date-time for the beginning and end of the time window for the search
     * metrics data.</p>
     */
    inline void SetSnapShotTimeFilter(const TimeRange& value) { m_snapShotTimeFilter = value; }

    /**
     * <p>The date-time for the beginning and end of the time window for the search
     * metrics data.</p>
     */
    inline void SetSnapShotTimeFilter(TimeRange&& value) { m_snapShotTimeFilter = std::move(value); }

    /**
     * <p>The date-time for the beginning and end of the time window for the search
     * metrics data.</p>
     */
    inline GetSnapshotsResult& WithSnapShotTimeFilter(const TimeRange& value) { SetSnapShotTimeFilter(value); return *this;}

    /**
     * <p>The date-time for the beginning and end of the time window for the search
     * metrics data.</p>
     */
    inline GetSnapshotsResult& WithSnapShotTimeFilter(TimeRange&& value) { SetSnapShotTimeFilter(std::move(value)); return *this;}


    /**
     * <p>The column headers for the search metrics data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSnapshotsDataHeader() const{ return m_snapshotsDataHeader; }

    /**
     * <p>The column headers for the search metrics data.</p>
     */
    inline void SetSnapshotsDataHeader(const Aws::Vector<Aws::String>& value) { m_snapshotsDataHeader = value; }

    /**
     * <p>The column headers for the search metrics data.</p>
     */
    inline void SetSnapshotsDataHeader(Aws::Vector<Aws::String>&& value) { m_snapshotsDataHeader = std::move(value); }

    /**
     * <p>The column headers for the search metrics data.</p>
     */
    inline GetSnapshotsResult& WithSnapshotsDataHeader(const Aws::Vector<Aws::String>& value) { SetSnapshotsDataHeader(value); return *this;}

    /**
     * <p>The column headers for the search metrics data.</p>
     */
    inline GetSnapshotsResult& WithSnapshotsDataHeader(Aws::Vector<Aws::String>&& value) { SetSnapshotsDataHeader(std::move(value)); return *this;}

    /**
     * <p>The column headers for the search metrics data.</p>
     */
    inline GetSnapshotsResult& AddSnapshotsDataHeader(const Aws::String& value) { m_snapshotsDataHeader.push_back(value); return *this; }

    /**
     * <p>The column headers for the search metrics data.</p>
     */
    inline GetSnapshotsResult& AddSnapshotsDataHeader(Aws::String&& value) { m_snapshotsDataHeader.push_back(std::move(value)); return *this; }

    /**
     * <p>The column headers for the search metrics data.</p>
     */
    inline GetSnapshotsResult& AddSnapshotsDataHeader(const char* value) { m_snapshotsDataHeader.push_back(value); return *this; }


    /**
     * <p>The search metrics data. The data returned depends on the metric type you
     * requested.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetSnapshotsData() const{ return m_snapshotsData; }

    /**
     * <p>The search metrics data. The data returned depends on the metric type you
     * requested.</p>
     */
    inline void SetSnapshotsData(const Aws::Vector<Aws::Vector<Aws::String>>& value) { m_snapshotsData = value; }

    /**
     * <p>The search metrics data. The data returned depends on the metric type you
     * requested.</p>
     */
    inline void SetSnapshotsData(Aws::Vector<Aws::Vector<Aws::String>>&& value) { m_snapshotsData = std::move(value); }

    /**
     * <p>The search metrics data. The data returned depends on the metric type you
     * requested.</p>
     */
    inline GetSnapshotsResult& WithSnapshotsData(const Aws::Vector<Aws::Vector<Aws::String>>& value) { SetSnapshotsData(value); return *this;}

    /**
     * <p>The search metrics data. The data returned depends on the metric type you
     * requested.</p>
     */
    inline GetSnapshotsResult& WithSnapshotsData(Aws::Vector<Aws::Vector<Aws::String>>&& value) { SetSnapshotsData(std::move(value)); return *this;}

    /**
     * <p>The search metrics data. The data returned depends on the metric type you
     * requested.</p>
     */
    inline GetSnapshotsResult& AddSnapshotsData(const Aws::Vector<Aws::String>& value) { m_snapshotsData.push_back(value); return *this; }

    /**
     * <p>The search metrics data. The data returned depends on the metric type you
     * requested.</p>
     */
    inline GetSnapshotsResult& AddSnapshotsData(Aws::Vector<Aws::String>&& value) { m_snapshotsData.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of search metrics data.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of search metrics data.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of search metrics data.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of search metrics data.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of search metrics data.</p>
     */
    inline GetSnapshotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of search metrics data.</p>
     */
    inline GetSnapshotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Kendra returns this token, which you can
     * use in a later request to retrieve the next set of search metrics data.</p>
     */
    inline GetSnapshotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    TimeRange m_snapShotTimeFilter;

    Aws::Vector<Aws::String> m_snapshotsDataHeader;

    Aws::Vector<Aws::Vector<Aws::String>> m_snapshotsData;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
