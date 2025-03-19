/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connectcampaignsv2/model/DayOfWeek.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaignsv2/model/TimeRange.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Open Hours config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/OpenHours">AWS
   * API Reference</a></p>
   */
  class OpenHours
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API OpenHours() = default;
    AWS_CONNECTCAMPAIGNSV2_API OpenHours(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API OpenHours& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Map<DayOfWeek, Aws::Vector<TimeRange>>& GetDailyHours() const { return m_dailyHours; }
    inline bool DailyHoursHasBeenSet() const { return m_dailyHoursHasBeenSet; }
    template<typename DailyHoursT = Aws::Map<DayOfWeek, Aws::Vector<TimeRange>>>
    void SetDailyHours(DailyHoursT&& value) { m_dailyHoursHasBeenSet = true; m_dailyHours = std::forward<DailyHoursT>(value); }
    template<typename DailyHoursT = Aws::Map<DayOfWeek, Aws::Vector<TimeRange>>>
    OpenHours& WithDailyHours(DailyHoursT&& value) { SetDailyHours(std::forward<DailyHoursT>(value)); return *this;}
    inline OpenHours& AddDailyHours(DayOfWeek key, Aws::Vector<TimeRange> value) {
      m_dailyHoursHasBeenSet = true; m_dailyHours.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::Map<DayOfWeek, Aws::Vector<TimeRange>> m_dailyHours;
    bool m_dailyHoursHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
