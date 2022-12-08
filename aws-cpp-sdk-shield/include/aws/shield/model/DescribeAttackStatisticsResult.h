/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/shield/model/TimeRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/AttackStatisticsDataItem.h>
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
namespace Shield
{
namespace Model
{
  class DescribeAttackStatisticsResult
  {
  public:
    AWS_SHIELD_API DescribeAttackStatisticsResult();
    AWS_SHIELD_API DescribeAttackStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SHIELD_API DescribeAttackStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time range of the attack.</p>
     */
    inline const TimeRange& GetTimeRange() const{ return m_timeRange; }

    /**
     * <p>The time range of the attack.</p>
     */
    inline void SetTimeRange(const TimeRange& value) { m_timeRange = value; }

    /**
     * <p>The time range of the attack.</p>
     */
    inline void SetTimeRange(TimeRange&& value) { m_timeRange = std::move(value); }

    /**
     * <p>The time range of the attack.</p>
     */
    inline DescribeAttackStatisticsResult& WithTimeRange(const TimeRange& value) { SetTimeRange(value); return *this;}

    /**
     * <p>The time range of the attack.</p>
     */
    inline DescribeAttackStatisticsResult& WithTimeRange(TimeRange&& value) { SetTimeRange(std::move(value)); return *this;}


    /**
     * <p>The data that describes the attacks detected during the time period.</p>
     */
    inline const Aws::Vector<AttackStatisticsDataItem>& GetDataItems() const{ return m_dataItems; }

    /**
     * <p>The data that describes the attacks detected during the time period.</p>
     */
    inline void SetDataItems(const Aws::Vector<AttackStatisticsDataItem>& value) { m_dataItems = value; }

    /**
     * <p>The data that describes the attacks detected during the time period.</p>
     */
    inline void SetDataItems(Aws::Vector<AttackStatisticsDataItem>&& value) { m_dataItems = std::move(value); }

    /**
     * <p>The data that describes the attacks detected during the time period.</p>
     */
    inline DescribeAttackStatisticsResult& WithDataItems(const Aws::Vector<AttackStatisticsDataItem>& value) { SetDataItems(value); return *this;}

    /**
     * <p>The data that describes the attacks detected during the time period.</p>
     */
    inline DescribeAttackStatisticsResult& WithDataItems(Aws::Vector<AttackStatisticsDataItem>&& value) { SetDataItems(std::move(value)); return *this;}

    /**
     * <p>The data that describes the attacks detected during the time period.</p>
     */
    inline DescribeAttackStatisticsResult& AddDataItems(const AttackStatisticsDataItem& value) { m_dataItems.push_back(value); return *this; }

    /**
     * <p>The data that describes the attacks detected during the time period.</p>
     */
    inline DescribeAttackStatisticsResult& AddDataItems(AttackStatisticsDataItem&& value) { m_dataItems.push_back(std::move(value)); return *this; }

  private:

    TimeRange m_timeRange;

    Aws::Vector<AttackStatisticsDataItem> m_dataItems;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
