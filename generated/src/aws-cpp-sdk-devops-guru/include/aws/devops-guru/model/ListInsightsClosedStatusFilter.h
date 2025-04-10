﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/InsightType.h>
#include <aws/devops-guru/model/EndTimeRange.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Used to filter for insights that have the status <code>CLOSED</code>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListInsightsClosedStatusFilter">AWS
   * API Reference</a></p>
   */
  class ListInsightsClosedStatusFilter
  {
  public:
    AWS_DEVOPSGURU_API ListInsightsClosedStatusFilter() = default;
    AWS_DEVOPSGURU_API ListInsightsClosedStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ListInsightsClosedStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Use to filter for either <code>REACTIVE</code> or <code>PROACTIVE</code>
     * insights. </p>
     */
    inline InsightType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InsightType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListInsightsClosedStatusFilter& WithType(InsightType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A time range used to specify when the behavior of the filtered insights
     * ended. </p>
     */
    inline const EndTimeRange& GetEndTimeRange() const { return m_endTimeRange; }
    inline bool EndTimeRangeHasBeenSet() const { return m_endTimeRangeHasBeenSet; }
    template<typename EndTimeRangeT = EndTimeRange>
    void SetEndTimeRange(EndTimeRangeT&& value) { m_endTimeRangeHasBeenSet = true; m_endTimeRange = std::forward<EndTimeRangeT>(value); }
    template<typename EndTimeRangeT = EndTimeRange>
    ListInsightsClosedStatusFilter& WithEndTimeRange(EndTimeRangeT&& value) { SetEndTimeRange(std::forward<EndTimeRangeT>(value)); return *this;}
    ///@}
  private:

    InsightType m_type{InsightType::NOT_SET};
    bool m_typeHasBeenSet = false;

    EndTimeRange m_endTimeRange;
    bool m_endTimeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
