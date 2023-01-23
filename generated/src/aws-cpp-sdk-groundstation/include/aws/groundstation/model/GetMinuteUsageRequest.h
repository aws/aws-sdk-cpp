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
    AWS_GROUNDSTATION_API GetMinuteUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMinuteUsage"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The month being requested, with a value of 1-12.</p>
     */
    inline int GetMonth() const{ return m_month; }

    /**
     * <p>The month being requested, with a value of 1-12.</p>
     */
    inline bool MonthHasBeenSet() const { return m_monthHasBeenSet; }

    /**
     * <p>The month being requested, with a value of 1-12.</p>
     */
    inline void SetMonth(int value) { m_monthHasBeenSet = true; m_month = value; }

    /**
     * <p>The month being requested, with a value of 1-12.</p>
     */
    inline GetMinuteUsageRequest& WithMonth(int value) { SetMonth(value); return *this;}


    /**
     * <p>The year being requested, in the format of YYYY.</p>
     */
    inline int GetYear() const{ return m_year; }

    /**
     * <p>The year being requested, in the format of YYYY.</p>
     */
    inline bool YearHasBeenSet() const { return m_yearHasBeenSet; }

    /**
     * <p>The year being requested, in the format of YYYY.</p>
     */
    inline void SetYear(int value) { m_yearHasBeenSet = true; m_year = value; }

    /**
     * <p>The year being requested, in the format of YYYY.</p>
     */
    inline GetMinuteUsageRequest& WithYear(int value) { SetYear(value); return *this;}

  private:

    int m_month;
    bool m_monthHasBeenSet = false;

    int m_year;
    bool m_yearHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
