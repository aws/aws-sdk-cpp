/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/RetentionPeriod.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The configuration to set the retention period of an FSx for ONTAP SnapLock
   * volume. The retention period includes default, maximum, and minimum settings.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-retention.html">Working
   * with the retention period in SnapLock</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnaplockRetentionPeriod">AWS
   * API Reference</a></p>
   */
  class SnaplockRetentionPeriod
  {
  public:
    AWS_FSX_API SnaplockRetentionPeriod();
    AWS_FSX_API SnaplockRetentionPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API SnaplockRetentionPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The retention period assigned to a write once, read many (WORM) file by
     * default if an explicit retention period is not set for an FSx for ONTAP SnapLock
     * volume. The default retention period must be greater than or equal to the
     * minimum retention period and less than or equal to the maximum retention period.
     * </p>
     */
    inline const RetentionPeriod& GetDefaultRetention() const{ return m_defaultRetention; }

    /**
     * <p>The retention period assigned to a write once, read many (WORM) file by
     * default if an explicit retention period is not set for an FSx for ONTAP SnapLock
     * volume. The default retention period must be greater than or equal to the
     * minimum retention period and less than or equal to the maximum retention period.
     * </p>
     */
    inline bool DefaultRetentionHasBeenSet() const { return m_defaultRetentionHasBeenSet; }

    /**
     * <p>The retention period assigned to a write once, read many (WORM) file by
     * default if an explicit retention period is not set for an FSx for ONTAP SnapLock
     * volume. The default retention period must be greater than or equal to the
     * minimum retention period and less than or equal to the maximum retention period.
     * </p>
     */
    inline void SetDefaultRetention(const RetentionPeriod& value) { m_defaultRetentionHasBeenSet = true; m_defaultRetention = value; }

    /**
     * <p>The retention period assigned to a write once, read many (WORM) file by
     * default if an explicit retention period is not set for an FSx for ONTAP SnapLock
     * volume. The default retention period must be greater than or equal to the
     * minimum retention period and less than or equal to the maximum retention period.
     * </p>
     */
    inline void SetDefaultRetention(RetentionPeriod&& value) { m_defaultRetentionHasBeenSet = true; m_defaultRetention = std::move(value); }

    /**
     * <p>The retention period assigned to a write once, read many (WORM) file by
     * default if an explicit retention period is not set for an FSx for ONTAP SnapLock
     * volume. The default retention period must be greater than or equal to the
     * minimum retention period and less than or equal to the maximum retention period.
     * </p>
     */
    inline SnaplockRetentionPeriod& WithDefaultRetention(const RetentionPeriod& value) { SetDefaultRetention(value); return *this;}

    /**
     * <p>The retention period assigned to a write once, read many (WORM) file by
     * default if an explicit retention period is not set for an FSx for ONTAP SnapLock
     * volume. The default retention period must be greater than or equal to the
     * minimum retention period and less than or equal to the maximum retention period.
     * </p>
     */
    inline SnaplockRetentionPeriod& WithDefaultRetention(RetentionPeriod&& value) { SetDefaultRetention(std::move(value)); return *this;}


    /**
     * <p>The shortest retention period that can be assigned to a WORM file on an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline const RetentionPeriod& GetMinimumRetention() const{ return m_minimumRetention; }

    /**
     * <p>The shortest retention period that can be assigned to a WORM file on an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline bool MinimumRetentionHasBeenSet() const { return m_minimumRetentionHasBeenSet; }

    /**
     * <p>The shortest retention period that can be assigned to a WORM file on an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline void SetMinimumRetention(const RetentionPeriod& value) { m_minimumRetentionHasBeenSet = true; m_minimumRetention = value; }

    /**
     * <p>The shortest retention period that can be assigned to a WORM file on an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline void SetMinimumRetention(RetentionPeriod&& value) { m_minimumRetentionHasBeenSet = true; m_minimumRetention = std::move(value); }

    /**
     * <p>The shortest retention period that can be assigned to a WORM file on an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline SnaplockRetentionPeriod& WithMinimumRetention(const RetentionPeriod& value) { SetMinimumRetention(value); return *this;}

    /**
     * <p>The shortest retention period that can be assigned to a WORM file on an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline SnaplockRetentionPeriod& WithMinimumRetention(RetentionPeriod&& value) { SetMinimumRetention(std::move(value)); return *this;}


    /**
     * <p>The longest retention period that can be assigned to a WORM file on an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline const RetentionPeriod& GetMaximumRetention() const{ return m_maximumRetention; }

    /**
     * <p>The longest retention period that can be assigned to a WORM file on an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline bool MaximumRetentionHasBeenSet() const { return m_maximumRetentionHasBeenSet; }

    /**
     * <p>The longest retention period that can be assigned to a WORM file on an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline void SetMaximumRetention(const RetentionPeriod& value) { m_maximumRetentionHasBeenSet = true; m_maximumRetention = value; }

    /**
     * <p>The longest retention period that can be assigned to a WORM file on an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline void SetMaximumRetention(RetentionPeriod&& value) { m_maximumRetentionHasBeenSet = true; m_maximumRetention = std::move(value); }

    /**
     * <p>The longest retention period that can be assigned to a WORM file on an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline SnaplockRetentionPeriod& WithMaximumRetention(const RetentionPeriod& value) { SetMaximumRetention(value); return *this;}

    /**
     * <p>The longest retention period that can be assigned to a WORM file on an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline SnaplockRetentionPeriod& WithMaximumRetention(RetentionPeriod&& value) { SetMaximumRetention(std::move(value)); return *this;}

  private:

    RetentionPeriod m_defaultRetention;
    bool m_defaultRetentionHasBeenSet = false;

    RetentionPeriod m_minimumRetention;
    bool m_minimumRetentionHasBeenSet = false;

    RetentionPeriod m_maximumRetention;
    bool m_maximumRetentionHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
