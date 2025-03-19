/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class DescribeAccountOverviewRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API DescribeAccountOverviewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccountOverview"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The start of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * after this day. </p>
     */
    inline const Aws::Utils::DateTime& GetFromTime() const { return m_fromTime; }
    inline bool FromTimeHasBeenSet() const { return m_fromTimeHasBeenSet; }
    template<typename FromTimeT = Aws::Utils::DateTime>
    void SetFromTime(FromTimeT&& value) { m_fromTimeHasBeenSet = true; m_fromTime = std::forward<FromTimeT>(value); }
    template<typename FromTimeT = Aws::Utils::DateTime>
    DescribeAccountOverviewRequest& WithFromTime(FromTimeT&& value) { SetFromTime(std::forward<FromTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end of the time range passed in. The start time granularity is at the
     * day level. The floor of the start time is used. Returned information occurred
     * before this day. If this is not specified, then the current day is used. </p>
     */
    inline const Aws::Utils::DateTime& GetToTime() const { return m_toTime; }
    inline bool ToTimeHasBeenSet() const { return m_toTimeHasBeenSet; }
    template<typename ToTimeT = Aws::Utils::DateTime>
    void SetToTime(ToTimeT&& value) { m_toTimeHasBeenSet = true; m_toTime = std::forward<ToTimeT>(value); }
    template<typename ToTimeT = Aws::Utils::DateTime>
    DescribeAccountOverviewRequest& WithToTime(ToTimeT&& value) { SetToTime(std::forward<ToTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_fromTime{};
    bool m_fromTimeHasBeenSet = false;

    Aws::Utils::DateTime m_toTime{};
    bool m_toTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
