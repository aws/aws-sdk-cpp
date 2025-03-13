/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/InsightType.h>
#include <aws/devops-guru/model/StartTimeRange.h>
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
   * <p> Used to filter for insights that have any status. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListInsightsAnyStatusFilter">AWS
   * API Reference</a></p>
   */
  class ListInsightsAnyStatusFilter
  {
  public:
    AWS_DEVOPSGURU_API ListInsightsAnyStatusFilter() = default;
    AWS_DEVOPSGURU_API ListInsightsAnyStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API ListInsightsAnyStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Use to filter for either <code>REACTIVE</code> or <code>PROACTIVE</code>
     * insights. </p>
     */
    inline InsightType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InsightType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListInsightsAnyStatusFilter& WithType(InsightType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A time range used to specify when the behavior of the filtered insights
     * started. </p>
     */
    inline const StartTimeRange& GetStartTimeRange() const { return m_startTimeRange; }
    inline bool StartTimeRangeHasBeenSet() const { return m_startTimeRangeHasBeenSet; }
    template<typename StartTimeRangeT = StartTimeRange>
    void SetStartTimeRange(StartTimeRangeT&& value) { m_startTimeRangeHasBeenSet = true; m_startTimeRange = std::forward<StartTimeRangeT>(value); }
    template<typename StartTimeRangeT = StartTimeRange>
    ListInsightsAnyStatusFilter& WithStartTimeRange(StartTimeRangeT&& value) { SetStartTimeRange(std::forward<StartTimeRangeT>(value)); return *this;}
    ///@}
  private:

    InsightType m_type{InsightType::NOT_SET};
    bool m_typeHasBeenSet = false;

    StartTimeRange m_startTimeRange;
    bool m_startTimeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
