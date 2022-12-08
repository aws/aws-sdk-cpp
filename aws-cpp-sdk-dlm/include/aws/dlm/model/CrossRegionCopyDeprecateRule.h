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
   * <p> <b>[AMI policies only]</b> Specifies an AMI deprecation rule for
   * cross-Region AMI copies created by an AMI policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/CrossRegionCopyDeprecateRule">AWS
   * API Reference</a></p>
   */
  class CrossRegionCopyDeprecateRule
  {
  public:
    AWS_DLM_API CrossRegionCopyDeprecateRule();
    AWS_DLM_API CrossRegionCopyDeprecateRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API CrossRegionCopyDeprecateRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The period after which to deprecate the cross-Region AMI copies. The period
     * must be less than or equal to the cross-Region AMI copy retention period, and it
     * can't be greater than 10 years. This is equivalent to 120 months, 520 weeks, or
     * 3650 days.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>The period after which to deprecate the cross-Region AMI copies. The period
     * must be less than or equal to the cross-Region AMI copy retention period, and it
     * can't be greater than 10 years. This is equivalent to 120 months, 520 weeks, or
     * 3650 days.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The period after which to deprecate the cross-Region AMI copies. The period
     * must be less than or equal to the cross-Region AMI copy retention period, and it
     * can't be greater than 10 years. This is equivalent to 120 months, 520 weeks, or
     * 3650 days.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The period after which to deprecate the cross-Region AMI copies. The period
     * must be less than or equal to the cross-Region AMI copy retention period, and it
     * can't be greater than 10 years. This is equivalent to 120 months, 520 weeks, or
     * 3650 days.</p>
     */
    inline CrossRegionCopyDeprecateRule& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The unit of time in which to measure the <b>Interval</b>. For example, to
     * deprecate a cross-Region AMI copy after 3 months, specify
     * <code>Interval=3</code> and <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline const RetentionIntervalUnitValues& GetIntervalUnit() const{ return m_intervalUnit; }

    /**
     * <p>The unit of time in which to measure the <b>Interval</b>. For example, to
     * deprecate a cross-Region AMI copy after 3 months, specify
     * <code>Interval=3</code> and <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline bool IntervalUnitHasBeenSet() const { return m_intervalUnitHasBeenSet; }

    /**
     * <p>The unit of time in which to measure the <b>Interval</b>. For example, to
     * deprecate a cross-Region AMI copy after 3 months, specify
     * <code>Interval=3</code> and <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline void SetIntervalUnit(const RetentionIntervalUnitValues& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = value; }

    /**
     * <p>The unit of time in which to measure the <b>Interval</b>. For example, to
     * deprecate a cross-Region AMI copy after 3 months, specify
     * <code>Interval=3</code> and <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline void SetIntervalUnit(RetentionIntervalUnitValues&& value) { m_intervalUnitHasBeenSet = true; m_intervalUnit = std::move(value); }

    /**
     * <p>The unit of time in which to measure the <b>Interval</b>. For example, to
     * deprecate a cross-Region AMI copy after 3 months, specify
     * <code>Interval=3</code> and <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline CrossRegionCopyDeprecateRule& WithIntervalUnit(const RetentionIntervalUnitValues& value) { SetIntervalUnit(value); return *this;}

    /**
     * <p>The unit of time in which to measure the <b>Interval</b>. For example, to
     * deprecate a cross-Region AMI copy after 3 months, specify
     * <code>Interval=3</code> and <code>IntervalUnit=MONTHS</code>.</p>
     */
    inline CrossRegionCopyDeprecateRule& WithIntervalUnit(RetentionIntervalUnitValues&& value) { SetIntervalUnit(std::move(value)); return *this;}

  private:

    int m_interval;
    bool m_intervalHasBeenSet = false;

    RetentionIntervalUnitValues m_intervalUnit;
    bool m_intervalUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
