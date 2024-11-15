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
    AWS_CONNECTCAMPAIGNSV2_API TimeWindow();
    AWS_CONNECTCAMPAIGNSV2_API TimeWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API TimeWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const OpenHours& GetOpenHours() const{ return m_openHours; }
    inline bool OpenHoursHasBeenSet() const { return m_openHoursHasBeenSet; }
    inline void SetOpenHours(const OpenHours& value) { m_openHoursHasBeenSet = true; m_openHours = value; }
    inline void SetOpenHours(OpenHours&& value) { m_openHoursHasBeenSet = true; m_openHours = std::move(value); }
    inline TimeWindow& WithOpenHours(const OpenHours& value) { SetOpenHours(value); return *this;}
    inline TimeWindow& WithOpenHours(OpenHours&& value) { SetOpenHours(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const RestrictedPeriods& GetRestrictedPeriods() const{ return m_restrictedPeriods; }
    inline bool RestrictedPeriodsHasBeenSet() const { return m_restrictedPeriodsHasBeenSet; }
    inline void SetRestrictedPeriods(const RestrictedPeriods& value) { m_restrictedPeriodsHasBeenSet = true; m_restrictedPeriods = value; }
    inline void SetRestrictedPeriods(RestrictedPeriods&& value) { m_restrictedPeriodsHasBeenSet = true; m_restrictedPeriods = std::move(value); }
    inline TimeWindow& WithRestrictedPeriods(const RestrictedPeriods& value) { SetRestrictedPeriods(value); return *this;}
    inline TimeWindow& WithRestrictedPeriods(RestrictedPeriods&& value) { SetRestrictedPeriods(std::move(value)); return *this;}
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
