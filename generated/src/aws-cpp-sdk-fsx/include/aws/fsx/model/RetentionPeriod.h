/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/RetentionPeriodType.h>
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
   * <p>Specifies the retention period of an FSx for ONTAP SnapLock volume. After it
   * is set, it can't be changed. Files can't be deleted or modified during the
   * retention period. </p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-retention.html">Working
   * with the retention period in SnapLock</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/RetentionPeriod">AWS
   * API Reference</a></p>
   */
  class RetentionPeriod
  {
  public:
    AWS_FSX_API RetentionPeriod();
    AWS_FSX_API RetentionPeriod(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API RetentionPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the type of time for the retention period of an FSx for ONTAP
     * SnapLock volume. Set it to one of the valid types. If you set it to
     * <code>INFINITE</code>, the files are retained forever. If you set it to
     * <code>UNSPECIFIED</code>, the files are retained until you set an explicit
     * retention period. </p>
     */
    inline const RetentionPeriodType& GetType() const{ return m_type; }

    /**
     * <p>Defines the type of time for the retention period of an FSx for ONTAP
     * SnapLock volume. Set it to one of the valid types. If you set it to
     * <code>INFINITE</code>, the files are retained forever. If you set it to
     * <code>UNSPECIFIED</code>, the files are retained until you set an explicit
     * retention period. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Defines the type of time for the retention period of an FSx for ONTAP
     * SnapLock volume. Set it to one of the valid types. If you set it to
     * <code>INFINITE</code>, the files are retained forever. If you set it to
     * <code>UNSPECIFIED</code>, the files are retained until you set an explicit
     * retention period. </p>
     */
    inline void SetType(const RetentionPeriodType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Defines the type of time for the retention period of an FSx for ONTAP
     * SnapLock volume. Set it to one of the valid types. If you set it to
     * <code>INFINITE</code>, the files are retained forever. If you set it to
     * <code>UNSPECIFIED</code>, the files are retained until you set an explicit
     * retention period. </p>
     */
    inline void SetType(RetentionPeriodType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Defines the type of time for the retention period of an FSx for ONTAP
     * SnapLock volume. Set it to one of the valid types. If you set it to
     * <code>INFINITE</code>, the files are retained forever. If you set it to
     * <code>UNSPECIFIED</code>, the files are retained until you set an explicit
     * retention period. </p>
     */
    inline RetentionPeriod& WithType(const RetentionPeriodType& value) { SetType(value); return *this;}

    /**
     * <p>Defines the type of time for the retention period of an FSx for ONTAP
     * SnapLock volume. Set it to one of the valid types. If you set it to
     * <code>INFINITE</code>, the files are retained forever. If you set it to
     * <code>UNSPECIFIED</code>, the files are retained until you set an explicit
     * retention period. </p>
     */
    inline RetentionPeriod& WithType(RetentionPeriodType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Defines the amount of time for the retention period of an FSx for ONTAP
     * SnapLock volume. You can't set a value for <code>INFINITE</code> or
     * <code>UNSPECIFIED</code>. For all other options, the following ranges are valid:
     * </p> <ul> <li> <p> <code>Seconds</code>: 0 - 65,535</p> </li> <li> <p>
     * <code>Minutes</code>: 0 - 65,535</p> </li> <li> <p> <code>Hours</code>: 0 -
     * 24</p> </li> <li> <p> <code>Days</code>: 0 - 365</p> </li> <li> <p>
     * <code>Months</code>: 0 - 12</p> </li> <li> <p> <code>Years</code>: 0 - 100</p>
     * </li> </ul>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>Defines the amount of time for the retention period of an FSx for ONTAP
     * SnapLock volume. You can't set a value for <code>INFINITE</code> or
     * <code>UNSPECIFIED</code>. For all other options, the following ranges are valid:
     * </p> <ul> <li> <p> <code>Seconds</code>: 0 - 65,535</p> </li> <li> <p>
     * <code>Minutes</code>: 0 - 65,535</p> </li> <li> <p> <code>Hours</code>: 0 -
     * 24</p> </li> <li> <p> <code>Days</code>: 0 - 365</p> </li> <li> <p>
     * <code>Months</code>: 0 - 12</p> </li> <li> <p> <code>Years</code>: 0 - 100</p>
     * </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Defines the amount of time for the retention period of an FSx for ONTAP
     * SnapLock volume. You can't set a value for <code>INFINITE</code> or
     * <code>UNSPECIFIED</code>. For all other options, the following ranges are valid:
     * </p> <ul> <li> <p> <code>Seconds</code>: 0 - 65,535</p> </li> <li> <p>
     * <code>Minutes</code>: 0 - 65,535</p> </li> <li> <p> <code>Hours</code>: 0 -
     * 24</p> </li> <li> <p> <code>Days</code>: 0 - 365</p> </li> <li> <p>
     * <code>Months</code>: 0 - 12</p> </li> <li> <p> <code>Years</code>: 0 - 100</p>
     * </li> </ul>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Defines the amount of time for the retention period of an FSx for ONTAP
     * SnapLock volume. You can't set a value for <code>INFINITE</code> or
     * <code>UNSPECIFIED</code>. For all other options, the following ranges are valid:
     * </p> <ul> <li> <p> <code>Seconds</code>: 0 - 65,535</p> </li> <li> <p>
     * <code>Minutes</code>: 0 - 65,535</p> </li> <li> <p> <code>Hours</code>: 0 -
     * 24</p> </li> <li> <p> <code>Days</code>: 0 - 365</p> </li> <li> <p>
     * <code>Months</code>: 0 - 12</p> </li> <li> <p> <code>Years</code>: 0 - 100</p>
     * </li> </ul>
     */
    inline RetentionPeriod& WithValue(int value) { SetValue(value); return *this;}

  private:

    RetentionPeriodType m_type;
    bool m_typeHasBeenSet = false;

    int m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
