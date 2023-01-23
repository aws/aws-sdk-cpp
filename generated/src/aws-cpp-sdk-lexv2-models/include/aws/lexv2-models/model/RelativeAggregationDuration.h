/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/TimeDimension.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Specifies the time window that utterance statistics are returned for. The
   * time window is always relative to the last time that the that utterances were
   * aggregated. For example, if the <code>ListAggregatedUtterances</code> operation
   * is called at 1600, the time window is set to 1 hour, and the last refresh time
   * was 1530, only utterances made between 1430 and 1530 are returned.</p> <p>You
   * can choose the time window that statistics should be returned for.</p> <ul> <li>
   * <p> <b>Hours</b> - You can request utterance statistics for 1, 3, 6, 12, or 24
   * hour time windows. Statistics are refreshed every half hour for 1 hour time
   * windows, and hourly for the other time windows.</p> </li> <li> <p> <b>Days</b> -
   * You can request utterance statistics for 3 days. Statistics are refreshed every
   * 6 hours.</p> </li> <li> <p> <b>Weeks</b> - You can see statistics for one or two
   * weeks. Statistics are refreshed every 12 hours for one week time windows, and
   * once per day for two week time windows.</p> </li> </ul><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/RelativeAggregationDuration">AWS
   * API Reference</a></p>
   */
  class RelativeAggregationDuration
  {
  public:
    AWS_LEXMODELSV2_API RelativeAggregationDuration();
    AWS_LEXMODELSV2_API RelativeAggregationDuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API RelativeAggregationDuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of time period that the <code>timeValue</code> field represents.
     * </p>
     */
    inline const TimeDimension& GetTimeDimension() const{ return m_timeDimension; }

    /**
     * <p>The type of time period that the <code>timeValue</code> field represents.
     * </p>
     */
    inline bool TimeDimensionHasBeenSet() const { return m_timeDimensionHasBeenSet; }

    /**
     * <p>The type of time period that the <code>timeValue</code> field represents.
     * </p>
     */
    inline void SetTimeDimension(const TimeDimension& value) { m_timeDimensionHasBeenSet = true; m_timeDimension = value; }

    /**
     * <p>The type of time period that the <code>timeValue</code> field represents.
     * </p>
     */
    inline void SetTimeDimension(TimeDimension&& value) { m_timeDimensionHasBeenSet = true; m_timeDimension = std::move(value); }

    /**
     * <p>The type of time period that the <code>timeValue</code> field represents.
     * </p>
     */
    inline RelativeAggregationDuration& WithTimeDimension(const TimeDimension& value) { SetTimeDimension(value); return *this;}

    /**
     * <p>The type of time period that the <code>timeValue</code> field represents.
     * </p>
     */
    inline RelativeAggregationDuration& WithTimeDimension(TimeDimension&& value) { SetTimeDimension(std::move(value)); return *this;}


    /**
     * <p>The period of the time window to gather statistics for. The valid value
     * depends on the setting of the <code>timeDimension</code> field.</p> <ul> <li>
     * <p> <code>Hours</code> - 1/3/6/12/24</p> </li> <li> <p> <code>Days</code> -
     * 3</p> </li> <li> <p> <code>Weeks</code> - 1/2</p> </li> </ul>
     */
    inline int GetTimeValue() const{ return m_timeValue; }

    /**
     * <p>The period of the time window to gather statistics for. The valid value
     * depends on the setting of the <code>timeDimension</code> field.</p> <ul> <li>
     * <p> <code>Hours</code> - 1/3/6/12/24</p> </li> <li> <p> <code>Days</code> -
     * 3</p> </li> <li> <p> <code>Weeks</code> - 1/2</p> </li> </ul>
     */
    inline bool TimeValueHasBeenSet() const { return m_timeValueHasBeenSet; }

    /**
     * <p>The period of the time window to gather statistics for. The valid value
     * depends on the setting of the <code>timeDimension</code> field.</p> <ul> <li>
     * <p> <code>Hours</code> - 1/3/6/12/24</p> </li> <li> <p> <code>Days</code> -
     * 3</p> </li> <li> <p> <code>Weeks</code> - 1/2</p> </li> </ul>
     */
    inline void SetTimeValue(int value) { m_timeValueHasBeenSet = true; m_timeValue = value; }

    /**
     * <p>The period of the time window to gather statistics for. The valid value
     * depends on the setting of the <code>timeDimension</code> field.</p> <ul> <li>
     * <p> <code>Hours</code> - 1/3/6/12/24</p> </li> <li> <p> <code>Days</code> -
     * 3</p> </li> <li> <p> <code>Weeks</code> - 1/2</p> </li> </ul>
     */
    inline RelativeAggregationDuration& WithTimeValue(int value) { SetTimeValue(value); return *this;}

  private:

    TimeDimension m_timeDimension;
    bool m_timeDimensionHasBeenSet = false;

    int m_timeValue;
    bool m_timeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
