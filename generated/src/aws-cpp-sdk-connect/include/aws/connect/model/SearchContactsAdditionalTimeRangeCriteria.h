/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SearchContactsTimeRange.h>
#include <aws/connect/model/SearchContactsTimestampCondition.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The criteria of the time range to additionally filter on.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SearchContactsAdditionalTimeRangeCriteria">AWS
   * API Reference</a></p>
   */
  class SearchContactsAdditionalTimeRangeCriteria
  {
  public:
    AWS_CONNECT_API SearchContactsAdditionalTimeRangeCriteria() = default;
    AWS_CONNECT_API SearchContactsAdditionalTimeRangeCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SearchContactsAdditionalTimeRangeCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SearchContactsTimeRange& GetTimeRange() const { return m_timeRange; }
    inline bool TimeRangeHasBeenSet() const { return m_timeRangeHasBeenSet; }
    template<typename TimeRangeT = SearchContactsTimeRange>
    void SetTimeRange(TimeRangeT&& value) { m_timeRangeHasBeenSet = true; m_timeRange = std::forward<TimeRangeT>(value); }
    template<typename TimeRangeT = SearchContactsTimeRange>
    SearchContactsAdditionalTimeRangeCriteria& WithTimeRange(TimeRangeT&& value) { SetTimeRange(std::forward<TimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the timestamp conditions.</p>
     */
    inline const SearchContactsTimestampCondition& GetTimestampCondition() const { return m_timestampCondition; }
    inline bool TimestampConditionHasBeenSet() const { return m_timestampConditionHasBeenSet; }
    template<typename TimestampConditionT = SearchContactsTimestampCondition>
    void SetTimestampCondition(TimestampConditionT&& value) { m_timestampConditionHasBeenSet = true; m_timestampCondition = std::forward<TimestampConditionT>(value); }
    template<typename TimestampConditionT = SearchContactsTimestampCondition>
    SearchContactsAdditionalTimeRangeCriteria& WithTimestampCondition(TimestampConditionT&& value) { SetTimestampCondition(std::forward<TimestampConditionT>(value)); return *this;}
    ///@}
  private:

    SearchContactsTimeRange m_timeRange;
    bool m_timeRangeHasBeenSet = false;

    SearchContactsTimestampCondition m_timestampCondition;
    bool m_timestampConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
