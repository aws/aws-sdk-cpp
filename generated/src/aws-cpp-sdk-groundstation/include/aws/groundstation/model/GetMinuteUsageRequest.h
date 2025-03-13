/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMinuteUsageRequest">AWS
   * API Reference</a></p>
   */
  class GetMinuteUsageRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API GetMinuteUsageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMinuteUsage"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The month being requested, with a value of 1-12.</p>
     */
    inline int GetMonth() const { return m_month; }
    inline bool MonthHasBeenSet() const { return m_monthHasBeenSet; }
    inline void SetMonth(int value) { m_monthHasBeenSet = true; m_month = value; }
    inline GetMinuteUsageRequest& WithMonth(int value) { SetMonth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The year being requested, in the format of YYYY.</p>
     */
    inline int GetYear() const { return m_year; }
    inline bool YearHasBeenSet() const { return m_yearHasBeenSet; }
    inline void SetYear(int value) { m_yearHasBeenSet = true; m_year = value; }
    inline GetMinuteUsageRequest& WithYear(int value) { SetYear(value); return *this;}
    ///@}
  private:

    int m_month{0};
    bool m_monthHasBeenSet = false;

    int m_year{0};
    bool m_yearHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
