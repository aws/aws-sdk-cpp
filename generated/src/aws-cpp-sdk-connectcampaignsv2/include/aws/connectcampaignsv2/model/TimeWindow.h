/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/OpenHours.h>
#include <aws/connectcampaignsv2/model/RestrictedPeriods.h>
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
   * <p>Time window config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/TimeWindow">AWS
   * API Reference</a></p>
   */
  class TimeWindow
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API TimeWindow() = default;
    AWS_CONNECTCAMPAIGNSV2_API TimeWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API TimeWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const OpenHours& GetOpenHours() const { return m_openHours; }
    inline bool OpenHoursHasBeenSet() const { return m_openHoursHasBeenSet; }
    template<typename OpenHoursT = OpenHours>
    void SetOpenHours(OpenHoursT&& value) { m_openHoursHasBeenSet = true; m_openHours = std::forward<OpenHoursT>(value); }
    template<typename OpenHoursT = OpenHours>
    TimeWindow& WithOpenHours(OpenHoursT&& value) { SetOpenHours(std::forward<OpenHoursT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RestrictedPeriods& GetRestrictedPeriods() const { return m_restrictedPeriods; }
    inline bool RestrictedPeriodsHasBeenSet() const { return m_restrictedPeriodsHasBeenSet; }
    template<typename RestrictedPeriodsT = RestrictedPeriods>
    void SetRestrictedPeriods(RestrictedPeriodsT&& value) { m_restrictedPeriodsHasBeenSet = true; m_restrictedPeriods = std::forward<RestrictedPeriodsT>(value); }
    template<typename RestrictedPeriodsT = RestrictedPeriods>
    TimeWindow& WithRestrictedPeriods(RestrictedPeriodsT&& value) { SetRestrictedPeriods(std::forward<RestrictedPeriodsT>(value)); return *this;}
    ///@}
  private:

    OpenHours m_openHours;
    bool m_openHoursHasBeenSet = false;

    RestrictedPeriods m_restrictedPeriods;
    bool m_restrictedPeriodsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
