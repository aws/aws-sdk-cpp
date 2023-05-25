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
   * <p> <b>[Snapshot policies only]</b> Describes the retention rule for archived
   * snapshots. Once the archive retention threshold is met, the snapshots are
   * permanently deleted from the archive tier.</p>  <p>The archive retention
   * rule must retain snapshots in the archive tier for a minimum of 90 days.</p>
   *  <p>For <b>count-based schedules</b>, you must specify <b>Count</b>. For
   * <b>age-based schedules</b>, you must specify <b>Interval</b> and <b>
   * IntervalUnit</b>.</p> <p>For more information about using snapshot archiving,
   * see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-ami-policy.html#dlm-archive">Considerations
   * for snapshot lifecycle policies</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/RetentionArchiveTier">AWS
   * API Reference</a></p>
   */
  class RetentionArchiveTier
  {
  public:
    AWS_DLM_API RetentionArchiveTier();
    AWS_DLM_API RetentionArchiveTier(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API RetentionArchiveTier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of snapshots to retain in the archive storage tier for
     * each volume. The count must ensure that each snapshot remains in the archive
     * tier for at least 90 days. For example, if the schedule creates snapshots every
     * 30 days, you must specify a count of 3 or more to ensure that each snapshot is
     * archived for at least 90 days.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The maximum number of snapshots to retain in the archive storage tier for
     * each volume. The count must ensure that each snapshot remains in the archive
     * tier for at least 90 days. For example, if the schedule creates snapshots every
     * 30 days, you must specify a count of 3 or more to ensure that each snapshot is
     * archived for at least 90 days.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The maximum number of snapshots to retain in the archive storage tier for
     * each volume. The count must ensure that each snapshot remains in the archive
     * tier for at least 90 days. For example, if the schedule creates snapshots every
     * 30 days, you must specify a count of 3 or more to ensure that each snapshot is
     * archived for at least 90 days.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The maximum number of snapshots to retain in the archive storage tier for
     * each volume. The count must ensure that each snapshot remains in the archive
     * tier for at least 90 days. For example, if the schedule creates snapshots every
     * 30 days, you must specify a count of 3 or more to ensure that each snapshot is
     * archived for at least 90 days.</p>
     */
    inline RetentionArchiveTier& WithCount(int value) { SetCount(value); return *this;}


    /**
     * <p>Specifies the period of time to retain snapshots in the archive tier. After
     * this period expires, the snapshot is permanently deleted.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>Specifies the period of time to retain snapshots in the archive tier. After
     * this period expires, the snapshot is permanently deleted.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>Specifies the period of time to retain snapshots in the archive tier. After
     * this period expires, the snapshot is permanently deleted.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>Specifies the period of time to retain snapshots in the archive tier. After
     * this period expires, the snapshot is permanently deleted.</p>
     */
    inline RetentionArchiveTier& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The unit of time in which to measure the <b>Interval</b>. For example, to
     * retain a snapshots in the archive tier for 6 months, specify
     * <code>Interval=6</code> and <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline const RetentionIntervalUnitValues& GetIntervalUnit() const{ return m_intervalUnit; }

    /**
     * <p>The unit of time in which to measure the <b>Interval</b>. For example, to
     * retain a snapshots in the archive tier for 6 months, specify
     * <code>Interval=6</code> and <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline bool IntervalUnitHasBeenSet() const { return m_intervalUnitHasBeenSet; }

    /**
     * <p>The unit of time in which to measure the <b>Interval</b>. For example, to
     * retain a snapshots in the archive tier for 6 months, specify
     * <code>Interval=6</code> and <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline void SetIntervalUnit(const RetentionIntervalUnitValues& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = value; }

    /**
     * <p>The unit of time in which to measure the <b>Interval</b>. For example, to
     * retain a snapshots in the archive tier for 6 months, specify
     * <code>Interval=6</code> and <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline void SetIntervalUnit(RetentionIntervalUnitValues&& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = std::move(value); }

    /**
     * <p>The unit of time in which to measure the <b>Interval</b>. For example, to
     * retain a snapshots in the archive tier for 6 months, specify
     * <code>Interval=6</code> and <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline RetentionArchiveTier& WithIntervalUnit(const RetentionIntervalUnitValues& value) { SetIntervalUnit(value); return *this;}

    /**
     * <p>The unit of time in which to measure the <b>Interval</b>. For example, to
     * retain a snapshots in the archive tier for 6 months, specify
     * <code>Interval=6</code> and <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline RetentionArchiveTier& WithIntervalUnit(RetentionIntervalUnitValues&& value) { SetIntervalUnit(std::move(value)); return *this;}

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
