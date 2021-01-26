/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/RetentionIntervalUnitValues.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p>Specifies the retention rule for a lifecycle policy. You can retain snapshots
   * based on either a count or a time interval.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/RetainRule">AWS API
   * Reference</a></p>
   */
  class AWS_DLM_API RetainRule
  {
  public:
    RetainRule();
    RetainRule(Aws::Utils::Json::JsonView jsonValue);
    RetainRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of snapshots to retain for each volume, up to a maximum of
     * 1000.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of snapshots to retain for each volume, up to a maximum of
     * 1000.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of snapshots to retain for each volume, up to a maximum of
     * 1000.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of snapshots to retain for each volume, up to a maximum of
     * 1000.</p>
     */
    inline RetainRule& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>The amount of time to retain each snapshot. The maximum is 100 years. This is
     * equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>The amount of time to retain each snapshot. The maximum is 100 years. This is
     * equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The amount of time to retain each snapshot. The maximum is 100 years. This is
     * equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The amount of time to retain each snapshot. The maximum is 100 years. This is
     * equivalent to 1200 months, 5200 weeks, or 36500 days.</p>
     */
    inline RetainRule& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The unit of time for time-based retention.</p>
     */
    inline const RetentionIntervalUnitValues& GetIntervalUnit() const{ return m_intervalUnit; }

    /**
     * <p>The unit of time for time-based retention.</p>
     */
    inline bool IntervalUnitHasBeenSet() const { return m_intervalUnitHasBeenSet; }

    /**
     * <p>The unit of time for time-based retention.</p>
     */
    inline void SetIntervalUnit(const RetentionIntervalUnitValues& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = value; }

    /**
     * <p>The unit of time for time-based retention.</p>
     */
    inline void SetIntervalUnit(RetentionIntervalUnitValues&& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = std::move(value); }

    /**
     * <p>The unit of time for time-based retention.</p>
     */
    inline RetainRule& WithIntervalUnit(const RetentionIntervalUnitValues& value) { SetIntervalUnit(value); return *this;}

    /**
     * <p>The unit of time for time-based retention.</p>
     */
    inline RetainRule& WithIntervalUnit(RetentionIntervalUnitValues&& value) { SetIntervalUnit(std::move(value)); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet;

    int m_interval;
    bool m_intervalHasBeenSet;

    RetentionIntervalUnitValues m_intervalUnit;
    bool m_intervalUnitHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
