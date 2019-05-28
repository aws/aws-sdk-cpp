/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GROUNDSTATION_API GetMinuteUsageRequest : public GroundStationRequest
  {
  public:
    GetMinuteUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMinuteUsage"; }

    Aws::String SerializePayload() const override;


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
    bool m_monthHasBeenSet;

    int m_year;
    bool m_yearHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
