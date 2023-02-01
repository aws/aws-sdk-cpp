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
   * <p> <b>[Snapshot and AMI policies only]</b> Specifies a retention rule for
   * snapshots created by snapshot policies, or for AMIs created by AMI policies.</p>
   *  <p>For snapshot policies that have an <a>ArchiveRule</a>, this retention
   * rule applies to standard tier retention. When the retention threshold is met,
   * snapshots are moved from the standard to the archive tier.</p> <p>For snapshot
   * policies that do not have an <b>ArchiveRule</b>, snapshots are permanently
   * deleted when this retention threshold is met.</p>  <p>You can retain
   * snapshots based on either a count or a time interval.</p> <ul> <li> <p>
   * <b>Count-based retention</b> </p> <p>You must specify <b>Count</b>. If you
   * specify an <a>ArchiveRule</a> for the schedule, then you can specify a retention
   * count of <code>0</code> to archive snapshots immediately after creation. If you
   * specify a <a>FastRestoreRule</a>, <a>ShareRule</a>, or a
   * <a>CrossRegionCopyRule</a>, then you must specify a retention count of
   * <code>1</code> or more.</p> </li> <li> <p> <b>Age-based retention</b> </p>
   * <p>You must specify <b>Interval</b> and <b>IntervalUnit</b>. If you specify an
   * <a>ArchiveRule</a> for the schedule, then you can specify a retention interval
   * of <code>0</code> days to archive snapshots immediately after creation. If you
   * specify a <a>FastRestoreRule</a>, <a>ShareRule</a>, or a
   * <a>CrossRegionCopyRule</a>, then you must specify a retention interval of
   * <code>1</code> day or more.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/RetainRule">AWS API
   * Reference</a></p>
   */
  class RetainRule
  {
  public:
    AWS_DLM_API RetainRule();
    AWS_DLM_API RetainRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API RetainRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of snapshots to retain for each volume, up to a maximum of 1000.
     * For example if you want to retain a maximum of three snapshots, specify
     * <code>3</code>. When the fourth snapshot is created, the oldest retained
     * snapshot is deleted, or it is moved to the archive tier if you have specified an
     * <a>ArchiveRule</a>.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of snapshots to retain for each volume, up to a maximum of 1000.
     * For example if you want to retain a maximum of three snapshots, specify
     * <code>3</code>. When the fourth snapshot is created, the oldest retained
     * snapshot is deleted, or it is moved to the archive tier if you have specified an
     * <a>ArchiveRule</a>.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of snapshots to retain for each volume, up to a maximum of 1000.
     * For example if you want to retain a maximum of three snapshots, specify
     * <code>3</code>. When the fourth snapshot is created, the oldest retained
     * snapshot is deleted, or it is moved to the archive tier if you have specified an
     * <a>ArchiveRule</a>.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of snapshots to retain for each volume, up to a maximum of 1000.
     * For example if you want to retain a maximum of three snapshots, specify
     * <code>3</code>. When the fourth snapshot is created, the oldest retained
     * snapshot is deleted, or it is moved to the archive tier if you have specified an
     * <a>ArchiveRule</a>.</p>
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
     * <p>The unit of time for time-based retention. For example, to retain snapshots
     * for 3 months, specify <code>Interval=3</code> and
     * <code>IntervalUnit=MONTHS</code>. Once the snapshot has been retained for 3
     * months, it is deleted, or it is moved to the archive tier if you have specified
     * an <a>ArchiveRule</a>.</p>
     */
    inline const RetentionIntervalUnitValues& GetIntervalUnit() const{ return m_intervalUnit; }

    /**
     * <p>The unit of time for time-based retention. For example, to retain snapshots
     * for 3 months, specify <code>Interval=3</code> and
     * <code>IntervalUnit=MONTHS</code>. Once the snapshot has been retained for 3
     * months, it is deleted, or it is moved to the archive tier if you have specified
     * an <a>ArchiveRule</a>.</p>
     */
    inline bool IntervalUnitHasBeenSet() const { return m_intervalUnitHasBeenSet; }

    /**
     * <p>The unit of time for time-based retention. For example, to retain snapshots
     * for 3 months, specify <code>Interval=3</code> and
     * <code>IntervalUnit=MONTHS</code>. Once the snapshot has been retained for 3
     * months, it is deleted, or it is moved to the archive tier if you have specified
     * an <a>ArchiveRule</a>.</p>
     */
    inline void SetIntervalUnit(const RetentionIntervalUnitValues& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = value; }

    /**
     * <p>The unit of time for time-based retention. For example, to retain snapshots
     * for 3 months, specify <code>Interval=3</code> and
     * <code>IntervalUnit=MONTHS</code>. Once the snapshot has been retained for 3
     * months, it is deleted, or it is moved to the archive tier if you have specified
     * an <a>ArchiveRule</a>.</p>
     */
    inline void SetIntervalUnit(RetentionIntervalUnitValues&& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = std::move(value); }

    /**
     * <p>The unit of time for time-based retention. For example, to retain snapshots
     * for 3 months, specify <code>Interval=3</code> and
     * <code>IntervalUnit=MONTHS</code>. Once the snapshot has been retained for 3
     * months, it is deleted, or it is moved to the archive tier if you have specified
     * an <a>ArchiveRule</a>.</p>
     */
    inline RetainRule& WithIntervalUnit(const RetentionIntervalUnitValues& value) { SetIntervalUnit(value); return *this;}

    /**
     * <p>The unit of time for time-based retention. For example, to retain snapshots
     * for 3 months, specify <code>Interval=3</code> and
     * <code>IntervalUnit=MONTHS</code>. Once the snapshot has been retained for 3
     * months, it is deleted, or it is moved to the archive tier if you have specified
     * an <a>ArchiveRule</a>.</p>
     */
    inline RetainRule& WithIntervalUnit(RetentionIntervalUnitValues&& value) { SetIntervalUnit(std::move(value)); return *this;}

  private:

    int m_count;
    bool m_countHasBeenSet = false;

    int m_interval;
    bool m_intervalHasBeenSet = false;

    RetentionIntervalUnitValues m_intervalUnit;
    bool m_intervalUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
